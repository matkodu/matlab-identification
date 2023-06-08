// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/NanomodemPayload.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_PAYLOAD__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_PAYLOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BRDCST'.
enum
{
  labust_msgs__msg__NanomodemPayload__BRDCST = 0
};

/// Constant 'UNICST'.
enum
{
  labust_msgs__msg__NanomodemPayload__UNICST = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'msg'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/NanomodemPayload in the package labust_msgs.
typedef struct labust_msgs__msg__NanomodemPayload
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint8__Sequence msg;
  int16_t sender_id;
  uint8_t msg_type;
} labust_msgs__msg__NanomodemPayload;

// Struct for a sequence of labust_msgs__msg__NanomodemPayload.
typedef struct labust_msgs__msg__NanomodemPayload__Sequence
{
  labust_msgs__msg__NanomodemPayload * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__NanomodemPayload__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_PAYLOAD__STRUCT_H_
