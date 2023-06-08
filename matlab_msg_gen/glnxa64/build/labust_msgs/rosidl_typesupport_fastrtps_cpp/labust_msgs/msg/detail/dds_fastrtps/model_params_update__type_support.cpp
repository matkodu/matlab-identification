// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/ModelParamsUpdate.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/model_params_update__rosidl_typesupport_fastrtps_cpp.hpp"
#include "labust_msgs/msg/detail/model_params_update__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_serialize(
  const labust_msgs::msg::ModelParamsUpdate & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dof
  cdr << ros_message.dof;
  // Member: alpha
  cdr << ros_message.alpha;
  // Member: beta
  cdr << ros_message.beta;
  // Member: betaa
  cdr << ros_message.betaa;
  // Member: delta
  cdr << ros_message.delta;
  // Member: wn
  cdr << ros_message.wn;
  // Member: use_linear
  cdr << (ros_message.use_linear ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::msg::ModelParamsUpdate & ros_message)
{
  // Member: dof
  cdr >> ros_message.dof;

  // Member: alpha
  cdr >> ros_message.alpha;

  // Member: beta
  cdr >> ros_message.beta;

  // Member: betaa
  cdr >> ros_message.betaa;

  // Member: delta
  cdr >> ros_message.delta;

  // Member: wn
  cdr >> ros_message.wn;

  // Member: use_linear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_linear = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::msg::ModelParamsUpdate & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dof
  {
    size_t item_size = sizeof(ros_message.dof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha
  {
    size_t item_size = sizeof(ros_message.alpha);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beta
  {
    size_t item_size = sizeof(ros_message.beta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: betaa
  {
    size_t item_size = sizeof(ros_message.betaa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta
  {
    size_t item_size = sizeof(ros_message.delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wn
  {
    size_t item_size = sizeof(ros_message.wn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_linear
  {
    size_t item_size = sizeof(ros_message.use_linear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_ModelParamsUpdate(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: dof
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: beta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: betaa
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: use_linear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ModelParamsUpdate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::msg::ModelParamsUpdate *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ModelParamsUpdate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::msg::ModelParamsUpdate *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ModelParamsUpdate__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::msg::ModelParamsUpdate *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ModelParamsUpdate__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ModelParamsUpdate(full_bounded, 0);
}

static message_type_support_callbacks_t _ModelParamsUpdate__callbacks = {
  "labust_msgs::msg",
  "ModelParamsUpdate",
  _ModelParamsUpdate__cdr_serialize,
  _ModelParamsUpdate__cdr_deserialize,
  _ModelParamsUpdate__get_serialized_size,
  _ModelParamsUpdate__max_serialized_size
};

static rosidl_message_type_support_t _ModelParamsUpdate__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ModelParamsUpdate__callbacks,
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
get_message_type_support_handle<labust_msgs::msg::ModelParamsUpdate>()
{
  return &labust_msgs::msg::typesupport_fastrtps_cpp::_ModelParamsUpdate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, msg, ModelParamsUpdate)() {
  return &labust_msgs::msg::typesupport_fastrtps_cpp::_ModelParamsUpdate__handle;
}

#ifdef __cplusplus
}
#endif
