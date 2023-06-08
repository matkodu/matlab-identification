// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from auv_msgs:msg/BodyVelocityRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "auv_msgs/msg/detail/body_velocity_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace auv_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BodyVelocityRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) auv_msgs::msg::BodyVelocityRequest(_init);
}

void BodyVelocityRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<auv_msgs::msg::BodyVelocityRequest *>(message_memory);
  typed_message->~BodyVelocityRequest();
}

size_t size_function__BodyVelocityRequest__disable_axis(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__BodyVelocityRequest__disable_axis(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__BodyVelocityRequest__disable_axis(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 6> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BodyVelocityRequest_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs::msg::BodyVelocityRequest, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "twist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Twist>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs::msg::BodyVelocityRequest, twist),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "disable_axis",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(auv_msgs::msg::BodyVelocityRequest, disable_axis),  // bytes offset in struct
    nullptr,  // default value
    size_function__BodyVelocityRequest__disable_axis,  // size() function pointer
    get_const_function__BodyVelocityRequest__disable_axis,  // get_const(index) function pointer
    get_function__BodyVelocityRequest__disable_axis,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BodyVelocityRequest_message_members = {
  "auv_msgs::msg",  // message namespace
  "BodyVelocityRequest",  // message name
  3,  // number of fields
  sizeof(auv_msgs::msg::BodyVelocityRequest),
  BodyVelocityRequest_message_member_array,  // message members
  BodyVelocityRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  BodyVelocityRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BodyVelocityRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BodyVelocityRequest_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace auv_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<auv_msgs::msg::BodyVelocityRequest>()
{
  return &::auv_msgs::msg::rosidl_typesupport_introspection_cpp::BodyVelocityRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, auv_msgs, msg, BodyVelocityRequest)() {
  return &::auv_msgs::msg::rosidl_typesupport_introspection_cpp::BodyVelocityRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
