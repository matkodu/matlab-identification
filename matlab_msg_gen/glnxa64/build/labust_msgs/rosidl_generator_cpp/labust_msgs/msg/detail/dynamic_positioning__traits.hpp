// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:msg/DynamicPositioning.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__TRAITS_HPP_
#define LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__TRAITS_HPP_

#include "labust_msgs/msg/detail/dynamic_positioning__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'point'
#include "auv_msgs/msg/detail/ned__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::msg::DynamicPositioning>()
{
  return "labust_msgs::msg::DynamicPositioning";
}

template<>
inline const char * name<labust_msgs::msg::DynamicPositioning>()
{
  return "labust_msgs/msg/DynamicPositioning";
}

template<>
struct has_fixed_size<labust_msgs::msg::DynamicPositioning>
  : std::integral_constant<bool, has_fixed_size<auv_msgs::msg::NED>::value> {};

template<>
struct has_bounded_size<labust_msgs::msg::DynamicPositioning>
  : std::integral_constant<bool, has_bounded_size<auv_msgs::msg::NED>::value> {};

template<>
struct is_message<labust_msgs::msg::DynamicPositioning>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__TRAITS_HPP_
