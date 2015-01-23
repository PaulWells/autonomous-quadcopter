#include "ros/ros.h"
#include "ardrone_control/Distances.h"
#include "sensor_msgs/Range.h"
#include "RangeDataCollector.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "distance_rerouter");
    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<ardrone_control::Distances>("/xbee/proximity_data",10);
    
    RangeDataCollector collector(pub);
    ros::Subscriber front_left_sub = n.subscribe("/range_front_left", 10, &RangeDataCollector::rangeFrontLeftCallback, &collector);
    ros::Subscriber front_right_sub = n.subscribe("/range_front_right", 10, &RangeDataCollector::rangeFrontRightCallback, &collector);
    ros::Subscriber front_sub = n.subscribe("/range_front", 10, &RangeDataCollector::rangeFrontCallback, &collector);
    ros::Rate loop_rate(10); //arbitrary loop rate
    
    ros::spin();
    return 0;
}
