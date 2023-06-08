// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:srv/SetHLMode.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__TRAITS_HPP_
#define LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__TRAITS_HPP_

#include "labust_msgs/srv/detail/set_hl_mode__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'ref_point'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::SetHLMode_Request>()
{
  return "labust_msgs::srv::SetHLMode_Request";
}

template<>
inline const char * name<labust_msgs::srv::SetHLMode_Request>()
{
  return "labust_msgs/srv/SetHLMode_Request";
}

template<>
struct has_fixed_size<labust_msgs::srv::SetHLMode_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct has_bounded_size<labust_msgs::srv::SetHLMode_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct is_message<labust_msgs::srv::SetHLMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::SetHLMode_Response>()
{
  return "labust_msgs::srv::SetHLMode_Response";
}

template<>
inline const char * name<labust_msgs::srv::SetHLMode_Response>()
{
  return "labust_msgs/srv/SetHLMode_Response";
}

template<>
struct has_fixed_size<labust_msgs::srv::SetHLMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<labust_msgs::srv::SetHLMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<labust_msgs::srv::SetHLMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::SetHLMode>()
{
  return "labust_msgs::srv::SetHLMode";
}

template<>
inline const char * name<labust_msgs::srv::SetHLMode>()
{
  return "labust_msgs/srv/SetHLMode";
}

template<>
struct has_fixed_size<labust_msgs::srv::SetHLMode>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::srv::SetHLMode_Request>::value &&
    has_fixed_size<labust_msgs::srv::SetHLMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::srv::SetHLMode>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::srv::SetHLMode_Request>::value &&
    has_bounded_size<labust_msgs::srv::SetHLMode_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::srv::SetHLMode>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::srv::SetHLMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::srv::SetHLMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__TRAITS_HPP_
