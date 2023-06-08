// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/RhodamineData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "labust_msgs/msg/detail/rhodamine_data__struct.hpp"
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

void RhodamineData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) labust_msgs::msg::RhodamineData(_init);
}

void RhodamineData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<labust_msgs::msg::RhodamineData *>(message_memory);
  typed_message->~RhodamineData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RhodamineData_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::RhodamineData, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::GeoPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::RhodamineData, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "adc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<labust_msgs::msg::RhodamineAdc>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::RhodamineData, adc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RhodamineData_message_members = {
  "labust_msgs::msg",  // message namespace
  "RhodamineData",  // message name
  3,  // number of fields
  sizeof(labust_msgs::msg::RhodamineData),
  RhodamineData_message_member_array,  // message members
  RhodamineData_init_function,  // function to initialize message memory (memory has to be allocated)
  RhodamineData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RhodamineData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RhodamineData_message_members,
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
get_message_type_support_handle<labust_msgs::msg::RhodamineData>()
{
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::RhodamineData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, msg, RhodamineData)() {
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::RhodamineData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
