#include "ros/ros.h"
#include "ardrone_control/Distances.h"
#include "ardrone_autonomy/Navdata.h"
#include "ardrone_control/ControlData.h"
#include "ControlDataCollector.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "control_data_synchronizer");
    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<ardrone_control::ControlData>("/ardrone_control/data",10);
    
    ControlDataCollector collector(pub);
    ros::Subscriber range_data_sub = n.subscribe("/xbee/proximity_data", 10, &ControlDataCollector::rangeDataCallback, &collector);
    ros::Subscriber navdata_sub = n.subscribe("/ardrone/navdata", 10, &ControlDataCollector::navDataCallback, &collector);
    ros::Rate loop_rate(5); 
    while(ros::ok())
    {
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}
