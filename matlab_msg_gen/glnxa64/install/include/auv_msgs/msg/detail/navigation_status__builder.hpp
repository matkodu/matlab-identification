// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auv_msgs:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__BUILDER_HPP_
#define AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__BUILDER_HPP_

#include "auv_msgs/msg/detail/navigation_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace auv_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigationStatus_status
{
public:
  explicit Init_NavigationStatus_status(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  ::auv_msgs::msg::NavigationStatus status(::auv_msgs::msg::NavigationStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_orientation_variance
{
public:
  explicit Init_NavigationStatus_orientation_variance(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  Init_NavigationStatus_status orientation_variance(::auv_msgs::msg::NavigationStatus::_orientation_variance_type arg)
  {
    msg_.orientation_variance = std::move(arg);
    return Init_NavigationStatus_status(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_position_variance
{
public:
  explicit Init_NavigationStatus_position_variance(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  Init_NavigationStatus_orientation_variance position_variance(::auv_msgs::msg::NavigationStatus::_position_variance_type arg)
  {
    msg_.position_variance = std::move(arg);
    return Init_NavigationStatus_orientation_variance(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_orientation_rate
{
public:
  explicit Init_NavigationStatus_orientation_rate(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  Init_NavigationStatus_position_variance orientation_rate(::auv_msgs::msg::NavigationStatus::_orientation_rate_type arg)
  {
    msg_.orientation_rate = std::move(arg);
    return Init_NavigationStatus_position_variance(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_orientation
{
public:
  explicit Init_NavigationStatus_orientation(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  Init_NavigationStatus_orientation_rate orientation(::auv_msgs::msg::NavigationStatus::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_NavigationStatus_orientation_rate(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_seafloor_velocity
{
public:
  explicit Init_NavigationStatus_seafloor_velocity(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  Init_NavigationStatus_orientation seafloor_velocity(::auv_msgs::msg::NavigationStatus::_seafloor_velocity_type arg)
  {
    msg_.seafloor_velocity = std::move(arg);
    return Init_NavigationStatus_orientation(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_body_velocity
{
public:
  explicit Init_NavigationStatus_body_velocity(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  Init_NavigationStatus_seafloor_velocity body_velocity(::auv_msgs::msg::NavigationStatus::_body_velocity_type arg)
  {
    msg_.body_velocity = std::move(arg);
    return Init_NavigationStatus_seafloor_velocity(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_altitude
{
public:
  explicit Init_NavigationStatus_altitude(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  Init_NavigationStatus_body_velocity altitude(::auv_msgs::msg::NavigationStatus::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_NavigationStatus_body_velocity(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_position
{
public:
  explicit Init_NavigationStatus_position(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  Init_NavigationStatus_altitude position(::auv_msgs::msg::NavigationStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_NavigationStatus_altitude(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_origin
{
public:
  explicit Init_NavigationStatus_origin(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  Init_NavigationStatus_position origin(::auv_msgs::msg::NavigationStatus::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_NavigationStatus_position(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_global_position
{
public:
  explicit Init_NavigationStatus_global_position(::auv_msgs::msg::NavigationStatus & msg)
  : msg_(msg)
  {}
  Init_NavigationStatus_origin global_position(::auv_msgs::msg::NavigationStatus::_global_position_type arg)
  {
    msg_.global_position = std::move(arg);
    return Init_NavigationStatus_origin(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

class Init_NavigationStatus_header
{
public:
  Init_NavigationStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationStatus_global_position header(::auv_msgs::msg::NavigationStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavigationStatus_global_position(msg_);
  }

private:
  ::auv_msgs::msg::NavigationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_msgs::msg::NavigationStatus>()
{
  return auv_msgs::msg::builder::Init_NavigationStatus_header();
}

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__BUILDER_HPP_
