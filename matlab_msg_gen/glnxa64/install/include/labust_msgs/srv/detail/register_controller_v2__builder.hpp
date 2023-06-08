// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/RegisterControllerV2.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V2__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V2__BUILDER_HPP_

#include "labust_msgs/srv/detail/register_controller_v2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterControllerV2_Request_used_nu
{
public:
  explicit Init_RegisterControllerV2_Request_used_nu(::labust_msgs::srv::RegisterControllerV2_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::RegisterControllerV2_Request used_nu(::labust_msgs::srv::RegisterControllerV2_Request::_used_nu_type arg)
  {
    msg_.used_nu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV2_Request msg_;
};

class Init_RegisterControllerV2_Request_used_tau
{
public:
  explicit Init_RegisterControllerV2_Request_used_tau(::labust_msgs::srv::RegisterControllerV2_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterControllerV2_Request_used_nu used_tau(::labust_msgs::srv::RegisterControllerV2_Request::_used_tau_type arg)
  {
    msg_.used_tau = std::move(arg);
    return Init_RegisterControllerV2_Request_used_nu(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV2_Request msg_;
};

class Init_RegisterControllerV2_Request_srv_name
{
public:
  explicit Init_RegisterControllerV2_Request_srv_name(::labust_msgs::srv::RegisterControllerV2_Request & msg)
  : msg_(msg)
  {}
  Init_RegisterControllerV2_Request_used_tau srv_name(::labust_msgs::srv::RegisterControllerV2_Request::_srv_name_type arg)
  {
    msg_.srv_name = std::move(arg);
    return Init_RegisterControllerV2_Request_used_tau(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV2_Request msg_;
};

class Init_RegisterControllerV2_Request_name
{
public:
  Init_RegisterControllerV2_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterControllerV2_Request_srv_name name(::labust_msgs::srv::RegisterControllerV2_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RegisterControllerV2_Request_srv_name(msg_);
  }

private:
  ::labust_msgs::srv::RegisterControllerV2_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RegisterControllerV2_Request>()
{
  return labust_msgs::srv::builder::Init_RegisterControllerV2_Request_name();
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
auto build<::labust_msgs::srv::RegisterControllerV2_Response>()
{
  return ::labust_msgs::srv::RegisterControllerV2_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V2__BUILDER_HPP_
