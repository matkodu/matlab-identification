// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:msg/RelativePosition.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__TRAITS_HPP_
#define LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__TRAITS_HPP_

#include "labust_msgs/msg/detail/relative_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::msg::RelativePosition>()
{
  return "labust_msgs::msg::RelativePosition";
}

template<>
inline const char * name<labust_msgs::msg::RelativePosition>()
{
  return "labust_msgs/msg/RelativePosition";
}

template<>
struct has_fixed_size<labust_msgs::msg::RelativePosition>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<labust_msgs::msg::RelativePosition>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<labust_msgs::msg::RelativePosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__TRAITS_HPP_
