// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/BodyVelocityReq.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__BODY_VELOCITY_REQ__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__BODY_VELOCITY_REQ__STRUCT_H_

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
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'disable_axis'
#include "labust_msgs/msg/detail/bool6_axis__struct.h"

// Struct defined in msg/BodyVelocityReq in the package labust_msgs.
typedef struct labust_msgs__msg__BodyVelocityReq
{
  std_msgs__msg__Header header;
  labust_msgs__msg__GoalDescriptor goal;
  geometry_msgs__msg__Twist twist;
  labust_msgs__msg__Bool6Axis disable_axis;
} labust_msgs__msg__BodyVelocityReq;

// Struct for a sequence of labust_msgs__msg__BodyVelocityReq.
typedef struct labust_msgs__msg__BodyVelocityReq__Sequence
{
  labust_msgs__msg__BodyVelocityReq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__BodyVelocityReq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__BODY_VELOCITY_REQ__STRUCT_H_
