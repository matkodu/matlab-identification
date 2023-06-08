// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:srv/DynamicPositioningPrimitiveService.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/dynamic_positioning_primitive_service__rosidl_typesupport_fastrtps_cpp.hpp"
#include "labust_msgs/srv/detail/dynamic_positioning_primitive_service__struct.hpp"

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
  const labust_msgs::srv::DynamicPositioningPrimitiveService_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: north
  cdr << ros_message.north;
  // Member: east
  cdr << ros_message.east;
  // Member: depth
  cdr << ros_message.depth;
  // Member: heading
  cdr << ros_message.heading;
  // Member: north_enable
  cdr << (ros_message.north_enable ? true : false);
  // Member: east_enable
  cdr << (ros_message.east_enable ? true : false);
  // Member: depth_enable
  cdr << (ros_message.depth_enable ? true : false);
  // Member: heading_enable
  cdr << (ros_message.heading_enable ? true : false);
  // Member: altitude_enable
  cdr << (ros_message.altitude_enable ? true : false);
  // Member: target_topic_enable
  cdr << (ros_message.target_topic_enable ? true : false);
  // Member: track_heading_enable
  cdr << (ros_message.track_heading_enable ? true : false);
  // Member: point_to_target
  cdr << (ros_message.point_to_target ? true : false);
  // Member: target_topic
  cdr << ros_message.target_topic;
  // Member: heading_topic
  cdr << ros_message.heading_topic;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::srv::DynamicPositioningPrimitiveService_Request & ros_message)
{
  // Member: north
  cdr >> ros_message.north;

  // Member: east
  cdr >> ros_message.east;

  // Member: depth
  cdr >> ros_message.depth;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: north_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.north_enable = tmp ? true : false;
  }

  // Member: east_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.east_enable = tmp ? true : false;
  }

  // Member: depth_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.depth_enable = tmp ? true : false;
  }

  // Member: heading_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heading_enable = tmp ? true : false;
  }

  // Member: altitude_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.altitude_enable = tmp ? true : false;
  }

  // Member: target_topic_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.target_topic_enable = tmp ? true : false;
  }

  // Member: track_heading_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.track_heading_enable = tmp ? true : false;
  }

  // Member: point_to_target
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.point_to_target = tmp ? true : false;
  }

  // Member: target_topic
  cdr >> ros_message.target_topic;

  // Member: heading_topic
  cdr >> ros_message.heading_topic;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::srv::DynamicPositioningPrimitiveService_Request & ros_message,
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
  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: north_enable
  {
    size_t item_size = sizeof(ros_message.north_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: east_enable
  {
    size_t item_size = sizeof(ros_message.east_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: depth_enable
  {
    size_t item_size = sizeof(ros_message.depth_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_enable
  {
    size_t item_size = sizeof(ros_message.heading_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: altitude_enable
  {
    size_t item_size = sizeof(ros_message.altitude_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_topic_enable
  {
    size_t item_size = sizeof(ros_message.target_topic_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_heading_enable
  {
    size_t item_size = sizeof(ros_message.track_heading_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: point_to_target
  {
    size_t item_size = sizeof(ros_message.point_to_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.target_topic.size() + 1);
  // Member: heading_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.heading_topic.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_DynamicPositioningPrimitiveService_Request(
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

  // Member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: north_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: east_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: depth_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heading_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: altitude_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_topic_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: track_heading_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: point_to_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: heading_topic
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

static bool _DynamicPositioningPrimitiveService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::DynamicPositioningPrimitiveService_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DynamicPositioningPrimitiveService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::srv::DynamicPositioningPrimitiveService_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DynamicPositioningPrimitiveService_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::DynamicPositioningPrimitiveService_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DynamicPositioningPrimitiveService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DynamicPositioningPrimitiveService_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _DynamicPositioningPrimitiveService_Request__callbacks = {
  "labust_msgs::srv",
  "DynamicPositioningPrimitiveService_Request",
  _DynamicPositioningPrimitiveService_Request__cdr_serialize,
  _DynamicPositioningPrimitiveService_Request__cdr_deserialize,
  _DynamicPositioningPrimitiveService_Request__get_serialized_size,
  _DynamicPositioningPrimitiveService_Request__max_serialized_size
};

static rosidl_message_type_support_t _DynamicPositioningPrimitiveService_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DynamicPositioningPrimitiveService_Request__callbacks,
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
get_message_type_support_handle<labust_msgs::srv::DynamicPositioningPrimitiveService_Request>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_DynamicPositioningPrimitiveService_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, DynamicPositioningPrimitiveService_Request)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_DynamicPositioningPrimitiveService_Request__handle;
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
  const labust_msgs::srv::DynamicPositioningPrimitiveService_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << (ros_message.status ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::srv::DynamicPositioningPrimitiveService_Response & ros_message)
{
  // Member: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::srv::DynamicPositioningPrimitiveService_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_DynamicPositioningPrimitiveService_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _DynamicPositioningPrimitiveService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::DynamicPositioningPrimitiveService_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DynamicPositioningPrimitiveService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::srv::DynamicPositioningPrimitiveService_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DynamicPositioningPrimitiveService_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::srv::DynamicPositioningPrimitiveService_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DynamicPositioningPrimitiveService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DynamicPositioningPrimitiveService_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _DynamicPositioningPrimitiveService_Response__callbacks = {
  "labust_msgs::srv",
  "DynamicPositioningPrimitiveService_Response",
  _DynamicPositioningPrimitiveService_Response__cdr_serialize,
  _DynamicPositioningPrimitiveService_Response__cdr_deserialize,
  _DynamicPositioningPrimitiveService_Response__get_serialized_size,
  _DynamicPositioningPrimitiveService_Response__max_serialized_size
};

static rosidl_message_type_support_t _DynamicPositioningPrimitiveService_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DynamicPositioningPrimitiveService_Response__callbacks,
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
get_message_type_support_handle<labust_msgs::srv::DynamicPositioningPrimitiveService_Response>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_DynamicPositioningPrimitiveService_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, DynamicPositioningPrimitiveService_Response)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_DynamicPositioningPrimitiveService_Response__handle;
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

static service_type_support_callbacks_t _DynamicPositioningPrimitiveService__callbacks = {
  "labust_msgs::srv",
  "DynamicPositioningPrimitiveService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, DynamicPositioningPrimitiveService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, DynamicPositioningPrimitiveService_Response)(),
};

static rosidl_service_type_support_t _DynamicPositioningPrimitiveService__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DynamicPositioningPrimitiveService__callbacks,
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
get_service_type_support_handle<labust_msgs::srv::DynamicPositioningPrimitiveService>()
{
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_DynamicPositioningPrimitiveService__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, srv, DynamicPositioningPrimitiveService)() {
  return &labust_msgs::srv::typesupport_fastrtps_cpp::_DynamicPositioningPrimitiveService__handle;
}

#ifdef __cplusplus
}
#endif
