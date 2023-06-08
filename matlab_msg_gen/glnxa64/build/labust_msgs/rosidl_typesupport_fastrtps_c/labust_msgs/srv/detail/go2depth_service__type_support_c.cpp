// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:srv/Go2depthService.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/go2depth_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/srv/detail/go2depth_service__struct.h"
#include "labust_msgs/srv/detail/go2depth_service__functions.h"
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


// forward declare type support functions


using _Go2depthService_Request__ros_msg_type = labust_msgs__srv__Go2depthService_Request;

static bool _Go2depthService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Go2depthService_Request__ros_msg_type * ros_message = static_cast<const _Go2depthService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: depth
  {
    cdr << ros_message->depth;
  }

  return true;
}

static bool _Go2depthService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Go2depthService_Request__ros_msg_type * ros_message = static_cast<_Go2depthService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: depth
  {
    cdr >> ros_message->depth;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__Go2depthService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Go2depthService_Request__ros_msg_type * ros_message = static_cast<const _Go2depthService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name depth
  {
    size_t item_size = sizeof(ros_message->depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Go2depthService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__Go2depthService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__Go2depthService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: depth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Go2depthService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__Go2depthService_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Go2depthService_Request = {
  "labust_msgs::srv",
  "Go2depthService_Request",
  _Go2depthService_Request__cdr_serialize,
  _Go2depthService_Request__cdr_deserialize,
  _Go2depthService_Request__get_serialized_size,
  _Go2depthService_Request__max_serialized_size
};

static rosidl_message_type_support_t _Go2depthService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Go2depthService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, Go2depthService_Request)() {
  return &_Go2depthService_Request__type_support;
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
// #include "labust_msgs/srv/detail/go2depth_service__struct.h"
// already included above
// #include "labust_msgs/srv/detail/go2depth_service__functions.h"
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


using _Go2depthService_Response__ros_msg_type = labust_msgs__srv__Go2depthService_Response;

static bool _Go2depthService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Go2depthService_Response__ros_msg_type * ros_message = static_cast<const _Go2depthService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << (ros_message->status ? true : false);
  }

  return true;
}

static bool _Go2depthService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Go2depthService_Response__ros_msg_type * ros_message = static_cast<_Go2depthService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__Go2depthService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Go2depthService_Response__ros_msg_type * ros_message = static_cast<const _Go2depthService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Go2depthService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__Go2depthService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__Go2depthService_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Go2depthService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__Go2depthService_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Go2depthService_Response = {
  "labust_msgs::srv",
  "Go2depthService_Response",
  _Go2depthService_Response__cdr_serialize,
  _Go2depthService_Response__cdr_deserialize,
  _Go2depthService_Response__get_serialized_size,
  _Go2depthService_Response__max_serialized_size
};

static rosidl_message_type_support_t _Go2depthService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Go2depthService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, Go2depthService_Response)() {
  return &_Go2depthService_Response__type_support;
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
#include "labust_msgs/srv/go2depth_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Go2depthService__callbacks = {
  "labust_msgs::srv",
  "Go2depthService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, Go2depthService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, Go2depthService_Response)(),
};

static rosidl_service_type_support_t Go2depthService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Go2depthService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, Go2depthService)() {
  return &Go2depthService__handle;
}

#if defined(__cplusplus)
}
#endif
