#include "ros/ros.h"
#include "ardrone_control/Distances.h"
#include "sensor_msgs/Range.h"

class RangeDataCollector{
    
    public:
    RangeDataCollector(const ros::Publisher& pub);
    void rangeFrontCallback(const sensor_msgs::Range dist);
    void rangeSideCallback(const sensor_msgs::Range dist);
    void sendDataIfReady();
 
    private:
    ardrone_control::Distances combined_dist;
    bool side_present;
    bool front_present;
    ros::Publisher pub;

};
