// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/DataEventsContainer.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/data_events_container__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/data_events_container__struct.h"
#include "labust_msgs/msg/detail/data_events_container__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // events_var
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // events_var
#include "std_msgs/msg/detail/float64_multi_array__functions.h"  // mission_var, state_var

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
size_t get_serialized_size_std_msgs__msg__Float64MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
size_t max_serialized_size_std_msgs__msg__Float64MultiArray(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64MultiArray)();


using _DataEventsContainer__ros_msg_type = labust_msgs__msg__DataEventsContainer;

static bool _DataEventsContainer__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DataEventsContainer__ros_msg_type * ros_message = static_cast<const _DataEventsContainer__ros_msg_type *>(untyped_ros_message);
  // Field name: state_var
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64MultiArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->state_var, cdr))
    {
      return false;
    }
  }

  // Field name: mission_var
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64MultiArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mission_var, cdr))
    {
      return false;
    }
  }

  // Field name: events_var
  {
    size_t size = ros_message->events_var.size;
    auto array_ptr = ros_message->events_var.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _DataEventsContainer__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DataEventsContainer__ros_msg_type * ros_message = static_cast<_DataEventsContainer__ros_msg_type *>(untyped_ros_message);
  // Field name: state_var
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64MultiArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->state_var))
    {
      return false;
    }
  }

  // Field name: mission_var
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64MultiArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mission_var))
    {
      return false;
    }
  }

  // Field name: events_var
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->events_var.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->events_var);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->events_var, size)) {
      return "failed to create array for field 'events_var'";
    }
    auto array_ptr = ros_message->events_var.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__DataEventsContainer(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DataEventsContainer__ros_msg_type * ros_message = static_cast<const _DataEventsContainer__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state_var

  current_alignment += get_serialized_size_std_msgs__msg__Float64MultiArray(
    &(ros_message->state_var), current_alignment);
  // field.name mission_var

  current_alignment += get_serialized_size_std_msgs__msg__Float64MultiArray(
    &(ros_message->mission_var), current_alignment);
  // field.name events_var
  {
    size_t array_size = ros_message->events_var.size;
    auto array_ptr = ros_message->events_var.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DataEventsContainer__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__DataEventsContainer(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__DataEventsContainer(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: state_var
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64MultiArray(
        full_bounded, current_alignment);
    }
  }
  // member: mission_var
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64MultiArray(
        full_bounded, current_alignment);
    }
  }
  // member: events_var
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _DataEventsContainer__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__DataEventsContainer(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DataEventsContainer = {
  "labust_msgs::msg",
  "DataEventsContainer",
  _DataEventsContainer__cdr_serialize,
  _DataEventsContainer__cdr_deserialize,
  _DataEventsContainer__get_serialized_size,
  _DataEventsContainer__max_serialized_size
};

static rosidl_message_type_support_t _DataEventsContainer__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DataEventsContainer,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, DataEventsContainer)() {
  return &_DataEventsContainer__type_support;
}

#if defined(__cplusplus)
}
#endif
