// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/Go2PointUA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__GO2_POINT_UA__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__GO2_POINT_UA__BUILDER_HPP_

#include "labust_msgs/msg/detail/go2_point_ua__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_Go2PointUA_victory_radius
{
public:
  explicit Init_Go2PointUA_victory_radius(::labust_msgs::msg::Go2PointUA & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::Go2PointUA victory_radius(::labust_msgs::msg::Go2PointUA::_victory_radius_type arg)
  {
    msg_.victory_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::Go2PointUA msg_;
};

class Init_Go2PointUA_speed
{
public:
  explicit Init_Go2PointUA_speed(::labust_msgs::msg::Go2PointUA & msg)
  : msg_(msg)
  {}
  Init_Go2PointUA_victory_radius speed(::labust_msgs::msg::Go2PointUA::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Go2PointUA_victory_radius(msg_);
  }

private:
  ::labust_msgs::msg::Go2PointUA msg_;
};

class Init_Go2PointUA_point
{
public:
  Init_Go2PointUA_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Go2PointUA_speed point(::labust_msgs::msg::Go2PointUA::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Go2PointUA_speed(msg_);
  }

private:
  ::labust_msgs::msg::Go2PointUA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::Go2PointUA>()
{
  return labust_msgs::msg::builder::Init_Go2PointUA_point();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__GO2_POINT_UA__BUILDER_HPP_
