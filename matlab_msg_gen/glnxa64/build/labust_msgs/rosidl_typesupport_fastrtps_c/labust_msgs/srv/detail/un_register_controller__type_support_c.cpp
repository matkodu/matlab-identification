// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from labust_msgs:srv/UnRegisterController.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/un_register_controller__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/srv/detail/un_register_controller__struct.h"
#include "labust_msgs/srv/detail/un_register_controller__functions.h"
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

#include "rosidl_runtime_c/string.h"  // name, parent
#include "rosidl_runtime_c/string_functions.h"  // name, parent

// forward declare type support functions


using _UnRegisterController_Request__ros_msg_type = labust_msgs__srv__UnRegisterController_Request;

static bool _UnRegisterController_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UnRegisterController_Request__ros_msg_type * ros_message = static_cast<const _UnRegisterController_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: parent
  {
    const rosidl_runtime_c__String * str = &ros_message->parent;
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

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

static bool _UnRegisterController_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UnRegisterController_Request__ros_msg_type * ros_message = static_cast<_UnRegisterController_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: parent
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->parent.data) {
      rosidl_runtime_c__String__init(&ros_message->parent);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->parent,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'parent'\n");
      return false;
    }
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__UnRegisterController_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UnRegisterController_Request__ros_msg_type * ros_message = static_cast<const _UnRegisterController_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parent
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->parent.size + 1);
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _UnRegisterController_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__UnRegisterController_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__UnRegisterController_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parent
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: name
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

static size_t _UnRegisterController_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__UnRegisterController_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UnRegisterController_Request = {
  "labust_msgs::srv",
  "UnRegisterController_Request",
  _UnRegisterController_Request__cdr_serialize,
  _UnRegisterController_Request__cdr_deserialize,
  _UnRegisterController_Request__get_serialized_size,
  _UnRegisterController_Request__max_serialized_size
};

static rosidl_message_type_support_t _UnRegisterController_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UnRegisterController_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, UnRegisterController_Request)() {
  return &_UnRegisterController_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "labust_msgs/srv/detail/un_register_controller__struct.h"
// already included above
// #include "labust_msgs/srv/detail/un_register_controller__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _UnRegisterController_Response__ros_msg_type = labust_msgs__srv__UnRegisterController_Response;

static bool _UnRegisterController_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UnRegisterController_Response__ros_msg_type * ros_message = static_cast<const _UnRegisterController_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: reply
  {
    cdr << ros_message->reply;
  }

  return true;
}

static bool _UnRegisterController_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UnRegisterController_Response__ros_msg_type * ros_message = static_cast<_UnRegisterController_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: reply
  {
    cdr >> ros_message->reply;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t get_serialized_size_labust_msgs__srv__UnRegisterController_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UnRegisterController_Response__ros_msg_type * ros_message = static_cast<const _UnRegisterController_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reply
  {
    size_t item_size = sizeof(ros_message->reply);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UnRegisterController_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_labust_msgs__srv__UnRegisterController_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_labust_msgs
size_t max_serialized_size_labust_msgs__srv__UnRegisterController_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: reply
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _UnRegisterController_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_labust_msgs__srv__UnRegisterController_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UnRegisterController_Response = {
  "labust_msgs::srv",
  "UnRegisterController_Response",
  _UnRegisterController_Response__cdr_serialize,
  _UnRegisterController_Response__cdr_deserialize,
  _UnRegisterController_Response__get_serialized_size,
  _UnRegisterController_Response__max_serialized_size
};

static rosidl_message_type_support_t _UnRegisterController_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UnRegisterController_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, UnRegisterController_Response)() {
  return &_UnRegisterController_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "labust_msgs/srv/un_register_controller.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t UnRegisterController__callbacks = {
  "labust_msgs::srv",
  "UnRegisterController",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, UnRegisterController_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, UnRegisterController_Response)(),
};

static rosidl_service_type_support_t UnRegisterController__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &UnRegisterController__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, srv, UnRegisterController)() {
  return &UnRegisterController__handle;
}

#if defined(__cplusplus)
}
#endif
