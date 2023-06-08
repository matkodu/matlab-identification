// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/PIDParamsUpdate.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/pid_params_update__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/pid_params_update__struct.h"
#include "labust_msgs/msg/detail/pid_params_update__functions.h"
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


using _PIDParamsUpdate__ros_msg_type = labust_msgs__msg__PIDParamsUpdate;

static bool _PIDParamsUpdate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PIDParamsUpdate__ros_msg_type * ros_message = static_cast<const _PIDParamsUpdate__ros_msg_type *>(untyped_ros_message);
  // Field name: kp
  {
    cdr << ros_message->kp;
  }

  // Field name: ki
  {
    cdr << ros_message->ki;
  }

  // Field name: kd
  {
    cdr << ros_message->kd;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  // Field name: ulow
  {
    cdr << ros_message->ulow;
  }

  // Field name: uhigh
  {
    cdr << ros_message->uhigh;
  }

  // Field name: ilow
  {
    cdr << ros_message->ilow;
  }

  // Field name: ihigh
  {
    cdr << ros_message->ihigh;
  }

  // Field name: dof
  {
    cdr << ros_message->dof;
  }

  return true;
}

static bool _PIDParamsUpdate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PIDParamsUpdate__ros_msg_type * ros_message = static_cast<_PIDParamsUpdate__ros_msg_type *>(untyped_ros_message);
  // Field name: kp
  {
    cdr >> ros_message->kp;
  }

  // Field name: ki
  {
    cdr >> ros_message->ki;
  }

  // Field name: kd
  {
    cdr >> ros_message->kd;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  // Field name: ulow
  {
    cdr >> ros_message->ulow;
  }

  // Field name: uhigh
  {
    cdr >> ros_message->uhigh;
  }

  // Field name: ilow
  {
    cdr >> ros_message->ilow;
  }

  // Field name: ihigh
  {
    cdr >> ros_message->ihigh;
  }

  // Field name: dof
  {
    cdr >> ros_message->dof;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__PIDParamsUpdate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PIDParamsUpdate__ros_msg_type * ros_message = static_cast<const _PIDParamsUpdate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name kp
  {
    size_t item_size = sizeof(ros_message->kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ki
  {
    size_t item_size = sizeof(ros_message->ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kd
  {
    size_t item_size = sizeof(ros_message->kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ulow
  {
    size_t item_size = sizeof(ros_message->ulow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uhigh
  {
    size_t item_size = sizeof(ros_message->uhigh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ilow
  {
    size_t item_size = sizeof(ros_message->ilow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ihigh
  {
    size_t item_size = sizeof(ros_message->ihigh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dof
  {
    size_t item_size = sizeof(ros_message->dof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PIDParamsUpdate__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__PIDParamsUpdate(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__PIDParamsUpdate(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: kp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ki
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ulow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uhigh
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ilow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ihigh
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dof
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PIDParamsUpdate__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__PIDParamsUpdate(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PIDParamsUpdate = {
  "labust_msgs::msg",
  "PIDParamsUpdate",
  _PIDParamsUpdate__cdr_serialize,
  _PIDParamsUpdate__cdr_deserialize,
  _PIDParamsUpdate__get_serialized_size,
  _PIDParamsUpdate__max_serialized_size
};

static rosidl_message_type_support_t _PIDParamsUpdate__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PIDParamsUpdate,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, PIDParamsUpdate)() {
  return &_PIDParamsUpdate__type_support;
}

#if defined(__cplusplus)
}
#endif
