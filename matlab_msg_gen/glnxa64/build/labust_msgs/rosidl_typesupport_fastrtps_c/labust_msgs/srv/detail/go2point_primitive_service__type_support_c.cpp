// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:srv/Go2pointPrimitiveService.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/go2point_primitive_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/srv/detail/go2point_primitive_service__struct.h"
#include "labust_msgs/srv/detail/go2point_primitive_service__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // point
#include "rosidl_runtime_c/string.h"  // heading_topic, speed_topic
#include "rosidl_runtime_c/string_functions.h"  // heading_topic, speed_topic

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


using _Go2pointPrimitiveService_Request__ros_msg_type = labust_msgs__srv__Go2pointPrimitiveService_Request;

static bool _Go2pointPrimitiveService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Go2pointPrimitiveService_Request__ros_msg_type * ros_message = static_cast<const _Go2pointPrimitiveService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: fully_actuated_enable
  {
    cdr << (ros_message->fully_actuated_enable ? true : false);
  }

  // Field name: point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->point, cdr))
    {
      return false;
    }
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: victory_radius
  {
    cdr << ros_message->victory_radius;
  }

  // Field name: north_enable
  {
    cdr << (ros_message->north_enable ? true : false);
  }

  // Field name: east_enable
  {
    cdr << (ros_message->east_enable ? true : false);
  }

  // Field name: depth_enable
  {
    cdr << (ros_message->depth_enable ? true : false);
  }

  // Field name: heading_enable
  {
    cdr << (ros_message->heading_enable ? true : false);
  }

  // Field name: altitude_enable
  {
    cdr << (ros_message->altitude_enable ? true : false);
  }

  // Field name: heading_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->heading_topic;
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

  // Field name: speed_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->speed_topic;
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

static bool _Go2pointPrimitiveService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Go2pointPrimitiveService_Request__ros_msg_type * ros_message = static_cast<_Go2pointPrimitiveService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: fully_actuated_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fully_actuated_enable = tmp ? true : false;
  }

  // Field name: point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->point))
    {
      return false;
    }
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: victory_radius
  {
    cdr >> ros_message->victory_radius;
  }

  // Field name: north_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->north_enable = tmp ? true : false;
  }

  // Field name: east_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->east_enable = tmp ? true : false;
  }

  // Field name: depth_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->depth_enable = tmp ? true : false;
  }

  // Field name: heading_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heading_enable = tmp ? true : false;
  }

  // Field name: altitude_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->altitude_enable = tmp ? true : false;
  }

  // Field name: heading_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->heading_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->heading_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->heading_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'heading_topic'\n");
      return false;
    }
  }

  // Field name: speed_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->speed_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->speed_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->speed_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'speed_topic'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__Go2pointPrimitiveService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Go2pointPrimitiveService_Request__ros_msg_type * ros_message = static_cast<const _Go2pointPrimitiveService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name fully_actuated_enable
  {
    size_t item_size = sizeof(ros_message->fully_actuated_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name point

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->point), current_alignment);
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name victory_radius
  {
    size_t item_size = sizeof(ros_message->victory_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name north_enable
  {
    size_t item_size = sizeof(ros_message->north_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name east_enable
  {
    size_t item_size = sizeof(ros_message->east_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name depth_enable
  {
    size_t item_size = sizeof(ros_message->depth_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_enable
  {
    size_t item_size = sizeof(ros_message->heading_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude_enable
  {
    size_t item_size = sizeof(ros_message->altitude_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->heading_topic.size + 1);
  // field.name speed_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->speed_topic.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Go2pointPrimitiveService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__Go2pointPrimitiveService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__Go2pointPrimitiveService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: fully_actuated_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: victory_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: north_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: east_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: depth_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heading_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: altitude_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heading_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: speed_topic
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

static size_t _Go2pointPrimitiveService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__Go2pointPrimitiveService_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Go2pointPrimitiveService_Request = {
  "labust_msgs::srv",
  "Go2pointPrimitiveService_Request",
  _Go2pointPrimitiveService_Request__cdr_serialize,
  _Go2pointPrimitiveService_Request__cdr_deserialize,
  _Go2pointPrimitiveService_Request__get_serialized_size,
  _Go2pointPrimitiveService_Request__max_serialized_size
};

static rosidl_message_type_support_t _Go2pointPrimitiveService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Go2pointPrimitiveService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, Go2pointPrimitiveService_Request)() {
  return &_Go2pointPrimitiveService_Request__type_support;
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
// #include "labust_msgs/srv/detail/go2point_primitive_service__struct.h"
// already included above
// #include "labust_msgs/srv/detail/go2point_primitive_service__functions.h"
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


using _Go2pointPrimitiveService_Response__ros_msg_type = labust_msgs__srv__Go2pointPrimitiveService_Response;

static bool _Go2pointPrimitiveService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Go2pointPrimitiveService_Response__ros_msg_type * ros_message = static_cast<const _Go2pointPrimitiveService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << (ros_message->status ? true : false);
  }

  return true;
}

static bool _Go2pointPrimitiveService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Go2pointPrimitiveService_Response__ros_msg_type * ros_message = static_cast<_Go2pointPrimitiveService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__Go2pointPrimitiveService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Go2pointPrimitiveService_Response__ros_msg_type * ros_message = static_cast<const _Go2pointPrimitiveService_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _Go2pointPrimitiveService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__Go2pointPrimitiveService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__Go2pointPrimitiveService_Response(
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

static size_t _Go2pointPrimitiveService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__Go2pointPrimitiveService_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Go2pointPrimitiveService_Response = {
  "labust_msgs::srv",
  "Go2pointPrimitiveService_Response",
  _Go2pointPrimitiveService_Response__cdr_serialize,
  _Go2pointPrimitiveService_Response__cdr_deserialize,
  _Go2pointPrimitiveService_Response__get_serialized_size,
  _Go2pointPrimitiveService_Response__max_serialized_size
};

static rosidl_message_type_support_t _Go2pointPrimitiveService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Go2pointPrimitiveService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, Go2pointPrimitiveService_Response)() {
  return &_Go2pointPrimitiveService_Response__type_support;
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
#include "labust_msgs/srv/go2point_primitive_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Go2pointPrimitiveService__callbacks = {
  "labust_msgs::srv",
  "Go2pointPrimitiveService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, Go2pointPrimitiveService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, Go2pointPrimitiveService_Response)(),
};

static rosidl_service_type_support_t Go2pointPrimitiveService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Go2pointPrimitiveService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, Go2pointPrimitiveService)() {
  return &Go2pointPrimitiveService__handle;
}

#if defined(__cplusplus)
}
#endif
