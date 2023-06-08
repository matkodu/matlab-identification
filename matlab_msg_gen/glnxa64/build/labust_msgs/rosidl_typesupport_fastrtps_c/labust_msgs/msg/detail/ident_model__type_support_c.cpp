// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/IdentModel.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/ident_model__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/ident_model__struct.h"
#include "labust_msgs/msg/detail/ident_model__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // ss_mat_a, ss_mat_b, ss_mat_c, ss_mat_d, tf_den, tf_num
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ss_mat_a, ss_mat_b, ss_mat_c, ss_mat_d, tf_den, tf_num

// forward declare type support functions


using _IdentModel__ros_msg_type = labust_msgs__msg__IdentModel;

static bool _IdentModel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IdentModel__ros_msg_type * ros_message = static_cast<const _IdentModel__ros_msg_type *>(untyped_ros_message);
  // Field name: model_type
  {
    cdr << ros_message->model_type;
  }

  // Field name: dof
  {
    cdr << ros_message->dof;
  }

  // Field name: tf_num
  {
    size_t size = ros_message->tf_num.size;
    auto array_ptr = ros_message->tf_num.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tf_den
  {
    size_t size = ros_message->tf_den.size;
    auto array_ptr = ros_message->tf_den.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ss_dim_n
  {
    cdr << ros_message->ss_dim_n;
  }

  // Field name: ss_dim_m
  {
    cdr << ros_message->ss_dim_m;
  }

  // Field name: ss_mat_a
  {
    size_t size = ros_message->ss_mat_a.size;
    auto array_ptr = ros_message->ss_mat_a.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ss_mat_b
  {
    size_t size = ros_message->ss_mat_b.size;
    auto array_ptr = ros_message->ss_mat_b.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ss_mat_c
  {
    size_t size = ros_message->ss_mat_c.size;
    auto array_ptr = ros_message->ss_mat_c.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ss_mat_d
  {
    size_t size = ros_message->ss_mat_d.size;
    auto array_ptr = ros_message->ss_mat_d.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _IdentModel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IdentModel__ros_msg_type * ros_message = static_cast<_IdentModel__ros_msg_type *>(untyped_ros_message);
  // Field name: model_type
  {
    cdr >> ros_message->model_type;
  }

  // Field name: dof
  {
    cdr >> ros_message->dof;
  }

  // Field name: tf_num
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tf_num.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->tf_num);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->tf_num, size)) {
      return "failed to create array for field 'tf_num'";
    }
    auto array_ptr = ros_message->tf_num.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tf_den
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tf_den.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->tf_den);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->tf_den, size)) {
      return "failed to create array for field 'tf_den'";
    }
    auto array_ptr = ros_message->tf_den.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ss_dim_n
  {
    cdr >> ros_message->ss_dim_n;
  }

  // Field name: ss_dim_m
  {
    cdr >> ros_message->ss_dim_m;
  }

  // Field name: ss_mat_a
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ss_mat_a.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ss_mat_a);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ss_mat_a, size)) {
      return "failed to create array for field 'ss_mat_a'";
    }
    auto array_ptr = ros_message->ss_mat_a.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ss_mat_b
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ss_mat_b.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ss_mat_b);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ss_mat_b, size)) {
      return "failed to create array for field 'ss_mat_b'";
    }
    auto array_ptr = ros_message->ss_mat_b.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ss_mat_c
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ss_mat_c.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ss_mat_c);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ss_mat_c, size)) {
      return "failed to create array for field 'ss_mat_c'";
    }
    auto array_ptr = ros_message->ss_mat_c.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ss_mat_d
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ss_mat_d.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ss_mat_d);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ss_mat_d, size)) {
      return "failed to create array for field 'ss_mat_d'";
    }
    auto array_ptr = ros_message->ss_mat_d.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__IdentModel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IdentModel__ros_msg_type * ros_message = static_cast<const _IdentModel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name model_type
  {
    size_t item_size = sizeof(ros_message->model_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dof
  {
    size_t item_size = sizeof(ros_message->dof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tf_num
  {
    size_t array_size = ros_message->tf_num.size;
    auto array_ptr = ros_message->tf_num.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tf_den
  {
    size_t array_size = ros_message->tf_den.size;
    auto array_ptr = ros_message->tf_den.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ss_dim_n
  {
    size_t item_size = sizeof(ros_message->ss_dim_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ss_dim_m
  {
    size_t item_size = sizeof(ros_message->ss_dim_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ss_mat_a
  {
    size_t array_size = ros_message->ss_mat_a.size;
    auto array_ptr = ros_message->ss_mat_a.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ss_mat_b
  {
    size_t array_size = ros_message->ss_mat_b.size;
    auto array_ptr = ros_message->ss_mat_b.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ss_mat_c
  {
    size_t array_size = ros_message->ss_mat_c.size;
    auto array_ptr = ros_message->ss_mat_c.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ss_mat_d
  {
    size_t array_size = ros_message->ss_mat_d.size;
    auto array_ptr = ros_message->ss_mat_d.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IdentModel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__IdentModel(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__IdentModel(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: model_type
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
  // member: tf_num
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tf_den
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ss_dim_n
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ss_dim_m
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ss_mat_a
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ss_mat_b
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ss_mat_c
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ss_mat_d
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _IdentModel__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__IdentModel(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IdentModel = {
  "labust_msgs::msg",
  "IdentModel",
  _IdentModel__cdr_serialize,
  _IdentModel__cdr_deserialize,
  _IdentModel__get_serialized_size,
  _IdentModel__max_serialized_size
};

static rosidl_message_type_support_t _IdentModel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IdentModel,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, IdentModel)() {
  return &_IdentModel__type_support;
}

#if defined(__cplusplus)
}
#endif
