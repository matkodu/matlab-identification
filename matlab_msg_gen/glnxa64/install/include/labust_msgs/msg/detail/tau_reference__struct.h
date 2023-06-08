// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/TauReference.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__TAU_REFERENCE__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__TAU_REFERENCE__STRUCT_H_

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
// Member 'identity_token'
#include "rosidl_runtime_c/string.h"
// Member 'reference'
#include "geometry_msgs/msg/detail/wrench__struct.h"

// Struct defined in msg/TauReference in the package labust_msgs.
typedef struct labust_msgs__msg__TauReference
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String identity_token;
  geometry_msgs__msg__Wrench reference;
} labust_msgs__msg__TauReference;

// Struct for a sequence of labust_msgs__msg__TauReference.
typedef struct labust_msgs__msg__TauReference__Sequence
{
  labust_msgs__msg__TauReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__TauReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__TAU_REFERENCE__STRUCT_H_
