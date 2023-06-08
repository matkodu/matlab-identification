// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/RegisterControllerV3.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__BUILDER_HPP_

#include "labust_msgs/srv/detail/register_controller_v3__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterControllerV3_Request_used_resources
{
public:
  explicit Init_RegisterControllerV3_Request_used_resources(::labust_msgs::srv::RegisterControllerV3_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::RegisterControllerV3_Request used_resources(::labust_msgs::srv::RegisterControllerV3_Request::_used_resources_type arg)
  {
    msg_.used_resources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV3_Request msg_;
};

class Init_RegisterControllerV3_Request_used_other
{
public:
  explicit Init_RegisterControllerV3_Request_used_other(::labust_msgs::srv::RegisterControllerV3_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterControllerV3_Request_used_resources used_other(::labust_msgs::srv::RegisterControllerV3_Request::_used_other_type arg)
  {
    msg_.used_other = std::move(arg);
    return Init_RegisterControllerV3_Request_used_resources(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV3_Request msg_;
};

class Init_RegisterControllerV3_Request_used_tau
{
public:
  explicit Init_RegisterControllerV3_Request_used_tau(::labust_msgs::srv::RegisterControllerV3_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterControllerV3_Request_used_other used_tau(::labust_msgs::srv::RegisterControllerV3_Request::_used_tau_type arg)
  {
    msg_.used_tau = std::move(arg);
    return Init_RegisterControllerV3_Request_used_other(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV3_Request msg_;
};

class Init_RegisterControllerV3_Request_has_manual
{
public:
  explicit Init_RegisterControllerV3_Request_has_manual(::labust_msgs::srv::RegisterControllerV3_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterControllerV3_Request_used_tau has_manual(::labust_msgs::srv::RegisterControllerV3_Request::_has_manual_type arg)
  {
    msg_.has_manual = std::move(arg);
    return Init_RegisterControllerV3_Request_used_tau(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV3_Request msg_;
};

class Init_RegisterControllerV3_Request_name
{
public:
  explicit Init_RegisterControllerV3_Request_name(::labust_msgs::srv::RegisterControllerV3_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterControllerV3_Request_has_manual name(::labust_msgs::srv::RegisterControllerV3_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RegisterControllerV3_Request_has_manual(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV3_Request msg_;
};

class Init_RegisterControllerV3_Request_parent
{
public:
  Init_RegisterControllerV3_Request_parent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterControllerV3_Request_name parent(::labust_msgs::srv::RegisterControllerV3_Request::_parent_type arg)
  {
    msg_.parent = std::move(arg);
    return Init_RegisterControllerV3_Request_name(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV3_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RegisterControllerV3_Request>()
{
  return labust_msgs::srv::builder::Init_RegisterControllerV3_Request_parent();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterControllerV3_Response_reply
{
public:
  Init_RegisterControllerV3_Response_reply()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::RegisterControllerV3_Response reply(::labust_msgs::srv::RegisterControllerV3_Response::_reply_type arg)
  {
    msg_.reply = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV3_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RegisterControllerV3_Response>()
{
  return labust_msgs::srv::builder::Init_RegisterControllerV3_Response_reply();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__BUILDER_HPP_
