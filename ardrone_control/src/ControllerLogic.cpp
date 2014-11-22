#include "ros/ros.h"
#include "ControllerLogic.h"
#include "ardrone_control/ControlData.h"
#include "std_msgs/Empty.h"

ControllerLogic::ControllerLogic(const ros::Publisher& twist_pub, const ros::Publisher& takeoff_pub, const ros::Publisher& land_pub)
{
    this->twist_pub = twist_pub;
    this->takeoff_pub = takeoff_pub;
    this->land_pub = land_pub;
    this->state = ON_GROUND;

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
    if(state == ON_GROUND)
    {
        std_msgs::Empty msg;
        takeoff_pub.publish(msg);
        state = TAKING_OFF;
    }

    return;

}
