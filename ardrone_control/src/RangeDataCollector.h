#include "ros/ros.h"
#include "ardrone_control/Distances.h"
#include "sensor_msgs/Range.h"

class RangeDataCollector{
    
    public:
    RangeDataCollector(const ros::Publisher& pub);
    void rangeFrontLeftCallback(const sensor_msgs::Range dist);
    void rangeFrontRightCallback(const sensor_msgs::Range dist);
    void rangeFrontCallback(const sensor_msgs::Range dist);
    void sendDataIfReady();
 
    private:
    ardrone_control::Distances combined_dist;
    bool front_present;
    bool front_left_present;
    bool front_right_present;
    ros::Publisher pub;

};
