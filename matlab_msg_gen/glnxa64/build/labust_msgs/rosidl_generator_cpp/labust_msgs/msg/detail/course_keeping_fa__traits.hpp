// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:msg/CourseKeepingFA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_FA__TRAITS_HPP_
#define LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_FA__TRAITS_HPP_

#include "labust_msgs/msg/detail/course_keeping_fa__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::msg::CourseKeepingFA>()
{
  return "labust_msgs::msg::CourseKeepingFA";
}

template<>
inline const char * name<labust_msgs::msg::CourseKeepingFA>()
{
  return "labust_msgs/msg/CourseKeepingFA";
}

template<>
struct has_fixed_size<labust_msgs::msg::CourseKeepingFA>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<labust_msgs::msg::CourseKeepingFA>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<labust_msgs::msg::CourseKeepingFA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_FA__TRAITS_HPP_
