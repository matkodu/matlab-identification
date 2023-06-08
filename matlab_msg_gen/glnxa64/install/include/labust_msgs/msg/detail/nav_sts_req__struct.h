// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/NavStsReq.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__STRUCT_H_

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
// Member 'global_position'
// Member 'origin'
#include "geographic_msgs/msg/detail/geo_point__struct.h"
// Member 'goal'
#include "labust_msgs/msg/detail/goal_descriptor__struct.h"
// Member 'position'
#include "auv_msgs/msg/detail/ned__struct.h"
// Member 'body_velocity'
// Member 'gbody_velocity'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
// Member 'orientation_rate'
// Member 'orientation_tolerance'
#include "labust_msgs/msg/detail/rpy__struct.h"
// Member 'position_tolerance'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'disable_axis'
#include "labust_msgs/msg/detail/bool6_axis__struct.h"

// Struct defined in msg/NavStsReq in the package labust_msgs.
typedef struct labust_msgs__msg__NavStsReq
{
  std_msgs__msg__Header header;
  geographic_msgs__msg__GeoPoint global_position;
  geographic_msgs__msg__GeoPoint origin;
  labust_msgs__msg__GoalDescriptor goal;
  auv_msgs__msg__NED position;
  float altitude;
  geometry_msgs__msg__Point body_velocity;
  geometry_msgs__msg__Point gbody_velocity;
  labust_msgs__msg__RPY orientation;
  labust_msgs__msg__RPY orientation_rate;
  geometry_msgs__msg__Vector3 position_tolerance;
  labust_msgs__msg__RPY orientation_tolerance;
  labust_msgs__msg__Bool6Axis disable_axis;
} labust_msgs__msg__NavStsReq;

// Struct for a sequence of labust_msgs__msg__NavStsReq.
typedef struct labust_msgs__msg__NavStsReq__Sequence
{
  labust_msgs__msg__NavStsReq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__NavStsReq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__STRUCT_H_
