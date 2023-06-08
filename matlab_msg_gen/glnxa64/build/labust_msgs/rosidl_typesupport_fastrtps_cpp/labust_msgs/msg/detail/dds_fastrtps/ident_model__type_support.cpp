// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/IdentModel.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/ident_model__rosidl_typesupport_fastrtps_cpp.hpp"
#include "labust_msgs/msg/detail/ident_model__struct.hpp"

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
  const labust_msgs::msg::IdentModel & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: model_type
  cdr << ros_message.model_type;
  // Member: dof
  cdr << ros_message.dof;
  // Member: tf_num
  {
    cdr << ros_message.tf_num;
  }
  // Member: tf_den
  {
    cdr << ros_message.tf_den;
  }
  // Member: ss_dim_n
  cdr << ros_message.ss_dim_n;
  // Member: ss_dim_m
  cdr << ros_message.ss_dim_m;
  // Member: ss_mat_a
  {
    cdr << ros_message.ss_mat_a;
  }
  // Member: ss_mat_b
  {
    cdr << ros_message.ss_mat_b;
  }
  // Member: ss_mat_c
  {
    cdr << ros_message.ss_mat_c;
  }
  // Member: ss_mat_d
  {
    cdr << ros_message.ss_mat_d;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  labust_msgs::msg::IdentModel & ros_message)
{
  // Member: model_type
  cdr >> ros_message.model_type;

  // Member: dof
  cdr >> ros_message.dof;

  // Member: tf_num
  {
    cdr >> ros_message.tf_num;
  }

  // Member: tf_den
  {
    cdr >> ros_message.tf_den;
  }

  // Member: ss_dim_n
  cdr >> ros_message.ss_dim_n;

  // Member: ss_dim_m
  cdr >> ros_message.ss_dim_m;

  // Member: ss_mat_a
  {
    cdr >> ros_message.ss_mat_a;
  }

  // Member: ss_mat_b
  {
    cdr >> ros_message.ss_mat_b;
  }

  // Member: ss_mat_c
  {
    cdr >> ros_message.ss_mat_c;
  }

  // Member: ss_mat_d
  {
    cdr >> ros_message.ss_mat_d;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
get_serialized_size(
  const labust_msgs::msg::IdentModel & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: model_type
  {
    size_t item_size = sizeof(ros_message.model_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dof
  {
    size_t item_size = sizeof(ros_message.dof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tf_num
  {
    size_t array_size = ros_message.tf_num.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tf_num[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tf_den
  {
    size_t array_size = ros_message.tf_den.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tf_den[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ss_dim_n
  {
    size_t item_size = sizeof(ros_message.ss_dim_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ss_dim_m
  {
    size_t item_size = sizeof(ros_message.ss_dim_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ss_mat_a
  {
    size_t array_size = ros_message.ss_mat_a.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ss_mat_a[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ss_mat_b
  {
    size_t array_size = ros_message.ss_mat_b.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ss_mat_b[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ss_mat_c
  {
    size_t array_size = ros_message.ss_mat_c.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ss_mat_c[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ss_mat_d
  {
    size_t array_size = ros_message.ss_mat_d.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ss_mat_d[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_labust_msgs
max_serialized_size_IdentModel(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: model_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dof
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tf_num
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tf_den
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ss_dim_n
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ss_dim_m
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ss_mat_a
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ss_mat_b
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ss_mat_c
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ss_mat_d
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _IdentModel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const labust_msgs::msg::IdentModel *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IdentModel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<labust_msgs::msg::IdentModel *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IdentModel__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const labust_msgs::msg::IdentModel *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IdentModel__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_IdentModel(full_bounded, 0);
}

static message_type_support_callbacks_t _IdentModel__callbacks = {
  "labust_msgs::msg",
  "IdentModel",
  _IdentModel__cdr_serialize,
  _IdentModel__cdr_deserialize,
  _IdentModel__get_serialized_size,
  _IdentModel__max_serialized_size
};

static rosidl_message_type_support_t _IdentModel__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IdentModel__callbacks,
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
get_message_type_support_handle<labust_msgs::msg::IdentModel>()
{
  return &labust_msgs::msg::typesupport_fastrtps_cpp::_IdentModel__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, msg, IdentModel)() {
  return &labust_msgs::msg::typesupport_fastrtps_cpp::_IdentModel__handle;
}

#ifdef __cplusplus
}
#endif
