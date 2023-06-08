// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/NanomodemTDOA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_TDOA__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_TDOA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'modem_times'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/NanomodemTDOA in the package labust_msgs.
typedef struct labust_msgs__msg__NanomodemTDOA
{
  std_msgs__msg__Header header;
  double fpga_time;
  rosidl_runtime_c__uint64__Sequence modem_times;
} labust_msgs__msg__NanomodemTDOA;

// Struct for a sequence of labust_msgs__msg__NanomodemTDOA.
typedef struct labust_msgs__msg__NanomodemTDOA__Sequence
{
  labust_msgs__msg__NanomodemTDOA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__NanomodemTDOA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_TDOA__STRUCT_H_
