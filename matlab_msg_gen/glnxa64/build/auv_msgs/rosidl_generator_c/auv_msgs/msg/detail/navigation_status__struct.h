// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auv_msgs:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_H_
#define AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_FAULT'.
enum
{
  auv_msgs__msg__NavigationStatus__STATUS_FAULT = 0
};

/// Constant 'STATUS_LOCAL_FRAME_OK'.
enum
{
  auv_msgs__msg__NavigationStatus__STATUS_LOCAL_FRAME_OK = 1
};

/// Constant 'STATUS_GLOBAL_FRAME_OK'.
enum
{
  auv_msgs__msg__NavigationStatus__STATUS_GLOBAL_FRAME_OK = 2
};

/// Constant 'STATUS_POSITION_OK'.
enum
{
  auv_msgs__msg__NavigationStatus__STATUS_POSITION_OK = 3
};

/// Constant 'STATUS_ESTIMATION_ERROR_OK'.
enum
{
  auv_msgs__msg__NavigationStatus__STATUS_ESTIMATION_ERROR_OK = 8
};

/// Constant 'STATUS_WATER_VELOCITY_OK'.
enum
{
  auv_msgs__msg__NavigationStatus__STATUS_WATER_VELOCITY_OK = 16
};

/// Constant 'STATUS_GROUND_VELOCITY_OK'.
enum
{
  auv_msgs__msg__NavigationStatus__STATUS_GROUND_VELOCITY_OK = 32
};

/// Constant 'STATUS_VELOCITY_OK'.
enum
{
  auv_msgs__msg__NavigationStatus__STATUS_VELOCITY_OK = 48
};

/// Constant 'STATUS_ALL_OK'.
enum
{
  auv_msgs__msg__NavigationStatus__STATUS_ALL_OK = 59
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'global_position'
// Member 'origin'
#include "geographic_msgs/msg/detail/geo_point__struct.h"
// Member 'position'
// Member 'position_variance'
#include "auv_msgs/msg/detail/ned__struct.h"
// Member 'body_velocity'
// Member 'seafloor_velocity'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
// Member 'orientation_rate'
// Member 'orientation_variance'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/NavigationStatus in the package auv_msgs.
typedef struct auv_msgs__msg__NavigationStatus
{
  std_msgs__msg__Header header;
  geographic_msgs__msg__GeoPoint global_position;
  geographic_msgs__msg__GeoPoint origin;
  auv_msgs__msg__NED position;
  float altitude;
  geometry_msgs__msg__Point body_velocity;
  geometry_msgs__msg__Point seafloor_velocity;
  geometry_msgs__msg__Vector3 orientation;
  geometry_msgs__msg__Vector3 orientation_rate;
  auv_msgs__msg__NED position_variance;
  geometry_msgs__msg__Vector3 orientation_variance;
  uint8_t status;
} auv_msgs__msg__NavigationStatus;

// Struct for a sequence of auv_msgs__msg__NavigationStatus.
typedef struct auv_msgs__msg__NavigationStatus__Sequence
{
  auv_msgs__msg__NavigationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_msgs__msg__NavigationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_H_
