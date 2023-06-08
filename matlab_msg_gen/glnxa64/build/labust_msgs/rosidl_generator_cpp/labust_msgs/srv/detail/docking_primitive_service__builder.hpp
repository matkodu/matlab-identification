// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/DockingPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__DOCKING_PRIMITIVE_SERVICE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__DOCKING_PRIMITIVE_SERVICE__BUILDER_HPP_

#include "labust_msgs/srv/detail/docking_primitive_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_DockingPrimitiveService_Request_surge_stdev
{
public:
  explicit Init_DockingPrimitiveService_Request_surge_stdev(::labust_msgs::srv::DockingPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::DockingPrimitiveService_Request surge_stdev(::labust_msgs::srv::DockingPrimitiveService_Request::_surge_stdev_type arg)
  {
    msg_.surge_stdev = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::DockingPrimitiveService_Request msg_;
};

class Init_DockingPrimitiveService_Request_max_surge_speed
{
public:
  explicit Init_DockingPrimitiveService_Request_max_surge_speed(::labust_msgs::srv::DockingPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DockingPrimitiveService_Request_surge_stdev max_surge_speed(::labust_msgs::srv::DockingPrimitiveService_Request::_max_surge_speed_type arg)
  {
    msg_.max_surge_speed = std::move(arg);
    return Init_DockingPrimitiveService_Request_surge_stdev(msg_);
  }

private:
  ::labust_msgs::srv::DockingPrimitiveService_Request msg_;
};

class Init_DockingPrimitiveService_Request_max_yaw_rate
{
public:
  explicit Init_DockingPrimitiveService_Request_max_yaw_rate(::labust_msgs::srv::DockingPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DockingPrimitiveService_Request_max_surge_speed max_yaw_rate(::labust_msgs::srv::DockingPrimitiveService_Request::_max_yaw_rate_type arg)
  {
    msg_.max_yaw_rate = std::move(arg);
    return Init_DockingPrimitiveService_Request_max_surge_speed(msg_);
  }

private:
  ::labust_msgs::srv::DockingPrimitiveService_Request msg_;
};

class Init_DockingPrimitiveService_Request_search_yaw_rate
{
public:
  explicit Init_DockingPrimitiveService_Request_search_yaw_rate(::labust_msgs::srv::DockingPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DockingPrimitiveService_Request_max_yaw_rate search_yaw_rate(::labust_msgs::srv::DockingPrimitiveService_Request::_search_yaw_rate_type arg)
  {
    msg_.search_yaw_rate = std::move(arg);
    return Init_DockingPrimitiveService_Request_max_yaw_rate(msg_);
  }

private:
  ::labust_msgs::srv::DockingPrimitiveService_Request msg_;
};

class Init_DockingPrimitiveService_Request_docking_slot
{
public:
  explicit Init_DockingPrimitiveService_Request_docking_slot(::labust_msgs::srv::DockingPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_DockingPrimitiveService_Request_search_yaw_rate docking_slot(::labust_msgs::srv::DockingPrimitiveService_Request::_docking_slot_type arg)
  {
    msg_.docking_slot = std::move(arg);
    return Init_DockingPrimitiveService_Request_search_yaw_rate(msg_);
  }

private:
  ::labust_msgs::srv::DockingPrimitiveService_Request msg_;
};

class Init_DockingPrimitiveService_Request_docking_action
{
public:
  Init_DockingPrimitiveService_Request_docking_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockingPrimitiveService_Request_docking_slot docking_action(::labust_msgs::srv::DockingPrimitiveService_Request::_docking_action_type arg)
  {
    msg_.docking_action = std::move(arg);
    return Init_DockingPrimitiveService_Request_docking_slot(msg_);
  }

private:
  ::labust_msgs::srv::DockingPrimitiveService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::DockingPrimitiveService_Request>()
{
  return labust_msgs::srv::builder::Init_DockingPrimitiveService_Request_docking_action();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_DockingPrimitiveService_Response_status
{
public:
  Init_DockingPrimitiveService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::DockingPrimitiveService_Response status(::labust_msgs::srv::DockingPrimitiveService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::DockingPrimitiveService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::DockingPrimitiveService_Response>()
{
  return labust_msgs::srv::builder::Init_DockingPrimitiveService_Response_status();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__DOCKING_PRIMITIVE_SERVICE__BUILDER_HPP_
