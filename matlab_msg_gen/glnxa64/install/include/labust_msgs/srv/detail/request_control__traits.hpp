// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:srv/RequestControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__TRAITS_HPP_
#define LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__TRAITS_HPP_

#include "labust_msgs/srv/detail/request_control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::RequestControl_Request>()
{
  return "labust_msgs::srv::RequestControl_Request";
}

template<>
inline const char * name<labust_msgs::srv::RequestControl_Request>()
{
  return "labust_msgs/srv/RequestControl_Request";
}

template<>
struct has_fixed_size<labust_msgs::srv::RequestControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<labust_msgs::srv::RequestControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<labust_msgs::srv::RequestControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::RequestControl_Response>()
{
  return "labust_msgs::srv::RequestControl_Response";
}

template<>
inline const char * name<labust_msgs::srv::RequestControl_Response>()
{
  return "labust_msgs/srv/RequestControl_Response";
}

template<>
struct has_fixed_size<labust_msgs::srv::RequestControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<labust_msgs::srv::RequestControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<labust_msgs::srv::RequestControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::RequestControl>()
{
  return "labust_msgs::srv::RequestControl";
}

template<>
inline const char * name<labust_msgs::srv::RequestControl>()
{
  return "labust_msgs/srv/RequestControl";
}

template<>
struct has_fixed_size<labust_msgs::srv::RequestControl>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::srv::RequestControl_Request>::value &&
    has_fixed_size<labust_msgs::srv::RequestControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::srv::RequestControl>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::srv::RequestControl_Request>::value &&
    has_bounded_size<labust_msgs::srv::RequestControl_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::srv::RequestControl>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::srv::RequestControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::srv::RequestControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__TRAITS_HPP_
