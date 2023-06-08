// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/ISO.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__ISO__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__ISO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ISO in the package labust_msgs.
typedef struct labust_msgs__msg__ISO
{
  int32_t dof;
  float command;
  float hysteresis;
  float reference;
  float sampling_rate;
} labust_msgs__msg__ISO;

// Struct for a sequence of labust_msgs__msg__ISO.
typedef struct labust_msgs__msg__ISO__Sequence
{
  labust_msgs__msg__ISO * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__ISO__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__ISO__STRUCT_H_
