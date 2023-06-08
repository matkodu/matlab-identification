// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/ExternalEvent.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ExternalEvent in the package labust_msgs.
typedef struct labust_msgs__msg__ExternalEvent
{
  int32_t id;
  rosidl_runtime_c__String description;
  float value;
} labust_msgs__msg__ExternalEvent;

// Struct for a sequence of labust_msgs__msg__ExternalEvent.
typedef struct labust_msgs__msg__ExternalEvent__Sequence
{
  labust_msgs__msg__ExternalEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__ExternalEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__STRUCT_H_
