// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:msg/FSPathInfo.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__TRAITS_HPP_
#define LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__TRAITS_HPP_

#include "labust_msgs/msg/detail/fs_path_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'dr_p'
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "labust_msgs/msg/detail/rpy__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::msg::FSPathInfo>()
{
  return "labust_msgs::msg::FSPathInfo";
}

template<>
inline const char * name<labust_msgs::msg::FSPathInfo>()
{
  return "labust_msgs/msg/FSPathInfo";
}

template<>
struct has_fixed_size<labust_msgs::msg::FSPathInfo>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<labust_msgs::msg::RPY>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<labust_msgs::msg::FSPathInfo>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<labust_msgs::msg::RPY>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<labust_msgs::msg::FSPathInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__TRAITS_HPP_
