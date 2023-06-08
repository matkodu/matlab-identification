// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:msg/StartNeptusParser.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__TRAITS_HPP_
#define LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__TRAITS_HPP_

#include "labust_msgs/msg/detail/start_neptus_parser__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'origin'
// Member 'custom_start'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::msg::StartNeptusParser>()
{
  return "labust_msgs::msg::StartNeptusParser";
}

template<>
inline const char * name<labust_msgs::msg::StartNeptusParser>()
{
  return "labust_msgs/msg/StartNeptusParser";
}

template<>
struct has_fixed_size<labust_msgs::msg::StartNeptusParser>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<labust_msgs::msg::StartNeptusParser>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<labust_msgs::msg::StartNeptusParser>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__TRAITS_HPP_
