// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/RegisterController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER__BUILDER_HPP_

#include "labust_msgs/srv/detail/register_controller__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterController_Request_used_derived
{
public:
  explicit Init_RegisterController_Request_used_derived(::labust_msgs::srv::RegisterController_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::RegisterController_Request used_derived(::labust_msgs::srv::RegisterController_Request::_used_derived_type arg)
  {
    msg_.used_derived = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RegisterController_Request msg_;
};

class Init_RegisterController_Request_used_meas
{
public:
  explicit Init_RegisterController_Request_used_meas(::labust_msgs::srv::RegisterController_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterController_Request_used_derived used_meas(::labust_msgs::srv::RegisterController_Request::_used_meas_type arg)
  {
    msg_.used_meas = std::move(arg);
    return Init_RegisterController_Request_used_derived(msg_);
  }

private:
  ::labust_msgs::srv::RegisterController_Request msg_;
};

class Init_RegisterController_Request_used_cnt
{
public:
  explicit Init_RegisterController_Request_used_cnt(::labust_msgs::srv::RegisterController_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterController_Request_used_meas used_cnt(::labust_msgs::srv::RegisterController_Request::_used_cnt_type arg)
  {
    msg_.used_cnt = std::move(arg);
    return Init_RegisterController_Request_used_meas(msg_);
  }

private:
  ::labust_msgs::srv::RegisterController_Request msg_;
};

class Init_RegisterController_Request_used_dofs
{
public:
  explicit Init_RegisterController_Request_used_dofs(::labust_msgs::srv::RegisterController_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterController_Request_used_cnt used_dofs(::labust_msgs::srv::RegisterController_Request::_used_dofs_type arg)
  {
    msg_.used_dofs = std::move(arg);
    return Init_RegisterController_Request_used_cnt(msg_);
  }

private:
  ::labust_msgs::srv::RegisterController_Request msg_;
};

class Init_RegisterController_Request_srv_name
{
public:
  explicit Init_RegisterController_Request_srv_name(::labust_msgs::srv::RegisterController_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterController_Request_used_dofs srv_name(::labust_msgs::srv::RegisterController_Request::_srv_name_type arg)
  {
    msg_.srv_name = std::move(arg);
    return Init_RegisterController_Request_used_dofs(msg_);
  }

private:
  ::labust_msgs::srv::RegisterController_Request msg_;
};

class Init_RegisterController_Request_name
{
public:
  Init_RegisterController_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterController_Request_srv_name name(::labust_msgs::srv::RegisterController_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RegisterController_Request_srv_name(msg_);
  }

private:
  ::labust_msgs::srv::RegisterController_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RegisterController_Request>()
{
  return labust_msgs::srv::builder::Init_RegisterController_Request_name();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterController_Response_unmet_cnt
{
public:
  explicit Init_RegisterController_Response_unmet_cnt(::labust_msgs::srv::RegisterController_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::RegisterController_Response unmet_cnt(::labust_msgs::srv::RegisterController_Response::_unmet_cnt_type arg)
  {
    msg_.unmet_cnt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RegisterController_Response msg_;
};

class Init_RegisterController_Response_accepted
{
public:
  Init_RegisterController_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterController_Response_unmet_cnt accepted(::labust_msgs::srv::RegisterController_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RegisterController_Response_unmet_cnt(msg_);
  }

private:
  ::labust_msgs::srv::RegisterController_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RegisterController_Response>()
{
  return labust_msgs::srv::builder::Init_RegisterController_Response_accepted();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER__BUILDER_HPP_
