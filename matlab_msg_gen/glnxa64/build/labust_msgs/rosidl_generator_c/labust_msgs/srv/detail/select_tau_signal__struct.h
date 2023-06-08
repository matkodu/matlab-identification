// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/SelectTauSignal.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__SELECT_TAU_SIGNAL__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__SELECT_TAU_SIGNAL__STRUCT_H_

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
  labust_msgs__srv__SelectTauSignal_Request__DONTCARE = 0l
};

/// Constant 'DISABLEAXIS'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__DISABLEAXIS = 1l
};

/// Constant 'MANUALAXIS'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__MANUALAXIS = 2l
};

/// Constant 'CONTROLAXIS'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__CONTROLAXIS = 3l
};

/// Constant 'IDENTAXIS'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__IDENTAXIS = 4l
};

/// Constant 'DIRECTAXIS'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__DIRECTAXIS = 5l
};

/// Constant 'U'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__U = 0l
};

/// Constant 'V'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__V = 1l
};

/// Constant 'W'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__W = 2l
};

/// Constant 'P'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__P = 3l
};

/// Constant 'Q'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__Q = 4l
};

/// Constant 'R'.
enum
{
  labust_msgs__srv__SelectTauSignal_Request__R = 5l
};

// Include directives for member types
// Member 'identity_token'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SelectTauSignal in the package labust_msgs.
typedef struct labust_msgs__srv__SelectTauSignal_Request
{
  rosidl_runtime_c__String identity_token;
  int32_t desired_mode[6];
} labust_msgs__srv__SelectTauSignal_Request;

// Struct for a sequence of labust_msgs__srv__SelectTauSignal_Request.
typedef struct labust_msgs__srv__SelectTauSignal_Request__Sequence
{
  labust_msgs__srv__SelectTauSignal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__SelectTauSignal_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SelectTauSignal in the package labust_msgs.
typedef struct labust_msgs__srv__SelectTauSignal_Response
{
  uint8_t structure_needs_at_least_one_member;
} labust_msgs__srv__SelectTauSignal_Response;

// Struct for a sequence of labust_msgs__srv__SelectTauSignal_Response.
typedef struct labust_msgs__srv__SelectTauSignal_Response__Sequence
{
  labust_msgs__srv__SelectTauSignal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__SelectTauSignal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__SELECT_TAU_SIGNAL__STRUCT_H_
