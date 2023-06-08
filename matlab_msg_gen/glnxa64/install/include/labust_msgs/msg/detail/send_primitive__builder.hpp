// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/SendPrimitive.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__SEND_PRIMITIVE__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__SEND_PRIMITIVE__BUILDER_HPP_

#include "labust_msgs/msg/detail/send_primitive__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_SendPrimitive_primitive_string
{
public:
  explicit Init_SendPrimitive_primitive_string(::labust_msgs::msg::SendPrimitive & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::SendPrimitive primitive_string(::labust_msgs::msg::SendPrimitive::_primitive_string_type arg)
  {
    msg_.primitive_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::SendPrimitive msg_;
};

class Init_SendPrimitive_event
{
public:
  explicit Init_SendPrimitive_event(::labust_msgs::msg::SendPrimitive & msg)
  : msg_(msg)
  {}
  Init_SendPrimitive_primitive_string event(::labust_msgs::msg::SendPrimitive::_event_type arg)
  {
    msg_.event = std::move(arg);
    return Init_SendPrimitive_primitive_string(msg_);
  }

private:
  ::labust_msgs::msg::SendPrimitive msg_;
};

class Init_SendPrimitive_primitive_data
{
public:
  explicit Init_SendPrimitive_primitive_data(::labust_msgs::msg::SendPrimitive & msg)
  : msg_(msg)
  {}
  Init_SendPrimitive_event primitive_data(::labust_msgs::msg::SendPrimitive::_primitive_data_type arg)
  {
    msg_.primitive_data = std::move(arg);
    return Init_SendPrimitive_event(msg_);
  }

private:
  ::labust_msgs::msg::SendPrimitive msg_;
};

class Init_SendPrimitive_primitive_id
{
public:
  Init_SendPrimitive_primitive_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendPrimitive_primitive_data primitive_id(::labust_msgs::msg::SendPrimitive::_primitive_id_type arg)
  {
    msg_.primitive_id = std::move(arg);
    return Init_SendPrimitive_primitive_data(msg_);
  }

private:
  ::labust_msgs::msg::SendPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::SendPrimitive>()
{
  return labust_msgs::msg::builder::Init_SendPrimitive_primitive_id();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__SEND_PRIMITIVE__BUILDER_HPP_
