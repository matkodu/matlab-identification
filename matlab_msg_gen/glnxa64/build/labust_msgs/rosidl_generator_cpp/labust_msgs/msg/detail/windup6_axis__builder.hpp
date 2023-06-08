// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/Windup6Axis.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__WINDUP6_AXIS__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__WINDUP6_AXIS__BUILDER_HPP_

#include "labust_msgs/msg/detail/windup6_axis__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_Windup6Axis_yaw
{
public:
  explicit Init_Windup6Axis_yaw(::labust_msgs::msg::Windup6Axis & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::Windup6Axis yaw(::labust_msgs::msg::Windup6Axis::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::Windup6Axis msg_;
};

class Init_Windup6Axis_pitch
{
public:
  explicit Init_Windup6Axis_pitch(::labust_msgs::msg::Windup6Axis & msg)
  : msg_(msg)
  {}
  Init_Windup6Axis_yaw pitch(::labust_msgs::msg::Windup6Axis::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Windup6Axis_yaw(msg_);
  }

private:
  ::labust_msgs::msg::Windup6Axis msg_;
};

class Init_Windup6Axis_roll
{
public:
  explicit Init_Windup6Axis_roll(::labust_msgs::msg::Windup6Axis & msg)
  : msg_(msg)
  {}
  Init_Windup6Axis_pitch roll(::labust_msgs::msg::Windup6Axis::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Windup6Axis_pitch(msg_);
  }

private:
  ::labust_msgs::msg::Windup6Axis msg_;
};

class Init_Windup6Axis_z
{
public:
  explicit Init_Windup6Axis_z(::labust_msgs::msg::Windup6Axis & msg)
  : msg_(msg)
  {}
  Init_Windup6Axis_roll z(::labust_msgs::msg::Windup6Axis::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Windup6Axis_roll(msg_);
  }

private:
  ::labust_msgs::msg::Windup6Axis msg_;
};

class Init_Windup6Axis_y
{
public:
  explicit Init_Windup6Axis_y(::labust_msgs::msg::Windup6Axis & msg)
  : msg_(msg)
  {}
  Init_Windup6Axis_z y(::labust_msgs::msg::Windup6Axis::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Windup6Axis_z(msg_);
  }

private:
  ::labust_msgs::msg::Windup6Axis msg_;
};

class Init_Windup6Axis_x
{
public:
  Init_Windup6Axis_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Windup6Axis_y x(::labust_msgs::msg::Windup6Axis::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Windup6Axis_y(msg_);
  }

private:
  ::labust_msgs::msg::Windup6Axis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::Windup6Axis>()
{
  return labust_msgs::msg::builder::Init_Windup6Axis_x();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__WINDUP6_AXIS__BUILDER_HPP_
