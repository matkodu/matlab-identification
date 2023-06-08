// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/PIDParamsUpdate.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__PID_PARAMS_UPDATE__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__PID_PARAMS_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SURGE'.
enum
{
  labust_msgs__msg__PIDParamsUpdate__SURGE = 0l
};

/// Constant 'SWAY'.
enum
{
  labust_msgs__msg__PIDParamsUpdate__SWAY = 1l
};

/// Constant 'HEAVE'.
enum
{
  labust_msgs__msg__PIDParamsUpdate__HEAVE = 2l
};

/// Constant 'ROLL'.
enum
{
  labust_msgs__msg__PIDParamsUpdate__ROLL = 3l
};

/// Constant 'PITCH'.
enum
{
  labust_msgs__msg__PIDParamsUpdate__PITCH = 4l
};

/// Constant 'YAW'.
enum
{
  labust_msgs__msg__PIDParamsUpdate__YAW = 5l
};

// Struct defined in msg/PIDParamsUpdate in the package labust_msgs.
typedef struct labust_msgs__msg__PIDParamsUpdate
{
  float kp;
  float ki;
  float kd;
  float b;
  float ulow;
  float uhigh;
  float ilow;
  float ihigh;
  int32_t dof;
} labust_msgs__msg__PIDParamsUpdate;

// Struct for a sequence of labust_msgs__msg__PIDParamsUpdate.
typedef struct labust_msgs__msg__PIDParamsUpdate__Sequence
{
  labust_msgs__msg__PIDParamsUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__PIDParamsUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__PID_PARAMS_UPDATE__STRUCT_H_
