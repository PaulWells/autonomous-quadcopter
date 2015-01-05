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
    this->last_command_time = 0;
    this->kp_linear = 0.5;
    this->kp_angular = 0.05;
    this->desired_wall_distance =0.9; 
    this->wall_distance_tolerance = 0.2;
    this->turn_settling_time = 1.0;
}

void ControllerLogic::update(const ardrone_control::ControlData data)
{
    update_state(data);
    respond(data);
}

void ControllerLogic::update_state(const ardrone_control::ControlData data)
{
    return; //Placeholder
}

geometry_msgs::Twist ControllerLogic::addLinearX(geometry_msgs::Twist msg, const ardrone_control::ControlData data)
{
    double wall_distance = data.distances.forward_sensor;
    msg.linear.x = (wall_distance - this->desired_wall_distance)*this->kp_linear;
    return msg;
}

geometry_msgs::Twist ControllerLogic::addLinearY(geometry_msgs::Twist msg, const ardrone_control::ControlData data)
{
    double wall_distance = data.distances.right_sensor;
    msg.linear.y = (wall_distance - this->desired_wall_distance)* this->kp_linear;
    return msg;
}

geometry_msgs::Twist ControllerLogic::addAngularZ(geometry_msgs::Twist msg, double turn_distance)
{
   msg.angular.z = -1 * (turn_distance - 90) * this->kp_angular;
   return msg; 
}
    

void ControllerLogic::respond(const ardrone_control::ControlData data)
{

    double time = data.distances.header.stamp.toSec();
    double elapsed_time = time - last_command_time; 
    std_msgs::Empty empty_msg;
    geometry_msgs::Twist twist_msg;
    double wall_distance;
    switch(state)
    {
        case ON_GROUND:
        {
            takeoff_pub.publish(empty_msg);
            state = TAKING_OFF;
            last_command_time = time;
            break;
        }
        case TAKING_OFF:
        {
            if(fabs(data.vz) < 0.2 && elapsed_time > 0) 
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
            last_command_time = time;
            break;
        }
        case APPROACHING_WALL:
        {
            wall_distance = data.distances.forward_sensor;
            twist_msg = addLinearX(twist_msg,data);
            twist_pub.publish(twist_msg);
            ROS_INFO("wall distance %f, desired wall distance: %f",wall_distance,desired_wall_distance);
            ROS_INFO("wall difference %f", fabs(wall_distance - desired_wall_distance));
            if(fabs(wall_distance - desired_wall_distance) < wall_distance_tolerance)
            {
                state = WALL_TRACKING;
                ROS_INFO("state equals WALL_TRACKING");
            }
            break;
        }
        case WALL_TRACKING:
        {
            wall_distance = data.distances.right_sensor;
            twist_msg = addLinearX(twist_msg, data);
            twist_msg = addLinearY(twist_msg, data);
            twist_pub.publish(twist_msg);

            if(fabs(wall_distance - desired_wall_distance) < wall_distance_tolerance)
            {
                state = AT_CORNER;
                ROS_INFO("state equals AT_CORNER");
            }

            break;
        }
        case AT_CORNER:
        {
            twist_msg.linear.x = 0;
            twist_msg.linear.y = 0;
            twist_pub.publish(twist_msg);
            state = TURNING;
            ROS_INFO("state equals TURNING");
            this->starting_rotZ = data.rotZ;
            break;
        }
        case TURNING:
        {
            double turn_distance = fabs(this->starting_rotZ - data.rotZ);
            ROS_INFO("turn_distance: %f", turn_distance);
            if(turn_distance >= 88) 
            {
                state = TURN_SETTLING;
                this->finish_turn_time = time;
                ROS_INFO("state equals TURN_SETTLING");
            }
            else
            {
                twist_msg = addAngularZ(twist_msg,turn_distance);
            }
            twist_pub.publish(twist_msg);
            break;
        }
        case TURN_SETTLING:
        {
            double turn_distance = fabs(this->starting_rotZ - data.rotZ);
            if(fabs(time - this->finish_turn_time) < this->turn_settling_time)
            {
                ROS_INFO("time passed %f", fabs(time - this->finish_turn_time));
                twist_msg = addAngularZ(twist_msg, turn_distance);
            }
            else
            {
                twist_msg.angular.z = 0;
                state = WALL_TRACKING;
                ROS_INFO("state equals WALL_TRACKING");
            }
            twist_pub.publish(twist_msg);
        }    
        case LANDING:
        {
            if(fabs(data.vz) <0.2 && elapsed_time > 0)
            {
                state = ON_GROUND;
            }
            break;
        }
    }

    return;
}
