// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auv_msgs:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__TRAITS_HPP_
#define AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__TRAITS_HPP_

#include "auv_msgs/msg/detail/navigation_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'global_position'
// Member 'origin'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"
// Member 'position'
// Member 'position_variance'
#include "auv_msgs/msg/detail/ned__traits.hpp"
// Member 'body_velocity'
// Member 'seafloor_velocity'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
// Member 'orientation_rate'
// Member 'orientation_variance'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<auv_msgs::msg::NavigationStatus>()
{
  return "auv_msgs::msg::NavigationStatus";
}

template<>
inline const char * name<auv_msgs::msg::NavigationStatus>()
{
  return "auv_msgs/msg/NavigationStatus";
}

template<>
struct has_fixed_size<auv_msgs::msg::NavigationStatus>
  : std::integral_constant<bool, has_fixed_size<auv_msgs::msg::NED>::value && has_fixed_size<geographic_msgs::msg::GeoPoint>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<auv_msgs::msg::NavigationStatus>
  : std::integral_constant<bool, has_bounded_size<auv_msgs::msg::NED>::value && has_bounded_size<geographic_msgs::msg::GeoPoint>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<auv_msgs::msg::NavigationStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__TRAITS_HPP_
