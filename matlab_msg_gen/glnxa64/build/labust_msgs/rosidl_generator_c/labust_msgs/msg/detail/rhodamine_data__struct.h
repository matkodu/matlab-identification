// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/RhodamineData.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RHODAMINE_DATA__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__RHODAMINE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'position'
#include "geographic_msgs/msg/detail/geo_point__struct.h"
// Member 'adc'
#include "labust_msgs/msg/detail/rhodamine_adc__struct.h"

// Struct defined in msg/RhodamineData in the package labust_msgs.
typedef struct labust_msgs__msg__RhodamineData
{
  std_msgs__msg__Header header;
  geographic_msgs__msg__GeoPoint position;
  labust_msgs__msg__RhodamineAdc adc;
} labust_msgs__msg__RhodamineData;

// Struct for a sequence of labust_msgs__msg__RhodamineData.
typedef struct labust_msgs__msg__RhodamineData__Sequence
{
  labust_msgs__msg__RhodamineData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__RhodamineData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__RHODAMINE_DATA__STRUCT_H_
