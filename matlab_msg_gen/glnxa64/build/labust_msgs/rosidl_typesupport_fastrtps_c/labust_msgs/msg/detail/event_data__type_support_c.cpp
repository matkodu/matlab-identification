// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/EventData.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/event_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/event_data__struct.h"
#include "labust_msgs/msg/detail/event_data__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // on_event_next, on_event_next_active
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // on_event_next, on_event_next_active

// forward declare type support functions


using _EventData__ros_msg_type = labust_msgs__msg__EventData;

static bool _EventData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EventData__ros_msg_type * ros_message = static_cast<const _EventData__ros_msg_type *>(untyped_ros_message);
  // Field name: timeout
  {
    cdr << ros_message->timeout;
  }

  // Field name: on_event_next
  {
    size_t size = ros_message->on_event_next.size;
    auto array_ptr = ros_message->on_event_next.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: on_event_next_active
  {
    size_t size = ros_message->on_event_next_active.size;
    auto array_ptr = ros_message->on_event_next_active.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _EventData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EventData__ros_msg_type * ros_message = static_cast<_EventData__ros_msg_type *>(untyped_ros_message);
  // Field name: timeout
  {
    cdr >> ros_message->timeout;
  }

  // Field name: on_event_next
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->on_event_next.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->on_event_next);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->on_event_next, size)) {
      return "failed to create array for field 'on_event_next'";
    }
    auto array_ptr = ros_message->on_event_next.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: on_event_next_active
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->on_event_next_active.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->on_event_next_active);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->on_event_next_active, size)) {
      return "failed to create array for field 'on_event_next_active'";
    }
    auto array_ptr = ros_message->on_event_next_active.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__EventData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EventData__ros_msg_type * ros_message = static_cast<const _EventData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timeout
  {
    size_t item_size = sizeof(ros_message->timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name on_event_next
  {
    size_t array_size = ros_message->on_event_next.size;
    auto array_ptr = ros_message->on_event_next.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name on_event_next_active
  {
    size_t array_size = ros_message->on_event_next_active.size;
    auto array_ptr = ros_message->on_event_next_active.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EventData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__EventData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__EventData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: on_event_next
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: on_event_next_active
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EventData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__EventData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EventData = {
  "labust_msgs::msg",
  "EventData",
  _EventData__cdr_serialize,
  _EventData__cdr_deserialize,
  _EventData__get_serialized_size,
  _EventData__max_serialized_size
};

static rosidl_message_type_support_t _EventData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EventData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, EventData)() {
  return &_EventData__type_support;
}

#if defined(__cplusplus)
}
#endif
