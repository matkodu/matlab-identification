// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/StartParser.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/start_parser__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/start_parser__struct.h"
#include "labust_msgs/msg/detail/start_parser__functions.h"
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

#include "auv_msgs/msg/detail/ned__functions.h"  // start_position
#include "rosidl_runtime_c/string.h"  // mission_data
#include "rosidl_runtime_c/string_functions.h"  // mission_data

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
size_t get_serialized_size_auv_msgs__msg__NED(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
size_t max_serialized_size_auv_msgs__msg__NED(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, auv_msgs, msg, NED)();


using _StartParser__ros_msg_type = labust_msgs__msg__StartParser;

static bool _StartParser__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartParser__ros_msg_type * ros_message = static_cast<const _StartParser__ros_msg_type *>(untyped_ros_message);
  // Field name: method
  {
    cdr << ros_message->method;
  }

  // Field name: mission_data
  {
    const rosidl_runtime_c__String * str = &ros_message->mission_data;
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

  // Field name: relative
  {
    cdr << (ros_message->relative ? true : false);
  }

  // Field name: start_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, auv_msgs, msg, NED
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_position, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _StartParser__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartParser__ros_msg_type * ros_message = static_cast<_StartParser__ros_msg_type *>(untyped_ros_message);
  // Field name: method
  {
    cdr >> ros_message->method;
  }

  // Field name: mission_data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mission_data.data) {
      rosidl_runtime_c__String__init(&ros_message->mission_data);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mission_data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mission_data'\n");
      return false;
    }
  }

  // Field name: relative
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->relative = tmp ? true : false;
  }

  // Field name: start_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, auv_msgs, msg, NED
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_position))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__StartParser(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartParser__ros_msg_type * ros_message = static_cast<const _StartParser__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name method
  {
    size_t item_size = sizeof(ros_message->method);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mission_data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission_data.size + 1);
  // field.name relative
  {
    size_t item_size = sizeof(ros_message->relative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_position

  current_alignment += get_serialized_size_auv_msgs__msg__NED(
    &(ros_message->start_position), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _StartParser__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__StartParser(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__StartParser(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: method
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mission_data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: relative
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: start_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_auv_msgs__msg__NED(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StartParser__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__StartParser(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StartParser = {
  "labust_msgs::msg",
  "StartParser",
  _StartParser__cdr_serialize,
  _StartParser__cdr_deserialize,
  _StartParser__get_serialized_size,
  _StartParser__max_serialized_size
};

static rosidl_message_type_support_t _StartParser__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartParser,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, StartParser)() {
  return &_StartParser__type_support;
}

#if defined(__cplusplus)
}
#endif
