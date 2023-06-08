// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/NanomodemRange.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_RANGE__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_RANGE__STRUCT_H_

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

// Struct defined in msg/NanomodemRange in the package labust_msgs.
typedef struct labust_msgs__msg__NanomodemRange
{
  std_msgs__msg__Header header;
  int32_t range;
  float range_m;
  int16_t id;
} labust_msgs__msg__NanomodemRange;

// Struct for a sequence of labust_msgs__msg__NanomodemRange.
typedef struct labust_msgs__msg__NanomodemRange__Sequence
{
  labust_msgs__msg__NanomodemRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__NanomodemRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_RANGE__STRUCT_H_
