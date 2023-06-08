// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/NavStsReq.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__BUILDER_HPP_

#include "labust_msgs/msg/detail/nav_sts_req__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_NavStsReq_disable_axis
{
public:
  explicit Init_NavStsReq_disable_axis(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::NavStsReq disable_axis(::labust_msgs::msg::NavStsReq::_disable_axis_type arg)
  {
    msg_.disable_axis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_orientation_tolerance
{
public:
  explicit Init_NavStsReq_orientation_tolerance(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_disable_axis orientation_tolerance(::labust_msgs::msg::NavStsReq::_orientation_tolerance_type arg)
  {
    msg_.orientation_tolerance = std::move(arg);
    return Init_NavStsReq_disable_axis(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_position_tolerance
{
public:
  explicit Init_NavStsReq_position_tolerance(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_orientation_tolerance position_tolerance(::labust_msgs::msg::NavStsReq::_position_tolerance_type arg)
  {
    msg_.position_tolerance = std::move(arg);
    return Init_NavStsReq_orientation_tolerance(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_orientation_rate
{
public:
  explicit Init_NavStsReq_orientation_rate(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_position_tolerance orientation_rate(::labust_msgs::msg::NavStsReq::_orientation_rate_type arg)
  {
    msg_.orientation_rate = std::move(arg);
    return Init_NavStsReq_position_tolerance(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_orientation
{
public:
  explicit Init_NavStsReq_orientation(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_orientation_rate orientation(::labust_msgs::msg::NavStsReq::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_NavStsReq_orientation_rate(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_gbody_velocity
{
public:
  explicit Init_NavStsReq_gbody_velocity(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_orientation gbody_velocity(::labust_msgs::msg::NavStsReq::_gbody_velocity_type arg)
  {
    msg_.gbody_velocity = std::move(arg);
    return Init_NavStsReq_orientation(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_body_velocity
{
public:
  explicit Init_NavStsReq_body_velocity(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_gbody_velocity body_velocity(::labust_msgs::msg::NavStsReq::_body_velocity_type arg)
  {
    msg_.body_velocity = std::move(arg);
    return Init_NavStsReq_gbody_velocity(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_altitude
{
public:
  explicit Init_NavStsReq_altitude(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_body_velocity altitude(::labust_msgs::msg::NavStsReq::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_NavStsReq_body_velocity(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_position
{
public:
  explicit Init_NavStsReq_position(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_altitude position(::labust_msgs::msg::NavStsReq::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_NavStsReq_altitude(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_goal
{
public:
  explicit Init_NavStsReq_goal(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_position goal(::labust_msgs::msg::NavStsReq::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_NavStsReq_position(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_origin
{
public:
  explicit Init_NavStsReq_origin(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_goal origin(::labust_msgs::msg::NavStsReq::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_NavStsReq_goal(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_global_position
{
public:
  explicit Init_NavStsReq_global_position(::labust_msgs::msg::NavStsReq & msg)
  : msg_(msg)
  {}
  Init_NavStsReq_origin global_position(::labust_msgs::msg::NavStsReq::_global_position_type arg)
  {
    msg_.global_position = std::move(arg);
    return Init_NavStsReq_origin(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

class Init_NavStsReq_header
{
public:
  Init_NavStsReq_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavStsReq_global_position header(::labust_msgs::msg::NavStsReq::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavStsReq_global_position(msg_);
  }

private:
  ::labust_msgs::msg::NavStsReq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::NavStsReq>()
{
  return labust_msgs::msg::builder::Init_NavStsReq_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__BUILDER_HPP_
