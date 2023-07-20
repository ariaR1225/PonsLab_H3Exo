// Generated by gencpp from file h3_msgs/DataRecordingResponse.msg
// DO NOT EDIT!


#ifndef H3_MSGS_MESSAGE_DATARECORDINGRESPONSE_H
#define H3_MSGS_MESSAGE_DATARECORDINGRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace h3_msgs
{
template <class ContainerAllocator>
struct DataRecordingResponse_
{
  typedef DataRecordingResponse_<ContainerAllocator> Type;

  DataRecordingResponse_()
    : success(false)  {
    }
  DataRecordingResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DataRecordingResponse_

typedef ::h3_msgs::DataRecordingResponse_<std::allocator<void> > DataRecordingResponse;

typedef boost::shared_ptr< ::h3_msgs::DataRecordingResponse > DataRecordingResponsePtr;
typedef boost::shared_ptr< ::h3_msgs::DataRecordingResponse const> DataRecordingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::h3_msgs::DataRecordingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::h3_msgs::DataRecordingResponse_<ContainerAllocator1> & lhs, const ::h3_msgs::DataRecordingResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::h3_msgs::DataRecordingResponse_<ContainerAllocator1> & lhs, const ::h3_msgs::DataRecordingResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace h3_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::h3_msgs::DataRecordingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "h3_msgs/DataRecordingResponse";
  }

  static const char* value(const ::h3_msgs::DataRecordingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
;
  }

  static const char* value(const ::h3_msgs::DataRecordingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DataRecordingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::h3_msgs::DataRecordingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::h3_msgs::DataRecordingResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // H3_MSGS_MESSAGE_DATARECORDINGRESPONSE_H