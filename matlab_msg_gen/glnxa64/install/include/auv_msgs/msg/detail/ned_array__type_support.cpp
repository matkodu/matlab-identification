// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from auv_msgs:msg/NEDArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "auv_msgs/msg/detail/ned_array__struct.hpp"
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

void NEDArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) auv_msgs::msg::NEDArray(_init);
}

void NEDArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<auv_msgs::msg::NEDArray *>(message_memory);
  typed_message->~NEDArray();
}

size_t size_function__NEDArray__neds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<auv_msgs::msg::NED> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NEDArray__neds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<auv_msgs::msg::NED> *>(untyped_member);
  return &member[index];
}

void * get_function__NEDArray__neds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<auv_msgs::msg::NED> *>(untyped_member);
  return &member[index];
}

void resize_function__NEDArray__neds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<auv_msgs::msg::NED> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NEDArray_message_member_array[1] = {
  {
    "neds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<auv_msgs::msg::NED>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs::msg::NEDArray, neds),  // bytes offset in struct
    nullptr,  // default value
    size_function__NEDArray__neds,  // size() function pointer
    get_const_function__NEDArray__neds,  // get_const(index) function pointer
    get_function__NEDArray__neds,  // get(index) function pointer
    resize_function__NEDArray__neds  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NEDArray_message_members = {
  "auv_msgs::msg",  // message namespace
  "NEDArray",  // message name
  1,  // number of fields
  sizeof(auv_msgs::msg::NEDArray),
  NEDArray_message_member_array,  // message members
  NEDArray_init_function,  // function to initialize message memory (memory has to be allocated)
  NEDArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NEDArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NEDArray_message_members,
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
get_message_type_support_handle<auv_msgs::msg::NEDArray>()
{
  return &::auv_msgs::msg::rosidl_typesupport_introspection_cpp::NEDArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, auv_msgs, msg, NEDArray)() {
  return &::auv_msgs::msg::rosidl_typesupport_introspection_cpp::NEDArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
