// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auv_msgs:msg/BodyForceRequest.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__BODY_FORCE_REQUEST__STRUCT_H_
#define AUV_MSGS__MSG__DETAIL__BODY_FORCE_REQUEST__STRUCT_H_

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
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"

// Struct defined in msg/BodyForceRequest in the package auv_msgs.
typedef struct auv_msgs__msg__BodyForceRequest
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Wrench wrench;
  bool disable_axis[6];
} auv_msgs__msg__BodyForceRequest;

// Struct for a sequence of auv_msgs__msg__BodyForceRequest.
typedef struct auv_msgs__msg__BodyForceRequest__Sequence
{
  auv_msgs__msg__BodyForceRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_msgs__msg__BodyForceRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUV_MSGS__MSG__DETAIL__BODY_FORCE_REQUEST__STRUCT_H_
