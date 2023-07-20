// Generated by gencpp from file h3_msgs/DataRecordingRequest.msg
// DO NOT EDIT!


#ifndef H3_MSGS_MESSAGE_DATARECORDINGREQUEST_H
#define H3_MSGS_MESSAGE_DATARECORDINGREQUEST_H


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
struct DataRecordingRequest_
{
  typedef DataRecordingRequest_<ContainerAllocator> Type;

  DataRecordingRequest_()
    : recording_trigger_mode(0)
    , file_base_name()
    , timed(false)
    , duration_time(0.0)  {
    }
  DataRecordingRequest_(const ContainerAllocator& _alloc)
    : recording_trigger_mode(0)
    , file_base_name(_alloc)
    , timed(false)
    , duration_time(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _recording_trigger_mode_type;
  _recording_trigger_mode_type recording_trigger_mode;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _file_base_name_type;
  _file_base_name_type file_base_name;

   typedef uint8_t _timed_type;
  _timed_type timed;

   typedef double _duration_time_type;
  _duration_time_type duration_time;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SW_STOP_MODE)
  #undef SW_STOP_MODE
#endif
#if defined(_WIN32) && defined(SW_START_MODE)
  #undef SW_START_MODE
#endif
#if defined(_WIN32) && defined(TRIGGER_INPUT_PULSE_MODE)
  #undef TRIGGER_INPUT_PULSE_MODE
#endif
#if defined(_WIN32) && defined(TRIGGER_INPUT_HIGH_MODE)
  #undef TRIGGER_INPUT_HIGH_MODE
#endif
#if defined(_WIN32) && defined(TRIGGER_OUTPUT_PULSE_MODE)
  #undef TRIGGER_OUTPUT_PULSE_MODE
#endif
#if defined(_WIN32) && defined(TRIGGER_OUTPUT_HIGH_MODE)
  #undef TRIGGER_OUTPUT_HIGH_MODE
#endif

  enum {
    SW_STOP_MODE = 0u,
    SW_START_MODE = 1u,
    TRIGGER_INPUT_PULSE_MODE = 2u,
    TRIGGER_INPUT_HIGH_MODE = 3u,
    TRIGGER_OUTPUT_PULSE_MODE = 4u,
    TRIGGER_OUTPUT_HIGH_MODE = 5u,
  };


  typedef boost::shared_ptr< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DataRecordingRequest_

typedef ::h3_msgs::DataRecordingRequest_<std::allocator<void> > DataRecordingRequest;

typedef boost::shared_ptr< ::h3_msgs::DataRecordingRequest > DataRecordingRequestPtr;
typedef boost::shared_ptr< ::h3_msgs::DataRecordingRequest const> DataRecordingRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::h3_msgs::DataRecordingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::h3_msgs::DataRecordingRequest_<ContainerAllocator1> & lhs, const ::h3_msgs::DataRecordingRequest_<ContainerAllocator2> & rhs)
{
  return lhs.recording_trigger_mode == rhs.recording_trigger_mode &&
    lhs.file_base_name == rhs.file_base_name &&
    lhs.timed == rhs.timed &&
    lhs.duration_time == rhs.duration_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::h3_msgs::DataRecordingRequest_<ContainerAllocator1> & lhs, const ::h3_msgs::DataRecordingRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace h3_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f765f7828dc7e940c76651a0e35a708e";
  }

  static const char* value(const ::h3_msgs::DataRecordingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf765f7828dc7e940ULL;
  static const uint64_t static_value2 = 0xc76651a0e35a708eULL;
};

template<class ContainerAllocator>
struct DataType< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "h3_msgs/DataRecordingRequest";
  }

  static const char* value(const ::h3_msgs::DataRecordingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Start data recording in a text file using .csv format.\n"
"# The data recording can be started/stopped by software o hardware.  \n"
"# The file is saved as file_base_name_counter.\n"
"# timed:\n"
"# true: The data recording finish when the duration_time is completed.\n"
"# false: duration_time is ignored.\n"
"# duration_time: Data recording time in (seconds.miliseconds).\n"
"uint8 SW_STOP_MODE = 0\n"
"uint8 SW_START_MODE = 1\n"
"uint8 TRIGGER_INPUT_PULSE_MODE = 2\n"
"uint8 TRIGGER_INPUT_HIGH_MODE = 3\n"
"uint8 TRIGGER_OUTPUT_PULSE_MODE = 4\n"
"uint8 TRIGGER_OUTPUT_HIGH_MODE = 5\n"
"uint8 recording_trigger_mode\n"
"string file_base_name\n"
"bool timed\n"
"float64 duration_time\n"
;
  }

  static const char* value(const ::h3_msgs::DataRecordingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.recording_trigger_mode);
      stream.next(m.file_base_name);
      stream.next(m.timed);
      stream.next(m.duration_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DataRecordingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::h3_msgs::DataRecordingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::h3_msgs::DataRecordingRequest_<ContainerAllocator>& v)
  {
    s << indent << "recording_trigger_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.recording_trigger_mode);
    s << indent << "file_base_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.file_base_name);
    s << indent << "timed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.timed);
    s << indent << "duration_time: ";
    Printer<double>::stream(s, indent + "  ", v.duration_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // H3_MSGS_MESSAGE_DATARECORDINGREQUEST_H