// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/NuReference.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NU_REFERENCE__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__NU_REFERENCE__STRUCT_H_

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
#include "geometry_msgs/msg/detail/twist__struct.h"

// Struct defined in msg/NuReference in the package labust_msgs.
typedef struct labust_msgs__msg__NuReference
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String identity_token;
  geometry_msgs__msg__Twist reference;
} labust_msgs__msg__NuReference;

// Struct for a sequence of labust_msgs__msg__NuReference.
typedef struct labust_msgs__msg__NuReference__Sequence
{
  labust_msgs__msg__NuReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__NuReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__NU_REFERENCE__STRUCT_H_
