// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/StartNeptusParser.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/start_neptus_parser__rosidl_typesupport_fastrtps_cpp.hpp"
#include "labust_msgs/msg/detail/start_neptus_parser__struct.hpp"

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
namespace geographic_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geographic_msgs::msg::GeoPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geographic_msgs::msg::GeoPoint &);
size_t get_serialized_size(
  const geographic_msgs::msg::GeoPoint &,
  size_t current_alignment);
size_t
max_serialized_size_GeoPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geographic_msgs

namespace geographic_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geographic_msgs::msg::GeoPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geographic_msgs::msg::GeoPoint &);
size_t get_serialized_size(
  const geographic_msgs::msg::GeoPoint &,
  size_t current_alignment);
size_t
max_serialized_size_GeoPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geographic_msgs


namespace labust_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_serialize(
  const labust_msgs::msg::StartNeptusParser & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: file_name
  cdr << ros_message.file_name;
  // Member: relative
  cdr << (ros_message.relative ? true : false);
  // Member: custom_start_flag
  cdr << (ros_message.custom_start_flag ? true : false);
  // Member: origin
  geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.origin,
    cdr);
  // Member: custom_start
  geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.custom_start,
    cdr);
  // Member: underactuated
  cdr << (ros_message.underactuated ? true : false);
  // Member: speed
  cdr << ros_message.speed;
  // Member: heading
  cdr << ros_message.heading;
  // Member: victory_radius
  cdr << ros_message.victory_radius;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::msg::StartNeptusParser & ros_message)
{
  // Member: file_name
  cdr >> ros_message.file_name;

  // Member: relative
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.relative = tmp ? true : false;
  }

  // Member: custom_start_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.custom_start_flag = tmp ? true : false;
  }

  // Member: origin
  geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.origin);

  // Member: custom_start
  geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.custom_start);

  // Member: underactuated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.underactuated = tmp ? true : false;
  }

  // Member: speed
  cdr >> ros_message.speed;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: victory_radius
  cdr >> ros_message.victory_radius;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::msg::StartNeptusParser & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: file_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.file_name.size() + 1);
  // Member: relative
  {
    size_t item_size = sizeof(ros_message.relative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: custom_start_flag
  {
    size_t item_size = sizeof(ros_message.custom_start_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: origin

  current_alignment +=
    geographic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.origin, current_alignment);
  // Member: custom_start

  current_alignment +=
    geographic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.custom_start, current_alignment);
  // Member: underactuated
  {
    size_t item_size = sizeof(ros_message.underactuated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: victory_radius
  {
    size_t item_size = sizeof(ros_message.victory_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_StartNeptusParser(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: file_name
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

  // Member: custom_start_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: origin
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geographic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GeoPoint(
        full_bounded, current_alignment);
    }
  }

  // Member: custom_start
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geographic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GeoPoint(
        full_bounded, current_alignment);
    }
  }

  // Member: underactuated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: victory_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _StartNeptusParser__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::msg::StartNeptusParser *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StartNeptusParser__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::msg::StartNeptusParser *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StartNeptusParser__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::msg::StartNeptusParser *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StartNeptusParser__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_StartNeptusParser(full_bounded, 0);
}

static message_type_support_callbacks_t _StartNeptusParser__callbacks = {
  "labust_msgs::msg",
  "StartNeptusParser",
  _StartNeptusParser__cdr_serialize,
  _StartNeptusParser__cdr_deserialize,
  _StartNeptusParser__get_serialized_size,
  _StartNeptusParser__max_serialized_size
};

static rosidl_message_type_support_t _StartNeptusParser__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartNeptusParser__callbacks,
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
get_message_type_support_handle<labust_msgs::msg::StartNeptusParser>()
{
  return &labust_msgs::msg::typesupport_fastrtps_cpp::_StartNeptusParser__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, msg, StartNeptusParser)() {
  return &labust_msgs::msg::typesupport_fastrtps_cpp::_StartNeptusParser__handle;
}

#ifdef __cplusplus
}
#endif
