// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:srv/ManualConfigure.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__TRAITS_HPP_
#define LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__TRAITS_HPP_

#include "labust_msgs/srv/detail/manual_configure__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'configuration'
#include "labust_msgs/msg/detail/manual_configuration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::ManualConfigure_Request>()
{
  return "labust_msgs::srv::ManualConfigure_Request";
}

template<>
inline const char * name<labust_msgs::srv::ManualConfigure_Request>()
{
  return "labust_msgs/srv/ManualConfigure_Request";
}

template<>
struct has_fixed_size<labust_msgs::srv::ManualConfigure_Request>
  : std::integral_constant<bool, has_fixed_size<labust_msgs::msg::ManualConfiguration>::value> {};

template<>
struct has_bounded_size<labust_msgs::srv::ManualConfigure_Request>
  : std::integral_constant<bool, has_bounded_size<labust_msgs::msg::ManualConfiguration>::value> {};

template<>
struct is_message<labust_msgs::srv::ManualConfigure_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_configuration'
// already included above
// #include "labust_msgs/msg/detail/manual_configuration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::ManualConfigure_Response>()
{
  return "labust_msgs::srv::ManualConfigure_Response";
}

template<>
inline const char * name<labust_msgs::srv::ManualConfigure_Response>()
{
  return "labust_msgs/srv/ManualConfigure_Response";
}

template<>
struct has_fixed_size<labust_msgs::srv::ManualConfigure_Response>
  : std::integral_constant<bool, has_fixed_size<labust_msgs::msg::ManualConfiguration>::value> {};

template<>
struct has_bounded_size<labust_msgs::srv::ManualConfigure_Response>
  : std::integral_constant<bool, has_bounded_size<labust_msgs::msg::ManualConfiguration>::value> {};

template<>
struct is_message<labust_msgs::srv::ManualConfigure_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::ManualConfigure>()
{
  return "labust_msgs::srv::ManualConfigure";
}

template<>
inline const char * name<labust_msgs::srv::ManualConfigure>()
{
  return "labust_msgs/srv/ManualConfigure";
}

template<>
struct has_fixed_size<labust_msgs::srv::ManualConfigure>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::srv::ManualConfigure_Request>::value &&
    has_fixed_size<labust_msgs::srv::ManualConfigure_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::srv::ManualConfigure>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::srv::ManualConfigure_Request>::value &&
    has_bounded_size<labust_msgs::srv::ManualConfigure_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::srv::ManualConfigure>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::srv::ManualConfigure_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::srv::ManualConfigure_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__TRAITS_HPP_
