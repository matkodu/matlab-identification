// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__MISSION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'active_primitive'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MissionStatus in the package labust_msgs.
typedef struct labust_msgs__msg__MissionStatus
{
  bool mission_active;
  rosidl_runtime_c__String active_primitive;
  bool mission_execution_ready;
  bool manual_enabled;
} labust_msgs__msg__MissionStatus;

// Struct for a sequence of labust_msgs__msg__MissionStatus.
typedef struct labust_msgs__msg__MissionStatus__Sequence
{
  labust_msgs__msg__MissionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__MissionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
