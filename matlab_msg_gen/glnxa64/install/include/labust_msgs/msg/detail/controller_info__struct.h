// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISABLED'.
enum
{
  labust_msgs__msg__ControllerInfo__DISABLED = 0
};

/// Constant 'MANUAL'.
enum
{
  labust_msgs__msg__ControllerInfo__MANUAL = 1
};

/// Constant 'EXTERNAL'.
enum
{
  labust_msgs__msg__ControllerInfo__EXTERNAL = 2
};

/// Constant 'TRACKING'.
enum
{
  labust_msgs__msg__ControllerInfo__TRACKING = 3
};

// Include directives for member types
// Member 'manual_topic'
// Member 'external_topic'
// Member 'state_topic'
// Member 'tracking_topic'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ControllerInfo in the package labust_msgs.
typedef struct labust_msgs__msg__ControllerInfo
{
  rosidl_runtime_c__String manual_topic;
  rosidl_runtime_c__String external_topic;
  rosidl_runtime_c__String state_topic;
  rosidl_runtime_c__String tracking_topic;
  uint8_t state;
} labust_msgs__msg__ControllerInfo;

// Struct for a sequence of labust_msgs__msg__ControllerInfo.
typedef struct labust_msgs__msg__ControllerInfo__Sequence
{
  labust_msgs__msg__ControllerInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__ControllerInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_H_
