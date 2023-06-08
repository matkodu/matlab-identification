// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:msg/ExternalEvent.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__TRAITS_HPP_
#define LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__TRAITS_HPP_

#include "labust_msgs/msg/detail/external_event__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::msg::ExternalEvent>()
{
  return "labust_msgs::msg::ExternalEvent";
}

template<>
inline const char * name<labust_msgs::msg::ExternalEvent>()
{
  return "labust_msgs/msg/ExternalEvent";
}

template<>
struct has_fixed_size<labust_msgs::msg::ExternalEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<labust_msgs::msg::ExternalEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<labust_msgs::msg::ExternalEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__TRAITS_HPP_
