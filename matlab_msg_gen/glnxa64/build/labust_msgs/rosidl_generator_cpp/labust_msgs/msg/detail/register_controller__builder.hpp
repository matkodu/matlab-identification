// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/RegisterController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__REGISTER_CONTROLLER__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__REGISTER_CONTROLLER__BUILDER_HPP_

#include "labust_msgs/msg/detail/register_controller__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_RegisterController_used_nu
{
public:
  explicit Init_RegisterController_used_nu(::labust_msgs::msg::RegisterController & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::RegisterController used_nu(::labust_msgs::msg::RegisterController::_used_nu_type arg)
  {
    msg_.used_nu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::RegisterController msg_;
};

class Init_RegisterController_used_tau
{
public:
  explicit Init_RegisterController_used_tau(::labust_msgs::msg::RegisterController & msg)
  : msg_(msg)
  {}
  Init_RegisterController_used_nu used_tau(::labust_msgs::msg::RegisterController::_used_tau_type arg)
  {
    msg_.used_tau = std::move(arg);
    return Init_RegisterController_used_nu(msg_);
  }

private:
  ::labust_msgs::msg::RegisterController msg_;
};

class Init_RegisterController_name
{
public:
  explicit Init_RegisterController_name(::labust_msgs::msg::RegisterController & msg)
  : msg_(msg)
  {}
  Init_RegisterController_used_tau name(::labust_msgs::msg::RegisterController::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RegisterController_used_tau(msg_);
  }

private:
  ::labust_msgs::msg::RegisterController msg_;
};

class Init_RegisterController_parent
{
public:
  Init_RegisterController_parent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterController_name parent(::labust_msgs::msg::RegisterController::_parent_type arg)
  {
    msg_.parent = std::move(arg);
    return Init_RegisterController_name(msg_);
  }

private:
  ::labust_msgs::msg::RegisterController msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::RegisterController>()
{
  return labust_msgs::msg::builder::Init_RegisterController_parent();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__REGISTER_CONTROLLER__BUILDER_HPP_
