// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:msg/HLMessage.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__HL_MESSAGE__TRAITS_HPP_
#define LABUST_MSGS__MSG__DETAIL__HL_MESSAGE__TRAITS_HPP_

#include "labust_msgs/msg/detail/hl_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'ref_point'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::msg::HLMessage>()
{
  return "labust_msgs::msg::HLMessage";
}

template<>
inline const char * name<labust_msgs::msg::HLMessage>()
{
  return "labust_msgs/msg/HLMessage";
}

template<>
struct has_fixed_size<labust_msgs::msg::HLMessage>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct has_bounded_size<labust_msgs::msg::HLMessage>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct is_message<labust_msgs::msg::HLMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__MSG__DETAIL__HL_MESSAGE__TRAITS_HPP_
