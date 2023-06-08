// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/ControllerSelect.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__CONTROLLER_SELECT__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__CONTROLLER_SELECT__BUILDER_HPP_

#include "labust_msgs/srv/detail/controller_select__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_ControllerSelect_Request_state
{
public:
  explicit Init_ControllerSelect_Request_state(::labust_msgs::srv::ControllerSelect_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::ControllerSelect_Request state(::labust_msgs::srv::ControllerSelect_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::ControllerSelect_Request msg_;
};

class Init_ControllerSelect_Request_name
{
public:
  Init_ControllerSelect_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerSelect_Request_state name(::labust_msgs::srv::ControllerSelect_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ControllerSelect_Request_state(msg_);
  }

private:
  ::labust_msgs::srv::ControllerSelect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::ControllerSelect_Request>()
{
  return labust_msgs::srv::builder::Init_ControllerSelect_Request_name();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_ControllerSelect_Response_success
{
public:
  explicit Init_ControllerSelect_Response_success(::labust_msgs::srv::ControllerSelect_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::ControllerSelect_Response success(::labust_msgs::srv::ControllerSelect_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::ControllerSelect_Response msg_;
};

class Init_ControllerSelect_Response_name
{
public:
  Init_ControllerSelect_Response_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerSelect_Response_success name(::labust_msgs::srv::ControllerSelect_Response::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ControllerSelect_Response_success(msg_);
  }

private:
  ::labust_msgs::srv::ControllerSelect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::ControllerSelect_Response>()
{
  return labust_msgs::srv::builder::Init_ControllerSelect_Response_name();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__CONTROLLER_SELECT__BUILDER_HPP_
