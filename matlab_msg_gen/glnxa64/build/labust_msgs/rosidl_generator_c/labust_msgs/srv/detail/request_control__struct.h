// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/RequestControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DONTCARE'.
enum
{
  labust_msgs__srv__RequestControl_Request__DONTCARE = 0l
};

/// Constant 'DISABLEAXIS'.
enum
{
  labust_msgs__srv__RequestControl_Request__DISABLEAXIS = 1l
};

/// Constant 'MANUALAXIS'.
enum
{
  labust_msgs__srv__RequestControl_Request__MANUALAXIS = 2l
};

/// Constant 'CONTROLAXIS'.
enum
{
  labust_msgs__srv__RequestControl_Request__CONTROLAXIS = 3l
};

/// Constant 'IDENTAXIS'.
enum
{
  labust_msgs__srv__RequestControl_Request__IDENTAXIS = 4l
};

/// Constant 'DIRECTAXIS'.
enum
{
  labust_msgs__srv__RequestControl_Request__DIRECTAXIS = 5l
};

/// Constant 'U'.
enum
{
  labust_msgs__srv__RequestControl_Request__U = 0l
};

/// Constant 'V'.
enum
{
  labust_msgs__srv__RequestControl_Request__V = 1l
};

/// Constant 'W'.
enum
{
  labust_msgs__srv__RequestControl_Request__W = 2l
};

/// Constant 'P'.
enum
{
  labust_msgs__srv__RequestControl_Request__P = 3l
};

/// Constant 'Q'.
enum
{
  labust_msgs__srv__RequestControl_Request__Q = 4l
};

/// Constant 'R'.
enum
{
  labust_msgs__srv__RequestControl_Request__R = 5l
};

/// Constant 'X'.
enum
{
  labust_msgs__srv__RequestControl_Request__X = 6l
};

/// Constant 'Y'.
enum
{
  labust_msgs__srv__RequestControl_Request__Y = 7l
};

/// Constant 'Z'.
enum
{
  labust_msgs__srv__RequestControl_Request__Z = 8l
};

/// Constant 'K'.
enum
{
  labust_msgs__srv__RequestControl_Request__K = 9l
};

/// Constant 'M'.
enum
{
  labust_msgs__srv__RequestControl_Request__M = 10l
};

/// Constant 'N'.
enum
{
  labust_msgs__srv__RequestControl_Request__N = 11l
};

// Include directives for member types
// Member 'identity'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RequestControl in the package labust_msgs.
typedef struct labust_msgs__srv__RequestControl_Request
{
  rosidl_runtime_c__String identity;
  int32_t nu_desired_mode[6];
  int32_t tau_desired_mode[6];
} labust_msgs__srv__RequestControl_Request;

// Struct for a sequence of labust_msgs__srv__RequestControl_Request.
typedef struct labust_msgs__srv__RequestControl_Request__Sequence
{
  labust_msgs__srv__RequestControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RequestControl_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'identity_token'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/RequestControl in the package labust_msgs.
typedef struct labust_msgs__srv__RequestControl_Response
{
  bool success;
  rosidl_runtime_c__String identity_token;
  rosidl_runtime_c__String message;
} labust_msgs__srv__RequestControl_Response;

// Struct for a sequence of labust_msgs__srv__RequestControl_Response.
typedef struct labust_msgs__srv__RequestControl_Response__Sequence
{
  labust_msgs__srv__RequestControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RequestControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__STRUCT_H_
