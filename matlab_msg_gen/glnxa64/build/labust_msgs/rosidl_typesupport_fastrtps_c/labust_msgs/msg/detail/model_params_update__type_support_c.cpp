// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/ModelParamsUpdate.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/model_params_update__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/model_params_update__struct.h"
#include "labust_msgs/msg/detail/model_params_update__functions.h"
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


using _ModelParamsUpdate__ros_msg_type = labust_msgs__msg__ModelParamsUpdate;

static bool _ModelParamsUpdate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ModelParamsUpdate__ros_msg_type * ros_message = static_cast<const _ModelParamsUpdate__ros_msg_type *>(untyped_ros_message);
  // Field name: dof
  {
    cdr << ros_message->dof;
  }

  // Field name: alpha
  {
    cdr << ros_message->alpha;
  }

  // Field name: beta
  {
    cdr << ros_message->beta;
  }

  // Field name: betaa
  {
    cdr << ros_message->betaa;
  }

  // Field name: delta
  {
    cdr << ros_message->delta;
  }

  // Field name: wn
  {
    cdr << ros_message->wn;
  }

  // Field name: use_linear
  {
    cdr << (ros_message->use_linear ? true : false);
  }

  return true;
}

static bool _ModelParamsUpdate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ModelParamsUpdate__ros_msg_type * ros_message = static_cast<_ModelParamsUpdate__ros_msg_type *>(untyped_ros_message);
  // Field name: dof
  {
    cdr >> ros_message->dof;
  }

  // Field name: alpha
  {
    cdr >> ros_message->alpha;
  }

  // Field name: beta
  {
    cdr >> ros_message->beta;
  }

  // Field name: betaa
  {
    cdr >> ros_message->betaa;
  }

  // Field name: delta
  {
    cdr >> ros_message->delta;
  }

  // Field name: wn
  {
    cdr >> ros_message->wn;
  }

  // Field name: use_linear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_linear = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__ModelParamsUpdate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ModelParamsUpdate__ros_msg_type * ros_message = static_cast<const _ModelParamsUpdate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name dof
  {
    size_t item_size = sizeof(ros_message->dof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha
  {
    size_t item_size = sizeof(ros_message->alpha);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beta
  {
    size_t item_size = sizeof(ros_message->beta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name betaa
  {
    size_t item_size = sizeof(ros_message->betaa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta
  {
    size_t item_size = sizeof(ros_message->delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wn
  {
    size_t item_size = sizeof(ros_message->wn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_linear
  {
    size_t item_size = sizeof(ros_message->use_linear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ModelParamsUpdate__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__ModelParamsUpdate(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__ModelParamsUpdate(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: dof
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: alpha
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: beta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: betaa
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: use_linear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ModelParamsUpdate__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__ModelParamsUpdate(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ModelParamsUpdate = {
  "labust_msgs::msg",
  "ModelParamsUpdate",
  _ModelParamsUpdate__cdr_serialize,
  _ModelParamsUpdate__cdr_deserialize,
  _ModelParamsUpdate__get_serialized_size,
  _ModelParamsUpdate__max_serialized_size
};

static rosidl_message_type_support_t _ModelParamsUpdate__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ModelParamsUpdate,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, ModelParamsUpdate)() {
  return &_ModelParamsUpdate__type_support;
}

#if defined(__cplusplus)
}
#endif
