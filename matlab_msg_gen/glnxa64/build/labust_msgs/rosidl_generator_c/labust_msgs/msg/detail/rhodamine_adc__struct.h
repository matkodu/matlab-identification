// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/RhodamineAdc.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RHODAMINE_ADC__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__RHODAMINE_ADC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RhodamineAdc in the package labust_msgs.
typedef struct labust_msgs__msg__RhodamineAdc
{
  uint16_t adc;
  uint8_t gain;
} labust_msgs__msg__RhodamineAdc;

// Struct for a sequence of labust_msgs__msg__RhodamineAdc.
typedef struct labust_msgs__msg__RhodamineAdc__Sequence
{
  labust_msgs__msg__RhodamineAdc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__RhodamineAdc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__RHODAMINE_ADC__STRUCT_H_
