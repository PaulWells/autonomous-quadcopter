#include "ros/ros.h"
#include "ControllerLogic.h"
#include "ardrone_control/ControlData.h"
#include "std_msgs/Empty.h"
#include <cmath>

ControllerLogic::ControllerLogic(const ros::Publisher& twist_pub, const ros::Publisher& takeoff_pub, const ros::Publisher& land_pub)
{
    this->twist_pub = twist_pub;
    this->takeoff_pub = takeoff_pub;
    this->land_pub = land_pub;
    this->state = ON_GROUND;
    this->last_command_time = 0;
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

void ControllerLogic::respond(const ardrone_control::ControlData data)
{
    // Place holder logic

    double time = data.distances.header.stamp.toSec();
    double elapsed_time = time - last_command_time; 

    std_msgs::Empty msg;
    switch(state)
    {
        case ON_GROUND:
            takeoff_pub.publish(msg);
            state = TAKING_OFF;
            last_command_time = time;
            break;
        case TAKING_OFF:
            if(abs(data.vz) < 0.2 && elapsed_time > 0) 
            {
                state = HOVERING;
            }
            break;
        case HOVERING:
            land_pub.publish(msg);
            state = LANDING;
            last_command_time = time;
            break;
        case LANDING:
            if(abs(data.vz) <0.2 && elapsed_time > 0)
            {
                state = ON_GROUND;
            }
            break;
    }

    return;
}
