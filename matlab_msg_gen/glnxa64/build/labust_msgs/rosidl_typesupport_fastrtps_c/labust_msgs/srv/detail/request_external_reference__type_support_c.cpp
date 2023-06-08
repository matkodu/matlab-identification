// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:srv/RequestExternalReference.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/request_external_reference__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/srv/detail/request_external_reference__struct.h"
#include "labust_msgs/srv/detail/request_external_reference__functions.h"
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

#include "rosidl_runtime_c/string.h"  // identity
#include "rosidl_runtime_c/string_functions.h"  // identity

// forward declare type support functions


using _RequestExternalReference_Request__ros_msg_type = labust_msgs__srv__RequestExternalReference_Request;

static bool _RequestExternalReference_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RequestExternalReference_Request__ros_msg_type * ros_message = static_cast<const _RequestExternalReference_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: control_modes
  {
    size_t size = 6;
    auto array_ptr = ros_message->control_modes;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: identity
  {
    const rosidl_runtime_c__String * str = &ros_message->identity;
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

  return true;
}

static bool _RequestExternalReference_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RequestExternalReference_Request__ros_msg_type * ros_message = static_cast<_RequestExternalReference_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: control_modes
  {
    size_t size = 6;
    auto array_ptr = ros_message->control_modes;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: identity
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->identity.data) {
      rosidl_runtime_c__String__init(&ros_message->identity);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->identity,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'identity'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__RequestExternalReference_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RequestExternalReference_Request__ros_msg_type * ros_message = static_cast<const _RequestExternalReference_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name control_modes
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->control_modes;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name identity
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->identity.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RequestExternalReference_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__RequestExternalReference_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__RequestExternalReference_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: control_modes
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: identity
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RequestExternalReference_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__RequestExternalReference_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RequestExternalReference_Request = {
  "labust_msgs::srv",
  "RequestExternalReference_Request",
  _RequestExternalReference_Request__cdr_serialize,
  _RequestExternalReference_Request__cdr_deserialize,
  _RequestExternalReference_Request__get_serialized_size,
  _RequestExternalReference_Request__max_serialized_size
};

static rosidl_message_type_support_t _RequestExternalReference_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RequestExternalReference_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, RequestExternalReference_Request)() {
  return &_RequestExternalReference_Request__type_support;
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
// #include "labust_msgs/srv/detail/request_external_reference__struct.h"
// already included above
// #include "labust_msgs/srv/detail/request_external_reference__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // identity_token, message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // identity_token, message

// forward declare type support functions


using _RequestExternalReference_Response__ros_msg_type = labust_msgs__srv__RequestExternalReference_Response;

static bool _RequestExternalReference_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RequestExternalReference_Response__ros_msg_type * ros_message = static_cast<const _RequestExternalReference_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: identity_token
  {
    const rosidl_runtime_c__String * str = &ros_message->identity_token;
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

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

  return true;
}

static bool _RequestExternalReference_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RequestExternalReference_Response__ros_msg_type * ros_message = static_cast<_RequestExternalReference_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: identity_token
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->identity_token.data) {
      rosidl_runtime_c__String__init(&ros_message->identity_token);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->identity_token,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'identity_token'\n");
      return false;
    }
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__RequestExternalReference_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RequestExternalReference_Response__ros_msg_type * ros_message = static_cast<const _RequestExternalReference_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name identity_token
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->identity_token.size + 1);
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RequestExternalReference_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__RequestExternalReference_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__RequestExternalReference_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: identity_token
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RequestExternalReference_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__RequestExternalReference_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RequestExternalReference_Response = {
  "labust_msgs::srv",
  "RequestExternalReference_Response",
  _RequestExternalReference_Response__cdr_serialize,
  _RequestExternalReference_Response__cdr_deserialize,
  _RequestExternalReference_Response__get_serialized_size,
  _RequestExternalReference_Response__max_serialized_size
};

static rosidl_message_type_support_t _RequestExternalReference_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RequestExternalReference_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, RequestExternalReference_Response)() {
  return &_RequestExternalReference_Response__type_support;
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
#include "labust_msgs/srv/request_external_reference.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RequestExternalReference__callbacks = {
  "labust_msgs::srv",
  "RequestExternalReference",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, RequestExternalReference_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, RequestExternalReference_Response)(),
};

static rosidl_service_type_support_t RequestExternalReference__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RequestExternalReference__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, RequestExternalReference)() {
  return &RequestExternalReference__handle;
}

#if defined(__cplusplus)
}
#endif
