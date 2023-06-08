// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/StartParser.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__START_PARSER__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__START_PARSER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FILENAME'.
enum
{
  labust_msgs__msg__StartParser__FILENAME = 0
};

/// Constant 'STRING'.
enum
{
  labust_msgs__msg__StartParser__STRING = 1
};

// Include directives for member types
// Member 'mission_data'
#include "rosidl_runtime_c/string.h"
// Member 'start_position'
#include "auv_msgs/msg/detail/ned__struct.h"

// Struct defined in msg/StartParser in the package labust_msgs.
typedef struct labust_msgs__msg__StartParser
{
  uint8_t method;
  rosidl_runtime_c__String mission_data;
  bool relative;
  auv_msgs__msg__NED start_position;
} labust_msgs__msg__StartParser;

// Struct for a sequence of labust_msgs__msg__StartParser.
typedef struct labust_msgs__msg__StartParser__Sequence
{
  labust_msgs__msg__StartParser * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__StartParser__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__START_PARSER__STRUCT_H_
