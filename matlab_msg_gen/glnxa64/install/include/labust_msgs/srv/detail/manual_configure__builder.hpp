// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/ManualConfigure.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__BUILDER_HPP_

#include "labust_msgs/srv/detail/manual_configure__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_ManualConfigure_Request_configuration
{
public:
  Init_ManualConfigure_Request_configuration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::ManualConfigure_Request configuration(::labust_msgs::srv::ManualConfigure_Request::_configuration_type arg)
  {
    msg_.configuration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::ManualConfigure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::ManualConfigure_Request>()
{
  return labust_msgs::srv::builder::Init_ManualConfigure_Request_configuration();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_ManualConfigure_Response_current_configuration
{
public:
  Init_ManualConfigure_Response_current_configuration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::ManualConfigure_Response current_configuration(::labust_msgs::srv::ManualConfigure_Response::_current_configuration_type arg)
  {
    msg_.current_configuration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::ManualConfigure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::ManualConfigure_Response>()
{
  return labust_msgs::srv::builder::Init_ManualConfigure_Response_current_configuration();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__BUILDER_HPP_
