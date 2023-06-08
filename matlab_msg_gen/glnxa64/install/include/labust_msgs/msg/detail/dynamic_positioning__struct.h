// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/DynamicPositioning.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "auv_msgs/msg/detail/ned__struct.h"

// Struct defined in msg/DynamicPositioning in the package labust_msgs.
typedef struct labust_msgs__msg__DynamicPositioning
{
  auv_msgs__msg__NED point;
  float heading;
} labust_msgs__msg__DynamicPositioning;

// Struct for a sequence of labust_msgs__msg__DynamicPositioning.
typedef struct labust_msgs__msg__DynamicPositioning__Sequence
{
  labust_msgs__msg__DynamicPositioning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__DynamicPositioning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__STRUCT_H_
