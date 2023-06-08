// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auv_msgs:msg/WorldWaypointRequest.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__WORLD_WAYPOINT_REQUEST__BUILDER_HPP_
#define AUV_MSGS__MSG__DETAIL__WORLD_WAYPOINT_REQUEST__BUILDER_HPP_

#include "auv_msgs/msg/detail/world_waypoint_request__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace auv_msgs
{

namespace msg
{

namespace builder
{

class Init_WorldWaypointRequest_twist_limit
{
public:
  explicit Init_WorldWaypointRequest_twist_limit(::auv_msgs::msg::WorldWaypointRequest & msg)
  : msg_(msg)
  {}
  ::auv_msgs::msg::WorldWaypointRequest twist_limit(::auv_msgs::msg::WorldWaypointRequest::_twist_limit_type arg)
  {
    msg_.twist_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_msgs::msg::WorldWaypointRequest msg_;
};

class Init_WorldWaypointRequest_orientation_tolerance
{
public:
  explicit Init_WorldWaypointRequest_orientation_tolerance(::auv_msgs::msg::WorldWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_WorldWaypointRequest_twist_limit orientation_tolerance(::auv_msgs::msg::WorldWaypointRequest::_orientation_tolerance_type arg)
  {
    msg_.orientation_tolerance = std::move(arg);
    return Init_WorldWaypointRequest_twist_limit(msg_);
  }

private:
  ::auv_msgs::msg::WorldWaypointRequest msg_;
};

class Init_WorldWaypointRequest_position_tolerance
{
public:
  explicit Init_WorldWaypointRequest_position_tolerance(::auv_msgs::msg::WorldWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_WorldWaypointRequest_orientation_tolerance position_tolerance(::auv_msgs::msg::WorldWaypointRequest::_position_tolerance_type arg)
  {
    msg_.position_tolerance = std::move(arg);
    return Init_WorldWaypointRequest_orientation_tolerance(msg_);
  }

private:
  ::auv_msgs::msg::WorldWaypointRequest msg_;
};

class Init_WorldWaypointRequest_disable_axis
{
public:
  explicit Init_WorldWaypointRequest_disable_axis(::auv_msgs::msg::WorldWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_WorldWaypointRequest_position_tolerance disable_axis(::auv_msgs::msg::WorldWaypointRequest::_disable_axis_type arg)
  {
    msg_.disable_axis = std::move(arg);
    return Init_WorldWaypointRequest_position_tolerance(msg_);
  }

private:
  ::auv_msgs::msg::WorldWaypointRequest msg_;
};

class Init_WorldWaypointRequest_orientation
{
public:
  explicit Init_WorldWaypointRequest_orientation(::auv_msgs::msg::WorldWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_WorldWaypointRequest_disable_axis orientation(::auv_msgs::msg::WorldWaypointRequest::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_WorldWaypointRequest_disable_axis(msg_);
  }

private:
  ::auv_msgs::msg::WorldWaypointRequest msg_;
};

class Init_WorldWaypointRequest_position
{
public:
  explicit Init_WorldWaypointRequest_position(::auv_msgs::msg::WorldWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_WorldWaypointRequest_orientation position(::auv_msgs::msg::WorldWaypointRequest::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_WorldWaypointRequest_orientation(msg_);
  }

private:
  ::auv_msgs::msg::WorldWaypointRequest msg_;
};

class Init_WorldWaypointRequest_header
{
public:
  Init_WorldWaypointRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldWaypointRequest_position header(::auv_msgs::msg::WorldWaypointRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WorldWaypointRequest_position(msg_);
  }

private:
  ::auv_msgs::msg::WorldWaypointRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_msgs::msg::WorldWaypointRequest>()
{
  return auv_msgs::msg::builder::Init_WorldWaypointRequest_header();
}

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__WORLD_WAYPOINT_REQUEST__BUILDER_HPP_
