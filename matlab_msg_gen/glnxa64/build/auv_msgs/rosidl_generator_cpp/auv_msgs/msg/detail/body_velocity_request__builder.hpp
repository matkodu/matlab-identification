// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auv_msgs:msg/BodyVelocityRequest.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__BODY_VELOCITY_REQUEST__BUILDER_HPP_
#define AUV_MSGS__MSG__DETAIL__BODY_VELOCITY_REQUEST__BUILDER_HPP_

#include "auv_msgs/msg/detail/body_velocity_request__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace auv_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyVelocityRequest_disable_axis
{
public:
  explicit Init_BodyVelocityRequest_disable_axis(::auv_msgs::msg::BodyVelocityRequest & msg)
  : msg_(msg)
  {}
  ::auv_msgs::msg::BodyVelocityRequest disable_axis(::auv_msgs::msg::BodyVelocityRequest::_disable_axis_type arg)
  {
    msg_.disable_axis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_msgs::msg::BodyVelocityRequest msg_;
};

class Init_BodyVelocityRequest_twist
{
public:
  explicit Init_BodyVelocityRequest_twist(::auv_msgs::msg::BodyVelocityRequest & msg)
  : msg_(msg)
  {}
  Init_BodyVelocityRequest_disable_axis twist(::auv_msgs::msg::BodyVelocityRequest::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_BodyVelocityRequest_disable_axis(msg_);
  }

private:
  ::auv_msgs::msg::BodyVelocityRequest msg_;
};

class Init_BodyVelocityRequest_header
{
public:
  Init_BodyVelocityRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyVelocityRequest_twist header(::auv_msgs::msg::BodyVelocityRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BodyVelocityRequest_twist(msg_);
  }

private:
  ::auv_msgs::msg::BodyVelocityRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_msgs::msg::BodyVelocityRequest>()
{
  return auv_msgs::msg::builder::Init_BodyVelocityRequest_header();
}

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__BODY_VELOCITY_REQUEST__BUILDER_HPP_
