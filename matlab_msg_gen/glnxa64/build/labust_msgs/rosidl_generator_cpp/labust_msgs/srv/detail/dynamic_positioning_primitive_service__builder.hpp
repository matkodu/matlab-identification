// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/DynamicPositioningPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_PRIMITIVE_SERVICE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_PRIMITIVE_SERVICE__BUILDER_HPP_

#include "labust_msgs/srv/detail/dynamic_positioning_primitive_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_DynamicPositioningPrimitiveService_Request_heading_topic
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_heading_topic(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request heading_topic(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_heading_topic_type arg)
  {
    msg_.heading_topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_target_topic
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_target_topic(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_heading_topic target_topic(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_target_topic_type arg)
  {
    msg_.target_topic = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_heading_topic(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_point_to_target
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_point_to_target(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_target_topic point_to_target(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_point_to_target_type arg)
  {
    msg_.point_to_target = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_target_topic(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_track_heading_enable
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_track_heading_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_point_to_target track_heading_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_track_heading_enable_type arg)
  {
    msg_.track_heading_enable = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_point_to_target(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_target_topic_enable
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_target_topic_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_track_heading_enable target_topic_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_target_topic_enable_type arg)
  {
    msg_.target_topic_enable = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_track_heading_enable(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_altitude_enable
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_altitude_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_target_topic_enable altitude_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_altitude_enable_type arg)
  {
    msg_.altitude_enable = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_target_topic_enable(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_heading_enable
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_heading_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_altitude_enable heading_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_heading_enable_type arg)
  {
    msg_.heading_enable = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_altitude_enable(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_depth_enable
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_depth_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_heading_enable depth_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_depth_enable_type arg)
  {
    msg_.depth_enable = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_heading_enable(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_east_enable
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_east_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_depth_enable east_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_east_enable_type arg)
  {
    msg_.east_enable = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_depth_enable(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_north_enable
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_north_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_east_enable north_enable(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_north_enable_type arg)
  {
    msg_.north_enable = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_east_enable(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_heading
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_heading(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_north_enable heading(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_north_enable(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_depth
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_depth(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_heading depth(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_heading(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_east
{
public:
  explicit Init_DynamicPositioningPrimitiveService_Request_east(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioningPrimitiveService_Request_depth east(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_east_type arg)
  {
    msg_.east = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_depth(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

class Init_DynamicPositioningPrimitiveService_Request_north
{
public:
  Init_DynamicPositioningPrimitiveService_Request_north()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicPositioningPrimitiveService_Request_east north(::labust_msgs::srv::DynamicPositioningPrimitiveService_Request::_north_type arg)
  {
    msg_.north = std::move(arg);
    return Init_DynamicPositioningPrimitiveService_Request_east(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::DynamicPositioningPrimitiveService_Request>()
{
  return labust_msgs::srv::builder::Init_DynamicPositioningPrimitiveService_Request_north();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_DynamicPositioningPrimitiveService_Response_status
{
public:
  Init_DynamicPositioningPrimitiveService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Response status(::labust_msgs::srv::DynamicPositioningPrimitiveService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningPrimitiveService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::DynamicPositioningPrimitiveService_Response>()
{
  return labust_msgs::srv::builder::Init_DynamicPositioningPrimitiveService_Response_status();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_PRIMITIVE_SERVICE__BUILDER_HPP_
