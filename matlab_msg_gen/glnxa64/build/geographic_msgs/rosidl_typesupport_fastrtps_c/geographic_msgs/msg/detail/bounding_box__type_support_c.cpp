// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from geographic_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/bounding_box__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "geographic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "geographic_msgs/msg/detail/bounding_box__struct.h"
#include "geographic_msgs/msg/detail/bounding_box__functions.h"
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

#include "geographic_msgs/msg/detail/geo_point__functions.h"  // max_pt, min_pt

// forward declare type support functions
size_t get_serialized_size_geographic_msgs__msg__GeoPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geographic_msgs__msg__GeoPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint)();


using _BoundingBox__ros_msg_type = geographic_msgs__msg__BoundingBox;

static bool _BoundingBox__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BoundingBox__ros_msg_type * ros_message = static_cast<const _BoundingBox__ros_msg_type *>(untyped_ros_message);
  // Field name: min_pt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->min_pt, cdr))
    {
      return false;
    }
  }

  // Field name: max_pt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->max_pt, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BoundingBox__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BoundingBox__ros_msg_type * ros_message = static_cast<_BoundingBox__ros_msg_type *>(untyped_ros_message);
  // Field name: min_pt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->min_pt))
    {
      return false;
    }
  }

  // Field name: max_pt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->max_pt))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geographic_msgs
size_t get_serialized_size_geographic_msgs__msg__BoundingBox(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BoundingBox__ros_msg_type * ros_message = static_cast<const _BoundingBox__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name min_pt

  current_alignment += get_serialized_size_geographic_msgs__msg__GeoPoint(
    &(ros_message->min_pt), current_alignment);
  // field.name max_pt

  current_alignment += get_serialized_size_geographic_msgs__msg__GeoPoint(
    &(ros_message->max_pt), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BoundingBox__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_geographic_msgs__msg__BoundingBox(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geographic_msgs
size_t max_serialized_size_geographic_msgs__msg__BoundingBox(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: min_pt
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geographic_msgs__msg__GeoPoint(
        full_bounded, current_alignment);
    }
  }
  // member: max_pt
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geographic_msgs__msg__GeoPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BoundingBox__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_geographic_msgs__msg__BoundingBox(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BoundingBox = {
  "geographic_msgs::msg",
  "BoundingBox",
  _BoundingBox__cdr_serialize,
  _BoundingBox__cdr_deserialize,
  _BoundingBox__get_serialized_size,
  _BoundingBox__max_serialized_size
};

static rosidl_message_type_support_t _BoundingBox__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BoundingBox,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, msg, BoundingBox)() {
  return &_BoundingBox__type_support;
}

#if defined(__cplusplus)
}
#endif
