// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/CourseKeepingFA.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/course_keeping_fa__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/course_keeping_fa__struct.h"
#include "labust_msgs/msg/detail/course_keeping_fa__functions.h"
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


using _CourseKeepingFA__ros_msg_type = labust_msgs__msg__CourseKeepingFA;

static bool _CourseKeepingFA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CourseKeepingFA__ros_msg_type * ros_message = static_cast<const _CourseKeepingFA__ros_msg_type *>(untyped_ros_message);
  // Field name: course
  {
    cdr << ros_message->course;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  return true;
}

static bool _CourseKeepingFA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CourseKeepingFA__ros_msg_type * ros_message = static_cast<_CourseKeepingFA__ros_msg_type *>(untyped_ros_message);
  // Field name: course
  {
    cdr >> ros_message->course;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__CourseKeepingFA(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CourseKeepingFA__ros_msg_type * ros_message = static_cast<const _CourseKeepingFA__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name course
  {
    size_t item_size = sizeof(ros_message->course);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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

  return current_alignment - initial_alignment;
}

static uint32_t _CourseKeepingFA__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__CourseKeepingFA(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__CourseKeepingFA(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: course
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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

  return current_alignment - initial_alignment;
}

static size_t _CourseKeepingFA__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__CourseKeepingFA(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CourseKeepingFA = {
  "labust_msgs::msg",
  "CourseKeepingFA",
  _CourseKeepingFA__cdr_serialize,
  _CourseKeepingFA__cdr_deserialize,
  _CourseKeepingFA__get_serialized_size,
  _CourseKeepingFA__max_serialized_size
};

static rosidl_message_type_support_t _CourseKeepingFA__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CourseKeepingFA,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, CourseKeepingFA)() {
  return &_CourseKeepingFA__type_support;
}

#if defined(__cplusplus)
}
#endif
