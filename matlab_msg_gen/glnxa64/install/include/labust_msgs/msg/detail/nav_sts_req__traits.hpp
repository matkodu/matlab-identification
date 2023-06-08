// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:msg/NavStsReq.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__TRAITS_HPP_
#define LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__TRAITS_HPP_

#include "labust_msgs/msg/detail/nav_sts_req__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'global_position'
// Member 'origin'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"
// Member 'goal'
#include "labust_msgs/msg/detail/goal_descriptor__traits.hpp"
// Member 'position'
#include "auv_msgs/msg/detail/ned__traits.hpp"
// Member 'body_velocity'
// Member 'gbody_velocity'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
// Member 'orientation_rate'
// Member 'orientation_tolerance'
#include "labust_msgs/msg/detail/rpy__traits.hpp"
// Member 'position_tolerance'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'disable_axis'
#include "labust_msgs/msg/detail/bool6_axis__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::msg::NavStsReq>()
{
  return "labust_msgs::msg::NavStsReq";
}

template<>
inline const char * name<labust_msgs::msg::NavStsReq>()
{
  return "labust_msgs/msg/NavStsReq";
}

template<>
struct has_fixed_size<labust_msgs::msg::NavStsReq>
  : std::integral_constant<bool, has_fixed_size<auv_msgs::msg::NED>::value && has_fixed_size<geographic_msgs::msg::GeoPoint>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<labust_msgs::msg::Bool6Axis>::value && has_fixed_size<labust_msgs::msg::GoalDescriptor>::value && has_fixed_size<labust_msgs::msg::RPY>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<labust_msgs::msg::NavStsReq>
  : std::integral_constant<bool, has_bounded_size<auv_msgs::msg::NED>::value && has_bounded_size<geographic_msgs::msg::GeoPoint>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<labust_msgs::msg::Bool6Axis>::value && has_bounded_size<labust_msgs::msg::GoalDescriptor>::value && has_bounded_size<labust_msgs::msg::RPY>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<labust_msgs::msg::NavStsReq>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__TRAITS_HPP_
