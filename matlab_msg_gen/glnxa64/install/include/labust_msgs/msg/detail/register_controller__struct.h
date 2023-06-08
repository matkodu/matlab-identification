// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/RegisterController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__REGISTER_CONTROLLER__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__REGISTER_CONTROLLER__STRUCT_H_

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
  labust_msgs__msg__RegisterController__SURGE = 0
};

/// Constant 'SWAY'.
enum
{
  labust_msgs__msg__RegisterController__SWAY = 1
};

/// Constant 'HEAVE'.
enum
{
  labust_msgs__msg__RegisterController__HEAVE = 2
};

/// Constant 'ROLL'.
enum
{
  labust_msgs__msg__RegisterController__ROLL = 3
};

/// Constant 'PITCH'.
enum
{
  labust_msgs__msg__RegisterController__PITCH = 4
};

/// Constant 'YAW'.
enum
{
  labust_msgs__msg__RegisterController__YAW = 5
};

/// Constant 'X'.
enum
{
  labust_msgs__msg__RegisterController__X = 0
};

/// Constant 'Y'.
enum
{
  labust_msgs__msg__RegisterController__Y = 1
};

/// Constant 'Z'.
enum
{
  labust_msgs__msg__RegisterController__Z = 2
};

/// Constant 'K'.
enum
{
  labust_msgs__msg__RegisterController__K = 3
};

/// Constant 'M'.
enum
{
  labust_msgs__msg__RegisterController__M = 4
};

/// Constant 'N'.
enum
{
  labust_msgs__msg__RegisterController__N = 5
};

// Include directives for member types
// Member 'parent'
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RegisterController in the package labust_msgs.
typedef struct labust_msgs__msg__RegisterController
{
  rosidl_runtime_c__String parent;
  rosidl_runtime_c__String name;
  int8_t used_tau[6];
  int8_t used_nu[6];
} labust_msgs__msg__RegisterController;

// Struct for a sequence of labust_msgs__msg__RegisterController.
typedef struct labust_msgs__msg__RegisterController__Sequence
{
  labust_msgs__msg__RegisterController * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__RegisterController__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__REGISTER_CONTROLLER__STRUCT_H_
