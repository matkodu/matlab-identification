// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/NanomodemPayload.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "labust_msgs/msg/detail/nanomodem_payload__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace labust_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NanomodemPayload_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) labust_msgs::msg::NanomodemPayload(_init);
}

void NanomodemPayload_fini_function(void * message_memory)
{
  auto typed_message = static_cast<labust_msgs::msg::NanomodemPayload *>(message_memory);
  typed_message->~NanomodemPayload();
}

size_t size_function__NanomodemPayload__msg(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NanomodemPayload__msg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__NanomodemPayload__msg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void resize_function__NanomodemPayload__msg(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NanomodemPayload_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::NanomodemPayload, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::NanomodemPayload, msg),  // bytes offset in struct
    nullptr,  // default value
    size_function__NanomodemPayload__msg,  // size() function pointer
    get_const_function__NanomodemPayload__msg,  // get_const(index) function pointer
    get_function__NanomodemPayload__msg,  // get(index) function pointer
    resize_function__NanomodemPayload__msg  // resize(index) function pointer
  },
  {
    "sender_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::NanomodemPayload, sender_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msg_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::NanomodemPayload, msg_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NanomodemPayload_message_members = {
  "labust_msgs::msg",  // message namespace
  "NanomodemPayload",  // message name
  4,  // number of fields
  sizeof(labust_msgs::msg::NanomodemPayload),
  NanomodemPayload_message_member_array,  // message members
  NanomodemPayload_init_function,  // function to initialize message memory (memory has to be allocated)
  NanomodemPayload_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NanomodemPayload_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NanomodemPayload_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace labust_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::msg::NanomodemPayload>()
{
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::NanomodemPayload_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, msg, NanomodemPayload)() {
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::NanomodemPayload_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
