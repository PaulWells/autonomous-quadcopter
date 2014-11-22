#include "ros/ros.h"
#include "ardrone_control/Distances.h"
#include "sensor_msgs/Range.h"

bool front_present = false;
bool side_present = false;
ardrone_control::Distances combined_dist;
ros::Publisher pub; 

void sendDataIfReady()
{
    if(front_present && side_present)
    {
        pub.publish(combined_dist);
        front_present = false;
        side_present = false;
    }
}

void rangeFrontCallback(const sensor_msgs::Range dist)
{
    combined_dist.forward_sensor = dist.range;
    combined_dist.header = dist.header;
    front_present = true;
    sendDataIfReady();
}

void rangeSideCallback(const sensor_msgs::Range dist)
{
    combined_dist.right_sensor = dist.range;
    combined_dist.header = dist.header;
    side_present = true;
    sendDataIfReady();
}


int main(int argc, char **argv)
{
    ros::init(argc, argv, "distance_rerouter");
    ros::NodeHandle n;
    ros::Subscriber front_sub = n.subscribe("/range_front", 10, rangeFrontCallback);
    ros::Subscriber side_sub = n.subscribe("/range_side", 10, rangeSideCallback);
    pub = n.advertise<ardrone_control::Distances>("/xbee/proximity_data",10);
    ros::Rate loop_rate(10); //arbitrary loop rate
    
    ros::spin();
    return 0;
}
