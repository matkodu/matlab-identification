// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auv_msgs:msg/VehiclePose.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__TRAITS_HPP_
#define AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__TRAITS_HPP_

#include "auv_msgs/msg/detail/vehicle_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "auv_msgs/msg/detail/ned__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<auv_msgs::msg::VehiclePose>()
{
  return "auv_msgs::msg::VehiclePose";
}

template<>
inline const char * name<auv_msgs::msg::VehiclePose>()
{
  return "auv_msgs/msg/VehiclePose";
}

template<>
struct has_fixed_size<auv_msgs::msg::VehiclePose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<auv_msgs::msg::VehiclePose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<auv_msgs::msg::VehiclePose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__TRAITS_HPP_
