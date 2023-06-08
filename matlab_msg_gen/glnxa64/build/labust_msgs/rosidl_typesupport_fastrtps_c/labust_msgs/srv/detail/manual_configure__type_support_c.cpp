// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:srv/ManualConfigure.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/manual_configure__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/srv/detail/manual_configure__struct.h"
#include "labust_msgs/srv/detail/manual_configure__functions.h"
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

#include "labust_msgs/msg/detail/manual_configuration__functions.h"  // configuration

// forward declare type support functions
size_t get_serialized_size_labust_msgs__msg__ManualConfiguration(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_labust_msgs__msg__ManualConfiguration(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, ManualConfiguration)();


using _ManualConfigure_Request__ros_msg_type = labust_msgs__srv__ManualConfigure_Request;

static bool _ManualConfigure_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ManualConfigure_Request__ros_msg_type * ros_message = static_cast<const _ManualConfigure_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: configuration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, labust_msgs, msg, ManualConfiguration
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->configuration, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ManualConfigure_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ManualConfigure_Request__ros_msg_type * ros_message = static_cast<_ManualConfigure_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: configuration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, labust_msgs, msg, ManualConfiguration
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->configuration))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__ManualConfigure_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ManualConfigure_Request__ros_msg_type * ros_message = static_cast<const _ManualConfigure_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name configuration

  current_alignment += get_serialized_size_labust_msgs__msg__ManualConfiguration(
    &(ros_message->configuration), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ManualConfigure_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__ManualConfigure_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__ManualConfigure_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: configuration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_labust_msgs__msg__ManualConfiguration(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ManualConfigure_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__ManualConfigure_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ManualConfigure_Request = {
  "labust_msgs::srv",
  "ManualConfigure_Request",
  _ManualConfigure_Request__cdr_serialize,
  _ManualConfigure_Request__cdr_deserialize,
  _ManualConfigure_Request__get_serialized_size,
  _ManualConfigure_Request__max_serialized_size
};

static rosidl_message_type_support_t _ManualConfigure_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ManualConfigure_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, ManualConfigure_Request)() {
  return &_ManualConfigure_Request__type_support;
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
// #include "labust_msgs/srv/detail/manual_configure__struct.h"
// already included above
// #include "labust_msgs/srv/detail/manual_configure__functions.h"
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

// already included above
// #include "labust_msgs/msg/detail/manual_configuration__functions.h"  // current_configuration

// forward declare type support functions
size_t get_serialized_size_labust_msgs__msg__ManualConfiguration(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_labust_msgs__msg__ManualConfiguration(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, ManualConfiguration)();


using _ManualConfigure_Response__ros_msg_type = labust_msgs__srv__ManualConfigure_Response;

static bool _ManualConfigure_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ManualConfigure_Response__ros_msg_type * ros_message = static_cast<const _ManualConfigure_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: current_configuration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, labust_msgs, msg, ManualConfiguration
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->current_configuration, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ManualConfigure_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ManualConfigure_Response__ros_msg_type * ros_message = static_cast<_ManualConfigure_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: current_configuration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, labust_msgs, msg, ManualConfiguration
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->current_configuration))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__ManualConfigure_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ManualConfigure_Response__ros_msg_type * ros_message = static_cast<const _ManualConfigure_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_configuration

  current_alignment += get_serialized_size_labust_msgs__msg__ManualConfiguration(
    &(ros_message->current_configuration), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ManualConfigure_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__ManualConfigure_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__ManualConfigure_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: current_configuration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_labust_msgs__msg__ManualConfiguration(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ManualConfigure_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__ManualConfigure_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ManualConfigure_Response = {
  "labust_msgs::srv",
  "ManualConfigure_Response",
  _ManualConfigure_Response__cdr_serialize,
  _ManualConfigure_Response__cdr_deserialize,
  _ManualConfigure_Response__get_serialized_size,
  _ManualConfigure_Response__max_serialized_size
};

static rosidl_message_type_support_t _ManualConfigure_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ManualConfigure_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, ManualConfigure_Response)() {
  return &_ManualConfigure_Response__type_support;
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
#include "labust_msgs/srv/manual_configure.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ManualConfigure__callbacks = {
  "labust_msgs::srv",
  "ManualConfigure",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, ManualConfigure_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, ManualConfigure_Response)(),
};

static rosidl_service_type_support_t ManualConfigure__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ManualConfigure__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, ManualConfigure)() {
  return &ManualConfigure__handle;
}

#if defined(__cplusplus)
}
#endif
