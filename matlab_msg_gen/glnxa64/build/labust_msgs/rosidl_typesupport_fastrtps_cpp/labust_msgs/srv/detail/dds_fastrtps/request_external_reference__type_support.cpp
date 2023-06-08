// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:srv/RequestExternalReference.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/request_external_reference__rosidl_typesupport_fastrtps_cpp.hpp"
#include "labust_msgs/srv/detail/request_external_reference__struct.hpp"

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
  const labust_msgs::srv::RequestExternalReference_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: control_modes
  {
    cdr << ros_message.control_modes;
  }
  // Member: identity
  cdr << ros_message.identity;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::srv::RequestExternalReference_Request & ros_message)
{
  // Member: control_modes
  {
    cdr >> ros_message.control_modes;
  }

  // Member: identity
  cdr >> ros_message.identity;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::srv::RequestExternalReference_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: control_modes
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.control_modes[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: identity
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.identity.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_RequestExternalReference_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: control_modes
  {
    size_t array_size = 6;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: identity
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

static bool _RequestExternalReference_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::RequestExternalReference_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RequestExternalReference_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::srv::RequestExternalReference_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RequestExternalReference_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::RequestExternalReference_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RequestExternalReference_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RequestExternalReference_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RequestExternalReference_Request__callbacks = {
  "labust_msgs::srv",
  "RequestExternalReference_Request",
  _RequestExternalReference_Request__cdr_serialize,
  _RequestExternalReference_Request__cdr_deserialize,
  _RequestExternalReference_Request__get_serialized_size,
  _RequestExternalReference_Request__max_serialized_size
};

static rosidl_message_type_support_t _RequestExternalReference_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RequestExternalReference_Request__callbacks,
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
get_message_type_support_handle<labust_msgs::srv::RequestExternalReference_Request>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RequestExternalReference_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, RequestExternalReference_Request)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RequestExternalReference_Request__handle;
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
  const labust_msgs::srv::RequestExternalReference_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: identity_token
  cdr << ros_message.identity_token;
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::srv::RequestExternalReference_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: identity_token
  cdr >> ros_message.identity_token;

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::srv::RequestExternalReference_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: identity_token
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.identity_token.size() + 1);
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_RequestExternalReference_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: identity_token
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: message
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

static bool _RequestExternalReference_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::RequestExternalReference_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RequestExternalReference_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::srv::RequestExternalReference_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RequestExternalReference_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::RequestExternalReference_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RequestExternalReference_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RequestExternalReference_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RequestExternalReference_Response__callbacks = {
  "labust_msgs::srv",
  "RequestExternalReference_Response",
  _RequestExternalReference_Response__cdr_serialize,
  _RequestExternalReference_Response__cdr_deserialize,
  _RequestExternalReference_Response__get_serialized_size,
  _RequestExternalReference_Response__max_serialized_size
};

static rosidl_message_type_support_t _RequestExternalReference_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RequestExternalReference_Response__callbacks,
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
get_message_type_support_handle<labust_msgs::srv::RequestExternalReference_Response>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RequestExternalReference_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, RequestExternalReference_Response)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RequestExternalReference_Response__handle;
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

static service_type_support_callbacks_t _RequestExternalReference__callbacks = {
  "labust_msgs::srv",
  "RequestExternalReference",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, RequestExternalReference_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, RequestExternalReference_Response)(),
};

static rosidl_service_type_support_t _RequestExternalReference__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RequestExternalReference__callbacks,
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
get_service_type_support_handle<labust_msgs::srv::RequestExternalReference>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RequestExternalReference__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, RequestExternalReference)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_RequestExternalReference__handle;
}

#ifdef __cplusplus
}
#endif
