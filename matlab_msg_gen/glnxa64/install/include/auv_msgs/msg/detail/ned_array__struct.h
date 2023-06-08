// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auv_msgs:msg/NEDArray.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NED_ARRAY__STRUCT_H_
#define AUV_MSGS__MSG__DETAIL__NED_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'neds'
#include "auv_msgs/msg/detail/ned__struct.h"

// Struct defined in msg/NEDArray in the package auv_msgs.
typedef struct auv_msgs__msg__NEDArray
{
  auv_msgs__msg__NED__Sequence neds;
} auv_msgs__msg__NEDArray;

// Struct for a sequence of auv_msgs__msg__NEDArray.
typedef struct auv_msgs__msg__NEDArray__Sequence
{
  auv_msgs__msg__NEDArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_msgs__msg__NEDArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUV_MSGS__MSG__DETAIL__NED_ARRAY__STRUCT_H_
