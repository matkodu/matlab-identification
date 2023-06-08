// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/StartNeptusParser.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/start_neptus_parser__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/start_neptus_parser__struct.h"
#include "labust_msgs/msg/detail/start_neptus_parser__functions.h"
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

#include "geographic_msgs/msg/detail/geo_point__functions.h"  // custom_start, origin
#include "rosidl_runtime_c/string.h"  // file_name
#include "rosidl_runtime_c/string_functions.h"  // file_name

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
size_t get_serialized_size_geographic_msgs__msg__GeoPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
size_t max_serialized_size_geographic_msgs__msg__GeoPoint(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint)();


using _StartNeptusParser__ros_msg_type = labust_msgs__msg__StartNeptusParser;

static bool _StartNeptusParser__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartNeptusParser__ros_msg_type * ros_message = static_cast<const _StartNeptusParser__ros_msg_type *>(untyped_ros_message);
  // Field name: file_name
  {
    const rosidl_runtime_c__String * str = &ros_message->file_name;
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

  // Field name: custom_start_flag
  {
    cdr << (ros_message->custom_start_flag ? true : false);
  }

  // Field name: origin
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->origin, cdr))
    {
      return false;
    }
  }

  // Field name: custom_start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->custom_start, cdr))
    {
      return false;
    }
  }

  // Field name: underactuated
  {
    cdr << (ros_message->underactuated ? true : false);
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: victory_radius
  {
    cdr << ros_message->victory_radius;
  }

  return true;
}

static bool _StartNeptusParser__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartNeptusParser__ros_msg_type * ros_message = static_cast<_StartNeptusParser__ros_msg_type *>(untyped_ros_message);
  // Field name: file_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->file_name.data) {
      rosidl_runtime_c__String__init(&ros_message->file_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->file_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'file_name'\n");
      return false;
    }
  }

  // Field name: relative
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->relative = tmp ? true : false;
  }

  // Field name: custom_start_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->custom_start_flag = tmp ? true : false;
  }

  // Field name: origin
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->origin))
    {
      return false;
    }
  }

  // Field name: custom_start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->custom_start))
    {
      return false;
    }
  }

  // Field name: underactuated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->underactuated = tmp ? true : false;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: victory_radius
  {
    cdr >> ros_message->victory_radius;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__StartNeptusParser(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartNeptusParser__ros_msg_type * ros_message = static_cast<const _StartNeptusParser__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name file_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->file_name.size + 1);
  // field.name relative
  {
    size_t item_size = sizeof(ros_message->relative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name custom_start_flag
  {
    size_t item_size = sizeof(ros_message->custom_start_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin

  current_alignment += get_serialized_size_geographic_msgs__msg__GeoPoint(
    &(ros_message->origin), current_alignment);
  // field.name custom_start

  current_alignment += get_serialized_size_geographic_msgs__msg__GeoPoint(
    &(ros_message->custom_start), current_alignment);
  // field.name underactuated
  {
    size_t item_size = sizeof(ros_message->underactuated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name victory_radius
  {
    size_t item_size = sizeof(ros_message->victory_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StartNeptusParser__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__StartNeptusParser(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__StartNeptusParser(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: file_name
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
  // member: custom_start_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: origin
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geographic_msgs__msg__GeoPoint(
        full_bounded, current_alignment);
    }
  }
  // member: custom_start
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geographic_msgs__msg__GeoPoint(
        full_bounded, current_alignment);
    }
  }
  // member: underactuated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: victory_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _StartNeptusParser__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__StartNeptusParser(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StartNeptusParser = {
  "labust_msgs::msg",
  "StartNeptusParser",
  _StartNeptusParser__cdr_serialize,
  _StartNeptusParser__cdr_deserialize,
  _StartNeptusParser__get_serialized_size,
  _StartNeptusParser__max_serialized_size
};

static rosidl_message_type_support_t _StartNeptusParser__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartNeptusParser,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, StartNeptusParser)() {
  return &_StartNeptusParser__type_support;
}

#if defined(__cplusplus)
}
#endif
