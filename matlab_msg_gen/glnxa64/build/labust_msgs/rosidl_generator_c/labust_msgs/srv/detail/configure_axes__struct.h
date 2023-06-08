// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/ConfigureAxes.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'U'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__U = 0l
};

/// Constant 'V'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__V = 1l
};

/// Constant 'W'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__W = 2l
};

/// Constant 'P'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__P = 3l
};

/// Constant 'Q'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__Q = 4l
};

/// Constant 'R'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__R = 5l
};

/// Constant 'X'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__X = 0l
};

/// Constant 'Y'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__Y = 1l
};

/// Constant 'Z'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__Z = 2l
};

/// Constant 'K'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__K = 3l
};

/// Constant 'M'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__M = 4l
};

/// Constant 'N'.
enum
{
  labust_msgs__srv__ConfigureAxes_Request__N = 5l
};

// Include directives for member types
// Member 'disable_axis'
#include "labust_msgs/msg/detail/bool6_axis__struct.h"

// Struct defined in srv/ConfigureAxes in the package labust_msgs.
typedef struct labust_msgs__srv__ConfigureAxes_Request
{
  labust_msgs__msg__Bool6Axis disable_axis;
} labust_msgs__srv__ConfigureAxes_Request;

// Struct for a sequence of labust_msgs__srv__ConfigureAxes_Request.
typedef struct labust_msgs__srv__ConfigureAxes_Request__Sequence
{
  labust_msgs__srv__ConfigureAxes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__ConfigureAxes_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ConfigureAxes in the package labust_msgs.
typedef struct labust_msgs__srv__ConfigureAxes_Response
{
  uint8_t structure_needs_at_least_one_member;
} labust_msgs__srv__ConfigureAxes_Response;

// Struct for a sequence of labust_msgs__srv__ConfigureAxes_Response.
typedef struct labust_msgs__srv__ConfigureAxes_Response__Sequence
{
  labust_msgs__srv__ConfigureAxes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__ConfigureAxes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__STRUCT_H_
