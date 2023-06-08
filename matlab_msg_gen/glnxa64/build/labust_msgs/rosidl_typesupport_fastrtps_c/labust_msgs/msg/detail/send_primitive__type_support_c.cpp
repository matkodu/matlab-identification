// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/SendPrimitive.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/send_primitive__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/send_primitive__struct.h"
#include "labust_msgs/msg/detail/send_primitive__functions.h"
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

#include "labust_msgs/msg/detail/event_data__functions.h"  // event
#include "rosidl_runtime_c/primitives_sequence.h"  // primitive_data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // primitive_data
#include "std_msgs/msg/detail/string__functions.h"  // primitive_string

// forward declare type support functions
size_t get_serialized_size_labust_msgs__msg__EventData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_labust_msgs__msg__EventData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, EventData)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
size_t get_serialized_size_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
size_t max_serialized_size_std_msgs__msg__String(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, String)();


using _SendPrimitive__ros_msg_type = labust_msgs__msg__SendPrimitive;

static bool _SendPrimitive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendPrimitive__ros_msg_type * ros_message = static_cast<const _SendPrimitive__ros_msg_type *>(untyped_ros_message);
  // Field name: primitive_id
  {
    cdr << ros_message->primitive_id;
  }

  // Field name: primitive_data
  {
    size_t size = ros_message->primitive_data.size;
    auto array_ptr = ros_message->primitive_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: event
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, labust_msgs, msg, EventData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->event, cdr))
    {
      return false;
    }
  }

  // Field name: primitive_string
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->primitive_string, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SendPrimitive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendPrimitive__ros_msg_type * ros_message = static_cast<_SendPrimitive__ros_msg_type *>(untyped_ros_message);
  // Field name: primitive_id
  {
    cdr >> ros_message->primitive_id;
  }

  // Field name: primitive_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->primitive_data.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->primitive_data);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->primitive_data, size)) {
      return "failed to create array for field 'primitive_data'";
    }
    auto array_ptr = ros_message->primitive_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: event
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, labust_msgs, msg, EventData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->event))
    {
      return false;
    }
  }

  // Field name: primitive_string
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, String
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->primitive_string))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__SendPrimitive(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendPrimitive__ros_msg_type * ros_message = static_cast<const _SendPrimitive__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name primitive_id
  {
    size_t item_size = sizeof(ros_message->primitive_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name primitive_data
  {
    size_t array_size = ros_message->primitive_data.size;
    auto array_ptr = ros_message->primitive_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name event

  current_alignment += get_serialized_size_labust_msgs__msg__EventData(
    &(ros_message->event), current_alignment);
  // field.name primitive_string

  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->primitive_string), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SendPrimitive__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__SendPrimitive(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__SendPrimitive(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: primitive_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: primitive_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: event
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_labust_msgs__msg__EventData(
        full_bounded, current_alignment);
    }
  }
  // member: primitive_string
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__String(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SendPrimitive__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__SendPrimitive(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SendPrimitive = {
  "labust_msgs::msg",
  "SendPrimitive",
  _SendPrimitive__cdr_serialize,
  _SendPrimitive__cdr_deserialize,
  _SendPrimitive__get_serialized_size,
  _SendPrimitive__max_serialized_size
};

static rosidl_message_type_support_t _SendPrimitive__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendPrimitive,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, SendPrimitive)() {
  return &_SendPrimitive__type_support;
}

#if defined(__cplusplus)
}
#endif
