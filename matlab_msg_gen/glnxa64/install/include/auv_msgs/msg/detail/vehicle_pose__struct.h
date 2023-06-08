// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auv_msgs:msg/VehiclePose.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__STRUCT_H_
#define AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "auv_msgs/msg/detail/ned__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/VehiclePose in the package auv_msgs.
typedef struct auv_msgs__msg__VehiclePose
{
  rosidl_runtime_c__String id;
  auv_msgs__msg__NED position;
  geometry_msgs__msg__Vector3 orientation;
} auv_msgs__msg__VehiclePose;

// Struct for a sequence of auv_msgs__msg__VehiclePose.
typedef struct auv_msgs__msg__VehiclePose__Sequence
{
  auv_msgs__msg__VehiclePose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_msgs__msg__VehiclePose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__STRUCT_H_
