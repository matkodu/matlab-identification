// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/Go2pointService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__GO2POINT_SERVICE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__GO2POINT_SERVICE__BUILDER_HPP_

#include "labust_msgs/srv/detail/go2point_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_Go2pointService_Request_speed
{
public:
  explicit Init_Go2pointService_Request_speed(::labust_msgs::srv::Go2pointService_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::Go2pointService_Request speed(::labust_msgs::srv::Go2pointService_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointService_Request msg_;
};

class Init_Go2pointService_Request_point
{
public:
  Init_Go2pointService_Request_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Go2pointService_Request_speed point(::labust_msgs::srv::Go2pointService_Request::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Go2pointService_Request_speed(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::Go2pointService_Request>()
{
  return labust_msgs::srv::builder::Init_Go2pointService_Request_point();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_Go2pointService_Response_status
{
public:
  Init_Go2pointService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::Go2pointService_Response status(::labust_msgs::srv::Go2pointService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::Go2pointService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::Go2pointService_Response>()
{
  return labust_msgs::srv::builder::Init_Go2pointService_Response_status();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__GO2POINT_SERVICE__BUILDER_HPP_
