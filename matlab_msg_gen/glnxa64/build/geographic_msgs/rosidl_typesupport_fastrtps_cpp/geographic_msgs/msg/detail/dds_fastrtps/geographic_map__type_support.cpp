// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from geographic_msgs:msg/GeographicMap.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/geographic_map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "geographic_msgs/msg/detail/geographic_map__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace geographic_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geographic_msgs::msg::BoundingBox &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geographic_msgs::msg::BoundingBox &);
size_t get_serialized_size(
  const geographic_msgs::msg::BoundingBox &,
  size_t current_alignment);
size_t
max_serialized_size_BoundingBox(
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
  const geographic_msgs::msg::WayPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geographic_msgs::msg::WayPoint &);
size_t get_serialized_size(
  const geographic_msgs::msg::WayPoint &,
  size_t current_alignment);
size_t
max_serialized_size_WayPoint(
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
  const geographic_msgs::msg::MapFeature &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geographic_msgs::msg::MapFeature &);
size_t get_serialized_size(
  const geographic_msgs::msg::MapFeature &,
  size_t current_alignment);
size_t
max_serialized_size_MapFeature(
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
  const geographic_msgs::msg::KeyValue &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geographic_msgs::msg::KeyValue &);
size_t get_serialized_size(
  const geographic_msgs::msg::KeyValue &,
  size_t current_alignment);
size_t
max_serialized_size_KeyValue(
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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geographic_msgs
cdr_serialize(
  const geographic_msgs::msg::GeographicMap & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.id,
    cdr);
  // Member: bounds
  geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bounds,
    cdr);
  // Member: points
  {
    size_t size = ros_message.points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.points[i],
        cdr);
    }
  }
  // Member: features
  {
    size_t size = ros_message.features.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.features[i],
        cdr);
    }
  }
  // Member: props
  {
    size_t size = ros_message.props.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.props[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geographic_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  geographic_msgs::msg::GeographicMap & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.id);

  // Member: bounds
  geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bounds);

  // Member: points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.points.resize(size);
    for (size_t i = 0; i < size; i++) {
      geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.points[i]);
    }
  }

  // Member: features
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.features.resize(size);
    for (size_t i = 0; i < size; i++) {
      geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.features[i]);
    }
  }

  // Member: props
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.props.resize(size);
    for (size_t i = 0; i < size; i++) {
      geographic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.props[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geographic_msgs
get_serialized_size(
  const geographic_msgs::msg::GeographicMap & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.id, current_alignment);
  // Member: bounds

  current_alignment +=
    geographic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bounds, current_alignment);
  // Member: points
  {
    size_t array_size = ros_message.points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geographic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.points[index], current_alignment);
    }
  }
  // Member: features
  {
    size_t array_size = ros_message.features.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geographic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.features[index], current_alignment);
    }
  }
  // Member: props
  {
    size_t array_size = ros_message.props.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geographic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.props[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_geographic_msgs
max_serialized_size_GeographicMap(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: bounds
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geographic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundingBox(
        full_bounded, current_alignment);
    }
  }

  // Member: points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geographic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WayPoint(
        full_bounded, current_alignment);
    }
  }

  // Member: features
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geographic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MapFeature(
        full_bounded, current_alignment);
    }
  }

  // Member: props
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geographic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_KeyValue(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GeographicMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const geographic_msgs::msg::GeographicMap *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GeographicMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<geographic_msgs::msg::GeographicMap *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GeographicMap__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const geographic_msgs::msg::GeographicMap *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GeographicMap__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GeographicMap(full_bounded, 0);
}

static message_type_support_callbacks_t _GeographicMap__callbacks = {
  "geographic_msgs::msg",
  "GeographicMap",
  _GeographicMap__cdr_serialize,
  _GeographicMap__cdr_deserialize,
  _GeographicMap__get_serialized_size,
  _GeographicMap__max_serialized_size
};

static rosidl_message_type_support_t _GeographicMap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GeographicMap__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace geographic_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::msg::GeographicMap>()
{
  return &geographic_msgs::msg::typesupport_fastrtps_cpp::_GeographicMap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, geographic_msgs, msg, GeographicMap)() {
  return &geographic_msgs::msg::typesupport_fastrtps_cpp::_GeographicMap__handle;
}

#ifdef __cplusplus
}
#endif
