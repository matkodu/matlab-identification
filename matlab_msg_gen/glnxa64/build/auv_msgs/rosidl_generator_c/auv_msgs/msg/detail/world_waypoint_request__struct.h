// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auv_msgs:msg/WorldWaypointRequest.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__WORLD_WAYPOINT_REQUEST__STRUCT_H_
#define AUV_MSGS__MSG__DETAIL__WORLD_WAYPOINT_REQUEST__STRUCT_H_

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
#include "auv_msgs/msg/detail/ned__struct.h"
// Member 'orientation'
// Member 'position_tolerance'
// Member 'orientation_tolerance'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'twist_limit'
#include "geometry_msgs/msg/detail/twist__struct.h"

// Struct defined in msg/WorldWaypointRequest in the package auv_msgs.
typedef struct auv_msgs__msg__WorldWaypointRequest
{
  std_msgs__msg__Header header;
  auv_msgs__msg__NED position;
  geometry_msgs__msg__Vector3 orientation;
  bool disable_axis[6];
  geometry_msgs__msg__Vector3 position_tolerance;
  geometry_msgs__msg__Vector3 orientation_tolerance;
  geometry_msgs__msg__Twist twist_limit;
} auv_msgs__msg__WorldWaypointRequest;

// Struct for a sequence of auv_msgs__msg__WorldWaypointRequest.
typedef struct auv_msgs__msg__WorldWaypointRequest__Sequence
{
  auv_msgs__msg__WorldWaypointRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_msgs__msg__WorldWaypointRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUV_MSGS__MSG__DETAIL__WORLD_WAYPOINT_REQUEST__STRUCT_H_
