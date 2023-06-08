// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_

#include "labust_msgs/msg/detail/controller_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerState_info
{
public:
  explicit Init_ControllerState_info(::labust_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::ControllerState info(::labust_msgs::msg::ControllerState::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_name
{
public:
  Init_ControllerState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerState_info name(::labust_msgs::msg::ControllerState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ControllerState_info(msg_);
  }

private:
  ::labust_msgs::msg::ControllerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::ControllerState>()
{
  return labust_msgs::msg::builder::Init_ControllerState_name();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_
