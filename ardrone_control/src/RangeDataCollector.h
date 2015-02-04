#include "ros/ros.h"
#include "ardrone_control/Distances.h"
#include "sensor_msgs/Range.h"

class RangeDataCollector{
    
    enum Filter {NONE, MEAN, MEDIAN}; 
    
    public:
    RangeDataCollector(const ros::Publisher& pub);
    void rangeFrontLeftCallback(const sensor_msgs::Range dist);
    void rangeFrontRightCallback(const sensor_msgs::Range dist);
    void rangeFrontCallback(const sensor_msgs::Range dist);
    void sendDataIfReady();
 
    private:
    ardrone_control::Distances combined_dist;
    double rangeCallback(const sensor_msgs::Range dist, int& count, double history[]);
    void clearHistories();
    void clearHistory(double history[]);
    double smooth(double history[]);
    double meanFilter(double history[]);
    double medianFilter(double history[]);
    Filter filter;
    double front_left_history[5];
    double front_right_history[5];
    double front_history[5];
    int history_size;
    bool front_present;
    bool front_left_present;
    bool front_right_present;
    int num_distances_front_left;
    int num_distances_front_right;
    int num_distances_front;
    ros::Publisher pub;

};
