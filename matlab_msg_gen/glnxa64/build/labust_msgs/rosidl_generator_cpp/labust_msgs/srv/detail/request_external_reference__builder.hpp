// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/RequestExternalReference.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REQUEST_EXTERNAL_REFERENCE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__REQUEST_EXTERNAL_REFERENCE__BUILDER_HPP_

#include "labust_msgs/srv/detail/request_external_reference__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestExternalReference_Request_identity
{
public:
  explicit Init_RequestExternalReference_Request_identity(::labust_msgs::srv::RequestExternalReference_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::RequestExternalReference_Request identity(::labust_msgs::srv::RequestExternalReference_Request::_identity_type arg)
  {
    msg_.identity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RequestExternalReference_Request msg_;
};

class Init_RequestExternalReference_Request_control_modes
{
public:
  Init_RequestExternalReference_Request_control_modes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestExternalReference_Request_identity control_modes(::labust_msgs::srv::RequestExternalReference_Request::_control_modes_type arg)
  {
    msg_.control_modes = std::move(arg);
    return Init_RequestExternalReference_Request_identity(msg_);
  }

private:
  ::labust_msgs::srv::RequestExternalReference_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RequestExternalReference_Request>()
{
  return labust_msgs::srv::builder::Init_RequestExternalReference_Request_control_modes();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestExternalReference_Response_message
{
public:
  explicit Init_RequestExternalReference_Response_message(::labust_msgs::srv::RequestExternalReference_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::RequestExternalReference_Response message(::labust_msgs::srv::RequestExternalReference_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RequestExternalReference_Response msg_;
};

class Init_RequestExternalReference_Response_identity_token
{
public:
  explicit Init_RequestExternalReference_Response_identity_token(::labust_msgs::srv::RequestExternalReference_Response & msg)
  : msg_(msg)
  {}
  Init_RequestExternalReference_Response_message identity_token(::labust_msgs::srv::RequestExternalReference_Response::_identity_token_type arg)
  {
    msg_.identity_token = std::move(arg);
    return Init_RequestExternalReference_Response_message(msg_);
  }

private:
  ::labust_msgs::srv::RequestExternalReference_Response msg_;
};

class Init_RequestExternalReference_Response_success
{
public:
  Init_RequestExternalReference_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestExternalReference_Response_identity_token success(::labust_msgs::srv::RequestExternalReference_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RequestExternalReference_Response_identity_token(msg_);
  }

private:
  ::labust_msgs::srv::RequestExternalReference_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RequestExternalReference_Response>()
{
  return labust_msgs::srv::builder::Init_RequestExternalReference_Response_success();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__REQUEST_EXTERNAL_REFERENCE__BUILDER_HPP_
