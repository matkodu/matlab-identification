// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auv_msgs:msg/NED.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NED__STRUCT_H_
#define AUV_MSGS__MSG__DETAIL__NED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NED in the package auv_msgs.
typedef struct auv_msgs__msg__NED
{
  double north;
  double east;
  double depth;
} auv_msgs__msg__NED;

// Struct for a sequence of auv_msgs__msg__NED.
typedef struct auv_msgs__msg__NED__Sequence
{
  auv_msgs__msg__NED * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_msgs__msg__NED__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUV_MSGS__MSG__DETAIL__NED__STRUCT_H_
