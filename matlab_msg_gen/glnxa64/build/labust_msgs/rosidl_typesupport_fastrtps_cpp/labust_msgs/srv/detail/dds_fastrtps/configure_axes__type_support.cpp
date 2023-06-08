// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:srv/ConfigureAxes.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/configure_axes__rosidl_typesupport_fastrtps_cpp.hpp"
#include "labust_msgs/srv/detail/configure_axes__struct.hpp"

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
  const labust_msgs::msg::Bool6Axis &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  labust_msgs::msg::Bool6Axis &);
size_t get_serialized_size(
  const labust_msgs::msg::Bool6Axis &,
  size_t current_alignment);
size_t
max_serialized_size_Bool6Axis(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_serialize(
  const labust_msgs::srv::ConfigureAxes_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: disable_axis
  labust_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.disable_axis,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::srv::ConfigureAxes_Request & ros_message)
{
  // Member: disable_axis
  labust_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.disable_axis);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::srv::ConfigureAxes_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: disable_axis

  current_alignment +=
    labust_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.disable_axis, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_ConfigureAxes_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: disable_axis
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        labust_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Bool6Axis(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ConfigureAxes_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::ConfigureAxes_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConfigureAxes_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::srv::ConfigureAxes_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConfigureAxes_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::ConfigureAxes_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConfigureAxes_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ConfigureAxes_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ConfigureAxes_Request__callbacks = {
  "labust_msgs::srv",
  "ConfigureAxes_Request",
  _ConfigureAxes_Request__cdr_serialize,
  _ConfigureAxes_Request__cdr_deserialize,
  _ConfigureAxes_Request__get_serialized_size,
  _ConfigureAxes_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConfigureAxes_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConfigureAxes_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace labust_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_labust_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::srv::ConfigureAxes_Request>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_ConfigureAxes_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, ConfigureAxes_Request)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_ConfigureAxes_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace labust_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_serialize(
  const labust_msgs::srv::ConfigureAxes_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::srv::ConfigureAxes_Response & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::srv::ConfigureAxes_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_ConfigureAxes_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ConfigureAxes_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::ConfigureAxes_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConfigureAxes_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::srv::ConfigureAxes_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConfigureAxes_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::ConfigureAxes_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConfigureAxes_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ConfigureAxes_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ConfigureAxes_Response__callbacks = {
  "labust_msgs::srv",
  "ConfigureAxes_Response",
  _ConfigureAxes_Response__cdr_serialize,
  _ConfigureAxes_Response__cdr_deserialize,
  _ConfigureAxes_Response__get_serialized_size,
  _ConfigureAxes_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConfigureAxes_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConfigureAxes_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace labust_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_labust_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::srv::ConfigureAxes_Response>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_ConfigureAxes_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, ConfigureAxes_Response)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_ConfigureAxes_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace labust_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ConfigureAxes__callbacks = {
  "labust_msgs::srv",
  "ConfigureAxes",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, ConfigureAxes_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, ConfigureAxes_Response)(),
};

static rosidl_service_type_support_t _ConfigureAxes__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConfigureAxes__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace labust_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_labust_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<labust_msgs::srv::ConfigureAxes>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_ConfigureAxes__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, ConfigureAxes)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_ConfigureAxes__handle;
}

#ifdef __cplusplus
}
#endif
