// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/IdentModel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "labust_msgs/msg/detail/ident_model__struct.hpp"
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

void IdentModel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) labust_msgs::msg::IdentModel(_init);
}

void IdentModel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<labust_msgs::msg::IdentModel *>(message_memory);
  typed_message->~IdentModel();
}

size_t size_function__IdentModel__tf_num(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IdentModel__tf_num(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__IdentModel__tf_num(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__IdentModel__tf_num(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IdentModel__tf_den(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IdentModel__tf_den(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__IdentModel__tf_den(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__IdentModel__tf_den(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IdentModel__ss_mat_a(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IdentModel__ss_mat_a(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__IdentModel__ss_mat_a(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__IdentModel__ss_mat_a(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IdentModel__ss_mat_b(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IdentModel__ss_mat_b(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__IdentModel__ss_mat_b(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__IdentModel__ss_mat_b(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IdentModel__ss_mat_c(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IdentModel__ss_mat_c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__IdentModel__ss_mat_c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__IdentModel__ss_mat_c(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IdentModel__ss_mat_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IdentModel__ss_mat_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__IdentModel__ss_mat_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__IdentModel__ss_mat_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IdentModel_message_member_array[10] = {
  {
    "model_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::IdentModel, model_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dof",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::IdentModel, dof),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tf_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::IdentModel, tf_num),  // bytes offset in struct
    nullptr,  // default value
    size_function__IdentModel__tf_num,  // size() function pointer
    get_const_function__IdentModel__tf_num,  // get_const(index) function pointer
    get_function__IdentModel__tf_num,  // get(index) function pointer
    resize_function__IdentModel__tf_num  // resize(index) function pointer
  },
  {
    "tf_den",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::IdentModel, tf_den),  // bytes offset in struct
    nullptr,  // default value
    size_function__IdentModel__tf_den,  // size() function pointer
    get_const_function__IdentModel__tf_den,  // get_const(index) function pointer
    get_function__IdentModel__tf_den,  // get(index) function pointer
    resize_function__IdentModel__tf_den  // resize(index) function pointer
  },
  {
    "ss_dim_n",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::IdentModel, ss_dim_n),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ss_dim_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::IdentModel, ss_dim_m),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ss_mat_a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::IdentModel, ss_mat_a),  // bytes offset in struct
    nullptr,  // default value
    size_function__IdentModel__ss_mat_a,  // size() function pointer
    get_const_function__IdentModel__ss_mat_a,  // get_const(index) function pointer
    get_function__IdentModel__ss_mat_a,  // get(index) function pointer
    resize_function__IdentModel__ss_mat_a  // resize(index) function pointer
  },
  {
    "ss_mat_b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::IdentModel, ss_mat_b),  // bytes offset in struct
    nullptr,  // default value
    size_function__IdentModel__ss_mat_b,  // size() function pointer
    get_const_function__IdentModel__ss_mat_b,  // get_const(index) function pointer
    get_function__IdentModel__ss_mat_b,  // get(index) function pointer
    resize_function__IdentModel__ss_mat_b  // resize(index) function pointer
  },
  {
    "ss_mat_c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::IdentModel, ss_mat_c),  // bytes offset in struct
    nullptr,  // default value
    size_function__IdentModel__ss_mat_c,  // size() function pointer
    get_const_function__IdentModel__ss_mat_c,  // get_const(index) function pointer
    get_function__IdentModel__ss_mat_c,  // get(index) function pointer
    resize_function__IdentModel__ss_mat_c  // resize(index) function pointer
  },
  {
    "ss_mat_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::msg::IdentModel, ss_mat_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__IdentModel__ss_mat_d,  // size() function pointer
    get_const_function__IdentModel__ss_mat_d,  // get_const(index) function pointer
    get_function__IdentModel__ss_mat_d,  // get(index) function pointer
    resize_function__IdentModel__ss_mat_d  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IdentModel_message_members = {
  "labust_msgs::msg",  // message namespace
  "IdentModel",  // message name
  10,  // number of fields
  sizeof(labust_msgs::msg::IdentModel),
  IdentModel_message_member_array,  // message members
  IdentModel_init_function,  // function to initialize message memory (memory has to be allocated)
  IdentModel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IdentModel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IdentModel_message_members,
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
get_message_type_support_handle<labust_msgs::msg::IdentModel>()
{
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::IdentModel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, msg, IdentModel)() {
  return &::labust_msgs::msg::rosidl_typesupport_introspection_cpp::IdentModel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
