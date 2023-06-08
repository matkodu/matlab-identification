// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/SendPrimitive.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/send_primitive__rosidl_typesupport_fastrtps_cpp.hpp"
#include "labust_msgs/msg/detail/send_primitive__struct.hpp"

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
namespace labust_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const labust_msgs::msg::EventData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  labust_msgs::msg::EventData &);
size_t get_serialized_size(
  const labust_msgs::msg::EventData &,
  size_t current_alignment);
size_t
max_serialized_size_EventData(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace labust_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::String &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::String &);
size_t get_serialized_size(
  const std_msgs::msg::String &,
  size_t current_alignment);
size_t
max_serialized_size_String(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace labust_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_serialize(
  const labust_msgs::msg::SendPrimitive & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: primitive_id
  cdr << ros_message.primitive_id;
  // Member: primitive_data
  {
    cdr << ros_message.primitive_data;
  }
  // Member: event
  labust_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.event,
    cdr);
  // Member: primitive_string
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.primitive_string,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::msg::SendPrimitive & ros_message)
{
  // Member: primitive_id
  cdr >> ros_message.primitive_id;

  // Member: primitive_data
  {
    cdr >> ros_message.primitive_data;
  }

  // Member: event
  labust_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.event);

  // Member: primitive_string
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.primitive_string);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::msg::SendPrimitive & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: primitive_id
  {
    size_t item_size = sizeof(ros_message.primitive_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: primitive_data
  {
    size_t array_size = ros_message.primitive_data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.primitive_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: event

  current_alignment +=
    labust_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.event, current_alignment);
  // Member: primitive_string

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.primitive_string, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_SendPrimitive(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: primitive_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: primitive_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: event
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        labust_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EventData(
        full_bounded, current_alignment);
    }
  }

  // Member: primitive_string
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_String(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _SendPrimitive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::msg::SendPrimitive *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SendPrimitive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::msg::SendPrimitive *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SendPrimitive__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::msg::SendPrimitive *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SendPrimitive__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SendPrimitive(full_bounded, 0);
}

static message_type_support_callbacks_t _SendPrimitive__callbacks = {
  "labust_msgs::msg",
  "SendPrimitive",
  _SendPrimitive__cdr_serialize,
  _SendPrimitive__cdr_deserialize,
  _SendPrimitive__get_serialized_size,
  _SendPrimitive__max_serialized_size
};

static rosidl_message_type_support_t _SendPrimitive__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SendPrimitive__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace labust_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_labust_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::msg::SendPrimitive>()
{
  return &labust_msgs::msg::typesupport_fastrtps_cpp::_SendPrimitive__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, msg, SendPrimitive)() {
  return &labust_msgs::msg::typesupport_fastrtps_cpp::_SendPrimitive__handle;
}

#ifdef __cplusplus
}
#endif
