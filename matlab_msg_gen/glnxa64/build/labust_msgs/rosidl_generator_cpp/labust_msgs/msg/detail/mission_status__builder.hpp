// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_

#include "labust_msgs/msg/detail/mission_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionStatus_manual_enabled
{
public:
  explicit Init_MissionStatus_manual_enabled(::labust_msgs::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::MissionStatus manual_enabled(::labust_msgs::msg::MissionStatus::_manual_enabled_type arg)
  {
    msg_.manual_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::MissionStatus msg_;
};

class Init_MissionStatus_mission_execution_ready
{
public:
  explicit Init_MissionStatus_mission_execution_ready(::labust_msgs::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_manual_enabled mission_execution_ready(::labust_msgs::msg::MissionStatus::_mission_execution_ready_type arg)
  {
    msg_.mission_execution_ready = std::move(arg);
    return Init_MissionStatus_manual_enabled(msg_);
  }

private:
  ::labust_msgs::msg::MissionStatus msg_;
};

class Init_MissionStatus_active_primitive
{
public:
  explicit Init_MissionStatus_active_primitive(::labust_msgs::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  Init_MissionStatus_mission_execution_ready active_primitive(::labust_msgs::msg::MissionStatus::_active_primitive_type arg)
  {
    msg_.active_primitive = std::move(arg);
    return Init_MissionStatus_mission_execution_ready(msg_);
  }

private:
  ::labust_msgs::msg::MissionStatus msg_;
};

class Init_MissionStatus_mission_active
{
public:
  Init_MissionStatus_mission_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionStatus_active_primitive mission_active(::labust_msgs::msg::MissionStatus::_mission_active_type arg)
  {
    msg_.mission_active = std::move(arg);
    return Init_MissionStatus_active_primitive(msg_);
  }

private:
  ::labust_msgs::msg::MissionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::MissionStatus>()
{
  return labust_msgs::msg::builder::Init_MissionStatus_mission_active();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
