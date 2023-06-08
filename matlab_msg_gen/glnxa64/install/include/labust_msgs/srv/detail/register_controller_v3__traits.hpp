// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:srv/RegisterControllerV3.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__TRAITS_HPP_
#define LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__TRAITS_HPP_

#include "labust_msgs/srv/detail/register_controller_v3__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::RegisterControllerV3_Request>()
{
  return "labust_msgs::srv::RegisterControllerV3_Request";
}

template<>
inline const char * name<labust_msgs::srv::RegisterControllerV3_Request>()
{
  return "labust_msgs/srv/RegisterControllerV3_Request";
}

template<>
struct has_fixed_size<labust_msgs::srv::RegisterControllerV3_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<labust_msgs::srv::RegisterControllerV3_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<labust_msgs::srv::RegisterControllerV3_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::RegisterControllerV3_Response>()
{
  return "labust_msgs::srv::RegisterControllerV3_Response";
}

template<>
inline const char * name<labust_msgs::srv::RegisterControllerV3_Response>()
{
  return "labust_msgs/srv/RegisterControllerV3_Response";
}

template<>
struct has_fixed_size<labust_msgs::srv::RegisterControllerV3_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<labust_msgs::srv::RegisterControllerV3_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<labust_msgs::srv::RegisterControllerV3_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::RegisterControllerV3>()
{
  return "labust_msgs::srv::RegisterControllerV3";
}

template<>
inline const char * name<labust_msgs::srv::RegisterControllerV3>()
{
  return "labust_msgs/srv/RegisterControllerV3";
}

template<>
struct has_fixed_size<labust_msgs::srv::RegisterControllerV3>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::srv::RegisterControllerV3_Request>::value &&
    has_fixed_size<labust_msgs::srv::RegisterControllerV3_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::srv::RegisterControllerV3>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::srv::RegisterControllerV3_Request>::value &&
    has_bounded_size<labust_msgs::srv::RegisterControllerV3_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::srv::RegisterControllerV3>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::srv::RegisterControllerV3_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::srv::RegisterControllerV3_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__TRAITS_HPP_
