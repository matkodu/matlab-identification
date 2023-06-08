// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/Bool6Axis.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__BOOL6_AXIS__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__BOOL6_AXIS__BUILDER_HPP_

#include "labust_msgs/msg/detail/bool6_axis__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_Bool6Axis_yaw
{
public:
  explicit Init_Bool6Axis_yaw(::labust_msgs::msg::Bool6Axis & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::Bool6Axis yaw(::labust_msgs::msg::Bool6Axis::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::Bool6Axis msg_;
};

class Init_Bool6Axis_pitch
{
public:
  explicit Init_Bool6Axis_pitch(::labust_msgs::msg::Bool6Axis & msg)
  : msg_(msg)
  {}
  Init_Bool6Axis_yaw pitch(::labust_msgs::msg::Bool6Axis::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Bool6Axis_yaw(msg_);
  }

private:
  ::labust_msgs::msg::Bool6Axis msg_;
};

class Init_Bool6Axis_roll
{
public:
  explicit Init_Bool6Axis_roll(::labust_msgs::msg::Bool6Axis & msg)
  : msg_(msg)
  {}
  Init_Bool6Axis_pitch roll(::labust_msgs::msg::Bool6Axis::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Bool6Axis_pitch(msg_);
  }

private:
  ::labust_msgs::msg::Bool6Axis msg_;
};

class Init_Bool6Axis_z
{
public:
  explicit Init_Bool6Axis_z(::labust_msgs::msg::Bool6Axis & msg)
  : msg_(msg)
  {}
  Init_Bool6Axis_roll z(::labust_msgs::msg::Bool6Axis::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Bool6Axis_roll(msg_);
  }

private:
  ::labust_msgs::msg::Bool6Axis msg_;
};

class Init_Bool6Axis_y
{
public:
  explicit Init_Bool6Axis_y(::labust_msgs::msg::Bool6Axis & msg)
  : msg_(msg)
  {}
  Init_Bool6Axis_z y(::labust_msgs::msg::Bool6Axis::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Bool6Axis_z(msg_);
  }

private:
  ::labust_msgs::msg::Bool6Axis msg_;
};

class Init_Bool6Axis_x
{
public:
  Init_Bool6Axis_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bool6Axis_y x(::labust_msgs::msg::Bool6Axis::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Bool6Axis_y(msg_);
  }

private:
  ::labust_msgs::msg::Bool6Axis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::Bool6Axis>()
{
  return labust_msgs::msg::builder::Init_Bool6Axis_x();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__BOOL6_AXIS__BUILDER_HPP_
