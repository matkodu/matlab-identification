// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/GoalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__GOAL_DESCRIPTOR__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__GOAL_DESCRIPTOR__BUILDER_HPP_

#include "labust_msgs/msg/detail/goal_descriptor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalDescriptor_priority
{
public:
  explicit Init_GoalDescriptor_priority(::labust_msgs::msg::GoalDescriptor & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::GoalDescriptor priority(::labust_msgs::msg::GoalDescriptor::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::GoalDescriptor msg_;
};

class Init_GoalDescriptor_id
{
public:
  explicit Init_GoalDescriptor_id(::labust_msgs::msg::GoalDescriptor & msg)
  : msg_(msg)
  {}
  Init_GoalDescriptor_priority id(::labust_msgs::msg::GoalDescriptor::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_GoalDescriptor_priority(msg_);
  }

private:
  ::labust_msgs::msg::GoalDescriptor msg_;
};

class Init_GoalDescriptor_requester
{
public:
  Init_GoalDescriptor_requester()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalDescriptor_id requester(::labust_msgs::msg::GoalDescriptor::_requester_type arg)
  {
    msg_.requester = std::move(arg);
    return Init_GoalDescriptor_id(msg_);
  }

private:
  ::labust_msgs::msg::GoalDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::GoalDescriptor>()
{
  return labust_msgs::msg::builder::Init_GoalDescriptor_requester();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__GOAL_DESCRIPTOR__BUILDER_HPP_
