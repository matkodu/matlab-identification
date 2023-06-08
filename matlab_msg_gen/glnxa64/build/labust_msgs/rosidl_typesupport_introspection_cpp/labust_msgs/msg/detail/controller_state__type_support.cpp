// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "labust_msgs/msg/detail/controller_state__struct.hpp"
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

void ControllerState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) labust_msgs::msg::ControllerState(_init);
}

void ControllerState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<labust_msgs::msg::ControllerState *>(message_memory);
  typed_message->~ControllerState();
}

size_t size_function__ControllerState__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ControllerState__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerState__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ControllerState__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ControllerState__info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<labust_msgs::msg::ControllerInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ControllerState__info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<labust_msgs::msg::ControllerInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerState__info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<labust_msgs::msg::ControllerInfo> *>(untyped_member);
  return &member[index];
}

void resize_function__ControllerState__info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<labust_msgs::msg::ControllerInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControllerState_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ControllerState, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerState__name,  // size() function pointer
    get_const_function__ControllerState__name,  // get_const(index) function pointer
    get_function__ControllerState__name,  // get(index) function pointer
    resize_function__ControllerState__name  // resize(index) function pointer
  },
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<labust_msgs::msg::ControllerInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ControllerState, info),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerState__info,  // size() function pointer
    get_const_function__ControllerState__info,  // get_const(index) function pointer
    get_function__ControllerState__info,  // get(index) function pointer
    resize_function__ControllerState__info  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControllerState_message_members = {
  "labust_msgs::msg",  // message namespace
  "ControllerState",  // message name
  2,  // number of fields
  sizeof(labust_msgs::msg::ControllerState),
  ControllerState_message_member_array,  // message members
  ControllerState_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControllerState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControllerState_message_members,
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
get_message_type_support_handle<labust_msgs::msg::ControllerState>()
{
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, msg, ControllerState)() {
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
