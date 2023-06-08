// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:srv/PointerPrimitiveService.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/pointer_primitive_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/srv/detail/pointer_primitive_service__struct.h"
#include "labust_msgs/srv/detail/pointer_primitive_service__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // guidance_target
#include "rosidl_runtime_c/string.h"  // guidance_topic, radius_topic
#include "rosidl_runtime_c/string_functions.h"  // guidance_topic, radius_topic

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_labust_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _PointerPrimitiveService_Request__ros_msg_type = labust_msgs__srv__PointerPrimitiveService_Request;

static bool _PointerPrimitiveService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PointerPrimitiveService_Request__ros_msg_type * ros_message = static_cast<const _PointerPrimitiveService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: radius
  {
    cdr << ros_message->radius;
  }

  // Field name: vertical_offset
  {
    cdr << ros_message->vertical_offset;
  }

  // Field name: guidance_target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->guidance_target, cdr))
    {
      return false;
    }
  }

  // Field name: guidance_enable
  {
    cdr << (ros_message->guidance_enable ? true : false);
  }

  // Field name: wrapping_enable
  {
    cdr << (ros_message->wrapping_enable ? true : false);
  }

  // Field name: fov_guidance
  {
    cdr << (ros_message->fov_guidance ? true : false);
  }

  // Field name: streamline_orientation
  {
    cdr << (ros_message->streamline_orientation ? true : false);
  }

  // Field name: guidance_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->guidance_topic;
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

  // Field name: radius_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->radius_topic;
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

static bool _PointerPrimitiveService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PointerPrimitiveService_Request__ros_msg_type * ros_message = static_cast<_PointerPrimitiveService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: radius
  {
    cdr >> ros_message->radius;
  }

  // Field name: vertical_offset
  {
    cdr >> ros_message->vertical_offset;
  }

  // Field name: guidance_target
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->guidance_target))
    {
      return false;
    }
  }

  // Field name: guidance_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->guidance_enable = tmp ? true : false;
  }

  // Field name: wrapping_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrapping_enable = tmp ? true : false;
  }

  // Field name: fov_guidance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fov_guidance = tmp ? true : false;
  }

  // Field name: streamline_orientation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->streamline_orientation = tmp ? true : false;
  }

  // Field name: guidance_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->guidance_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->guidance_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->guidance_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'guidance_topic'\n");
      return false;
    }
  }

  // Field name: radius_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->radius_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->radius_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->radius_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'radius_topic'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__PointerPrimitiveService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PointerPrimitiveService_Request__ros_msg_type * ros_message = static_cast<const _PointerPrimitiveService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name radius
  {
    size_t item_size = sizeof(ros_message->radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_offset
  {
    size_t item_size = sizeof(ros_message->vertical_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name guidance_target

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->guidance_target), current_alignment);
  // field.name guidance_enable
  {
    size_t item_size = sizeof(ros_message->guidance_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrapping_enable
  {
    size_t item_size = sizeof(ros_message->wrapping_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fov_guidance
  {
    size_t item_size = sizeof(ros_message->fov_guidance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name streamline_orientation
  {
    size_t item_size = sizeof(ros_message->streamline_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name guidance_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->guidance_topic.size + 1);
  // field.name radius_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->radius_topic.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _PointerPrimitiveService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__PointerPrimitiveService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__PointerPrimitiveService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vertical_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: guidance_target
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: guidance_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrapping_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fov_guidance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: streamline_orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: guidance_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: radius_topic
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

static size_t _PointerPrimitiveService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__PointerPrimitiveService_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PointerPrimitiveService_Request = {
  "labust_msgs::srv",
  "PointerPrimitiveService_Request",
  _PointerPrimitiveService_Request__cdr_serialize,
  _PointerPrimitiveService_Request__cdr_deserialize,
  _PointerPrimitiveService_Request__get_serialized_size,
  _PointerPrimitiveService_Request__max_serialized_size
};

static rosidl_message_type_support_t _PointerPrimitiveService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PointerPrimitiveService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, PointerPrimitiveService_Request)() {
  return &_PointerPrimitiveService_Request__type_support;
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
// #include "labust_msgs/srv/detail/pointer_primitive_service__struct.h"
// already included above
// #include "labust_msgs/srv/detail/pointer_primitive_service__functions.h"
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


using _PointerPrimitiveService_Response__ros_msg_type = labust_msgs__srv__PointerPrimitiveService_Response;

static bool _PointerPrimitiveService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PointerPrimitiveService_Response__ros_msg_type * ros_message = static_cast<const _PointerPrimitiveService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << (ros_message->status ? true : false);
  }

  return true;
}

static bool _PointerPrimitiveService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PointerPrimitiveService_Response__ros_msg_type * ros_message = static_cast<_PointerPrimitiveService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__PointerPrimitiveService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PointerPrimitiveService_Response__ros_msg_type * ros_message = static_cast<const _PointerPrimitiveService_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _PointerPrimitiveService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__PointerPrimitiveService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__PointerPrimitiveService_Response(
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

static size_t _PointerPrimitiveService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__PointerPrimitiveService_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PointerPrimitiveService_Response = {
  "labust_msgs::srv",
  "PointerPrimitiveService_Response",
  _PointerPrimitiveService_Response__cdr_serialize,
  _PointerPrimitiveService_Response__cdr_deserialize,
  _PointerPrimitiveService_Response__get_serialized_size,
  _PointerPrimitiveService_Response__max_serialized_size
};

static rosidl_message_type_support_t _PointerPrimitiveService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PointerPrimitiveService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, PointerPrimitiveService_Response)() {
  return &_PointerPrimitiveService_Response__type_support;
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
#include "labust_msgs/srv/pointer_primitive_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PointerPrimitiveService__callbacks = {
  "labust_msgs::srv",
  "PointerPrimitiveService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, PointerPrimitiveService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, PointerPrimitiveService_Response)(),
};

static rosidl_service_type_support_t PointerPrimitiveService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PointerPrimitiveService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, PointerPrimitiveService)() {
  return &PointerPrimitiveService__handle;
}

#if defined(__cplusplus)
}
#endif
