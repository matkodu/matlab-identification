// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/EnableControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__ENABLE_CONTROL__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__ENABLE_CONTROL__BUILDER_HPP_

#include "labust_msgs/srv/detail/enable_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_EnableControl_Request_control_name
{
public:
  explicit Init_EnableControl_Request_control_name(::labust_msgs::srv::EnableControl_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::EnableControl_Request control_name(::labust_msgs::srv::EnableControl_Request::_control_name_type arg)
  {
    msg_.control_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::EnableControl_Request msg_;
};

class Init_EnableControl_Request_identity_token
{
public:
  explicit Init_EnableControl_Request_identity_token(::labust_msgs::srv::EnableControl_Request & msg)
  : msg_(msg)
  {}
  Init_EnableControl_Request_control_name identity_token(::labust_msgs::srv::EnableControl_Request::_identity_token_type arg)
  {
    msg_.identity_token = std::move(arg);
    return Init_EnableControl_Request_control_name(msg_);
  }

private:
  ::labust_msgs::srv::EnableControl_Request msg_;
};

class Init_EnableControl_Request_enable
{
public:
  Init_EnableControl_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnableControl_Request_identity_token enable(::labust_msgs::srv::EnableControl_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_EnableControl_Request_identity_token(msg_);
  }

private:
  ::labust_msgs::srv::EnableControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::EnableControl_Request>()
{
  return labust_msgs::srv::builder::Init_EnableControl_Request_enable();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::EnableControl_Response>()
{
  return ::labust_msgs::srv::EnableControl_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__ENABLE_CONTROL__BUILDER_HPP_
