// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/IdentModel.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__IDENT_MODEL__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__IDENT_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'X'.
enum
{
  labust_msgs__msg__IdentModel__X = 1l
};

/// Constant 'Y'.
enum
{
  labust_msgs__msg__IdentModel__Y = 2l
};

/// Constant 'Z'.
enum
{
  labust_msgs__msg__IdentModel__Z = 4l
};

/// Constant 'K'.
enum
{
  labust_msgs__msg__IdentModel__K = 8l
};

/// Constant 'M'.
enum
{
  labust_msgs__msg__IdentModel__M = 16l
};

/// Constant 'N'.
enum
{
  labust_msgs__msg__IdentModel__N = 32l
};

/// Constant 'MODEL_TF'.
enum
{
  labust_msgs__msg__IdentModel__MODEL_TF = 0l
};

/// Constant 'MODEL_SS'.
enum
{
  labust_msgs__msg__IdentModel__MODEL_SS = 1l
};

// Include directives for member types
// Member 'tf_num'
// Member 'tf_den'
// Member 'ss_mat_a'
// Member 'ss_mat_b'
// Member 'ss_mat_c'
// Member 'ss_mat_d'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/IdentModel in the package labust_msgs.
typedef struct labust_msgs__msg__IdentModel
{
  int32_t model_type;
  int32_t dof;
  rosidl_runtime_c__float__Sequence tf_num;
  rosidl_runtime_c__float__Sequence tf_den;
  int32_t ss_dim_n;
  int32_t ss_dim_m;
  rosidl_runtime_c__float__Sequence ss_mat_a;
  rosidl_runtime_c__float__Sequence ss_mat_b;
  rosidl_runtime_c__float__Sequence ss_mat_c;
  rosidl_runtime_c__float__Sequence ss_mat_d;
} labust_msgs__msg__IdentModel;

// Struct for a sequence of labust_msgs__msg__IdentModel.
typedef struct labust_msgs__msg__IdentModel__Sequence
{
  labust_msgs__msg__IdentModel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__IdentModel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__IDENT_MODEL__STRUCT_H_
