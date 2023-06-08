// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auv_msgs:msg/NED.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NED__TRAITS_HPP_
#define AUV_MSGS__MSG__DETAIL__NED__TRAITS_HPP_

#include "auv_msgs/msg/detail/ned__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<auv_msgs::msg::NED>()
{
  return "auv_msgs::msg::NED";
}

template<>
inline const char * name<auv_msgs::msg::NED>()
{
  return "auv_msgs/msg/NED";
}

template<>
struct has_fixed_size<auv_msgs::msg::NED>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<auv_msgs::msg::NED>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<auv_msgs::msg::NED>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUV_MSGS__MSG__DETAIL__NED__TRAITS_HPP_
