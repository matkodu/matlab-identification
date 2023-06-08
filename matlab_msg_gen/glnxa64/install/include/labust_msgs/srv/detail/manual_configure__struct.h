// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/ManualConfigure.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISABLED'.
enum
{
  labust_msgs__srv__ManualConfigure_Request__DISABLED = -1l
};

/// Constant 'X'.
enum
{
  labust_msgs__srv__ManualConfigure_Request__X = 0l
};

/// Constant 'Y'.
enum
{
  labust_msgs__srv__ManualConfigure_Request__Y = 1l
};

/// Constant 'Z'.
enum
{
  labust_msgs__srv__ManualConfigure_Request__Z = 2l
};

/// Constant 'K'.
enum
{
  labust_msgs__srv__ManualConfigure_Request__K = 3l
};

/// Constant 'M'.
enum
{
  labust_msgs__srv__ManualConfigure_Request__M = 4l
};

/// Constant 'N'.
enum
{
  labust_msgs__srv__ManualConfigure_Request__N = 5l
};

// Include directives for member types
// Member 'configuration'
#include "labust_msgs/msg/detail/manual_configuration__struct.h"

// Struct defined in srv/ManualConfigure in the package labust_msgs.
typedef struct labust_msgs__srv__ManualConfigure_Request
{
  labust_msgs__msg__ManualConfiguration configuration;
} labust_msgs__srv__ManualConfigure_Request;

// Struct for a sequence of labust_msgs__srv__ManualConfigure_Request.
typedef struct labust_msgs__srv__ManualConfigure_Request__Sequence
{
  labust_msgs__srv__ManualConfigure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__ManualConfigure_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_configuration'
// already included above
// #include "labust_msgs/msg/detail/manual_configuration__struct.h"

// Struct defined in srv/ManualConfigure in the package labust_msgs.
typedef struct labust_msgs__srv__ManualConfigure_Response
{
  labust_msgs__msg__ManualConfiguration current_configuration;
} labust_msgs__srv__ManualConfigure_Response;

// Struct for a sequence of labust_msgs__srv__ManualConfigure_Response.
typedef struct labust_msgs__srv__ManualConfigure_Response__Sequence
{
  labust_msgs__srv__ManualConfigure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__ManualConfigure_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__STRUCT_H_
