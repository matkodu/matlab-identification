// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/MissionSetup.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/mission_setup__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/mission_setup__struct.h"
#include "labust_msgs/msg/detail/mission_setup__functions.h"
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

#include "auv_msgs/msg/detail/ned__functions.h"  // mission_offset
#include "rosidl_runtime_c/string.h"  // mission_events, mission_params
#include "rosidl_runtime_c/string_functions.h"  // mission_events, mission_params

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


using _MissionSetup__ros_msg_type = labust_msgs__msg__MissionSetup;

static bool _MissionSetup__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MissionSetup__ros_msg_type * ros_message = static_cast<const _MissionSetup__ros_msg_type *>(untyped_ros_message);
  // Field name: mission_params
  {
    const rosidl_runtime_c__String * str = &ros_message->mission_params;
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

  // Field name: mission_events
  {
    const rosidl_runtime_c__String * str = &ros_message->mission_events;
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

  // Field name: mission_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, auv_msgs, msg, NED
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mission_offset, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MissionSetup__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MissionSetup__ros_msg_type * ros_message = static_cast<_MissionSetup__ros_msg_type *>(untyped_ros_message);
  // Field name: mission_params
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mission_params.data) {
      rosidl_runtime_c__String__init(&ros_message->mission_params);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mission_params,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mission_params'\n");
      return false;
    }
  }

  // Field name: mission_events
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mission_events.data) {
      rosidl_runtime_c__String__init(&ros_message->mission_events);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mission_events,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mission_events'\n");
      return false;
    }
  }

  // Field name: mission_offset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, auv_msgs, msg, NED
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mission_offset))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__MissionSetup(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MissionSetup__ros_msg_type * ros_message = static_cast<const _MissionSetup__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mission_params
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission_params.size + 1);
  // field.name mission_events
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission_events.size + 1);
  // field.name mission_offset

  current_alignment += get_serialized_size_auv_msgs__msg__NED(
    &(ros_message->mission_offset), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MissionSetup__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__MissionSetup(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__MissionSetup(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mission_params
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mission_events
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mission_offset
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

static size_t _MissionSetup__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__MissionSetup(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MissionSetup = {
  "labust_msgs::msg",
  "MissionSetup",
  _MissionSetup__cdr_serialize,
  _MissionSetup__cdr_deserialize,
  _MissionSetup__get_serialized_size,
  _MissionSetup__max_serialized_size
};

static rosidl_message_type_support_t _MissionSetup__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MissionSetup,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, MissionSetup)() {
  return &_MissionSetup__type_support;
}

#if defined(__cplusplus)
}
#endif