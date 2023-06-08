// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/RPY.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RPY__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__RPY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RPY in the package labust_msgs.
typedef struct labust_msgs__msg__RPY
{
  float roll;
  float pitch;
  float yaw;
} labust_msgs__msg__RPY;

// Struct for a sequence of labust_msgs__msg__RPY.
typedef struct labust_msgs__msg__RPY__Sequence
{
  labust_msgs__msg__RPY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__RPY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__RPY__STRUCT_H_
