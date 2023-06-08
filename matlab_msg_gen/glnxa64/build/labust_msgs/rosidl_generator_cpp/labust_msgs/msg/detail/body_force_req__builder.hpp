// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/BodyForceReq.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__BODY_FORCE_REQ__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__BODY_FORCE_REQ__BUILDER_HPP_

#include "labust_msgs/msg/detail/body_force_req__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyForceReq_windup
{
public:
  explicit Init_BodyForceReq_windup(::labust_msgs::msg::BodyForceReq & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::BodyForceReq windup(::labust_msgs::msg::BodyForceReq::_windup_type arg)
  {
    msg_.windup = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::BodyForceReq msg_;
};

class Init_BodyForceReq_disable_axis
{
public:
  explicit Init_BodyForceReq_disable_axis(::labust_msgs::msg::BodyForceReq & msg)
  : msg_(msg)
  {}
  Init_BodyForceReq_windup disable_axis(::labust_msgs::msg::BodyForceReq::_disable_axis_type arg)
  {
    msg_.disable_axis = std::move(arg);
    return Init_BodyForceReq_windup(msg_);
  }

private:
  ::labust_msgs::msg::BodyForceReq msg_;
};

class Init_BodyForceReq_wrench
{
public:
  explicit Init_BodyForceReq_wrench(::labust_msgs::msg::BodyForceReq & msg)
  : msg_(msg)
  {}
  Init_BodyForceReq_disable_axis wrench(::labust_msgs::msg::BodyForceReq::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return Init_BodyForceReq_disable_axis(msg_);
  }

private:
  ::labust_msgs::msg::BodyForceReq msg_;
};

class Init_BodyForceReq_goal
{
public:
  explicit Init_BodyForceReq_goal(::labust_msgs::msg::BodyForceReq & msg)
  : msg_(msg)
  {}
  Init_BodyForceReq_wrench goal(::labust_msgs::msg::BodyForceReq::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_BodyForceReq_wrench(msg_);
  }

private:
  ::labust_msgs::msg::BodyForceReq msg_;
};

class Init_BodyForceReq_header
{
public:
  Init_BodyForceReq_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyForceReq_goal header(::labust_msgs::msg::BodyForceReq::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BodyForceReq_goal(msg_);
  }

private:
  ::labust_msgs::msg::BodyForceReq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::BodyForceReq>()
{
  return labust_msgs::msg::builder::Init_BodyForceReq_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__BODY_FORCE_REQ__BUILDER_HPP_
