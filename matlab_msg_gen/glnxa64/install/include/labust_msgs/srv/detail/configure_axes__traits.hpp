// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:srv/ConfigureAxes.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__TRAITS_HPP_
#define LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__TRAITS_HPP_

#include "labust_msgs/srv/detail/configure_axes__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'disable_axis'
#include "labust_msgs/msg/detail/bool6_axis__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::ConfigureAxes_Request>()
{
  return "labust_msgs::srv::ConfigureAxes_Request";
}

template<>
inline const char * name<labust_msgs::srv::ConfigureAxes_Request>()
{
  return "labust_msgs/srv/ConfigureAxes_Request";
}

template<>
struct has_fixed_size<labust_msgs::srv::ConfigureAxes_Request>
  : std::integral_constant<bool, has_fixed_size<labust_msgs::msg::Bool6Axis>::value> {};

template<>
struct has_bounded_size<labust_msgs::srv::ConfigureAxes_Request>
  : std::integral_constant<bool, has_bounded_size<labust_msgs::msg::Bool6Axis>::value> {};

template<>
struct is_message<labust_msgs::srv::ConfigureAxes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::ConfigureAxes_Response>()
{
  return "labust_msgs::srv::ConfigureAxes_Response";
}

template<>
inline const char * name<labust_msgs::srv::ConfigureAxes_Response>()
{
  return "labust_msgs/srv/ConfigureAxes_Response";
}

template<>
struct has_fixed_size<labust_msgs::srv::ConfigureAxes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<labust_msgs::srv::ConfigureAxes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<labust_msgs::srv::ConfigureAxes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::ConfigureAxes>()
{
  return "labust_msgs::srv::ConfigureAxes";
}

template<>
inline const char * name<labust_msgs::srv::ConfigureAxes>()
{
  return "labust_msgs/srv/ConfigureAxes";
}

template<>
struct has_fixed_size<labust_msgs::srv::ConfigureAxes>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::srv::ConfigureAxes_Request>::value &&
    has_fixed_size<labust_msgs::srv::ConfigureAxes_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::srv::ConfigureAxes>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::srv::ConfigureAxes_Request>::value &&
    has_bounded_size<labust_msgs::srv::ConfigureAxes_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::srv::ConfigureAxes>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::srv::ConfigureAxes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::srv::ConfigureAxes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__TRAITS_HPP_
