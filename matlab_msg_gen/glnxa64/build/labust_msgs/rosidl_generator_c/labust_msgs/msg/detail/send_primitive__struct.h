// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/SendPrimitive.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__SEND_PRIMITIVE__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__SEND_PRIMITIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'primitive_data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'event'
#include "labust_msgs/msg/detail/event_data__struct.h"
// Member 'primitive_string'
#include "std_msgs/msg/detail/string__struct.h"

// Struct defined in msg/SendPrimitive in the package labust_msgs.
typedef struct labust_msgs__msg__SendPrimitive
{
  int32_t primitive_id;
  rosidl_runtime_c__uint8__Sequence primitive_data;
  labust_msgs__msg__EventData event;
  std_msgs__msg__String primitive_string;
} labust_msgs__msg__SendPrimitive;

// Struct for a sequence of labust_msgs__msg__SendPrimitive.
typedef struct labust_msgs__msg__SendPrimitive__Sequence
{
  labust_msgs__msg__SendPrimitive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__SendPrimitive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__SEND_PRIMITIVE__STRUCT_H_
