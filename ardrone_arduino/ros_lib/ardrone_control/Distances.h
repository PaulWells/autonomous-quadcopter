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
      float right_sensor;
      float forward_sensor;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_right_sensor;
      u_right_sensor.real = this->right_sensor;
      *(outbuffer + offset + 0) = (u_right_sensor.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_sensor.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_sensor.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_sensor.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->right_sensor);
      union {
        float real;
        uint32_t base;
      } u_forward_sensor;
      u_forward_sensor.real = this->forward_sensor;
      *(outbuffer + offset + 0) = (u_forward_sensor.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_forward_sensor.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_forward_sensor.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_forward_sensor.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->forward_sensor);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_right_sensor;
      u_right_sensor.base = 0;
      u_right_sensor.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_sensor.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_sensor.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_sensor.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->right_sensor = u_right_sensor.real;
      offset += sizeof(this->right_sensor);
      union {
        float real;
        uint32_t base;
      } u_forward_sensor;
      u_forward_sensor.base = 0;
      u_forward_sensor.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_forward_sensor.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_forward_sensor.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_forward_sensor.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->forward_sensor = u_forward_sensor.real;
      offset += sizeof(this->forward_sensor);
     return offset;
    }

    const char * getType(){ return "ardrone_control/Distances"; };
    const char * getMD5(){ return "1fbb20bba60b0113f2f494921882cb3a"; };

  };

}
#endif