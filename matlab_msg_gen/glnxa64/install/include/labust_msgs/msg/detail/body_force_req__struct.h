// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/BodyForceReq.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__BODY_FORCE_REQ__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__BODY_FORCE_REQ__STRUCT_H_

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
// Member 'goal'
#include "labust_msgs/msg/detail/goal_descriptor__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"
// Member 'disable_axis'
#include "labust_msgs/msg/detail/bool6_axis__struct.h"
// Member 'windup'
#include "labust_msgs/msg/detail/windup6_axis__struct.h"

// Struct defined in msg/BodyForceReq in the package labust_msgs.
typedef struct labust_msgs__msg__BodyForceReq
{
  std_msgs__msg__Header header;
  labust_msgs__msg__GoalDescriptor goal;
  geometry_msgs__msg__Wrench wrench;
  labust_msgs__msg__Bool6Axis disable_axis;
  labust_msgs__msg__Windup6Axis windup;
} labust_msgs__msg__BodyForceReq;

// Struct for a sequence of labust_msgs__msg__BodyForceReq.
typedef struct labust_msgs__msg__BodyForceReq__Sequence
{
  labust_msgs__msg__BodyForceReq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__BodyForceReq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__BODY_FORCE_REQ__STRUCT_H_
