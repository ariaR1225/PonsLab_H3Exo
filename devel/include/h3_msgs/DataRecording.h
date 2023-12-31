// Generated by gencpp from file h3_msgs/DataRecording.msg
// DO NOT EDIT!


#ifndef H3_MSGS_MESSAGE_DATARECORDING_H
#define H3_MSGS_MESSAGE_DATARECORDING_H

#include <ros/service_traits.h>


#include <h3_msgs/DataRecordingRequest.h>
#include <h3_msgs/DataRecordingResponse.h>


namespace h3_msgs
{

struct DataRecording
{

typedef DataRecordingRequest Request;
typedef DataRecordingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DataRecording
} // namespace h3_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::h3_msgs::DataRecording > {
  static const char* value()
  {
    return "35eb072519df70f467d2bd26462e08fb";
  }

  static const char* value(const ::h3_msgs::DataRecording&) { return value(); }
};

template<>
struct DataType< ::h3_msgs::DataRecording > {
  static const char* value()
  {
    return "h3_msgs/DataRecording";
  }

  static const char* value(const ::h3_msgs::DataRecording&) { return value(); }
};


// service_traits::MD5Sum< ::h3_msgs::DataRecordingRequest> should match
// service_traits::MD5Sum< ::h3_msgs::DataRecording >
template<>
struct MD5Sum< ::h3_msgs::DataRecordingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::h3_msgs::DataRecording >::value();
  }
  static const char* value(const ::h3_msgs::DataRecordingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::h3_msgs::DataRecordingRequest> should match
// service_traits::DataType< ::h3_msgs::DataRecording >
template<>
struct DataType< ::h3_msgs::DataRecordingRequest>
{
  static const char* value()
  {
    return DataType< ::h3_msgs::DataRecording >::value();
  }
  static const char* value(const ::h3_msgs::DataRecordingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::h3_msgs::DataRecordingResponse> should match
// service_traits::MD5Sum< ::h3_msgs::DataRecording >
template<>
struct MD5Sum< ::h3_msgs::DataRecordingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::h3_msgs::DataRecording >::value();
  }
  static const char* value(const ::h3_msgs::DataRecordingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::h3_msgs::DataRecordingResponse> should match
// service_traits::DataType< ::h3_msgs::DataRecording >
template<>
struct DataType< ::h3_msgs::DataRecordingResponse>
{
  static const char* value()
  {
    return DataType< ::h3_msgs::DataRecording >::value();
  }
  static const char* value(const ::h3_msgs::DataRecordingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // H3_MSGS_MESSAGE_DATARECORDING_H
