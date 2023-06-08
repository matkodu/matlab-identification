// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/FSPathInfo.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__STRUCT_H_

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
// Member 'dr_p'
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "labust_msgs/msg/detail/rpy__struct.h"

// Struct defined in msg/FSPathInfo in the package labust_msgs.
typedef struct labust_msgs__msg__FSPathInfo
{
  std_msgs__msg__Header header;
  double delta_r;
  double k;
  double xi_r;
  double dxi_r;
  double pi;
  double pi_tilda;
  geometry_msgs__msg__Point dr_p;
  geometry_msgs__msg__Point position;
  labust_msgs__msg__RPY orientation;
  double curvature;
  double torsion;
} labust_msgs__msg__FSPathInfo;

// Struct for a sequence of labust_msgs__msg__FSPathInfo.
typedef struct labust_msgs__msg__FSPathInfo__Sequence
{
  labust_msgs__msg__FSPathInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__FSPathInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__STRUCT_H_
