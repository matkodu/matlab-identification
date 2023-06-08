// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auv_msgs:msg/BodyVelocityRequest.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__BODY_VELOCITY_REQUEST__STRUCT_H_
#define AUV_MSGS__MSG__DETAIL__BODY_VELOCITY_REQUEST__STRUCT_H_

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
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

// Struct defined in msg/BodyVelocityRequest in the package auv_msgs.
typedef struct auv_msgs__msg__BodyVelocityRequest
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Twist twist;
  bool disable_axis[6];
} auv_msgs__msg__BodyVelocityRequest;

// Struct for a sequence of auv_msgs__msg__BodyVelocityRequest.
typedef struct auv_msgs__msg__BodyVelocityRequest__Sequence
{
  auv_msgs__msg__BodyVelocityRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_msgs__msg__BodyVelocityRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUV_MSGS__MSG__DETAIL__BODY_VELOCITY_REQUEST__STRUCT_H_
