// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/LawnmoverService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__BUILDER_HPP_

#include "labust_msgs/srv/detail/lawnmover_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_LawnmoverService_Request_bearing
{
public:
  explicit Init_LawnmoverService_Request_bearing(::labust_msgs::srv::LawnmoverService_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::LawnmoverService_Request bearing(::labust_msgs::srv::LawnmoverService_Request::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::LawnmoverService_Request msg_;
};

class Init_LawnmoverService_Request_horizontal_step
{
public:
  explicit Init_LawnmoverService_Request_horizontal_step(::labust_msgs::srv::LawnmoverService_Request & msg)
  : msg_(msg)
  {}
  Init_LawnmoverService_Request_bearing horizontal_step(::labust_msgs::srv::LawnmoverService_Request::_horizontal_step_type arg)
  {
    msg_.horizontal_step = std::move(arg);
    return Init_LawnmoverService_Request_bearing(msg_);
  }

private:
  ::labust_msgs::srv::LawnmoverService_Request msg_;
};

class Init_LawnmoverService_Request_victory_radius
{
public:
  explicit Init_LawnmoverService_Request_victory_radius(::labust_msgs::srv::LawnmoverService_Request & msg)
  : msg_(msg)
  {}
  Init_LawnmoverService_Request_horizontal_step victory_radius(::labust_msgs::srv::LawnmoverService_Request::_victory_radius_type arg)
  {
    msg_.victory_radius = std::move(arg);
    return Init_LawnmoverService_Request_horizontal_step(msg_);
  }

private:
  ::labust_msgs::srv::LawnmoverService_Request msg_;
};

class Init_LawnmoverService_Request_speed
{
public:
  explicit Init_LawnmoverService_Request_speed(::labust_msgs::srv::LawnmoverService_Request & msg)
  : msg_(msg)
  {}
  Init_LawnmoverService_Request_victory_radius speed(::labust_msgs::srv::LawnmoverService_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_LawnmoverService_Request_victory_radius(msg_);
  }

private:
  ::labust_msgs::srv::LawnmoverService_Request msg_;
};

class Init_LawnmoverService_Request_start_position
{
public:
  explicit Init_LawnmoverService_Request_start_position(::labust_msgs::srv::LawnmoverService_Request & msg)
  : msg_(msg)
  {}
  Init_LawnmoverService_Request_speed start_position(::labust_msgs::srv::LawnmoverService_Request::_start_position_type arg)
  {
    msg_.start_position = std::move(arg);
    return Init_LawnmoverService_Request_speed(msg_);
  }

private:
  ::labust_msgs::srv::LawnmoverService_Request msg_;
};

class Init_LawnmoverService_Request_length
{
public:
  explicit Init_LawnmoverService_Request_length(::labust_msgs::srv::LawnmoverService_Request & msg)
  : msg_(msg)
  {}
  Init_LawnmoverService_Request_start_position length(::labust_msgs::srv::LawnmoverService_Request::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_LawnmoverService_Request_start_position(msg_);
  }

private:
  ::labust_msgs::srv::LawnmoverService_Request msg_;
};

class Init_LawnmoverService_Request_width
{
public:
  Init_LawnmoverService_Request_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LawnmoverService_Request_length width(::labust_msgs::srv::LawnmoverService_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_LawnmoverService_Request_length(msg_);
  }

private:
  ::labust_msgs::srv::LawnmoverService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::LawnmoverService_Request>()
{
  return labust_msgs::srv::builder::Init_LawnmoverService_Request_width();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_LawnmoverService_Response_status
{
public:
  Init_LawnmoverService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::LawnmoverService_Response status(::labust_msgs::srv::LawnmoverService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::LawnmoverService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::LawnmoverService_Response>()
{
  return labust_msgs::srv::builder::Init_LawnmoverService_Response_status();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__BUILDER_HPP_
