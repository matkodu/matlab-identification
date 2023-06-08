// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/MissionSetup.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MISSION_SETUP__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__MISSION_SETUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_params'
// Member 'mission_events'
#include "rosidl_runtime_c/string.h"
// Member 'mission_offset'
#include "auv_msgs/msg/detail/ned__struct.h"

// Struct defined in msg/MissionSetup in the package labust_msgs.
typedef struct labust_msgs__msg__MissionSetup
{
  rosidl_runtime_c__String mission_params;
  rosidl_runtime_c__String mission_events;
  auv_msgs__msg__NED mission_offset;
} labust_msgs__msg__MissionSetup;

// Struct for a sequence of labust_msgs__msg__MissionSetup.
typedef struct labust_msgs__msg__MissionSetup__Sequence
{
  labust_msgs__msg__MissionSetup * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__MissionSetup__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__MISSION_SETUP__STRUCT_H_
