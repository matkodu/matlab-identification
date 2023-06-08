// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/StartNeptusParser.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_name'
#include "rosidl_runtime_c/string.h"
// Member 'origin'
// Member 'custom_start'
#include "geographic_msgs/msg/detail/geo_point__struct.h"

// Struct defined in msg/StartNeptusParser in the package labust_msgs.
typedef struct labust_msgs__msg__StartNeptusParser
{
  rosidl_runtime_c__String file_name;
  bool relative;
  bool custom_start_flag;
  geographic_msgs__msg__GeoPoint origin;
  geographic_msgs__msg__GeoPoint custom_start;
  bool underactuated;
  float speed;
  float heading;
  float victory_radius;
} labust_msgs__msg__StartNeptusParser;

// Struct for a sequence of labust_msgs__msg__StartNeptusParser.
typedef struct labust_msgs__msg__StartNeptusParser__Sequence
{
  labust_msgs__msg__StartNeptusParser * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__StartNeptusParser__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__STRUCT_H_
