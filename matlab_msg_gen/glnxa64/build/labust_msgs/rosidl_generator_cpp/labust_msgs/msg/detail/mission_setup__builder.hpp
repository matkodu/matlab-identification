// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/MissionSetup.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MISSION_SETUP__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__MISSION_SETUP__BUILDER_HPP_

#include "labust_msgs/msg/detail/mission_setup__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionSetup_mission_offset
{
public:
  explicit Init_MissionSetup_mission_offset(::labust_msgs::msg::MissionSetup & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::MissionSetup mission_offset(::labust_msgs::msg::MissionSetup::_mission_offset_type arg)
  {
    msg_.mission_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::MissionSetup msg_;
};

class Init_MissionSetup_mission_events
{
public:
  explicit Init_MissionSetup_mission_events(::labust_msgs::msg::MissionSetup & msg)
  : msg_(msg)
  {}
  Init_MissionSetup_mission_offset mission_events(::labust_msgs::msg::MissionSetup::_mission_events_type arg)
  {
    msg_.mission_events = std::move(arg);
    return Init_MissionSetup_mission_offset(msg_);
  }

private:
  ::labust_msgs::msg::MissionSetup msg_;
};

class Init_MissionSetup_mission_params
{
public:
  Init_MissionSetup_mission_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionSetup_mission_events mission_params(::labust_msgs::msg::MissionSetup::_mission_params_type arg)
  {
    msg_.mission_params = std::move(arg);
    return Init_MissionSetup_mission_events(msg_);
  }

private:
  ::labust_msgs::msg::MissionSetup msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::MissionSetup>()
{
  return labust_msgs::msg::builder::Init_MissionSetup_mission_params();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__MISSION_SETUP__BUILDER_HPP_
