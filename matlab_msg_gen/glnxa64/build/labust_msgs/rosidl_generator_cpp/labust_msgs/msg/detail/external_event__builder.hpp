// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/ExternalEvent.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__BUILDER_HPP_

#include "labust_msgs/msg/detail/external_event__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_ExternalEvent_value
{
public:
  explicit Init_ExternalEvent_value(::labust_msgs::msg::ExternalEvent & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::ExternalEvent value(::labust_msgs::msg::ExternalEvent::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::ExternalEvent msg_;
};

class Init_ExternalEvent_description
{
public:
  explicit Init_ExternalEvent_description(::labust_msgs::msg::ExternalEvent & msg)
  : msg_(msg)
  {}
  Init_ExternalEvent_value description(::labust_msgs::msg::ExternalEvent::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_ExternalEvent_value(msg_);
  }

private:
  ::labust_msgs::msg::ExternalEvent msg_;
};

class Init_ExternalEvent_id
{
public:
  Init_ExternalEvent_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExternalEvent_description id(::labust_msgs::msg::ExternalEvent::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ExternalEvent_description(msg_);
  }

private:
  ::labust_msgs::msg::ExternalEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::ExternalEvent>()
{
  return labust_msgs::msg::builder::Init_ExternalEvent_id();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__BUILDER_HPP_
