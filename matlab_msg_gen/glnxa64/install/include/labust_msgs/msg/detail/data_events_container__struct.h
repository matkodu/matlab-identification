// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/DataEventsContainer.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__DATA_EVENTS_CONTAINER__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__DATA_EVENTS_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state_var'
// Member 'mission_var'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"
// Member 'events_var'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/DataEventsContainer in the package labust_msgs.
typedef struct labust_msgs__msg__DataEventsContainer
{
  std_msgs__msg__Float64MultiArray state_var;
  std_msgs__msg__Float64MultiArray mission_var;
  rosidl_runtime_c__uint8__Sequence events_var;
} labust_msgs__msg__DataEventsContainer;

// Struct for a sequence of labust_msgs__msg__DataEventsContainer.
typedef struct labust_msgs__msg__DataEventsContainer__Sequence
{
  labust_msgs__msg__DataEventsContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__DataEventsContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__DATA_EVENTS_CONTAINER__STRUCT_H_
