// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/RegisterController.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/register_controller__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/register_controller__struct.h"
#include "labust_msgs/msg/detail/register_controller__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // name, parent
#include "rosidl_runtime_c/string_functions.h"  // name, parent

// forward declare type support functions


using _RegisterController__ros_msg_type = labust_msgs__msg__RegisterController;

static bool _RegisterController__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RegisterController__ros_msg_type * ros_message = static_cast<const _RegisterController__ros_msg_type *>(untyped_ros_message);
  // Field name: parent
  {
    const rosidl_runtime_c__String * str = &ros_message->parent;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: used_tau
  {
    size_t size = 6;
    auto array_ptr = ros_message->used_tau;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: used_nu
  {
    size_t size = 6;
    auto array_ptr = ros_message->used_nu;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RegisterController__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RegisterController__ros_msg_type * ros_message = static_cast<_RegisterController__ros_msg_type *>(untyped_ros_message);
  // Field name: parent
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->parent.data) {
      rosidl_runtime_c__String__init(&ros_message->parent);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->parent,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'parent'\n");
      return false;
    }
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: used_tau
  {
    size_t size = 6;
    auto array_ptr = ros_message->used_tau;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: used_nu
  {
    size_t size = 6;
    auto array_ptr = ros_message->used_nu;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__RegisterController(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RegisterController__ros_msg_type * ros_message = static_cast<const _RegisterController__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name parent
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->parent.size + 1);
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name used_tau
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->used_tau;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name used_nu
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->used_nu;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RegisterController__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__RegisterController(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__RegisterController(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: parent
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: used_tau
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: used_nu
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RegisterController__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__RegisterController(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RegisterController = {
  "labust_msgs::msg",
  "RegisterController",
  _RegisterController__cdr_serialize,
  _RegisterController__cdr_deserialize,
  _RegisterController__get_serialized_size,
  _RegisterController__max_serialized_size
};

static rosidl_message_type_support_t _RegisterController__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RegisterController,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, RegisterController)() {
  return &_RegisterController__type_support;
}

#if defined(__cplusplus)
}
#endif
