// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/DockingService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__DOCKING_SERVICE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__DOCKING_SERVICE__BUILDER_HPP_

#include "labust_msgs/srv/detail/docking_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_DockingService_Request_docking_slot
{
public:
  explicit Init_DockingService_Request_docking_slot(::labust_msgs::srv::DockingService_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::DockingService_Request docking_slot(::labust_msgs::srv::DockingService_Request::_docking_slot_type arg)
  {
    msg_.docking_slot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::DockingService_Request msg_;
};

class Init_DockingService_Request_docking_action
{
public:
  Init_DockingService_Request_docking_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockingService_Request_docking_slot docking_action(::labust_msgs::srv::DockingService_Request::_docking_action_type arg)
  {
    msg_.docking_action = std::move(arg);
    return Init_DockingService_Request_docking_slot(msg_);
  }

private:
  ::labust_msgs::srv::DockingService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::DockingService_Request>()
{
  return labust_msgs::srv::builder::Init_DockingService_Request_docking_action();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_DockingService_Response_status
{
public:
  Init_DockingService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::DockingService_Response status(::labust_msgs::srv::DockingService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::DockingService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::DockingService_Response>()
{
  return labust_msgs::srv::builder::Init_DockingService_Response_status();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__DOCKING_SERVICE__BUILDER_HPP_
