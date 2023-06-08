// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:msg/ManualConfiguration.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/manual_configuration__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/msg/detail/manual_configuration__struct.h"
#include "labust_msgs/msg/detail/manual_configuration__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // axes_map, integrated, maximum_effort, maximum_nu, maximum_speed, scale_map
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // axes_map, integrated, maximum_effort, maximum_nu, maximum_speed, scale_map
#include "rosidl_runtime_c/string.h"  // topic
#include "rosidl_runtime_c/string_functions.h"  // topic

// forward declare type support functions


using _ManualConfiguration__ros_msg_type = labust_msgs__msg__ManualConfiguration;

static bool _ManualConfiguration__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ManualConfiguration__ros_msg_type * ros_message = static_cast<const _ManualConfiguration__ros_msg_type *>(untyped_ros_message);
  // Field name: axes_map
  {
    size_t size = ros_message->axes_map.size;
    auto array_ptr = ros_message->axes_map.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: scale_map
  {
    size_t size = ros_message->scale_map.size;
    auto array_ptr = ros_message->scale_map.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: integrated
  {
    size_t size = ros_message->integrated.size;
    auto array_ptr = ros_message->integrated.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: maximum_effort
  {
    size_t size = ros_message->maximum_effort.size;
    auto array_ptr = ros_message->maximum_effort.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: maximum_nu
  {
    size_t size = ros_message->maximum_nu.size;
    auto array_ptr = ros_message->maximum_nu.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: maximum_speed
  {
    size_t size = ros_message->maximum_speed.size;
    auto array_ptr = ros_message->maximum_speed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sampling_time
  {
    cdr << ros_message->sampling_time;
  }

  // Field name: use_ff
  {
    cdr << (ros_message->use_ff ? true : false);
  }

  // Field name: topic
  {
    const rosidl_runtime_c__String * str = &ros_message->topic;
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

static bool _ManualConfiguration__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ManualConfiguration__ros_msg_type * ros_message = static_cast<_ManualConfiguration__ros_msg_type *>(untyped_ros_message);
  // Field name: axes_map
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->axes_map.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->axes_map);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->axes_map, size)) {
      return "failed to create array for field 'axes_map'";
    }
    auto array_ptr = ros_message->axes_map.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: scale_map
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->scale_map.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->scale_map);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->scale_map, size)) {
      return "failed to create array for field 'scale_map'";
    }
    auto array_ptr = ros_message->scale_map.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: integrated
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->integrated.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->integrated);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->integrated, size)) {
      return "failed to create array for field 'integrated'";
    }
    auto array_ptr = ros_message->integrated.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: maximum_effort
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->maximum_effort.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->maximum_effort);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->maximum_effort, size)) {
      return "failed to create array for field 'maximum_effort'";
    }
    auto array_ptr = ros_message->maximum_effort.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: maximum_nu
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->maximum_nu.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->maximum_nu);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->maximum_nu, size)) {
      return "failed to create array for field 'maximum_nu'";
    }
    auto array_ptr = ros_message->maximum_nu.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: maximum_speed
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->maximum_speed.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->maximum_speed);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->maximum_speed, size)) {
      return "failed to create array for field 'maximum_speed'";
    }
    auto array_ptr = ros_message->maximum_speed.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sampling_time
  {
    cdr >> ros_message->sampling_time;
  }

  // Field name: use_ff
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_ff = tmp ? true : false;
  }

  // Field name: topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->topic.data) {
      rosidl_runtime_c__String__init(&ros_message->topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'topic'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__msg__ManualConfiguration(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ManualConfiguration__ros_msg_type * ros_message = static_cast<const _ManualConfiguration__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name axes_map
  {
    size_t array_size = ros_message->axes_map.size;
    auto array_ptr = ros_message->axes_map.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scale_map
  {
    size_t array_size = ros_message->scale_map.size;
    auto array_ptr = ros_message->scale_map.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name integrated
  {
    size_t array_size = ros_message->integrated.size;
    auto array_ptr = ros_message->integrated.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maximum_effort
  {
    size_t array_size = ros_message->maximum_effort.size;
    auto array_ptr = ros_message->maximum_effort.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maximum_nu
  {
    size_t array_size = ros_message->maximum_nu.size;
    auto array_ptr = ros_message->maximum_nu.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maximum_speed
  {
    size_t array_size = ros_message->maximum_speed.size;
    auto array_ptr = ros_message->maximum_speed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sampling_time
  {
    size_t item_size = sizeof(ros_message->sampling_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_ff
  {
    size_t item_size = sizeof(ros_message->use_ff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->topic.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ManualConfiguration__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__msg__ManualConfiguration(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__msg__ManualConfiguration(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: axes_map
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scale_map
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: integrated
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: maximum_effort
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: maximum_nu
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: maximum_speed
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sampling_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: use_ff
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: topic
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

static size_t _ManualConfiguration__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__msg__ManualConfiguration(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ManualConfiguration = {
  "labust_msgs::msg",
  "ManualConfiguration",
  _ManualConfiguration__cdr_serialize,
  _ManualConfiguration__cdr_deserialize,
  _ManualConfiguration__get_serialized_size,
  _ManualConfiguration__max_serialized_size
};

static rosidl_message_type_support_t _ManualConfiguration__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ManualConfiguration,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, ManualConfiguration)() {
  return &_ManualConfiguration__type_support;
}

#if defined(__cplusplus)
}
#endif
