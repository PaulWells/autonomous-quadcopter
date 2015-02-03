#include "ros/ros.h"
#include "ardrone_control/ControlData.h"
#include "geometry_msgs/Twist.h"
#include "std_msgs/Empty.h"
#include "ControllerLogic.h"
#include <ros/console.h>

int main(int argc, char **argv)
{
    ROS_INFO("started controller");
    ros::init(argc, argv, "controller");
    ros::NodeHandle n;
    ros::Publisher twist_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel",10);
    ros::Publisher takeoff_pub = n.advertise<std_msgs::Empty>("ardrone/takeoff",10);
    ros::Publisher land_pub = n.advertise<std_msgs::Empty>("ardrone/land",10);
    ControllerLogic control(twist_pub,takeoff_pub,land_pub);
    ros::Subscriber sub = n.subscribe("/ardrone_control/data", 10, &ControllerLogic::update, &control);
    ros::Rate loop_rate(10);

    ros::spin();
    return 0;
}

