// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/BodyVelocityReq.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__BODY_VELOCITY_REQ__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__BODY_VELOCITY_REQ__BUILDER_HPP_

#include "labust_msgs/msg/detail/body_velocity_req__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyVelocityReq_disable_axis
{
public:
  explicit Init_BodyVelocityReq_disable_axis(::labust_msgs::msg::BodyVelocityReq & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::BodyVelocityReq disable_axis(::labust_msgs::msg::BodyVelocityReq::_disable_axis_type arg)
  {
    msg_.disable_axis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::BodyVelocityReq msg_;
};

class Init_BodyVelocityReq_twist
{
public:
  explicit Init_BodyVelocityReq_twist(::labust_msgs::msg::BodyVelocityReq & msg)
  : msg_(msg)
  {}
  Init_BodyVelocityReq_disable_axis twist(::labust_msgs::msg::BodyVelocityReq::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_BodyVelocityReq_disable_axis(msg_);
  }

private:
  ::labust_msgs::msg::BodyVelocityReq msg_;
};

class Init_BodyVelocityReq_goal
{
public:
  explicit Init_BodyVelocityReq_goal(::labust_msgs::msg::BodyVelocityReq & msg)
  : msg_(msg)
  {}
  Init_BodyVelocityReq_twist goal(::labust_msgs::msg::BodyVelocityReq::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_BodyVelocityReq_twist(msg_);
  }

private:
  ::labust_msgs::msg::BodyVelocityReq msg_;
};

class Init_BodyVelocityReq_header
{
public:
  Init_BodyVelocityReq_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyVelocityReq_goal header(::labust_msgs::msg::BodyVelocityReq::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BodyVelocityReq_goal(msg_);
  }

private:
  ::labust_msgs::msg::BodyVelocityReq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::BodyVelocityReq>()
{
  return labust_msgs::msg::builder::Init_BodyVelocityReq_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__BODY_VELOCITY_REQ__BUILDER_HPP_
