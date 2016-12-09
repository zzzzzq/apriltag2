// Generated by gencpp from file apriltag2_example/AprilTagDetectionArray.msg
// DO NOT EDIT!


#ifndef APRILTAG2_EXAMPLE_MESSAGE_APRILTAGDETECTIONARRAY_H
#define APRILTAG2_EXAMPLE_MESSAGE_APRILTAGDETECTIONARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <apriltag2_example/AprilTagDetection.h>

namespace apriltag2_example
{
template <class ContainerAllocator>
struct AprilTagDetectionArray_
{
  typedef AprilTagDetectionArray_<ContainerAllocator> Type;

  AprilTagDetectionArray_()
    : detections()  {
    }
  AprilTagDetectionArray_(const ContainerAllocator& _alloc)
    : detections(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::apriltag2_example::AprilTagDetection_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::apriltag2_example::AprilTagDetection_<ContainerAllocator> >::other >  _detections_type;
  _detections_type detections;




  typedef boost::shared_ptr< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> const> ConstPtr;

}; // struct AprilTagDetectionArray_

typedef ::apriltag2_example::AprilTagDetectionArray_<std::allocator<void> > AprilTagDetectionArray;

typedef boost::shared_ptr< ::apriltag2_example::AprilTagDetectionArray > AprilTagDetectionArrayPtr;
typedef boost::shared_ptr< ::apriltag2_example::AprilTagDetectionArray const> AprilTagDetectionArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace apriltag2_example

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'apriltag2_example': ['/home/fschiano/Repositories/apriltag2/apriltag2_example/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93c0a301ed9e6633dc34b8117d49ebd4";
  }

  static const char* value(const ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93c0a301ed9e6633ULL;
  static const uint64_t static_value2 = 0xdc34b8117d49ebd4ULL;
};

template<class ContainerAllocator>
struct DataType< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "apriltag2_example/AprilTagDetectionArray";
  }

  static const char* value(const ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "AprilTagDetection[] detections\n\
================================================================================\n\
MSG: apriltag2_example/AprilTagDetection\n\
int32 id\n\
float64 size\n\
geometry_msgs/PoseStamped pose\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AprilTagDetectionArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::apriltag2_example::AprilTagDetectionArray_<ContainerAllocator>& v)
  {
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::apriltag2_example::AprilTagDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // APRILTAG2_EXAMPLE_MESSAGE_APRILTAGDETECTIONARRAY_H
