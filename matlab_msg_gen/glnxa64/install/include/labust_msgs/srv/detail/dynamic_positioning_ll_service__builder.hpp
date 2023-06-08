// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/DynamicPositioningLLService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_LL_SERVICE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_LL_SERVICE__BUILDER_HPP_

#include "labust_msgs/srv/detail/dynamic_positioning_ll_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_DynamicPositioningLLService_Request_heading
{
public:
  explicit Init_DynamicPositioningLLService_Request_heading(::labust_msgs::srv::DynamicPositioningLLService_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::DynamicPositioningLLService_Request heading(::labust_msgs::srv::DynamicPositioningLLService_Request::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningLLService_Request msg_;
};

class Init_DynamicPositioningLLService_Request_point
{
public:
  Init_DynamicPositioningLLService_Request_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicPositioningLLService_Request_heading point(::labust_msgs::srv::DynamicPositioningLLService_Request::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_DynamicPositioningLLService_Request_heading(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningLLService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::DynamicPositioningLLService_Request>()
{
  return labust_msgs::srv::builder::Init_DynamicPositioningLLService_Request_point();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_DynamicPositioningLLService_Response_status
{
public:
  Init_DynamicPositioningLLService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::DynamicPositioningLLService_Response status(::labust_msgs::srv::DynamicPositioningLLService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::DynamicPositioningLLService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::DynamicPositioningLLService_Response>()
{
  return labust_msgs::srv::builder::Init_DynamicPositioningLLService_Response_status();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_LL_SERVICE__BUILDER_HPP_
