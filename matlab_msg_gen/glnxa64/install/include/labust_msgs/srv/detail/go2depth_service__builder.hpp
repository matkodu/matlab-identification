// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/Go2depthService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__GO2DEPTH_SERVICE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__GO2DEPTH_SERVICE__BUILDER_HPP_

#include "labust_msgs/srv/detail/go2depth_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_Go2depthService_Request_depth
{
public:
  Init_Go2depthService_Request_depth()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::Go2depthService_Request depth(::labust_msgs::srv::Go2depthService_Request::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::Go2depthService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::Go2depthService_Request>()
{
  return labust_msgs::srv::builder::Init_Go2depthService_Request_depth();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_Go2depthService_Response_status
{
public:
  Init_Go2depthService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::Go2depthService_Response status(::labust_msgs::srv::Go2depthService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::Go2depthService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::Go2depthService_Response>()
{
  return labust_msgs::srv::builder::Init_Go2depthService_Response_status();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__GO2DEPTH_SERVICE__BUILDER_HPP_
