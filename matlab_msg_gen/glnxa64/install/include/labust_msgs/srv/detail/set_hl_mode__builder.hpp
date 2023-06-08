// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/SetHLMode.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__BUILDER_HPP_

#include "labust_msgs/srv/detail/set_hl_mode__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_SetHLMode_Request_yaw
{
public:
  explicit Init_SetHLMode_Request_yaw(::labust_msgs::srv::SetHLMode_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::SetHLMode_Request yaw(::labust_msgs::srv::SetHLMode_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::SetHLMode_Request msg_;
};

class Init_SetHLMode_Request_surge
{
public:
  explicit Init_SetHLMode_Request_surge(::labust_msgs::srv::SetHLMode_Request & msg)
  : msg_(msg)
  {}
  Init_SetHLMode_Request_yaw surge(::labust_msgs::srv::SetHLMode_Request::_surge_type arg)
  {
    msg_.surge = std::move(arg);
    return Init_SetHLMode_Request_yaw(msg_);
  }

private:
  ::labust_msgs::srv::SetHLMode_Request msg_;
};

class Init_SetHLMode_Request_radius
{
public:
  explicit Init_SetHLMode_Request_radius(::labust_msgs::srv::SetHLMode_Request & msg)
  : msg_(msg)
  {}
  Init_SetHLMode_Request_surge radius(::labust_msgs::srv::SetHLMode_Request::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_SetHLMode_Request_surge(msg_);
  }

private:
  ::labust_msgs::srv::SetHLMode_Request msg_;
};

class Init_SetHLMode_Request_ref_point
{
public:
  explicit Init_SetHLMode_Request_ref_point(::labust_msgs::srv::SetHLMode_Request & msg)
  : msg_(msg)
  {}
  Init_SetHLMode_Request_radius ref_point(::labust_msgs::srv::SetHLMode_Request::_ref_point_type arg)
  {
    msg_.ref_point = std::move(arg);
    return Init_SetHLMode_Request_radius(msg_);
  }

private:
  ::labust_msgs::srv::SetHLMode_Request msg_;
};

class Init_SetHLMode_Request_mode
{
public:
  Init_SetHLMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetHLMode_Request_ref_point mode(::labust_msgs::srv::SetHLMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_SetHLMode_Request_ref_point(msg_);
  }

private:
  ::labust_msgs::srv::SetHLMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::SetHLMode_Request>()
{
  return labust_msgs::srv::builder::Init_SetHLMode_Request_mode();
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
auto build<::labust_msgs::srv::SetHLMode_Response>()
{
  return ::labust_msgs::srv::SetHLMode_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__BUILDER_HPP_
