#ifndef _ROS_ardrone_control_Distances_h
#define _ROS_ardrone_control_Distances_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace ardrone_control
{

  class Distances : public ros::Msg
  {
    public:
      std_msgs::Header header;
      float front_sensor;
      float front_left_sensor;
      float front_right_sensor;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_front_sensor;
      u_front_sensor.real = this->front_sensor;
      *(outbuffer + offset + 0) = (u_front_sensor.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_front_sensor.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_front_sensor.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_front_sensor.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->front_sensor);
      union {
        float real;
        uint32_t base;
      } u_front_left_sensor;
      u_front_left_sensor.real = this->front_left_sensor;
      *(outbuffer + offset + 0) = (u_front_left_sensor.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_front_left_sensor.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_front_left_sensor.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_front_left_sensor.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->front_left_sensor);
      union {
        float real;
        uint32_t base;
      } u_front_right_sensor;
      u_front_right_sensor.real = this->front_right_sensor;
      *(outbuffer + offset + 0) = (u_front_right_sensor.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_front_right_sensor.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_front_right_sensor.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_front_right_sensor.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->front_right_sensor);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_front_sensor;
      u_front_sensor.base = 0;
      u_front_sensor.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_front_sensor.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_front_sensor.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_front_sensor.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->front_sensor = u_front_sensor.real;
      offset += sizeof(this->front_sensor);
      union {
        float real;
        uint32_t base;
      } u_front_left_sensor;
      u_front_left_sensor.base = 0;
      u_front_left_sensor.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_front_left_sensor.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_front_left_sensor.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_front_left_sensor.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->front_left_sensor = u_front_left_sensor.real;
      offset += sizeof(this->front_left_sensor);
      union {
        float real;
        uint32_t base;
      } u_front_right_sensor;
      u_front_right_sensor.base = 0;
      u_front_right_sensor.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_front_right_sensor.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_front_right_sensor.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_front_right_sensor.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->front_right_sensor = u_front_right_sensor.real;
      offset += sizeof(this->front_right_sensor);
     return offset;
    }

    const char * getType(){ return "ardrone_control/Distances"; };
    const char * getMD5(){ return "8588fc45dbdc0d229e87bcb715fd91d9"; };

  };

}
#endif