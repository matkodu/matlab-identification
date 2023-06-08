// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/ConfigureVelocityController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__CONFIGURE_VELOCITY_CONTROLLER__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__CONFIGURE_VELOCITY_CONTROLLER__BUILDER_HPP_

#include "labust_msgs/srv/detail/configure_velocity_controller__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_ConfigureVelocityController_Request_desired_mode
{
public:
  explicit Init_ConfigureVelocityController_Request_desired_mode(::labust_msgs::srv::ConfigureVelocityController_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::ConfigureVelocityController_Request desired_mode(::labust_msgs::srv::ConfigureVelocityController_Request::_desired_mode_type arg)
  {
    msg_.desired_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::ConfigureVelocityController_Request msg_;
};

class Init_ConfigureVelocityController_Request_identity_token
{
public:
  Init_ConfigureVelocityController_Request_identity_token()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureVelocityController_Request_desired_mode identity_token(::labust_msgs::srv::ConfigureVelocityController_Request::_identity_token_type arg)
  {
    msg_.identity_token = std::move(arg);
    return Init_ConfigureVelocityController_Request_desired_mode(msg_);
  }

private:
  ::labust_msgs::srv::ConfigureVelocityController_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::ConfigureVelocityController_Request>()
{
  return labust_msgs::srv::builder::Init_ConfigureVelocityController_Request_identity_token();
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
auto build<::labust_msgs::srv::ConfigureVelocityController_Response>()
{
  return ::labust_msgs::srv::ConfigureVelocityController_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__CONFIGURE_VELOCITY_CONTROLLER__BUILDER_HPP_
