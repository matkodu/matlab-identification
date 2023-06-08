// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/RegisterController.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "labust_msgs/msg/detail/register_controller__struct.hpp"
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

void RegisterController_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) labust_msgs::msg::RegisterController(_init);
}

void RegisterController_fini_function(void * message_memory)
{
  auto typed_message = static_cast<labust_msgs::msg::RegisterController *>(message_memory);
  typed_message->~RegisterController();
}

size_t size_function__RegisterController__used_tau(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__RegisterController__used_tau(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__RegisterController__used_tau(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__RegisterController__used_nu(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__RegisterController__used_nu(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__RegisterController__used_nu(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 6> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RegisterController_message_member_array[4] = {
  {
    "parent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::RegisterController, parent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::RegisterController, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "used_tau",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::RegisterController, used_tau),  // bytes offset in struct
    nullptr,  // default value
    size_function__RegisterController__used_tau,  // size() function pointer
    get_const_function__RegisterController__used_tau,  // get_const(index) function pointer
    get_function__RegisterController__used_tau,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "used_nu",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::RegisterController, used_nu),  // bytes offset in struct
    nullptr,  // default value
    size_function__RegisterController__used_nu,  // size() function pointer
    get_const_function__RegisterController__used_nu,  // get_const(index) function pointer
    get_function__RegisterController__used_nu,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RegisterController_message_members = {
  "labust_msgs::msg",  // message namespace
  "RegisterController",  // message name
  4,  // number of fields
  sizeof(labust_msgs::msg::RegisterController),
  RegisterController_message_member_array,  // message members
  RegisterController_init_function,  // function to initialize message memory (memory has to be allocated)
  RegisterController_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RegisterController_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RegisterController_message_members,
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
get_message_type_support_handle<labust_msgs::msg::RegisterController>()
{
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::RegisterController_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, msg, RegisterController)() {
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::RegisterController_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
