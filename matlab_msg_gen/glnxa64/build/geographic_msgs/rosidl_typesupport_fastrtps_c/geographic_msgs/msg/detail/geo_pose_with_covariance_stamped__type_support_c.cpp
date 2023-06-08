// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from geographic_msgs:msg/GeoPoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/geo_pose_with_covariance_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "geographic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "geographic_msgs/msg/detail/geo_pose_with_covariance_stamped__struct.h"
#include "geographic_msgs/msg/detail/geo_pose_with_covariance_stamped__functions.h"
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

#include "geographic_msgs/msg/detail/geo_pose_with_covariance__functions.h"  // pose
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_geographic_msgs__msg__GeoPoseWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geographic_msgs__msg__GeoPoseWithCovariance(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoseWithCovariance)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geographic_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geographic_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_geographic_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _GeoPoseWithCovarianceStamped__ros_msg_type = geographic_msgs__msg__GeoPoseWithCovarianceStamped;

static bool _GeoPoseWithCovarianceStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GeoPoseWithCovarianceStamped__ros_msg_type * ros_message = static_cast<const _GeoPoseWithCovarianceStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoseWithCovariance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GeoPoseWithCovarianceStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GeoPoseWithCovarianceStamped__ros_msg_type * ros_message = static_cast<_GeoPoseWithCovarianceStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoseWithCovariance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geographic_msgs
size_t get_serialized_size_geographic_msgs__msg__GeoPoseWithCovarianceStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GeoPoseWithCovarianceStamped__ros_msg_type * ros_message = static_cast<const _GeoPoseWithCovarianceStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name pose

  current_alignment += get_serialized_size_geographic_msgs__msg__GeoPoseWithCovariance(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GeoPoseWithCovarianceStamped__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_geographic_msgs__msg__GeoPoseWithCovarianceStamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_geographic_msgs
size_t max_serialized_size_geographic_msgs__msg__GeoPoseWithCovarianceStamped(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geographic_msgs__msg__GeoPoseWithCovariance(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GeoPoseWithCovarianceStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_geographic_msgs__msg__GeoPoseWithCovarianceStamped(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GeoPoseWithCovarianceStamped = {
  "geographic_msgs::msg",
  "GeoPoseWithCovarianceStamped",
  _GeoPoseWithCovarianceStamped__cdr_serialize,
  _GeoPoseWithCovarianceStamped__cdr_deserialize,
  _GeoPoseWithCovarianceStamped__get_serialized_size,
  _GeoPoseWithCovarianceStamped__max_serialized_size
};

static rosidl_message_type_support_t _GeoPoseWithCovarianceStamped__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GeoPoseWithCovarianceStamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geographic_msgs, msg, GeoPoseWithCovarianceStamped)() {
  return &_GeoPoseWithCovarianceStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
