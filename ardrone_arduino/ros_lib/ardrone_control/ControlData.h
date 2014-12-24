#ifndef _ROS_ardrone_control_ControlData_h
#define _ROS_ardrone_control_ControlData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "ardrone_control/Distances.h"

namespace ardrone_control
{

  class ControlData : public ros::Msg
  {
    public:
      ardrone_control::Distances distances;
      float batteryPercent;
      uint32_t state;
      int32_t magX;
      int32_t magY;
      int32_t magZ;
      float rotX;
      float rotY;
      float rotZ;
      int32_t altd;
      float vx;
      float vy;
      float vz;
      float ax;
      float ay;
      float az;
      float tm;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->distances.serialize(outbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_batteryPercent;
      u_batteryPercent.real = this->batteryPercent;
      *(outbuffer + offset + 0) = (u_batteryPercent.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_batteryPercent.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_batteryPercent.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_batteryPercent.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->batteryPercent);
      *(outbuffer + offset + 0) = (this->state >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->state >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->state >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->state >> (8 * 3)) & 0xFF;
      offset += sizeof(this->state);
      union {
        int32_t real;
        uint32_t base;
      } u_magX;
      u_magX.real = this->magX;
      *(outbuffer + offset + 0) = (u_magX.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_magX.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_magX.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_magX.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->magX);
      union {
        int32_t real;
        uint32_t base;
      } u_magY;
      u_magY.real = this->magY;
      *(outbuffer + offset + 0) = (u_magY.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_magY.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_magY.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_magY.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->magY);
      union {
        int32_t real;
        uint32_t base;
      } u_magZ;
      u_magZ.real = this->magZ;
      *(outbuffer + offset + 0) = (u_magZ.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_magZ.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_magZ.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_magZ.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->magZ);
      union {
        float real;
        uint32_t base;
      } u_rotX;
      u_rotX.real = this->rotX;
      *(outbuffer + offset + 0) = (u_rotX.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rotX.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rotX.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rotX.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rotX);
      union {
        float real;
        uint32_t base;
      } u_rotY;
      u_rotY.real = this->rotY;
      *(outbuffer + offset + 0) = (u_rotY.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rotY.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rotY.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rotY.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rotY);
      union {
        float real;
        uint32_t base;
      } u_rotZ;
      u_rotZ.real = this->rotZ;
      *(outbuffer + offset + 0) = (u_rotZ.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rotZ.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rotZ.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rotZ.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rotZ);
      union {
        int32_t real;
        uint32_t base;
      } u_altd;
      u_altd.real = this->altd;
      *(outbuffer + offset + 0) = (u_altd.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_altd.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_altd.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_altd.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->altd);
      union {
        float real;
        uint32_t base;
      } u_vx;
      u_vx.real = this->vx;
      *(outbuffer + offset + 0) = (u_vx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vx.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vx.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vx.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->vx);
      union {
        float real;
        uint32_t base;
      } u_vy;
      u_vy.real = this->vy;
      *(outbuffer + offset + 0) = (u_vy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vy.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->vy);
      union {
        float real;
        uint32_t base;
      } u_vz;
      u_vz.real = this->vz;
      *(outbuffer + offset + 0) = (u_vz.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vz.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vz.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vz.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->vz);
      union {
        float real;
        uint32_t base;
      } u_ax;
      u_ax.real = this->ax;
      *(outbuffer + offset + 0) = (u_ax.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ax.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ax.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ax.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ax);
      union {
        float real;
        uint32_t base;
      } u_ay;
      u_ay.real = this->ay;
      *(outbuffer + offset + 0) = (u_ay.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ay.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ay.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ay.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ay);
      union {
        float real;
        uint32_t base;
      } u_az;
      u_az.real = this->az;
      *(outbuffer + offset + 0) = (u_az.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_az.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_az.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_az.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->az);
      union {
        float real;
        uint32_t base;
      } u_tm;
      u_tm.real = this->tm;
      *(outbuffer + offset + 0) = (u_tm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tm.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->tm);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->distances.deserialize(inbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_batteryPercent;
      u_batteryPercent.base = 0;
      u_batteryPercent.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_batteryPercent.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_batteryPercent.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_batteryPercent.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->batteryPercent = u_batteryPercent.real;
      offset += sizeof(this->batteryPercent);
      this->state =  ((uint32_t) (*(inbuffer + offset)));
      this->state |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->state |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->state |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->state);
      union {
        int32_t real;
        uint32_t base;
      } u_magX;
      u_magX.base = 0;
      u_magX.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_magX.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_magX.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_magX.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->magX = u_magX.real;
      offset += sizeof(this->magX);
      union {
        int32_t real;
        uint32_t base;
      } u_magY;
      u_magY.base = 0;
      u_magY.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_magY.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_magY.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_magY.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->magY = u_magY.real;
      offset += sizeof(this->magY);
      union {
        int32_t real;
        uint32_t base;
      } u_magZ;
      u_magZ.base = 0;
      u_magZ.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_magZ.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_magZ.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_magZ.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->magZ = u_magZ.real;
      offset += sizeof(this->magZ);
      union {
        float real;
        uint32_t base;
      } u_rotX;
      u_rotX.base = 0;
      u_rotX.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rotX.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rotX.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rotX.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rotX = u_rotX.real;
      offset += sizeof(this->rotX);
      union {
        float real;
        uint32_t base;
      } u_rotY;
      u_rotY.base = 0;
      u_rotY.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rotY.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rotY.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rotY.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rotY = u_rotY.real;
      offset += sizeof(this->rotY);
      union {
        float real;
        uint32_t base;
      } u_rotZ;
      u_rotZ.base = 0;
      u_rotZ.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rotZ.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rotZ.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rotZ.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rotZ = u_rotZ.real;
      offset += sizeof(this->rotZ);
      union {
        int32_t real;
        uint32_t base;
      } u_altd;
      u_altd.base = 0;
      u_altd.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_altd.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_altd.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_altd.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->altd = u_altd.real;
      offset += sizeof(this->altd);
      union {
        float real;
        uint32_t base;
      } u_vx;
      u_vx.base = 0;
      u_vx.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vx.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vx.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vx.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->vx = u_vx.real;
      offset += sizeof(this->vx);
      union {
        float real;
        uint32_t base;
      } u_vy;
      u_vy.base = 0;
      u_vy.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vy.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vy.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vy.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->vy = u_vy.real;
      offset += sizeof(this->vy);
      union {
        float real;
        uint32_t base;
      } u_vz;
      u_vz.base = 0;
      u_vz.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vz.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vz.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vz.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->vz = u_vz.real;
      offset += sizeof(this->vz);
      union {
        float real;
        uint32_t base;
      } u_ax;
      u_ax.base = 0;
      u_ax.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ax.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ax.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ax.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ax = u_ax.real;
      offset += sizeof(this->ax);
      union {
        float real;
        uint32_t base;
      } u_ay;
      u_ay.base = 0;
      u_ay.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ay.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ay.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ay.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ay = u_ay.real;
      offset += sizeof(this->ay);
      union {
        float real;
        uint32_t base;
      } u_az;
      u_az.base = 0;
      u_az.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_az.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_az.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_az.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->az = u_az.real;
      offset += sizeof(this->az);
      union {
        float real;
        uint32_t base;
      } u_tm;
      u_tm.base = 0;
      u_tm.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tm.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tm.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tm.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->tm = u_tm.real;
      offset += sizeof(this->tm);
     return offset;
    }

    const char * getType(){ return "ardrone_control/ControlData"; };
    const char * getMD5(){ return "86b9e73fcf90827c7a1b5668d12a84e2"; };

  };

}
#endif