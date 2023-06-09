// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/MissionStatus.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/mission_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/mission_status__struct.h"
#include "labust_msgs/msg/detail/mission_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // active_primitive
#include "rosidl_runtime_c/string_functions.h"  // active_primitive

// forward declare type support functions


using _MissionStatus__ros_msg_type = labust_msgs__msg__MissionStatus;

static bool _MissionStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MissionStatus__ros_msg_type * ros_message = static_cast<const _MissionStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: mission_active
  {
    cdr << (ros_message->mission_active ? true : false);
  }

  // Field name: active_primitive
  {
    const rosidl_runtime_c__String * str = &ros_message->active_primitive;
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

  // Field name: mission_execution_ready
  {
    cdr << (ros_message->mission_execution_ready ? true : false);
  }

  // Field name: manual_enabled
  {
    cdr << (ros_message->manual_enabled ? true : false);
  }

  return true;
}

static bool _MissionStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MissionStatus__ros_msg_type * ros_message = static_cast<_MissionStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: mission_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mission_active = tmp ? true : false;
  }

  // Field name: active_primitive
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->active_primitive.data) {
      rosidl_runtime_c__String__init(&ros_message->active_primitive);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->active_primitive,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'active_primitive'\n");
      return false;
    }
  }

  // Field name: mission_execution_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mission_execution_ready = tmp ? true : false;
  }

  // Field name: manual_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->manual_enabled = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__MissionStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MissionStatus__ros_msg_type * ros_message = static_cast<const _MissionStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mission_active
  {
    size_t item_size = sizeof(ros_message->mission_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_primitive
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->active_primitive.size + 1);
  // field.name mission_execution_ready
  {
    size_t item_size = sizeof(ros_message->mission_execution_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name manual_enabled
  {
    size_t item_size = sizeof(ros_message->manual_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MissionStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__MissionStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__MissionStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mission_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_primitive
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mission_execution_ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: manual_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MissionStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__MissionStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MissionStatus = {
  "labust_msgs::msg",
  "MissionStatus",
  _MissionStatus__cdr_serialize,
  _MissionStatus__cdr_deserialize,
  _MissionStatus__get_serialized_size,
  _MissionStatus__max_serialized_size
};

static rosidl_message_type_support_t _MissionStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MissionStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, MissionStatus)() {
  return &_MissionStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
