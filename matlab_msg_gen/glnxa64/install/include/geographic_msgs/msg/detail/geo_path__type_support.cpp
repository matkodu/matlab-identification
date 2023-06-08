// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from geographic_msgs:msg/GeoPath.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "geographic_msgs/msg/detail/geo_path__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace geographic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GeoPath_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) geographic_msgs::msg::GeoPath(_init);
}

void GeoPath_fini_function(void * message_memory)
{
  auto typed_message = static_cast<geographic_msgs::msg::GeoPath *>(message_memory);
  typed_message->~GeoPath();
}

size_t size_function__GeoPath__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geographic_msgs::msg::GeoPoseStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeoPath__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geographic_msgs::msg::GeoPoseStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__GeoPath__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geographic_msgs::msg::GeoPoseStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__GeoPath__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geographic_msgs::msg::GeoPoseStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GeoPath_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::GeoPath, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::GeoPoseStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::GeoPath, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeoPath__poses,  // size() function pointer
    get_const_function__GeoPath__poses,  // get_const(index) function pointer
    get_function__GeoPath__poses,  // get(index) function pointer
    resize_function__GeoPath__poses  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GeoPath_message_members = {
  "geographic_msgs::msg",  // message namespace
  "GeoPath",  // message name
  2,  // number of fields
  sizeof(geographic_msgs::msg::GeoPath),
  GeoPath_message_member_array,  // message members
  GeoPath_init_function,  // function to initialize message memory (memory has to be allocated)
  GeoPath_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GeoPath_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GeoPath_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace geographic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::msg::GeoPath>()
{
  return &::geographic_msgs::msg::rosidl_typesupport_introspection_cpp::GeoPath_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, msg, GeoPath)() {
  return &::geographic_msgs::msg::rosidl_typesupport_introspection_cpp::GeoPath_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
