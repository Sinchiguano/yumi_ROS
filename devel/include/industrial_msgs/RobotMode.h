// Generated by gencpp from file industrial_msgs/RobotMode.msg
// DO NOT EDIT!


#ifndef INDUSTRIAL_MSGS_MESSAGE_ROBOTMODE_H
#define INDUSTRIAL_MSGS_MESSAGE_ROBOTMODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace industrial_msgs
{
template <class ContainerAllocator>
struct RobotMode_
{
  typedef RobotMode_<ContainerAllocator> Type;

  RobotMode_()
    : val(0)  {
    }
  RobotMode_(const ContainerAllocator& _alloc)
    : val(0)  {
  (void)_alloc;
    }



   typedef int8_t _val_type;
  _val_type val;



  enum {
    UNKNOWN = -1,
    MANUAL = 1,
    AUTO = 2,
  };


  typedef boost::shared_ptr< ::industrial_msgs::RobotMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::industrial_msgs::RobotMode_<ContainerAllocator> const> ConstPtr;

}; // struct RobotMode_

typedef ::industrial_msgs::RobotMode_<std::allocator<void> > RobotMode;

typedef boost::shared_ptr< ::industrial_msgs::RobotMode > RobotModePtr;
typedef boost::shared_ptr< ::industrial_msgs::RobotMode const> RobotModeConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::industrial_msgs::RobotMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::industrial_msgs::RobotMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace industrial_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'industrial_msgs': ['/home/cesar/yumi_depends_ws/src/industrial_core/industrial_msgs/msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::RobotMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::RobotMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::RobotMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::RobotMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::RobotMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::RobotMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::industrial_msgs::RobotMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "24ac279e988b6b3db836e437e6ed1ba0";
  }

  static const char* value(const ::industrial_msgs::RobotMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x24ac279e988b6b3dULL;
  static const uint64_t static_value2 = 0xb836e437e6ed1ba0ULL;
};

template<class ContainerAllocator>
struct DataType< ::industrial_msgs::RobotMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_msgs/RobotMode";
  }

  static const char* value(const ::industrial_msgs::RobotMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::industrial_msgs::RobotMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The Robot mode message encapsulates the mode/teach state of the robot\n\
# Typically this is controlled by the pendant key switch, but not always\n\
\n\
int8 val\n\
\n\
# enumerated values\n\
int8 UNKNOWN=-1                 # Unknown or unavailable         \n\
int8 MANUAL=1 			 # Teach OR manual mode\n\
int8 AUTO=2                     # Automatic mode\n\
\n\
";
  }

  static const char* value(const ::industrial_msgs::RobotMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::industrial_msgs::RobotMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.val);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::industrial_msgs::RobotMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::industrial_msgs::RobotMode_<ContainerAllocator>& v)
  {
    s << indent << "val: ";
    Printer<int8_t>::stream(s, indent + "  ", v.val);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INDUSTRIAL_MSGS_MESSAGE_ROBOTMODE_H
