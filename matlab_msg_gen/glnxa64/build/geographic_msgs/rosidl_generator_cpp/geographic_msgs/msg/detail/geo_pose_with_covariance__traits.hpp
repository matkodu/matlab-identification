// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/GeoPoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__TRAITS_HPP_

#include "geographic_msgs/msg/detail/geo_pose_with_covariance__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geographic_msgs/msg/detail/geo_pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::msg::GeoPoseWithCovariance>()
{
  return "geographic_msgs::msg::GeoPoseWithCovariance";
}

template<>
inline const char * name<geographic_msgs::msg::GeoPoseWithCovariance>()
{
  return "geographic_msgs/msg/GeoPoseWithCovariance";
}

template<>
struct has_fixed_size<geographic_msgs::msg::GeoPoseWithCovariance>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeoPose>::value> {};

template<>
struct has_bounded_size<geographic_msgs::msg::GeoPoseWithCovariance>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeoPose>::value> {};

template<>
struct is_message<geographic_msgs::msg::GeoPoseWithCovariance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__TRAITS_HPP_
