#include <ros.h>
#include <ardrone_control/Distances.h>

ros::NodeHandle nh;

ardrone_control::Distances distances;
ros::Publisher distance_pub("xbee/proximity_data", &distances);
float voltageDistanceMap[407];

void setup()
{
  Serial.begin(9600);

  nh.initNode();
  nh.advertise(distance_pub);
}

void loop()
{
  distances.front_right_sensor = analogToDistance(analogRead(A4));
  distances.front_left_sensor = analogToDistance(analogRead(A5));
  distances.front_sensor = analogToDistance(analogRead(A3));
 
  distance_pub.publish( &distances );
  
  nh.spinOnce();
  delay(30);
}

float analogToDistance(float analog){
  if(analog > 407){
    return 0.2;
  } else if(analog > 294){
    return 0.28 - (analog-294)*0.001;
  } else if(analog > 211){
    return 0.42 - (analog-211)*0.002;
  } else if(analog > 175){
    return 0.56 - (analog-175)*0.004;
  } else if(analog > 145){
    return 0.7 - (analog-145)*0.005;
  } else if(analog > 121){
    return 0.84 - (analog-121)*0.006;
  } else if(analog > 113){
    return 0.98 - (analog-113)*0.018;
  } else if(analog > 91){
    return 1.12 - (analog-91)*0.006;
  } else if(analog > 81){
    return 1.26 - (analog-81)*0.014;
  } else if(analog > 79){
    return 1.4 - (analog-79)*0.070;
  } else if(analog > 75){
    return 1.54 - (analog-75)*0.035;
  } else {
    return 1.54; 
  }

//407	0.2	
//294	0.28	-0.001
//211	0.42	-0.002
//175	0.56	-0.004
//145	0.7	-0.005
//121	0.84	-0.006
//113	0.98	-0.018
//91	1.12	-0.006
//81	1.26	-0.014
//79	1.4	-0.070
//75	1.54	-0.035
//70	1.68	-0.028
}



