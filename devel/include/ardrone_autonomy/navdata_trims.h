/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/greye/catkin_ws/src/ardrone_autonomy/msg/navdata_trims.msg
 *
 */


#ifndef ARDRONE_AUTONOMY_MESSAGE_NAVDATA_TRIMS_H
#define ARDRONE_AUTONOMY_MESSAGE_NAVDATA_TRIMS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ardrone_autonomy
{
template <class ContainerAllocator>
struct navdata_trims_
{
  typedef navdata_trims_<ContainerAllocator> Type;

  navdata_trims_()
    : header()
    , drone_time(0.0)
    , tag(0)
    , size(0)
    , angular_rates_trim_r(0.0)
    , euler_angles_trim_theta(0.0)
    , euler_angles_trim_phi(0.0)  {
    }
  navdata_trims_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , drone_time(0.0)
    , tag(0)
    , size(0)
    , angular_rates_trim_r(0.0)
    , euler_angles_trim_theta(0.0)
    , euler_angles_trim_phi(0.0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _drone_time_type;
  _drone_time_type drone_time;

   typedef uint16_t _tag_type;
  _tag_type tag;

   typedef uint16_t _size_type;
  _size_type size;

   typedef float _angular_rates_trim_r_type;
  _angular_rates_trim_r_type angular_rates_trim_r;

   typedef float _euler_angles_trim_theta_type;
  _euler_angles_trim_theta_type euler_angles_trim_theta;

   typedef float _euler_angles_trim_phi_type;
  _euler_angles_trim_phi_type euler_angles_trim_phi;




  typedef boost::shared_ptr< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> const> ConstPtr;

}; // struct navdata_trims_

typedef ::ardrone_autonomy::navdata_trims_<std::allocator<void> > navdata_trims;

typedef boost::shared_ptr< ::ardrone_autonomy::navdata_trims > navdata_trimsPtr;
typedef boost::shared_ptr< ::ardrone_autonomy::navdata_trims const> navdata_trimsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ardrone_autonomy::navdata_trims_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ardrone_autonomy

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'ardrone_autonomy': ['/home/greye/catkin_ws/src/ardrone_autonomy/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> >
{
  static const char* value()
  {
    return "71133941ec04f0892b7754f7e7191d05";
  }

  static const char* value(const ::ardrone_autonomy::navdata_trims_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x71133941ec04f089ULL;
  static const uint64_t static_value2 = 0x2b7754f7e7191d05ULL;
};

template<class ContainerAllocator>
struct DataType< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ardrone_autonomy/navdata_trims";
  }

  static const char* value(const ::ardrone_autonomy::navdata_trims_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64 drone_time\n\
uint16 tag\n\
uint16 size\n\
float32 angular_rates_trim_r\n\
float32 euler_angles_trim_theta\n\
float32 euler_angles_trim_phi\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::ardrone_autonomy::navdata_trims_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.drone_time);
      stream.next(m.tag);
      stream.next(m.size);
      stream.next(m.angular_rates_trim_r);
      stream.next(m.euler_angles_trim_theta);
      stream.next(m.euler_angles_trim_phi);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct navdata_trims_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ardrone_autonomy::navdata_trims_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ardrone_autonomy::navdata_trims_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "drone_time: ";
    Printer<double>::stream(s, indent + "  ", v.drone_time);
    s << indent << "tag: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tag);
    s << indent << "size: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.size);
    s << indent << "angular_rates_trim_r: ";
    Printer<float>::stream(s, indent + "  ", v.angular_rates_trim_r);
    s << indent << "euler_angles_trim_theta: ";
    Printer<float>::stream(s, indent + "  ", v.euler_angles_trim_theta);
    s << indent << "euler_angles_trim_phi: ";
    Printer<float>::stream(s, indent + "  ", v.euler_angles_trim_phi);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARDRONE_AUTONOMY_MESSAGE_NAVDATA_TRIMS_H
