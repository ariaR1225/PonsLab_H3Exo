// Generated by gencpp from file h3_msgs/TaskCommand.msg
// DO NOT EDIT!


#ifndef H3_MSGS_MESSAGE_TASKCOMMAND_H
#define H3_MSGS_MESSAGE_TASKCOMMAND_H


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
struct TaskCommand_
{
  typedef TaskCommand_<ContainerAllocator> Type;

  TaskCommand_()
    : command(0)  {
    }
  TaskCommand_(const ContainerAllocator& _alloc)
    : command(0)  {
  (void)_alloc;
    }



   typedef uint8_t _command_type;
  _command_type command;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(STOP_GAIT)
  #undef STOP_GAIT
#endif
#if defined(_WIN32) && defined(WALK_SPEED_1)
  #undef WALK_SPEED_1
#endif
#if defined(_WIN32) && defined(WALK_SPEED_2)
  #undef WALK_SPEED_2
#endif
#if defined(_WIN32) && defined(WALK_SPEED_3)
  #undef WALK_SPEED_3
#endif
#if defined(_WIN32) && defined(WALK_SPEED_4)
  #undef WALK_SPEED_4
#endif
#if defined(_WIN32) && defined(WALK_SPEED_5)
  #undef WALK_SPEED_5
#endif
#if defined(_WIN32) && defined(WALK_SPEED_6)
  #undef WALK_SPEED_6
#endif
#if defined(_WIN32) && defined(WALK_SPEED_7)
  #undef WALK_SPEED_7
#endif
#if defined(_WIN32) && defined(WALK_SPEED_8)
  #undef WALK_SPEED_8
#endif
#if defined(_WIN32) && defined(WALK_SPEED_9)
  #undef WALK_SPEED_9
#endif
#if defined(_WIN32) && defined(WALK_SPEED_10)
  #undef WALK_SPEED_10
#endif
#if defined(_WIN32) && defined(JOINTS_PASSIVE)
  #undef JOINTS_PASSIVE
#endif
#if defined(_WIN32) && defined(JOINTS_COMPLIANT)
  #undef JOINTS_COMPLIANT
#endif
#if defined(_WIN32) && defined(STAND_UP)
  #undef STAND_UP
#endif
#if defined(_WIN32) && defined(SIT_DOWN)
  #undef SIT_DOWN
#endif
#if defined(_WIN32) && defined(PERFORM_RIGHT_STEP)
  #undef PERFORM_RIGHT_STEP
#endif
#if defined(_WIN32) && defined(PERFORM_LEFT_STEP)
  #undef PERFORM_LEFT_STEP
#endif
#if defined(_WIN32) && defined(RIGHT_MAX_ASSITENCE_10)
  #undef RIGHT_MAX_ASSITENCE_10
#endif
#if defined(_WIN32) && defined(RIGHT_MAX_ASSITENCE_20)
  #undef RIGHT_MAX_ASSITENCE_20
#endif
#if defined(_WIN32) && defined(RIGHT_MAX_ASSITENCE_30)
  #undef RIGHT_MAX_ASSITENCE_30
#endif
#if defined(_WIN32) && defined(RIGHT_MAX_ASSITENCE_40)
  #undef RIGHT_MAX_ASSITENCE_40
#endif
#if defined(_WIN32) && defined(RIGHT_MAX_ASSITENCE_50)
  #undef RIGHT_MAX_ASSITENCE_50
#endif
#if defined(_WIN32) && defined(RIGHT_MAX_ASSITENCE_60)
  #undef RIGHT_MAX_ASSITENCE_60
#endif
#if defined(_WIN32) && defined(RIGHT_MAX_ASSITENCE_70)
  #undef RIGHT_MAX_ASSITENCE_70
#endif
#if defined(_WIN32) && defined(RIGHT_MAX_ASSITENCE_80)
  #undef RIGHT_MAX_ASSITENCE_80
#endif
#if defined(_WIN32) && defined(RIGHT_MAX_ASSITENCE_90)
  #undef RIGHT_MAX_ASSITENCE_90
#endif
#if defined(_WIN32) && defined(RIGHT_MAX_ASSITENCE_100)
  #undef RIGHT_MAX_ASSITENCE_100
#endif
#if defined(_WIN32) && defined(LEFT_MAX_ASSITENCE_10)
  #undef LEFT_MAX_ASSITENCE_10
#endif
#if defined(_WIN32) && defined(LEFT_MAX_ASSITENCE_20)
  #undef LEFT_MAX_ASSITENCE_20
#endif
#if defined(_WIN32) && defined(LEFT_MAX_ASSITENCE_30)
  #undef LEFT_MAX_ASSITENCE_30
#endif
#if defined(_WIN32) && defined(LEFT_MAX_ASSITENCE_40)
  #undef LEFT_MAX_ASSITENCE_40
#endif
#if defined(_WIN32) && defined(LEFT_MAX_ASSITENCE_50)
  #undef LEFT_MAX_ASSITENCE_50
#endif
#if defined(_WIN32) && defined(LEFT_MAX_ASSITENCE_60)
  #undef LEFT_MAX_ASSITENCE_60
#endif
#if defined(_WIN32) && defined(LEFT_MAX_ASSITENCE_70)
  #undef LEFT_MAX_ASSITENCE_70
#endif
#if defined(_WIN32) && defined(LEFT_MAX_ASSITENCE_80)
  #undef LEFT_MAX_ASSITENCE_80
#endif
#if defined(_WIN32) && defined(LEFT_MAX_ASSITENCE_90)
  #undef LEFT_MAX_ASSITENCE_90
#endif
#if defined(_WIN32) && defined(LEFT_MAX_ASSITENCE_100)
  #undef LEFT_MAX_ASSITENCE_100
#endif
#if defined(_WIN32) && defined(REGAIN_COMMAND)
  #undef REGAIN_COMMAND
#endif
#if defined(_WIN32) && defined(GIVE_COMMAND)
  #undef GIVE_COMMAND
#endif

  enum {
    STOP_GAIT = 0u,
    WALK_SPEED_1 = 1u,
    WALK_SPEED_2 = 2u,
    WALK_SPEED_3 = 3u,
    WALK_SPEED_4 = 4u,
    WALK_SPEED_5 = 5u,
    WALK_SPEED_6 = 6u,
    WALK_SPEED_7 = 7u,
    WALK_SPEED_8 = 8u,
    WALK_SPEED_9 = 9u,
    WALK_SPEED_10 = 10u,
    JOINTS_PASSIVE = 11u,
    JOINTS_COMPLIANT = 12u,
    STAND_UP = 21u,
    SIT_DOWN = 22u,
    PERFORM_RIGHT_STEP = 23u,
    PERFORM_LEFT_STEP = 24u,
    RIGHT_MAX_ASSITENCE_10 = 31u,
    RIGHT_MAX_ASSITENCE_20 = 32u,
    RIGHT_MAX_ASSITENCE_30 = 33u,
    RIGHT_MAX_ASSITENCE_40 = 34u,
    RIGHT_MAX_ASSITENCE_50 = 35u,
    RIGHT_MAX_ASSITENCE_60 = 36u,
    RIGHT_MAX_ASSITENCE_70 = 37u,
    RIGHT_MAX_ASSITENCE_80 = 38u,
    RIGHT_MAX_ASSITENCE_90 = 39u,
    RIGHT_MAX_ASSITENCE_100 = 40u,
    LEFT_MAX_ASSITENCE_10 = 41u,
    LEFT_MAX_ASSITENCE_20 = 42u,
    LEFT_MAX_ASSITENCE_30 = 43u,
    LEFT_MAX_ASSITENCE_40 = 44u,
    LEFT_MAX_ASSITENCE_50 = 45u,
    LEFT_MAX_ASSITENCE_60 = 46u,
    LEFT_MAX_ASSITENCE_70 = 47u,
    LEFT_MAX_ASSITENCE_80 = 48u,
    LEFT_MAX_ASSITENCE_90 = 49u,
    LEFT_MAX_ASSITENCE_100 = 50u,
    REGAIN_COMMAND = 51u,
    GIVE_COMMAND = 52u,
  };


  typedef boost::shared_ptr< ::h3_msgs::TaskCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::h3_msgs::TaskCommand_<ContainerAllocator> const> ConstPtr;

}; // struct TaskCommand_

typedef ::h3_msgs::TaskCommand_<std::allocator<void> > TaskCommand;

typedef boost::shared_ptr< ::h3_msgs::TaskCommand > TaskCommandPtr;
typedef boost::shared_ptr< ::h3_msgs::TaskCommand const> TaskCommandConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::h3_msgs::TaskCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::h3_msgs::TaskCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::h3_msgs::TaskCommand_<ContainerAllocator1> & lhs, const ::h3_msgs::TaskCommand_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::h3_msgs::TaskCommand_<ContainerAllocator1> & lhs, const ::h3_msgs::TaskCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace h3_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::h3_msgs::TaskCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::h3_msgs::TaskCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::h3_msgs::TaskCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::h3_msgs::TaskCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::h3_msgs::TaskCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::h3_msgs::TaskCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::h3_msgs::TaskCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "88f3fcfe7dd2fcc45f8a0dedd7fc97b6";
  }

  static const char* value(const ::h3_msgs::TaskCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x88f3fcfe7dd2fcc4ULL;
  static const uint64_t static_value2 = 0x5f8a0dedd7fc97b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::h3_msgs::TaskCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "h3_msgs/TaskCommand";
  }

  static const char* value(const ::h3_msgs::TaskCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::h3_msgs::TaskCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 STOP_GAIT = 0\n"
"uint8 WALK_SPEED_1 = 1\n"
"uint8 WALK_SPEED_2 = 2\n"
"uint8 WALK_SPEED_3 = 3\n"
"uint8 WALK_SPEED_4 = 4\n"
"uint8 WALK_SPEED_5 = 5\n"
"uint8 WALK_SPEED_6 = 6\n"
"uint8 WALK_SPEED_7 = 7\n"
"uint8 WALK_SPEED_8 = 8\n"
"uint8 WALK_SPEED_9 = 9\n"
"uint8 WALK_SPEED_10 = 10\n"
"uint8 JOINTS_PASSIVE = 11\n"
"uint8 JOINTS_COMPLIANT = 12\n"
"uint8 STAND_UP = 21\n"
"uint8 SIT_DOWN = 22\n"
"uint8 PERFORM_RIGHT_STEP = 23\n"
"uint8 PERFORM_LEFT_STEP = 24\n"
"uint8 RIGHT_MAX_ASSITENCE_10 = 31\n"
"uint8 RIGHT_MAX_ASSITENCE_20 = 32\n"
"uint8 RIGHT_MAX_ASSITENCE_30 = 33\n"
"uint8 RIGHT_MAX_ASSITENCE_40 = 34\n"
"uint8 RIGHT_MAX_ASSITENCE_50 = 35\n"
"uint8 RIGHT_MAX_ASSITENCE_60 = 36\n"
"uint8 RIGHT_MAX_ASSITENCE_70 = 37\n"
"uint8 RIGHT_MAX_ASSITENCE_80 = 38\n"
"uint8 RIGHT_MAX_ASSITENCE_90 = 39\n"
"uint8 RIGHT_MAX_ASSITENCE_100 = 40\n"
"uint8 LEFT_MAX_ASSITENCE_10 = 41\n"
"uint8 LEFT_MAX_ASSITENCE_20 = 42\n"
"uint8 LEFT_MAX_ASSITENCE_30 = 43\n"
"uint8 LEFT_MAX_ASSITENCE_40 = 44\n"
"uint8 LEFT_MAX_ASSITENCE_50 = 45\n"
"uint8 LEFT_MAX_ASSITENCE_60 = 46\n"
"uint8 LEFT_MAX_ASSITENCE_70 = 47\n"
"uint8 LEFT_MAX_ASSITENCE_80 = 48\n"
"uint8 LEFT_MAX_ASSITENCE_90 = 49\n"
"uint8 LEFT_MAX_ASSITENCE_100 = 50\n"
"uint8 REGAIN_COMMAND = 51\n"
"uint8 GIVE_COMMAND = 52\n"
"uint8  command\n"
;
  }

  static const char* value(const ::h3_msgs::TaskCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::h3_msgs::TaskCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::h3_msgs::TaskCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::h3_msgs::TaskCommand_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // H3_MSGS_MESSAGE_TASKCOMMAND_H
