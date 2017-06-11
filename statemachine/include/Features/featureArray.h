// Generated by gencpp from file localization/featureArray.msg
// DO NOT EDIT!


#ifndef LOCALIZATION_MESSAGE_FEATUREARRAY_H
#define LOCALIZATION_MESSAGE_FEATUREARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include "feature.h"

namespace localization
{
template <class ContainerAllocator>
struct featureArray_
{
  typedef featureArray_<ContainerAllocator> Type;

  featureArray_()
    : features()  {
    }
  featureArray_(const ContainerAllocator& _alloc)
    : features(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::localization::feature_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::localization::feature_<ContainerAllocator> >::other >  _features_type;
  _features_type features;




  typedef boost::shared_ptr< ::localization::featureArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::localization::featureArray_<ContainerAllocator> const> ConstPtr;

}; // struct featureArray_

typedef ::localization::featureArray_<std::allocator<void> > featureArray;

typedef boost::shared_ptr< ::localization::featureArray > featureArrayPtr;
typedef boost::shared_ptr< ::localization::featureArray const> featureArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::localization::featureArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::localization::featureArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace localization

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'localization': ['/home/marc/catkin_ws/src/gruppe7/localization/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg', '/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::localization::featureArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::localization::featureArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::localization::featureArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::localization::featureArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::localization::featureArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::localization::featureArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::localization::featureArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "294ea9dc3e8bebad5ac6a69a8fb92eba";
  }

  static const char* value(const ::localization::featureArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x294ea9dc3e8bebadULL;
  static const uint64_t static_value2 = 0x5ac6a69a8fb92ebaULL;
};

template<class ContainerAllocator>
struct DataType< ::localization::featureArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "localization/featureArray";
  }

  static const char* value(const ::localization::featureArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::localization::featureArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "feature[] features\n\
\n\
================================================================================\n\
MSG: localization/feature\n\
float64 r\n\
float64 phi\n\
float64 specifier\n\
int32 knownCorr\n\
";
  }

  static const char* value(const ::localization::featureArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::localization::featureArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.features);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct featureArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::localization::featureArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::localization::featureArray_<ContainerAllocator>& v)
  {
    s << indent << "features[]" << std::endl;
    for (size_t i = 0; i < v.features.size(); ++i)
    {
      s << indent << "  features[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::localization::feature_<ContainerAllocator> >::stream(s, indent + "    ", v.features[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LOCALIZATION_MESSAGE_FEATUREARRAY_H
