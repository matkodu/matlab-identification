// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/ManualConfiguration.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "labust_msgs/msg/detail/manual_configuration__struct.hpp"
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

void ManualConfiguration_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) labust_msgs::msg::ManualConfiguration(_init);
}

void ManualConfiguration_fini_function(void * message_memory)
{
  auto typed_message = static_cast<labust_msgs::msg::ManualConfiguration *>(message_memory);
  typed_message->~ManualConfiguration();
}

size_t size_function__ManualConfiguration__axes_map(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ManualConfiguration__axes_map(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ManualConfiguration__axes_map(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__ManualConfiguration__axes_map(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ManualConfiguration__scale_map(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ManualConfiguration__scale_map(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ManualConfiguration__scale_map(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__ManualConfiguration__scale_map(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ManualConfiguration__integrated(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ManualConfiguration__integrated(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ManualConfiguration__integrated(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__ManualConfiguration__integrated(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ManualConfiguration__maximum_effort(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ManualConfiguration__maximum_effort(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ManualConfiguration__maximum_effort(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__ManualConfiguration__maximum_effort(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ManualConfiguration__maximum_nu(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ManualConfiguration__maximum_nu(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ManualConfiguration__maximum_nu(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__ManualConfiguration__maximum_nu(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ManualConfiguration__maximum_speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ManualConfiguration__maximum_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ManualConfiguration__maximum_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__ManualConfiguration__maximum_speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ManualConfiguration_message_member_array[9] = {
  {
    "axes_map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ManualConfiguration, axes_map),  // bytes offset in struct
    nullptr,  // default value
    size_function__ManualConfiguration__axes_map,  // size() function pointer
    get_const_function__ManualConfiguration__axes_map,  // get_const(index) function pointer
    get_function__ManualConfiguration__axes_map,  // get(index) function pointer
    resize_function__ManualConfiguration__axes_map  // resize(index) function pointer
  },
  {
    "scale_map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ManualConfiguration, scale_map),  // bytes offset in struct
    nullptr,  // default value
    size_function__ManualConfiguration__scale_map,  // size() function pointer
    get_const_function__ManualConfiguration__scale_map,  // get_const(index) function pointer
    get_function__ManualConfiguration__scale_map,  // get(index) function pointer
    resize_function__ManualConfiguration__scale_map  // resize(index) function pointer
  },
  {
    "integrated",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ManualConfiguration, integrated),  // bytes offset in struct
    nullptr,  // default value
    size_function__ManualConfiguration__integrated,  // size() function pointer
    get_const_function__ManualConfiguration__integrated,  // get_const(index) function pointer
    get_function__ManualConfiguration__integrated,  // get(index) function pointer
    resize_function__ManualConfiguration__integrated  // resize(index) function pointer
  },
  {
    "maximum_effort",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ManualConfiguration, maximum_effort),  // bytes offset in struct
    nullptr,  // default value
    size_function__ManualConfiguration__maximum_effort,  // size() function pointer
    get_const_function__ManualConfiguration__maximum_effort,  // get_const(index) function pointer
    get_function__ManualConfiguration__maximum_effort,  // get(index) function pointer
    resize_function__ManualConfiguration__maximum_effort  // resize(index) function pointer
  },
  {
    "maximum_nu",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ManualConfiguration, maximum_nu),  // bytes offset in struct
    nullptr,  // default value
    size_function__ManualConfiguration__maximum_nu,  // size() function pointer
    get_const_function__ManualConfiguration__maximum_nu,  // get_const(index) function pointer
    get_function__ManualConfiguration__maximum_nu,  // get(index) function pointer
    resize_function__ManualConfiguration__maximum_nu  // resize(index) function pointer
  },
  {
    "maximum_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ManualConfiguration, maximum_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__ManualConfiguration__maximum_speed,  // size() function pointer
    get_const_function__ManualConfiguration__maximum_speed,  // get_const(index) function pointer
    get_function__ManualConfiguration__maximum_speed,  // get(index) function pointer
    resize_function__ManualConfiguration__maximum_speed  // resize(index) function pointer
  },
  {
    "sampling_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ManualConfiguration, sampling_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "use_ff",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ManualConfiguration, use_ff),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "topic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::ManualConfiguration, topic),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ManualConfiguration_message_members = {
  "labust_msgs::msg",  // message namespace
  "ManualConfiguration",  // message name
  9,  // number of fields
  sizeof(labust_msgs::msg::ManualConfiguration),
  ManualConfiguration_message_member_array,  // message members
  ManualConfiguration_init_function,  // function to initialize message memory (memory has to be allocated)
  ManualConfiguration_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ManualConfiguration_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ManualConfiguration_message_members,
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
get_message_type_support_handle<labust_msgs::msg::ManualConfiguration>()
{
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::ManualConfiguration_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, msg, ManualConfiguration)() {
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::ManualConfiguration_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
