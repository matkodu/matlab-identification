// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:srv/ConfigureAxes.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/configure_axes__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/srv/detail/configure_axes__struct.h"
#include "labust_msgs/srv/detail/configure_axes__functions.h"
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

#include "labust_msgs/msg/detail/bool6_axis__functions.h"  // disable_axis

// forward declare type support functions
size_t get_serialized_size_labust_msgs__msg__Bool6Axis(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_labust_msgs__msg__Bool6Axis(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, Bool6Axis)();


using _ConfigureAxes_Request__ros_msg_type = labust_msgs__srv__ConfigureAxes_Request;

static bool _ConfigureAxes_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfigureAxes_Request__ros_msg_type * ros_message = static_cast<const _ConfigureAxes_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: disable_axis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, labust_msgs, msg, Bool6Axis
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->disable_axis, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ConfigureAxes_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfigureAxes_Request__ros_msg_type * ros_message = static_cast<_ConfigureAxes_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: disable_axis
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, labust_msgs, msg, Bool6Axis
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->disable_axis))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__ConfigureAxes_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfigureAxes_Request__ros_msg_type * ros_message = static_cast<const _ConfigureAxes_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name disable_axis

  current_alignment += get_serialized_size_labust_msgs__msg__Bool6Axis(
    &(ros_message->disable_axis), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ConfigureAxes_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__ConfigureAxes_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__ConfigureAxes_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: disable_axis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_labust_msgs__msg__Bool6Axis(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ConfigureAxes_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__ConfigureAxes_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConfigureAxes_Request = {
  "labust_msgs::srv",
  "ConfigureAxes_Request",
  _ConfigureAxes_Request__cdr_serialize,
  _ConfigureAxes_Request__cdr_deserialize,
  _ConfigureAxes_Request__get_serialized_size,
  _ConfigureAxes_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConfigureAxes_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfigureAxes_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, ConfigureAxes_Request)() {
  return &_ConfigureAxes_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "labust_msgs/srv/detail/configure_axes__struct.h"
// already included above
// #include "labust_msgs/srv/detail/configure_axes__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _ConfigureAxes_Response__ros_msg_type = labust_msgs__srv__ConfigureAxes_Response;

static bool _ConfigureAxes_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfigureAxes_Response__ros_msg_type * ros_message = static_cast<const _ConfigureAxes_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _ConfigureAxes_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfigureAxes_Response__ros_msg_type * ros_message = static_cast<_ConfigureAxes_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__ConfigureAxes_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfigureAxes_Response__ros_msg_type * ros_message = static_cast<const _ConfigureAxes_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConfigureAxes_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__ConfigureAxes_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__ConfigureAxes_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ConfigureAxes_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__ConfigureAxes_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConfigureAxes_Response = {
  "labust_msgs::srv",
  "ConfigureAxes_Response",
  _ConfigureAxes_Response__cdr_serialize,
  _ConfigureAxes_Response__cdr_deserialize,
  _ConfigureAxes_Response__get_serialized_size,
  _ConfigureAxes_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConfigureAxes_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfigureAxes_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, ConfigureAxes_Response)() {
  return &_ConfigureAxes_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/srv/configure_axes.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ConfigureAxes__callbacks = {
  "labust_msgs::srv",
  "ConfigureAxes",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, ConfigureAxes_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, ConfigureAxes_Response)(),
};

static rosidl_service_type_support_t ConfigureAxes__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ConfigureAxes__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, ConfigureAxes)() {
  return &ConfigureAxes__handle;
}

#if defined(__cplusplus)
}
#endif
