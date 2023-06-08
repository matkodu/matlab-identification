// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/EnableControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__ENABLE_CONTROL__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__ENABLE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'identity_token'
// Member 'control_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/EnableControl in the package labust_msgs.
typedef struct labust_msgs__srv__EnableControl_Request
{
  bool enable;
  rosidl_runtime_c__String identity_token;
  rosidl_runtime_c__String control_name;
} labust_msgs__srv__EnableControl_Request;

// Struct for a sequence of labust_msgs__srv__EnableControl_Request.
typedef struct labust_msgs__srv__EnableControl_Request__Sequence
{
  labust_msgs__srv__EnableControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__EnableControl_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/EnableControl in the package labust_msgs.
typedef struct labust_msgs__srv__EnableControl_Response
{
  uint8_t structure_needs_at_least_one_member;
} labust_msgs__srv__EnableControl_Response;

// Struct for a sequence of labust_msgs__srv__EnableControl_Response.
typedef struct labust_msgs__srv__EnableControl_Response__Sequence
{
  labust_msgs__srv__EnableControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__EnableControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__ENABLE_CONTROL__STRUCT_H_
