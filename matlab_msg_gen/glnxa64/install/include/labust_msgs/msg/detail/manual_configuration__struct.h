// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/ManualConfiguration.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MANUAL_CONFIGURATION__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__MANUAL_CONFIGURATION__STRUCT_H_

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
  labust_msgs__msg__ManualConfiguration__DISABLED = -1l
};

/// Constant 'X'.
enum
{
  labust_msgs__msg__ManualConfiguration__X = 0l
};

/// Constant 'Y'.
enum
{
  labust_msgs__msg__ManualConfiguration__Y = 1l
};

/// Constant 'Z'.
enum
{
  labust_msgs__msg__ManualConfiguration__Z = 2l
};

/// Constant 'K'.
enum
{
  labust_msgs__msg__ManualConfiguration__K = 3l
};

/// Constant 'M'.
enum
{
  labust_msgs__msg__ManualConfiguration__M = 4l
};

/// Constant 'N'.
enum
{
  labust_msgs__msg__ManualConfiguration__N = 5l
};

// Include directives for member types
// Member 'axes_map'
// Member 'scale_map'
// Member 'integrated'
// Member 'maximum_effort'
// Member 'maximum_nu'
// Member 'maximum_speed'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'topic'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ManualConfiguration in the package labust_msgs.
typedef struct labust_msgs__msg__ManualConfiguration
{
  rosidl_runtime_c__int32__Sequence axes_map;
  rosidl_runtime_c__float__Sequence scale_map;
  rosidl_runtime_c__float__Sequence integrated;
  rosidl_runtime_c__float__Sequence maximum_effort;
  rosidl_runtime_c__float__Sequence maximum_nu;
  rosidl_runtime_c__float__Sequence maximum_speed;
  double sampling_time;
  bool use_ff;
  rosidl_runtime_c__String topic;
} labust_msgs__msg__ManualConfiguration;

// Struct for a sequence of labust_msgs__msg__ManualConfiguration.
typedef struct labust_msgs__msg__ManualConfiguration__Sequence
{
  labust_msgs__msg__ManualConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__ManualConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__MANUAL_CONFIGURATION__STRUCT_H_
