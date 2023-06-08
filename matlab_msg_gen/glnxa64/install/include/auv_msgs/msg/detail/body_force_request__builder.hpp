// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auv_msgs:msg/BodyForceRequest.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__BODY_FORCE_REQUEST__BUILDER_HPP_
#define AUV_MSGS__MSG__DETAIL__BODY_FORCE_REQUEST__BUILDER_HPP_

#include "auv_msgs/msg/detail/body_force_request__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace auv_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyForceRequest_disable_axis
{
public:
  explicit Init_BodyForceRequest_disable_axis(::auv_msgs::msg::BodyForceRequest & msg)
  : msg_(msg)
  {}
  ::auv_msgs::msg::BodyForceRequest disable_axis(::auv_msgs::msg::BodyForceRequest::_disable_axis_type arg)
  {
    msg_.disable_axis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_msgs::msg::BodyForceRequest msg_;
};

class Init_BodyForceRequest_wrench
{
public:
  explicit Init_BodyForceRequest_wrench(::auv_msgs::msg::BodyForceRequest & msg)
  : msg_(msg)
  {}
  Init_BodyForceRequest_disable_axis wrench(::auv_msgs::msg::BodyForceRequest::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return Init_BodyForceRequest_disable_axis(msg_);
  }

private:
  ::auv_msgs::msg::BodyForceRequest msg_;
};

class Init_BodyForceRequest_header
{
public:
  Init_BodyForceRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyForceRequest_wrench header(::auv_msgs::msg::BodyForceRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BodyForceRequest_wrench(msg_);
  }

private:
  ::auv_msgs::msg::BodyForceRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_msgs::msg::BodyForceRequest>()
{
  return auv_msgs::msg::builder::Init_BodyForceRequest_header();
}

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__BODY_FORCE_REQUEST__BUILDER_HPP_
