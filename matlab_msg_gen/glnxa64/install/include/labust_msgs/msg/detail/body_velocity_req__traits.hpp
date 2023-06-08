// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:msg/BodyVelocityReq.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__BODY_VELOCITY_REQ__TRAITS_HPP_
#define LABUST_MSGS__MSG__DETAIL__BODY_VELOCITY_REQ__TRAITS_HPP_

#include "labust_msgs/msg/detail/body_velocity_req__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'goal'
#include "labust_msgs/msg/detail/goal_descriptor__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'disable_axis'
#include "labust_msgs/msg/detail/bool6_axis__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::msg::BodyVelocityReq>()
{
  return "labust_msgs::msg::BodyVelocityReq";
}

template<>
inline const char * name<labust_msgs::msg::BodyVelocityReq>()
{
  return "labust_msgs/msg/BodyVelocityReq";
}

template<>
struct has_fixed_size<labust_msgs::msg::BodyVelocityReq>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<labust_msgs::msg::Bool6Axis>::value && has_fixed_size<labust_msgs::msg::GoalDescriptor>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<labust_msgs::msg::BodyVelocityReq>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<labust_msgs::msg::Bool6Axis>::value && has_bounded_size<labust_msgs::msg::GoalDescriptor>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<labust_msgs::msg::BodyVelocityReq>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__MSG__DETAIL__BODY_VELOCITY_REQ__TRAITS_HPP_
