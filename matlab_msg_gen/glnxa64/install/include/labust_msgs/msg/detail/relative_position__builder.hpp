// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/RelativePosition.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__BUILDER_HPP_

#include "labust_msgs/msg/detail/relative_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_RelativePosition_heading
{
public:
  explicit Init_RelativePosition_heading(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::RelativePosition heading(::labust_msgs::msg::RelativePosition::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_altitude_variance
{
public:
  explicit Init_RelativePosition_altitude_variance(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  Init_RelativePosition_heading altitude_variance(::labust_msgs::msg::RelativePosition::_altitude_variance_type arg)
  {
    msg_.altitude_variance = std::move(arg);
    return Init_RelativePosition_heading(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_altitude
{
public:
  explicit Init_RelativePosition_altitude(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  Init_RelativePosition_altitude_variance altitude(::labust_msgs::msg::RelativePosition::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_RelativePosition_altitude_variance(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_bearing_variance
{
public:
  explicit Init_RelativePosition_bearing_variance(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  Init_RelativePosition_altitude bearing_variance(::labust_msgs::msg::RelativePosition::_bearing_variance_type arg)
  {
    msg_.bearing_variance = std::move(arg);
    return Init_RelativePosition_altitude(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_range_variance
{
public:
  explicit Init_RelativePosition_range_variance(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  Init_RelativePosition_bearing_variance range_variance(::labust_msgs::msg::RelativePosition::_range_variance_type arg)
  {
    msg_.range_variance = std::move(arg);
    return Init_RelativePosition_bearing_variance(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_bearing
{
public:
  explicit Init_RelativePosition_bearing(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  Init_RelativePosition_range_variance bearing(::labust_msgs::msg::RelativePosition::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return Init_RelativePosition_range_variance(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_range
{
public:
  explicit Init_RelativePosition_range(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  Init_RelativePosition_bearing range(::labust_msgs::msg::RelativePosition::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_RelativePosition_bearing(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_y_variance
{
public:
  explicit Init_RelativePosition_y_variance(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  Init_RelativePosition_range y_variance(::labust_msgs::msg::RelativePosition::_y_variance_type arg)
  {
    msg_.y_variance = std::move(arg);
    return Init_RelativePosition_range(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_x_variance
{
public:
  explicit Init_RelativePosition_x_variance(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  Init_RelativePosition_y_variance x_variance(::labust_msgs::msg::RelativePosition::_x_variance_type arg)
  {
    msg_.x_variance = std::move(arg);
    return Init_RelativePosition_y_variance(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_y
{
public:
  explicit Init_RelativePosition_y(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  Init_RelativePosition_x_variance y(::labust_msgs::msg::RelativePosition::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RelativePosition_x_variance(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_x
{
public:
  explicit Init_RelativePosition_x(::labust_msgs::msg::RelativePosition & msg)
  : msg_(msg)
  {}
  Init_RelativePosition_y x(::labust_msgs::msg::RelativePosition::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RelativePosition_y(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

class Init_RelativePosition_header
{
public:
  Init_RelativePosition_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelativePosition_x header(::labust_msgs::msg::RelativePosition::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RelativePosition_x(msg_);
  }

private:
  ::labust_msgs::msg::RelativePosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::RelativePosition>()
{
  return labust_msgs::msg::builder::Init_RelativePosition_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__BUILDER_HPP_
