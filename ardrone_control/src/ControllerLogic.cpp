#include "ros/ros.h"
#include "ControllerLogic.h"
#include "ardrone_control/ControlData.h"
#include "std_msgs/Empty.h"
#include <geometry_msgs/Twist.h>
#include <cmath>
#include <ros/console.h>

ControllerLogic::ControllerLogic(const ros::Publisher& twist_pub, const ros::Publisher& takeoff_pub, const ros::Publisher& land_pub)
{
    this->twist_pub = twist_pub;
    this->takeoff_pub = takeoff_pub;
    this->land_pub = land_pub;
    this->state = ON_GROUND;
    this->kp_approach_wall = 0.06;
    this->kd_approach_wall = 0.02;
    this->kp_tracking_speed = 0.0;
    this->kp_wall_distance = 0.06;
    this->kp_angular = 0.1;
    this->desired_wall_distance_front = 0.8; 
    this->desired_wall_distance_side = 0.4;
    this->wall_distance_tolerance = 0.01;
    this->front_sensor_angle = 90;
    this->distance_history_size = 5;
    for(int i = 0; i < this->distance_history_size; i++){
        this->distance_history_front_left[i] = 0;
        this->distance_history_front_right[i] = 0;
        this->distance_history_front[i] = 0;
    }
    this->iteration_number = 0;
    this->last_approach_wall_error = 1.54 - this->desired_wall_distance_front;
}

void ControllerLogic::update(ardrone_control::ControlData data)
{
    this->iteration_number++;
    //smoothDistances(data);
    respond(data);
}

double ControllerLogic::getForwardDistance(double sensor_distance)
{
    return sensor_distance * cos(this->front_sensor_angle/2 * M_PI / 180);
}

geometry_msgs::Twist ControllerLogic::addLinearX(geometry_msgs::Twist msg, const ardrone_control::ControlData data, double kp)
{
    double wall_distance = data.distances.front_sensor;
    msg.linear.x = (wall_distance - this->desired_wall_distance_front)*kp;
    return msg;
}

geometry_msgs::Twist ControllerLogic::addPDX(geometry_msgs::Twist msg, const ardrone_control::ControlData data, double kp, double kd)
{
    double wall_distance = data.distances.front_sensor;
    double error = (wall_distance - this->desired_wall_distance_front);
    double proportional =  error*kp;
    double derivative = (this->last_approach_wall_error - error)*kd;
    msg.linear.x = proportional + derivative;
    this->last_approach_wall_error = error;
    return msg;
}

geometry_msgs::Twist ControllerLogic::addLinearY(geometry_msgs::Twist msg, const ardrone_control::ControlData data)
{
    //double wall_distance = data.distances.side_sensor;
    //msg.linear.y = (wall_distance - this->desired_wall_distance_side)* this->kp_tracking_speed;
    msg.linear.y = 0;
    return msg;
}

geometry_msgs::Twist ControllerLogic::addAngularZ(geometry_msgs::Twist msg, const ardrone_control::ControlData data)
{
   double front_left_sensor_distance = data.distances.front_left_sensor;
   double front_right_sensor_distance = data.distances.front_right_sensor;

   msg.angular.z = -1 * (front_left_sensor_distance - front_right_sensor_distance) * this->kp_angular;
   return msg; 
}

void ControllerLogic::smoothDistances(ardrone_control::ControlData& data)
{
    data.distances.front_left_sensor = smooth(data.distances.front_left_sensor, this->distance_history_front_left);
    data.distances.front_right_sensor = smooth(data.distances.front_right_sensor, this->distance_history_front_right);
    data.distances.front_sensor = smooth(data.distances.front_sensor, this->distance_history_front);
}

// Assumes the number of items in history is odd
// Finds median of the distances in the history and updates the history
double ControllerLogic::smooth(double distance, double history[])
{
    // Wait for history to fill up first
    if(this->iteration_number < this->distance_history_size)
    {
        return distance;
    }
    
    int current_index = this->iteration_number % this->distance_history_size;
    history[current_index] = distance;
    
    for(int i = 0; i < this->distance_history_size; i++)
    {
        int num_above = 0;
        int num_below = 0;
        int num_equal = 0;
        double current_distance = history[i];
        for(int j=0; j < this->distance_history_size; j++)
        {
            if(history[j] < current_distance)
            {
                num_below++;
            }
            else if(history[j] > current_distance)
            {
                num_above++;
            }
            else if(history[j] == current_distance && j != i)
            {
                num_equal++;
            }
        }
        
        // Condition for if current distance is the median
        if(abs(num_above - num_below) <= num_equal)
        {       
            for(int i = 0; i < this->distance_history_size; i++)
            {
                ROS_INFO("item at %d: %f", i, history[i]);
            }
            ROS_INFO("median is %f", current_distance);  
            return current_distance; 
        }
    }
    ROS_INFO("NO MEDIAN WAS CHOSEN!!!!");
}    

void ControllerLogic::respond(const ardrone_control::ControlData& data)
{

    ros::Time current_time = data.header.stamp;
    ros::Duration elapsed_time = current_time - start_time; 
    std_msgs::Empty empty_msg;
    geometry_msgs::Twist twist_msg;
    double wall_distance;

    switch(state)
    {
        case ON_GROUND:
        {
						ROS_INFO("Taking off");
            takeoff_pub.publish(empty_msg);
            state = TAKING_OFF;
            start_time = current_time;
            break;
        }
        case TAKING_OFF:
        {
						ROS_INFO("Time is %f", elapsed_time.toSec());
            if(elapsed_time.toSec() > 5) 
            {
                state = HOVERING;
                ROS_INFO("state equals HOVERING");
            }
            break;
        }
        case HOVERING:
        {
            state = APPROACHING_WALL;
            ROS_INFO("state equals APPROACHING_WALL");
            break;
        }
        case APPROACHING_WALL:
        {
            wall_distance = data.distances.front_sensor;
            twist_msg = addPDX(twist_msg,data, this->kp_approach_wall, this->kd_approach_wall);
            twist_pub.publish(twist_msg);
            ROS_INFO("wall distance %f, desired wall distance: %f",wall_distance,desired_wall_distance_front);
						//ROS_INFO("right sensor %f", data.distances.front_right_sensor);
						//ROS_INFO("left sensor %f", data.distances.front_left_sensor);
            //ROS_INFO("wall difference %f", fabs(wall_distance - desired_wall_distance_front));
            if(wall_distance - desired_wall_distance_front < wall_distance_tolerance)
            {
                state = WALL_TRACKING;
                ROS_INFO("state equals WALL_TRACKING");
            }
            break;
        }
        case WALL_TRACKING:
        {
						land_pub.publish(empty_msg);
            twist_msg = addLinearX(twist_msg, data, this->kp_wall_distance);
            twist_msg = addLinearY(twist_msg, data);
            twist_msg = addAngularZ(twist_msg, data);
            twist_pub.publish(twist_msg);

            break;
        }
    }

    return;
}
