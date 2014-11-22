#include "ros/ros.h"
#include "ardrone_control/Distances.h"
#include "ardrone_control/ControlData.h"
#include "ardrone_autonomy/Navdata.h"

class ControlDataCollector{
    
    public:
    ControlDataCollector(const ros::Publisher& pub);
    void rangeDataCallback(const ardrone_control::Distances dist);
    void navDataCallback(const ardrone_autonomy::Navdata dist);
    void sendDataIfReady();
 
    private:
    ardrone_control::ControlData combined_data;
    bool range_present;
    bool navdata_present;
    ros::Publisher pub;

};
