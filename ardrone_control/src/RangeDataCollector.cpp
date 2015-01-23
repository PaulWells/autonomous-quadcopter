#include "RangeDataCollector.h"
#include "ros/ros.h"
#include "ardrone_control/Distances.h"
#include "sensor_msgs/Range.h"

RangeDataCollector::RangeDataCollector(const ros::Publisher& pub)
{
    this->pub = pub;
}

void RangeDataCollector::rangeFrontLeftCallback(const sensor_msgs::Range dist)
{
    combined_dist.front_left_sensor = dist.range;
    combined_dist.header = dist.header;
    front_left_present = true;
    sendDataIfReady();
}

void RangeDataCollector::rangeFrontRightCallback(const sensor_msgs::Range dist)
{
    combined_dist.front_right_sensor = dist.range;
    combined_dist.header = dist.header;
    front_right_present = true;
    sendDataIfReady();
}

void RangeDataCollector::rangeFrontCallback(const sensor_msgs::Range dist)
{
    combined_dist.front_sensor = dist.range;
    combined_dist.header = dist.header;
    front_present = true;
    sendDataIfReady();
}



void RangeDataCollector::sendDataIfReady()
{
    if(front_left_present && front_right_present && front_present)
    {
        pub.publish(combined_dist);
        front_left_present = false;
        front_right_present = false;
        front_present = false;
    }
}

