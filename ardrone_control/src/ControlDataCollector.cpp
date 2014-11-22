#include "ControlDataCollector.h"
#include "ros/ros.h"
#include "ardrone_control/Distances.h"
#include "ardrone_control/ControlData.h"
#include "ardrone_autonomy/Navdata.h"
#include "ros/console.h"

ControlDataCollector::ControlDataCollector(const ros::Publisher& pub)
{
    this->pub = pub;
    ROS_DEBUG("class created");
}

void ControlDataCollector::rangeDataCallback(const ardrone_control::Distances dist)
{
    combined_data.distances = dist;
    range_present = true;
    sendDataIfReady();
}

void ControlDataCollector::navDataCallback(const ardrone_autonomy::Navdata navdata)
{
    combined_data.batteryPercent = navdata.batteryPercent;
    combined_data.state = navdata.state;
    combined_data.magX = navdata.magX;
    combined_data.magY = navdata.magY;
    combined_data.magZ = navdata.magZ;
    combined_data.rotX = navdata.rotX;
    combined_data.rotY = navdata.rotY;
    combined_data.rotZ = navdata.rotZ;
    combined_data.altd = navdata.altd;
    combined_data.vx = navdata.vx;
    combined_data.vy = navdata.vy;
    combined_data.vz = navdata.vz;
    combined_data.ax = navdata.ax;
    combined_data.ay = navdata.ay;
    combined_data.az = navdata.az;
    combined_data.tm = navdata.tm;
    
    navdata_present = true;
    sendDataIfReady();
}

void ControlDataCollector::sendDataIfReady()
{
    if(range_present && navdata_present)
    {
        pub.publish(combined_data);
        range_present = false;
        navdata_present = false;
    }
}

