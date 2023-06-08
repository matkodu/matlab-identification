// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'info'
#include "labust_msgs/msg/detail/controller_info__struct.h"

// Struct defined in msg/ControllerState in the package labust_msgs.
typedef struct labust_msgs__msg__ControllerState
{
  rosidl_runtime_c__String__Sequence name;
  labust_msgs__msg__ControllerInfo__Sequence info;
} labust_msgs__msg__ControllerState;

// Struct for a sequence of labust_msgs__msg__ControllerState.
typedef struct labust_msgs__msg__ControllerState__Sequence
{
  labust_msgs__msg__ControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__ControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
