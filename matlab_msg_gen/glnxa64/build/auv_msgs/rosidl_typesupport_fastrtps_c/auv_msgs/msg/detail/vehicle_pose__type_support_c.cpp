// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from auv_msgs:msg/VehiclePose.idl
// generated code does not contain a copyright notice
#include "auv_msgs/msg/detail/vehicle_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "auv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "auv_msgs/msg/detail/vehicle_pose__struct.h"
#include "auv_msgs/msg/detail/vehicle_pose__functions.h"
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

#include "auv_msgs/msg/detail/ned__functions.h"  // position
#include "geometry_msgs/msg/detail/vector3__functions.h"  // orientation
#include "rosidl_runtime_c/string.h"  // id
#include "rosidl_runtime_c/string_functions.h"  // id

// forward declare type support functions
size_t get_serialized_size_auv_msgs__msg__NED(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_auv_msgs__msg__NED(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, auv_msgs, msg, NED)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_auv_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_auv_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_auv_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _VehiclePose__ros_msg_type = auv_msgs__msg__VehiclePose;

static bool _VehiclePose__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehiclePose__ros_msg_type * ros_message = static_cast<const _VehiclePose__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
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

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, auv_msgs, msg, NED
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position, cdr))
    {
      return false;
    }
  }

  // Field name: orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->orientation, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VehiclePose__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehiclePose__ros_msg_type * ros_message = static_cast<_VehiclePose__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, auv_msgs, msg, NED
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position))
    {
      return false;
    }
  }

  // Field name: orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->orientation))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_auv_msgs
size_t get_serialized_size_auv_msgs__msg__VehiclePose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehiclePose__ros_msg_type * ros_message = static_cast<const _VehiclePose__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);
  // field.name position

  current_alignment += get_serialized_size_auv_msgs__msg__NED(
    &(ros_message->position), current_alignment);
  // field.name orientation

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->orientation), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VehiclePose__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_auv_msgs__msg__VehiclePose(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_auv_msgs
size_t max_serialized_size_auv_msgs__msg__VehiclePose(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_auv_msgs__msg__NED(
        full_bounded, current_alignment);
    }
  }
  // member: orientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehiclePose__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_auv_msgs__msg__VehiclePose(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehiclePose = {
  "auv_msgs::msg",
  "VehiclePose",
  _VehiclePose__cdr_serialize,
  _VehiclePose__cdr_deserialize,
  _VehiclePose__get_serialized_size,
  _VehiclePose__max_serialized_size
};

static rosidl_message_type_support_t _VehiclePose__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehiclePose,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, auv_msgs, msg, VehiclePose)() {
  return &_VehiclePose__type_support;
}

#if defined(__cplusplus)
}
#endif