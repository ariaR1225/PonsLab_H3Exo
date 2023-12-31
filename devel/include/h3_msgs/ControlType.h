// Generated by gencpp from file h3_msgs/ControlType.msg
// DO NOT EDIT!


#ifndef H3_MSGS_MESSAGE_CONTROLTYPE_H
#define H3_MSGS_MESSAGE_CONTROLTYPE_H

#include <ros/service_traits.h>


#include <h3_msgs/ControlTypeRequest.h>
#include <h3_msgs/ControlTypeResponse.h>


namespace h3_msgs
{

struct ControlType
{

typedef ControlTypeRequest Request;
typedef ControlTypeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ControlType
} // namespace h3_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::h3_msgs::ControlType > {
  static const char* value()
  {
    return "af261c0e31694c5bbb9f582a2605febd";
  }

  static const char* value(const ::h3_msgs::ControlType&) { return value(); }
};

template<>
struct DataType< ::h3_msgs::ControlType > {
  static const char* value()
  {
    return "h3_msgs/ControlType";
  }

  static const char* value(const ::h3_msgs::ControlType&) { return value(); }
};


// service_traits::MD5Sum< ::h3_msgs::ControlTypeRequest> should match
// service_traits::MD5Sum< ::h3_msgs::ControlType >
template<>
struct MD5Sum< ::h3_msgs::ControlTypeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::h3_msgs::ControlType >::value();
  }
  static const char* value(const ::h3_msgs::ControlTypeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::h3_msgs::ControlTypeRequest> should match
// service_traits::DataType< ::h3_msgs::ControlType >
template<>
struct DataType< ::h3_msgs::ControlTypeRequest>
{
  static const char* value()
  {
    return DataType< ::h3_msgs::ControlType >::value();
  }
  static const char* value(const ::h3_msgs::ControlTypeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::h3_msgs::ControlTypeResponse> should match
// service_traits::MD5Sum< ::h3_msgs::ControlType >
template<>
struct MD5Sum< ::h3_msgs::ControlTypeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::h3_msgs::ControlType >::value();
  }
  static const char* value(const ::h3_msgs::ControlTypeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::h3_msgs::ControlTypeResponse> should match
// service_traits::DataType< ::h3_msgs::ControlType >
template<>
struct DataType< ::h3_msgs::ControlTypeResponse>
{
  static const char* value()
  {
    return DataType< ::h3_msgs::ControlType >::value();
  }
  static const char* value(const ::h3_msgs::ControlTypeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // H3_MSGS_MESSAGE_CONTROLTYPE_H
