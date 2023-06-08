// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auv_msgs:msg/NED.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NED__BUILDER_HPP_
#define AUV_MSGS__MSG__DETAIL__NED__BUILDER_HPP_

#include "auv_msgs/msg/detail/ned__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace auv_msgs
{

namespace msg
{

namespace builder
{

class Init_NED_depth
{
public:
  explicit Init_NED_depth(::auv_msgs::msg::NED & msg)
  : msg_(msg)
  {}
  ::auv_msgs::msg::NED depth(::auv_msgs::msg::NED::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_msgs::msg::NED msg_;
};

class Init_NED_east
{
public:
  explicit Init_NED_east(::auv_msgs::msg::NED & msg)
  : msg_(msg)
  {}
  Init_NED_depth east(::auv_msgs::msg::NED::_east_type arg)
  {
    msg_.east = std::move(arg);
    return Init_NED_depth(msg_);
  }

private:
  ::auv_msgs::msg::NED msg_;
};

class Init_NED_north
{
public:
  Init_NED_north()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NED_east north(::auv_msgs::msg::NED::_north_type arg)
  {
    msg_.north = std::move(arg);
    return Init_NED_east(msg_);
  }

private:
  ::auv_msgs::msg::NED msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_msgs::msg::NED>()
{
  return auv_msgs::msg::builder::Init_NED_north();
}

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__NED__BUILDER_HPP_
