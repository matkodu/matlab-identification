// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from auv_msgs:msg/NED.idl
// generated code does not contain a copyright notice
#include "auv_msgs/msg/detail/ned__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "auv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "auv_msgs/msg/detail/ned__struct.h"
#include "auv_msgs/msg/detail/ned__functions.h"
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


// forward declare type support functions


using _NED__ros_msg_type = auv_msgs__msg__NED;

static bool _NED__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NED__ros_msg_type * ros_message = static_cast<const _NED__ros_msg_type *>(untyped_ros_message);
  // Field name: north
  {
    cdr << ros_message->north;
  }

  // Field name: east
  {
    cdr << ros_message->east;
  }

  // Field name: depth
  {
    cdr << ros_message->depth;
  }

  return true;
}

static bool _NED__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NED__ros_msg_type * ros_message = static_cast<_NED__ros_msg_type *>(untyped_ros_message);
  // Field name: north
  {
    cdr >> ros_message->north;
  }

  // Field name: east
  {
    cdr >> ros_message->east;
  }

  // Field name: depth
  {
    cdr >> ros_message->depth;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_auv_msgs
size_t get_serialized_size_auv_msgs__msg__NED(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NED__ros_msg_type * ros_message = static_cast<const _NED__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name north
  {
    size_t item_size = sizeof(ros_message->north);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name east
  {
    size_t item_size = sizeof(ros_message->east);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name depth
  {
    size_t item_size = sizeof(ros_message->depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NED__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_auv_msgs__msg__NED(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_auv_msgs
size_t max_serialized_size_auv_msgs__msg__NED(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: north
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: east
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: depth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NED__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_auv_msgs__msg__NED(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NED = {
  "auv_msgs::msg",
  "NED",
  _NED__cdr_serialize,
  _NED__cdr_deserialize,
  _NED__get_serialized_size,
  _NED__max_serialized_size
};

static rosidl_message_type_support_t _NED__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NED,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, auv_msgs, msg, NED)() {
  return &_NED__type_support;
}

#if defined(__cplusplus)
}
#endif
