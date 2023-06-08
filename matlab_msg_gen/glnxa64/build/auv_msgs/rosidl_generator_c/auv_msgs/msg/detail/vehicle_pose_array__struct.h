// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auv_msgs:msg/VehiclePoseArray.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__STRUCT_H_
#define AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__STRUCT_H_

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
// Member 'poses'
#include "auv_msgs/msg/detail/vehicle_pose__struct.h"

// Struct defined in msg/VehiclePoseArray in the package auv_msgs.
typedef struct auv_msgs__msg__VehiclePoseArray
{
  std_msgs__msg__Header header;
  auv_msgs__msg__VehiclePose__Sequence poses;
} auv_msgs__msg__VehiclePoseArray;

// Struct for a sequence of auv_msgs__msg__VehiclePoseArray.
typedef struct auv_msgs__msg__VehiclePoseArray__Sequence
{
  auv_msgs__msg__VehiclePoseArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_msgs__msg__VehiclePoseArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__STRUCT_H_
