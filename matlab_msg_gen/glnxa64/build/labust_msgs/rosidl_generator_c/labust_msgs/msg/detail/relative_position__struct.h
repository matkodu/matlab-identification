// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/RelativePosition.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__STRUCT_H_

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

// Struct defined in msg/RelativePosition in the package labust_msgs.
typedef struct labust_msgs__msg__RelativePosition
{
  std_msgs__msg__Header header;
  float x;
  float y;
  float x_variance;
  float y_variance;
  float range;
  float bearing;
  float range_variance;
  float bearing_variance;
  float altitude;
  float altitude_variance;
  float heading;
} labust_msgs__msg__RelativePosition;

// Struct for a sequence of labust_msgs__msg__RelativePosition.
typedef struct labust_msgs__msg__RelativePosition__Sequence
{
  labust_msgs__msg__RelativePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__RelativePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__STRUCT_H_
