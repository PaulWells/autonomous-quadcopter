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
    this->kp_approach_wall = 1.2; 
    this->kd_approach_wall = 0.22;
    this->kp_tracking_speed = 0.22; //0.04 for simple corner room
    this->kp_wall_distance = 0.5;
    this->kd_wall_distance = 0.22;
    this->kp_angular = 1.5;
    this->desired_wall_distance_front = 1.2; 
    this->desired_wall_distance_side = 0.4;
    this->wall_distance_tolerance = 0.01;
    this->last_approach_wall_error = 1.54 - this->desired_wall_distance_front;
}

void ControllerLogic::update(ardrone_control::ControlData data)
{
    respond(data);
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
    double derivative = (error - this->last_approach_wall_error)*kd;
		
		msg.linear.x = proportional + derivative;			
    
    this->last_approach_wall_error = error;
    return msg;
}

geometry_msgs::Twist ControllerLogic::addLinearY(geometry_msgs::Twist msg, const ardrone_control::ControlData data)
{
    //double wall_distance = data.distances.side_sensor;
    //msg.linear.y = (wall_distance - this->desired_wall_distance_side)* this->kp_tracking_speed;
    msg.linear.y = 0.5;
    return msg;
}

geometry_msgs::Twist ControllerLogic::addAngularZ(geometry_msgs::Twist msg, const ardrone_control::ControlData data)
{
   double front_left_sensor_distance = data.distances.front_left_sensor;
   double front_right_sensor_distance = data.distances.front_right_sensor;

   msg.angular.z = -1 * (front_left_sensor_distance - front_right_sensor_distance) * this->kp_angular;
   return msg; 
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
            if(data.state == 3 || data.state == 7) 
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
            twist_msg = addPDX(twist_msg, data, this->kp_wall_distance, this->kd_approach_wall);
            twist_msg = addLinearY(twist_msg, data);
            twist_msg = addAngularZ(twist_msg, data);
            twist_pub.publish(twist_msg);

            break;
        }
    }

    return;
}
