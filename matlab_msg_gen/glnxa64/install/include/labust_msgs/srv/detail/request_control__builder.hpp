// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/RequestControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__BUILDER_HPP_

#include "labust_msgs/srv/detail/request_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestControl_Request_tau_desired_mode
{
public:
  explicit Init_RequestControl_Request_tau_desired_mode(::labust_msgs::srv::RequestControl_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::RequestControl_Request tau_desired_mode(::labust_msgs::srv::RequestControl_Request::_tau_desired_mode_type arg)
  {
    msg_.tau_desired_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RequestControl_Request msg_;
};

class Init_RequestControl_Request_nu_desired_mode
{
public:
  explicit Init_RequestControl_Request_nu_desired_mode(::labust_msgs::srv::RequestControl_Request & msg)
  : msg_(msg)
  {}
  Init_RequestControl_Request_tau_desired_mode nu_desired_mode(::labust_msgs::srv::RequestControl_Request::_nu_desired_mode_type arg)
  {
    msg_.nu_desired_mode = std::move(arg);
    return Init_RequestControl_Request_tau_desired_mode(msg_);
  }

private:
  ::labust_msgs::srv::RequestControl_Request msg_;
};

class Init_RequestControl_Request_identity
{
public:
  Init_RequestControl_Request_identity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestControl_Request_nu_desired_mode identity(::labust_msgs::srv::RequestControl_Request::_identity_type arg)
  {
    msg_.identity = std::move(arg);
    return Init_RequestControl_Request_nu_desired_mode(msg_);
  }

private:
  ::labust_msgs::srv::RequestControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RequestControl_Request>()
{
  return labust_msgs::srv::builder::Init_RequestControl_Request_identity();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestControl_Response_message
{
public:
  explicit Init_RequestControl_Response_message(::labust_msgs::srv::RequestControl_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::RequestControl_Response message(::labust_msgs::srv::RequestControl_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RequestControl_Response msg_;
};

class Init_RequestControl_Response_identity_token
{
public:
  explicit Init_RequestControl_Response_identity_token(::labust_msgs::srv::RequestControl_Response & msg)
  : msg_(msg)
  {}
  Init_RequestControl_Response_message identity_token(::labust_msgs::srv::RequestControl_Response::_identity_token_type arg)
  {
    msg_.identity_token = std::move(arg);
    return Init_RequestControl_Response_message(msg_);
  }

private:
  ::labust_msgs::srv::RequestControl_Response msg_;
};

class Init_RequestControl_Response_success
{
public:
  Init_RequestControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestControl_Response_identity_token success(::labust_msgs::srv::RequestControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RequestControl_Response_identity_token(msg_);
  }

private:
  ::labust_msgs::srv::RequestControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RequestControl_Response>()
{
  return labust_msgs::srv::builder::Init_RequestControl_Response_success();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__BUILDER_HPP_
