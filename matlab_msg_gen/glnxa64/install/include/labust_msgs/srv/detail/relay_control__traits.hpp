// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:srv/RelayControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__TRAITS_HPP_
#define LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__TRAITS_HPP_

#include "labust_msgs/srv/detail/relay_control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::RelayControl_Request>()
{
  return "labust_msgs::srv::RelayControl_Request";
}

template<>
inline const char * name<labust_msgs::srv::RelayControl_Request>()
{
  return "labust_msgs/srv/RelayControl_Request";
}

template<>
struct has_fixed_size<labust_msgs::srv::RelayControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<labust_msgs::srv::RelayControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<labust_msgs::srv::RelayControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::RelayControl_Response>()
{
  return "labust_msgs::srv::RelayControl_Response";
}

template<>
inline const char * name<labust_msgs::srv::RelayControl_Response>()
{
  return "labust_msgs/srv/RelayControl_Response";
}

template<>
struct has_fixed_size<labust_msgs::srv::RelayControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<labust_msgs::srv::RelayControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<labust_msgs::srv::RelayControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::RelayControl>()
{
  return "labust_msgs::srv::RelayControl";
}

template<>
inline const char * name<labust_msgs::srv::RelayControl>()
{
  return "labust_msgs/srv/RelayControl";
}

template<>
struct has_fixed_size<labust_msgs::srv::RelayControl>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::srv::RelayControl_Request>::value &&
    has_fixed_size<labust_msgs::srv::RelayControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::srv::RelayControl>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::srv::RelayControl_Request>::value &&
    has_bounded_size<labust_msgs::srv::RelayControl_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::srv::RelayControl>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::srv::RelayControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::srv::RelayControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__TRAITS_HPP_
