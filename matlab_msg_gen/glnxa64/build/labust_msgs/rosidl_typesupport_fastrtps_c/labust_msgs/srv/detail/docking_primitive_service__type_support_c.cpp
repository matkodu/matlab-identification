// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:srv/DockingPrimitiveService.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/docking_primitive_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/srv/detail/docking_primitive_service__struct.h"
#include "labust_msgs/srv/detail/docking_primitive_service__functions.h"
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


using _DockingPrimitiveService_Request__ros_msg_type = labust_msgs__srv__DockingPrimitiveService_Request;

static bool _DockingPrimitiveService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DockingPrimitiveService_Request__ros_msg_type * ros_message = static_cast<const _DockingPrimitiveService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: docking_action
  {
    cdr << (ros_message->docking_action ? true : false);
  }

  // Field name: docking_slot
  {
    cdr << ros_message->docking_slot;
  }

  // Field name: search_yaw_rate
  {
    cdr << ros_message->search_yaw_rate;
  }

  // Field name: max_yaw_rate
  {
    cdr << ros_message->max_yaw_rate;
  }

  // Field name: max_surge_speed
  {
    cdr << ros_message->max_surge_speed;
  }

  // Field name: surge_stdev
  {
    cdr << ros_message->surge_stdev;
  }

  return true;
}

static bool _DockingPrimitiveService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DockingPrimitiveService_Request__ros_msg_type * ros_message = static_cast<_DockingPrimitiveService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: docking_action
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->docking_action = tmp ? true : false;
  }

  // Field name: docking_slot
  {
    cdr >> ros_message->docking_slot;
  }

  // Field name: search_yaw_rate
  {
    cdr >> ros_message->search_yaw_rate;
  }

  // Field name: max_yaw_rate
  {
    cdr >> ros_message->max_yaw_rate;
  }

  // Field name: max_surge_speed
  {
    cdr >> ros_message->max_surge_speed;
  }

  // Field name: surge_stdev
  {
    cdr >> ros_message->surge_stdev;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__DockingPrimitiveService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DockingPrimitiveService_Request__ros_msg_type * ros_message = static_cast<const _DockingPrimitiveService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name docking_action
  {
    size_t item_size = sizeof(ros_message->docking_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name docking_slot
  {
    size_t item_size = sizeof(ros_message->docking_slot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name search_yaw_rate
  {
    size_t item_size = sizeof(ros_message->search_yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_yaw_rate
  {
    size_t item_size = sizeof(ros_message->max_yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_surge_speed
  {
    size_t item_size = sizeof(ros_message->max_surge_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name surge_stdev
  {
    size_t item_size = sizeof(ros_message->surge_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DockingPrimitiveService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__DockingPrimitiveService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__DockingPrimitiveService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: docking_action
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: docking_slot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: search_yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_surge_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: surge_stdev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DockingPrimitiveService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__DockingPrimitiveService_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DockingPrimitiveService_Request = {
  "labust_msgs::srv",
  "DockingPrimitiveService_Request",
  _DockingPrimitiveService_Request__cdr_serialize,
  _DockingPrimitiveService_Request__cdr_deserialize,
  _DockingPrimitiveService_Request__get_serialized_size,
  _DockingPrimitiveService_Request__max_serialized_size
};

static rosidl_message_type_support_t _DockingPrimitiveService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DockingPrimitiveService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, DockingPrimitiveService_Request)() {
  return &_DockingPrimitiveService_Request__type_support;
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
// #include "labust_msgs/srv/detail/docking_primitive_service__struct.h"
// already included above
// #include "labust_msgs/srv/detail/docking_primitive_service__functions.h"
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


using _DockingPrimitiveService_Response__ros_msg_type = labust_msgs__srv__DockingPrimitiveService_Response;

static bool _DockingPrimitiveService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DockingPrimitiveService_Response__ros_msg_type * ros_message = static_cast<const _DockingPrimitiveService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << (ros_message->status ? true : false);
  }

  return true;
}

static bool _DockingPrimitiveService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DockingPrimitiveService_Response__ros_msg_type * ros_message = static_cast<_DockingPrimitiveService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__DockingPrimitiveService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DockingPrimitiveService_Response__ros_msg_type * ros_message = static_cast<const _DockingPrimitiveService_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _DockingPrimitiveService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__DockingPrimitiveService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__DockingPrimitiveService_Response(
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

static size_t _DockingPrimitiveService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__DockingPrimitiveService_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DockingPrimitiveService_Response = {
  "labust_msgs::srv",
  "DockingPrimitiveService_Response",
  _DockingPrimitiveService_Response__cdr_serialize,
  _DockingPrimitiveService_Response__cdr_deserialize,
  _DockingPrimitiveService_Response__get_serialized_size,
  _DockingPrimitiveService_Response__max_serialized_size
};

static rosidl_message_type_support_t _DockingPrimitiveService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DockingPrimitiveService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, DockingPrimitiveService_Response)() {
  return &_DockingPrimitiveService_Response__type_support;
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
#include "labust_msgs/srv/docking_primitive_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DockingPrimitiveService__callbacks = {
  "labust_msgs::srv",
  "DockingPrimitiveService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, DockingPrimitiveService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, DockingPrimitiveService_Response)(),
};

static rosidl_service_type_support_t DockingPrimitiveService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DockingPrimitiveService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, DockingPrimitiveService)() {
  return &DockingPrimitiveService__handle;
}

#if defined(__cplusplus)
}
#endif
