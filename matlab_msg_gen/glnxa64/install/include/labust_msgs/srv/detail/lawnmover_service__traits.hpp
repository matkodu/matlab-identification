// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:srv/LawnmoverService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__TRAITS_HPP_
#define LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__TRAITS_HPP_

#include "labust_msgs/srv/detail/lawnmover_service__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::LawnmoverService_Request>()
{
  return "labust_msgs::srv::LawnmoverService_Request";
}

template<>
inline const char * name<labust_msgs::srv::LawnmoverService_Request>()
{
  return "labust_msgs/srv/LawnmoverService_Request";
}

template<>
struct has_fixed_size<labust_msgs::srv::LawnmoverService_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<labust_msgs::srv::LawnmoverService_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<labust_msgs::srv::LawnmoverService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::LawnmoverService_Response>()
{
  return "labust_msgs::srv::LawnmoverService_Response";
}

template<>
inline const char * name<labust_msgs::srv::LawnmoverService_Response>()
{
  return "labust_msgs/srv/LawnmoverService_Response";
}

template<>
struct has_fixed_size<labust_msgs::srv::LawnmoverService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<labust_msgs::srv::LawnmoverService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<labust_msgs::srv::LawnmoverService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::LawnmoverService>()
{
  return "labust_msgs::srv::LawnmoverService";
}

template<>
inline const char * name<labust_msgs::srv::LawnmoverService>()
{
  return "labust_msgs/srv/LawnmoverService";
}

template<>
struct has_fixed_size<labust_msgs::srv::LawnmoverService>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::srv::LawnmoverService_Request>::value &&
    has_fixed_size<labust_msgs::srv::LawnmoverService_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::srv::LawnmoverService>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::srv::LawnmoverService_Request>::value &&
    has_bounded_size<labust_msgs::srv::LawnmoverService_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::srv::LawnmoverService>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::srv::LawnmoverService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::srv::LawnmoverService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__TRAITS_HPP_
