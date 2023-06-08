// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__TRAITS_HPP_
#define LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__TRAITS_HPP_

#include "labust_msgs/msg/detail/controller_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::msg::ControllerInfo>()
{
  return "labust_msgs::msg::ControllerInfo";
}

template<>
inline const char * name<labust_msgs::msg::ControllerInfo>()
{
  return "labust_msgs/msg/ControllerInfo";
}

template<>
struct has_fixed_size<labust_msgs::msg::ControllerInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<labust_msgs::msg::ControllerInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<labust_msgs::msg::ControllerInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__TRAITS_HPP_
