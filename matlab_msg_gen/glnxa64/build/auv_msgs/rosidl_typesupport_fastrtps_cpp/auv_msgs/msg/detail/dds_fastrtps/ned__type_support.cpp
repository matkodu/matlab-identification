// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from auv_msgs:msg/NED.idl
// generated code does not contain a copyright notice
#include "auv_msgs/msg/detail/ned__rosidl_typesupport_fastrtps_cpp.hpp"
#include "auv_msgs/msg/detail/ned__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace auv_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_auv_msgs
cdr_serialize(
  const auv_msgs::msg::NED & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: north
  cdr << ros_message.north;
  // Member: east
  cdr << ros_message.east;
  // Member: depth
  cdr << ros_message.depth;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_auv_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  auv_msgs::msg::NED & ros_message)
{
  // Member: north
  cdr >> ros_message.north;

  // Member: east
  cdr >> ros_message.east;

  // Member: depth
  cdr >> ros_message.depth;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_auv_msgs
get_serialized_size(
  const auv_msgs::msg::NED & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: north
  {
    size_t item_size = sizeof(ros_message.north);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: east
  {
    size_t item_size = sizeof(ros_message.east);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: depth
  {
    size_t item_size = sizeof(ros_message.depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_auv_msgs
max_serialized_size_NED(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: north
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: east
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: depth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _NED__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const auv_msgs::msg::NED *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NED__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<auv_msgs::msg::NED *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NED__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const auv_msgs::msg::NED *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NED__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NED(full_bounded, 0);
}

static message_type_support_callbacks_t _NED__callbacks = {
  "auv_msgs::msg",
  "NED",
  _NED__cdr_serialize,
  _NED__cdr_deserialize,
  _NED__get_serialized_size,
  _NED__max_serialized_size
};

static rosidl_message_type_support_t _NED__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NED__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace auv_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_auv_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<auv_msgs::msg::NED>()
{
  return &auv_msgs::msg::typesupport_fastrtps_cpp::_NED__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, auv_msgs, msg, NED)() {
  return &auv_msgs::msg::typesupport_fastrtps_cpp::_NED__handle;
}

#ifdef __cplusplus
}
#endif
