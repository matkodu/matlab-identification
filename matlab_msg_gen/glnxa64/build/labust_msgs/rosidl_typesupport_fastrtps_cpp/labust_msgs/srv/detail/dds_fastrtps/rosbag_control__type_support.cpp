// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:srv/RosbagControl.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/rosbag_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "labust_msgs/srv/detail/rosbag_control__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_serialize(
  const labust_msgs::srv::RosbagControl_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: action
  cdr << ros_message.action;
  // Member: bag_name
  cdr << ros_message.bag_name;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::srv::RosbagControl_Request & ros_message)
{
  // Member: action
  cdr >> ros_message.action;

  // Member: bag_name
  cdr >> ros_message.bag_name;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::srv::RosbagControl_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.action.size() + 1);
  // Member: bag_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bag_name.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_RosbagControl_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: action
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bag_name
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

static bool _RosbagControl_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::RosbagControl_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RosbagControl_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::srv::RosbagControl_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RosbagControl_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::RosbagControl_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RosbagControl_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RosbagControl_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RosbagControl_Request__callbacks = {
  "labust_msgs::srv",
  "RosbagControl_Request",
  _RosbagControl_Request__cdr_serialize,
  _RosbagControl_Request__cdr_deserialize,
  _RosbagControl_Request__get_serialized_size,
  _RosbagControl_Request__max_serialized_size
};

static rosidl_message_type_support_t _RosbagControl_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RosbagControl_Request__callbacks,
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
get_message_type_support_handle<labust_msgs::srv::RosbagControl_Request>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RosbagControl_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, RosbagControl_Request)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RosbagControl_Request__handle;
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
  const labust_msgs::srv::RosbagControl_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  cdr << (ros_message.result ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::srv::RosbagControl_Response & ros_message)
{
  // Member: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.result = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::srv::RosbagControl_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result
  {
    size_t item_size = sizeof(ros_message.result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_RosbagControl_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RosbagControl_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::RosbagControl_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RosbagControl_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::srv::RosbagControl_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RosbagControl_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::RosbagControl_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RosbagControl_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RosbagControl_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RosbagControl_Response__callbacks = {
  "labust_msgs::srv",
  "RosbagControl_Response",
  _RosbagControl_Response__cdr_serialize,
  _RosbagControl_Response__cdr_deserialize,
  _RosbagControl_Response__get_serialized_size,
  _RosbagControl_Response__max_serialized_size
};

static rosidl_message_type_support_t _RosbagControl_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RosbagControl_Response__callbacks,
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
get_message_type_support_handle<labust_msgs::srv::RosbagControl_Response>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RosbagControl_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, RosbagControl_Response)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RosbagControl_Response__handle;
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

static service_type_support_callbacks_t _RosbagControl__callbacks = {
  "labust_msgs::srv",
  "RosbagControl",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, RosbagControl_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, RosbagControl_Response)(),
};

static rosidl_service_type_support_t _RosbagControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RosbagControl__callbacks,
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
get_service_type_support_handle<labust_msgs::srv::RosbagControl>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RosbagControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, RosbagControl)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RosbagControl__handle;
}

#ifdef __cplusplus
}
#endif
