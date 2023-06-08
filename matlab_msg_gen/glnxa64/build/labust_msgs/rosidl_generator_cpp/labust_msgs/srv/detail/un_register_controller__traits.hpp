// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:srv/UnRegisterController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__TRAITS_HPP_
#define LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__TRAITS_HPP_

#include "labust_msgs/srv/detail/un_register_controller__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::UnRegisterController_Request>()
{
  return "labust_msgs::srv::UnRegisterController_Request";
}

template<>
inline const char * name<labust_msgs::srv::UnRegisterController_Request>()
{
  return "labust_msgs/srv/UnRegisterController_Request";
}

template<>
struct has_fixed_size<labust_msgs::srv::UnRegisterController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<labust_msgs::srv::UnRegisterController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<labust_msgs::srv::UnRegisterController_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::UnRegisterController_Response>()
{
  return "labust_msgs::srv::UnRegisterController_Response";
}

template<>
inline const char * name<labust_msgs::srv::UnRegisterController_Response>()
{
  return "labust_msgs/srv/UnRegisterController_Response";
}

template<>
struct has_fixed_size<labust_msgs::srv::UnRegisterController_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<labust_msgs::srv::UnRegisterController_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<labust_msgs::srv::UnRegisterController_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::srv::UnRegisterController>()
{
  return "labust_msgs::srv::UnRegisterController";
}

template<>
inline const char * name<labust_msgs::srv::UnRegisterController>()
{
  return "labust_msgs/srv/UnRegisterController";
}

template<>
struct has_fixed_size<labust_msgs::srv::UnRegisterController>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::srv::UnRegisterController_Request>::value &&
    has_fixed_size<labust_msgs::srv::UnRegisterController_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::srv::UnRegisterController>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::srv::UnRegisterController_Request>::value &&
    has_bounded_size<labust_msgs::srv::UnRegisterController_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::srv::UnRegisterController>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::srv::UnRegisterController_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::srv::UnRegisterController_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__TRAITS_HPP_
