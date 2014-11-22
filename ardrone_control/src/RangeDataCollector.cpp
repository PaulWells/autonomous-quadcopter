#include "RangeDataCollector.h"
#include "ros/ros.h"
#include "ardrone_control/Distances.h"
#include "sensor_msgs/Range.h"

RangeDataCollector::RangeDataCollector(const ros::Publisher& pub)
{
    this->pub = pub;
}

void RangeDataCollector::rangeFrontCallback(const sensor_msgs::Range dist)
{
    combined_dist.forward_sensor = dist.range;
    combined_dist.header = dist.header;
    front_present = true;
    sendDataIfReady();
}

void RangeDataCollector::rangeSideCallback(const sensor_msgs::Range dist)
{
    combined_dist.right_sensor = dist.range;
    combined_dist.header = dist.header;
    side_present = true;
    sendDataIfReady();
}



void RangeDataCollector::sendDataIfReady()
{
    if(front_present && side_present)
    {
        pub.publish(combined_dist);
        front_present = false;
        side_present = false;
    }
}

