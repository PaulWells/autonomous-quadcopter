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
  
  Serial.println("ey");
  populateVoltageLookup();
  Serial.println("oy");
}

void loop()
{
  distances.front_right_sensor = assignDistance(analogRead(A4));
  distances.front_left_sensor = assignDistance(analogRead(A5));
  distances.front_sensor = assignDistance(analogRead(A3));
 
  Serial.println("hi");
 
  distance_pub.publish( &distances );
  
  nh.spinOnce();
  delay(15);
}

float assignDistance(int voltage){
    voltage = thresh(voltage);
    return voltageDistanceMap[voltage];
}

int thresh(int voltage){
  if(voltage > 407)
    return 407;
  else if (voltage < 75){
    return 75;
  } 
}

float analogToDistance(float analog){
  float volts = 5 * analog / 1024;
  float distance = (-40.557 * 1.2 *volts + 154.57)/100;
  if(distance < 0.15){
    return 0.15;  
  } else if(distance > 1.5){
    return 1.5;
  } else{
    return distance; 
  }
}

void populateVoltageLookup(){
  int voltages[11] = {407,294,211,175,145,121,113,91,81,79,75};
  float distances[11] = {1.68, 1.54,1.40, 1.26, 1.12, 0.98, 0.84, 0.70, 0.56, 0.42, 0.28};
  Serial.println("a");
  for(int i = 10; i >0; i--){
    int v1 = voltages[i];
    int v2 = voltages[i-1];
    float d1 = distances[i];
    float d2 = distances[i-1];
    
    voltageDistanceMap[v1] = d1;
    int x = v1;
    float increment = (d2 - d1)/(v2 - v1);
    float increase = increment;
    while (x < v2){
      x++;
      voltageDistanceMap[x] = d1 + increase;
      increase = increase + increment;
    }
    voltageDistanceMap[v2] = d2;
  }
}

