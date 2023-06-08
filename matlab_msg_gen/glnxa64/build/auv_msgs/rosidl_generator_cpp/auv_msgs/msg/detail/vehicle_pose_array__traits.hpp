// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auv_msgs:msg/VehiclePoseArray.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__TRAITS_HPP_
#define AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__TRAITS_HPP_

#include "auv_msgs/msg/detail/vehicle_pose_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<auv_msgs::msg::VehiclePoseArray>()
{
  return "auv_msgs::msg::VehiclePoseArray";
}

template<>
inline const char * name<auv_msgs::msg::VehiclePoseArray>()
{
  return "auv_msgs/msg/VehiclePoseArray";
}

template<>
struct has_fixed_size<auv_msgs::msg::VehiclePoseArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<auv_msgs::msg::VehiclePoseArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<auv_msgs::msg::VehiclePoseArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__TRAITS_HPP_
