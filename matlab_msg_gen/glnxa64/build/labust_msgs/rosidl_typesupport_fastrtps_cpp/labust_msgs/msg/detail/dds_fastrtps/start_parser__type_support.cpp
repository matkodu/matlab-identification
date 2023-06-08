// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/StartParser.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/start_parser__rosidl_typesupport_fastrtps_cpp.hpp"
#include "labust_msgs/msg/detail/start_parser__struct.hpp"

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
bool cdr_serialize(
  const auv_msgs::msg::NED &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  auv_msgs::msg::NED &);
size_t get_serialized_size(
  const auv_msgs::msg::NED &,
  size_t current_alignment);
size_t
max_serialized_size_NED(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace auv_msgs


namespace labust_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_serialize(
  const labust_msgs::msg::StartParser & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: method
  cdr << ros_message.method;
  // Member: mission_data
  cdr << ros_message.mission_data;
  // Member: relative
  cdr << (ros_message.relative ? true : false);
  // Member: start_position
  auv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.start_position,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::msg::StartParser & ros_message)
{
  // Member: method
  cdr >> ros_message.method;

  // Member: mission_data
  cdr >> ros_message.mission_data;

  // Member: relative
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.relative = tmp ? true : false;
  }

  // Member: start_position
  auv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.start_position);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::msg::StartParser & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: method
  {
    size_t item_size = sizeof(ros_message.method);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mission_data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mission_data.size() + 1);
  // Member: relative
  {
    size_t item_size = sizeof(ros_message.relative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_position

  current_alignment +=
    auv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.start_position, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_StartParser(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: method
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mission_data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: relative
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: start_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        auv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NED(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _StartParser__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::msg::StartParser *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StartParser__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::msg::StartParser *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StartParser__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::msg::StartParser *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StartParser__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_StartParser(full_bounded, 0);
}

static message_type_support_callbacks_t _StartParser__callbacks = {
  "labust_msgs::msg",
  "StartParser",
  _StartParser__cdr_serialize,
  _StartParser__cdr_deserialize,
  _StartParser__get_serialized_size,
  _StartParser__max_serialized_size
};

static rosidl_message_type_support_t _StartParser__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartParser__callbacks,
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
get_message_type_support_handle<labust_msgs::msg::StartParser>()
{
  return &labust_msgs::msg::typesupport_fastrtps_cpp::_StartParser__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, msg, StartParser)() {
  return &labust_msgs::msg::typesupport_fastrtps_cpp::_StartParser__handle;
}

#ifdef __cplusplus
}
#endif
