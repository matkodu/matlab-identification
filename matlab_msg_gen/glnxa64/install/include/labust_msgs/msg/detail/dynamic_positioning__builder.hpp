// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/DynamicPositioning.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__BUILDER_HPP_

#include "labust_msgs/msg/detail/dynamic_positioning__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicPositioning_heading
{
public:
  explicit Init_DynamicPositioning_heading(::labust_msgs::msg::DynamicPositioning & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::DynamicPositioning heading(::labust_msgs::msg::DynamicPositioning::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::DynamicPositioning msg_;
};

class Init_DynamicPositioning_point
{
public:
  Init_DynamicPositioning_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicPositioning_heading point(::labust_msgs::msg::DynamicPositioning::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_DynamicPositioning_heading(msg_);
  }

private:
  ::labust_msgs::msg::DynamicPositioning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::DynamicPositioning>()
{
  return labust_msgs::msg::builder::Init_DynamicPositioning_point();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__BUILDER_HPP_
