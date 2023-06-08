// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'on_event_next'
// Member 'on_event_next_active'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/EventData in the package labust_msgs.
typedef struct labust_msgs__msg__EventData
{
  float timeout;
  rosidl_runtime_c__uint8__Sequence on_event_next;
  rosidl_runtime_c__uint8__Sequence on_event_next_active;
} labust_msgs__msg__EventData;

// Struct for a sequence of labust_msgs__msg__EventData.
typedef struct labust_msgs__msg__EventData__Sequence
{
  labust_msgs__msg__EventData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__EventData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_H_
