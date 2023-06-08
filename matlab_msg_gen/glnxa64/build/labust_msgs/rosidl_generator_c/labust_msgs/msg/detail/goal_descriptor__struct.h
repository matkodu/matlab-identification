// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/GoalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__GOAL_DESCRIPTOR__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__GOAL_DESCRIPTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PRIORITY_LOW'.
enum
{
  labust_msgs__msg__GoalDescriptor__PRIORITY_LOW = 0ul
};

/// Constant 'PRIORITY_NORMAL'.
enum
{
  labust_msgs__msg__GoalDescriptor__PRIORITY_NORMAL = 10ul
};

/// Constant 'PRIORITY_AVOID_OBSTACLE'.
enum
{
  labust_msgs__msg__GoalDescriptor__PRIORITY_AVOID_OBSTACLE = 20ul
};

/// Constant 'PRIORITY_EMERGENCY'.
enum
{
  labust_msgs__msg__GoalDescriptor__PRIORITY_EMERGENCY = 30ul
};

/// Constant 'PRIORITY_MANUAL_OVERRIDE'.
enum
{
  labust_msgs__msg__GoalDescriptor__PRIORITY_MANUAL_OVERRIDE = 40ul
};

// Include directives for member types
// Member 'requester'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/GoalDescriptor in the package labust_msgs.
typedef struct labust_msgs__msg__GoalDescriptor
{
  rosidl_runtime_c__String requester;
  uint32_t id;
  uint32_t priority;
} labust_msgs__msg__GoalDescriptor;

// Struct for a sequence of labust_msgs__msg__GoalDescriptor.
typedef struct labust_msgs__msg__GoalDescriptor__Sequence
{
  labust_msgs__msg__GoalDescriptor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__GoalDescriptor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__GOAL_DESCRIPTOR__STRUCT_H_
