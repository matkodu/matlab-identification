// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auv_msgs:msg/BodyForceRequest.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__BODY_FORCE_REQUEST__TRAITS_HPP_
#define AUV_MSGS__MSG__DETAIL__BODY_FORCE_REQUEST__TRAITS_HPP_

#include "auv_msgs/msg/detail/body_force_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<auv_msgs::msg::BodyForceRequest>()
{
  return "auv_msgs::msg::BodyForceRequest";
}

template<>
inline const char * name<auv_msgs::msg::BodyForceRequest>()
{
  return "auv_msgs/msg/BodyForceRequest";
}

template<>
struct has_fixed_size<auv_msgs::msg::BodyForceRequest>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Wrench>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<auv_msgs::msg::BodyForceRequest>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Wrench>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<auv_msgs::msg::BodyForceRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUV_MSGS__MSG__DETAIL__BODY_FORCE_REQUEST__TRAITS_HPP_
