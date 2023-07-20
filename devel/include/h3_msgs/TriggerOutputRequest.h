// Generated by gencpp from file h3_msgs/TriggerOutputRequest.msg
// DO NOT EDIT!


#ifndef H3_MSGS_MESSAGE_TRIGGEROUTPUTREQUEST_H
#define H3_MSGS_MESSAGE_TRIGGEROUTPUTREQUEST_H


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
struct TriggerOutputRequest_
{
  typedef TriggerOutputRequest_<ContainerAllocator> Type;

  TriggerOutputRequest_()
    : trigger_output(0)  {
    }
  TriggerOutputRequest_(const ContainerAllocator& _alloc)
    : trigger_output(0)  {
  (void)_alloc;
    }



   typedef uint8_t _trigger_output_type;
  _trigger_output_type trigger_output;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(TRIGGER_OUTPUT_PIN_LOW)
  #undef TRIGGER_OUTPUT_PIN_LOW
#endif
#if defined(_WIN32) && defined(TRIGGER_OUTPUT_PIN_PULSE)
  #undef TRIGGER_OUTPUT_PIN_PULSE
#endif
#if defined(_WIN32) && defined(TRIGGER_OUTPUT_PIN_HIGH)
  #undef TRIGGER_OUTPUT_PIN_HIGH
#endif

  enum {
    TRIGGER_OUTPUT_PIN_LOW = 0u,
    TRIGGER_OUTPUT_PIN_PULSE = 1u,
    TRIGGER_OUTPUT_PIN_HIGH = 2u,
  };


  typedef boost::shared_ptr< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TriggerOutputRequest_

typedef ::h3_msgs::TriggerOutputRequest_<std::allocator<void> > TriggerOutputRequest;

typedef boost::shared_ptr< ::h3_msgs::TriggerOutputRequest > TriggerOutputRequestPtr;
typedef boost::shared_ptr< ::h3_msgs::TriggerOutputRequest const> TriggerOutputRequestConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::h3_msgs::TriggerOutputRequest_<ContainerAllocator1> & lhs, const ::h3_msgs::TriggerOutputRequest_<ContainerAllocator2> & rhs)
{
  return lhs.trigger_output == rhs.trigger_output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::h3_msgs::TriggerOutputRequest_<ContainerAllocator1> & lhs, const ::h3_msgs::TriggerOutputRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace h3_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b902d11692c75eca7c2764a899d58741";
  }

  static const char* value(const ::h3_msgs::TriggerOutputRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb902d11692c75ecaULL;
  static const uint64_t static_value2 = 0x7c2764a899d58741ULL;
};

template<class ContainerAllocator>
struct DataType< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "h3_msgs/TriggerOutputRequest";
  }

  static const char* value(const ::h3_msgs::TriggerOutputRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Set trigger output pin.\n"
"uint8 TRIGGER_OUTPUT_PIN_LOW = 0\n"
"uint8 TRIGGER_OUTPUT_PIN_PULSE = 1\n"
"uint8 TRIGGER_OUTPUT_PIN_HIGH = 2\n"
"uint8 trigger_output\n"
;
  }

  static const char* value(const ::h3_msgs::TriggerOutputRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trigger_output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TriggerOutputRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::h3_msgs::TriggerOutputRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::h3_msgs::TriggerOutputRequest_<ContainerAllocator>& v)
  {
    s << indent << "trigger_output: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.trigger_output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // H3_MSGS_MESSAGE_TRIGGEROUTPUTREQUEST_H
