// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/Go2PointUA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__GO2_POINT_UA__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__GO2_POINT_UA__STRUCT_H_

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

// Struct defined in msg/Go2PointUA in the package labust_msgs.
typedef struct labust_msgs__msg__Go2PointUA
{
  auv_msgs__msg__NED point;
  float speed;
  float victory_radius;
} labust_msgs__msg__Go2PointUA;

// Struct for a sequence of labust_msgs__msg__Go2PointUA.
typedef struct labust_msgs__msg__Go2PointUA__Sequence
{
  labust_msgs__msg__Go2PointUA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__Go2PointUA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__GO2_POINT_UA__STRUCT_H_
