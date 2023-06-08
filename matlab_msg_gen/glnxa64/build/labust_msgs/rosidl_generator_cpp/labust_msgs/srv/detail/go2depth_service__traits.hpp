// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:srv/Go2depthService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__GO2DEPTH_SERVICE__TRAITS_HPP_
#define LABUST_MSGS__SRV__DETAIL__GO2DEPTH_SERVICE__TRAITS_HPP_

#include "labust_msgs/srv/detail/go2depth_service__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::Go2depthService_Request>()
{
  return "labust_msgs::srv::Go2depthService_Request";
}

template<>
inline const char * name<labust_msgs::srv::Go2depthService_Request>()
{
  return "labust_msgs/srv/Go2depthService_Request";
}

template<>
struct has_fixed_size<labust_msgs::srv::Go2depthService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<labust_msgs::srv::Go2depthService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<labust_msgs::srv::Go2depthService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::Go2depthService_Response>()
{
  return "labust_msgs::srv::Go2depthService_Response";
}

template<>
inline const char * name<labust_msgs::srv::Go2depthService_Response>()
{
  return "labust_msgs/srv/Go2depthService_Response";
}

template<>
struct has_fixed_size<labust_msgs::srv::Go2depthService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<labust_msgs::srv::Go2depthService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<labust_msgs::srv::Go2depthService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::Go2depthService>()
{
  return "labust_msgs::srv::Go2depthService";
}

template<>
inline const char * name<labust_msgs::srv::Go2depthService>()
{
  return "labust_msgs/srv/Go2depthService";
}

template<>
struct has_fixed_size<labust_msgs::srv::Go2depthService>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::srv::Go2depthService_Request>::value &&
    has_fixed_size<labust_msgs::srv::Go2depthService_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::srv::Go2depthService>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::srv::Go2depthService_Request>::value &&
    has_bounded_size<labust_msgs::srv::Go2depthService_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::srv::Go2depthService>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::srv::Go2depthService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::srv::Go2depthService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__SRV__DETAIL__GO2DEPTH_SERVICE__TRAITS_HPP_
