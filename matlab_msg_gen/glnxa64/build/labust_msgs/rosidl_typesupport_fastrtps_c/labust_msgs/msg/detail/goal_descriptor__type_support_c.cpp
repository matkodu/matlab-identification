// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/GoalDescriptor.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/goal_descriptor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/goal_descriptor__struct.h"
#include "labust_msgs/msg/detail/goal_descriptor__functions.h"
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

#include "rosidl_runtime_c/string.h"  // requester
#include "rosidl_runtime_c/string_functions.h"  // requester

// forward declare type support functions


using _GoalDescriptor__ros_msg_type = labust_msgs__msg__GoalDescriptor;

static bool _GoalDescriptor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GoalDescriptor__ros_msg_type * ros_message = static_cast<const _GoalDescriptor__ros_msg_type *>(untyped_ros_message);
  // Field name: requester
  {
    const rosidl_runtime_c__String * str = &ros_message->requester;
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

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: priority
  {
    cdr << ros_message->priority;
  }

  return true;
}

static bool _GoalDescriptor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GoalDescriptor__ros_msg_type * ros_message = static_cast<_GoalDescriptor__ros_msg_type *>(untyped_ros_message);
  // Field name: requester
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->requester.data) {
      rosidl_runtime_c__String__init(&ros_message->requester);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->requester,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'requester'\n");
      return false;
    }
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: priority
  {
    cdr >> ros_message->priority;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__GoalDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GoalDescriptor__ros_msg_type * ros_message = static_cast<const _GoalDescriptor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name requester
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->requester.size + 1);
  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name priority
  {
    size_t item_size = sizeof(ros_message->priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GoalDescriptor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__GoalDescriptor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__GoalDescriptor(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: requester
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GoalDescriptor__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__GoalDescriptor(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GoalDescriptor = {
  "labust_msgs::msg",
  "GoalDescriptor",
  _GoalDescriptor__cdr_serialize,
  _GoalDescriptor__cdr_deserialize,
  _GoalDescriptor__get_serialized_size,
  _GoalDescriptor__max_serialized_size
};

static rosidl_message_type_support_t _GoalDescriptor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GoalDescriptor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, GoalDescriptor)() {
  return &_GoalDescriptor__type_support;
}

#if defined(__cplusplus)
}
#endif
