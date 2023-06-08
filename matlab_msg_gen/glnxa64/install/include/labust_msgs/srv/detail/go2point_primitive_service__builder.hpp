// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/Go2pointPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__GO2POINT_PRIMITIVE_SERVICE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__GO2POINT_PRIMITIVE_SERVICE__BUILDER_HPP_

#include "labust_msgs/srv/detail/go2point_primitive_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_Go2pointPrimitiveService_Request_speed_topic
{
public:
  explicit Init_Go2pointPrimitiveService_Request_speed_topic(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::Go2pointPrimitiveService_Request speed_topic(::labust_msgs::srv::Go2pointPrimitiveService_Request::_speed_topic_type arg)
  {
    msg_.speed_topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_heading_topic
{
public:
  explicit Init_Go2pointPrimitiveService_Request_heading_topic(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_Go2pointPrimitiveService_Request_speed_topic heading_topic(::labust_msgs::srv::Go2pointPrimitiveService_Request::_heading_topic_type arg)
  {
    msg_.heading_topic = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_speed_topic(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_altitude_enable
{
public:
  explicit Init_Go2pointPrimitiveService_Request_altitude_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_Go2pointPrimitiveService_Request_heading_topic altitude_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request::_altitude_enable_type arg)
  {
    msg_.altitude_enable = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_heading_topic(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_heading_enable
{
public:
  explicit Init_Go2pointPrimitiveService_Request_heading_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_Go2pointPrimitiveService_Request_altitude_enable heading_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request::_heading_enable_type arg)
  {
    msg_.heading_enable = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_altitude_enable(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_depth_enable
{
public:
  explicit Init_Go2pointPrimitiveService_Request_depth_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_Go2pointPrimitiveService_Request_heading_enable depth_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request::_depth_enable_type arg)
  {
    msg_.depth_enable = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_heading_enable(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_east_enable
{
public:
  explicit Init_Go2pointPrimitiveService_Request_east_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_Go2pointPrimitiveService_Request_depth_enable east_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request::_east_enable_type arg)
  {
    msg_.east_enable = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_depth_enable(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_north_enable
{
public:
  explicit Init_Go2pointPrimitiveService_Request_north_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_Go2pointPrimitiveService_Request_east_enable north_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request::_north_enable_type arg)
  {
    msg_.north_enable = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_east_enable(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_victory_radius
{
public:
  explicit Init_Go2pointPrimitiveService_Request_victory_radius(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_Go2pointPrimitiveService_Request_north_enable victory_radius(::labust_msgs::srv::Go2pointPrimitiveService_Request::_victory_radius_type arg)
  {
    msg_.victory_radius = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_north_enable(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_speed
{
public:
  explicit Init_Go2pointPrimitiveService_Request_speed(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_Go2pointPrimitiveService_Request_victory_radius speed(::labust_msgs::srv::Go2pointPrimitiveService_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_victory_radius(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_heading
{
public:
  explicit Init_Go2pointPrimitiveService_Request_heading(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_Go2pointPrimitiveService_Request_speed heading(::labust_msgs::srv::Go2pointPrimitiveService_Request::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_speed(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_point
{
public:
  explicit Init_Go2pointPrimitiveService_Request_point(::labust_msgs::srv::Go2pointPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_Go2pointPrimitiveService_Request_heading point(::labust_msgs::srv::Go2pointPrimitiveService_Request::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_heading(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

class Init_Go2pointPrimitiveService_Request_fully_actuated_enable
{
public:
  Init_Go2pointPrimitiveService_Request_fully_actuated_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Go2pointPrimitiveService_Request_point fully_actuated_enable(::labust_msgs::srv::Go2pointPrimitiveService_Request::_fully_actuated_enable_type arg)
  {
    msg_.fully_actuated_enable = std::move(arg);
    return Init_Go2pointPrimitiveService_Request_point(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::Go2pointPrimitiveService_Request>()
{
  return labust_msgs::srv::builder::Init_Go2pointPrimitiveService_Request_fully_actuated_enable();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_Go2pointPrimitiveService_Response_status
{
public:
  Init_Go2pointPrimitiveService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::Go2pointPrimitiveService_Response status(::labust_msgs::srv::Go2pointPrimitiveService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointPrimitiveService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::Go2pointPrimitiveService_Response>()
{
  return labust_msgs::srv::builder::Init_Go2pointPrimitiveService_Response_status();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__GO2POINT_PRIMITIVE_SERVICE__BUILDER_HPP_
