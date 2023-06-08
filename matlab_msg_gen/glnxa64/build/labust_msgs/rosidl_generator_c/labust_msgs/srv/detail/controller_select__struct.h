// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/ControllerSelect.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__CONTROLLER_SELECT__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__CONTROLLER_SELECT__STRUCT_H_

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
  labust_msgs__srv__ControllerSelect_Request__DISABLED = 0
};

/// Constant 'MANUAL'.
enum
{
  labust_msgs__srv__ControllerSelect_Request__MANUAL = 1
};

/// Constant 'EXTERNAL'.
enum
{
  labust_msgs__srv__ControllerSelect_Request__EXTERNAL = 2
};

/// Constant 'TRACKING'.
enum
{
  labust_msgs__srv__ControllerSelect_Request__TRACKING = 3
};

/// Constant 'ACTIVATE'.
enum
{
  labust_msgs__srv__ControllerSelect_Request__ACTIVATE = 2
};

/// Constant 'DEACTIVATE'.
enum
{
  labust_msgs__srv__ControllerSelect_Request__DEACTIVATE = 3
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'state'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/ControllerSelect in the package labust_msgs.
typedef struct labust_msgs__srv__ControllerSelect_Request
{
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__int32__Sequence state;
} labust_msgs__srv__ControllerSelect_Request;

// Struct for a sequence of labust_msgs__srv__ControllerSelect_Request.
typedef struct labust_msgs__srv__ControllerSelect_Request__Sequence
{
  labust_msgs__srv__ControllerSelect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__ControllerSelect_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'name'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'success'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/ControllerSelect in the package labust_msgs.
typedef struct labust_msgs__srv__ControllerSelect_Response
{
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__boolean__Sequence success;
} labust_msgs__srv__ControllerSelect_Response;

// Struct for a sequence of labust_msgs__srv__ControllerSelect_Response.
typedef struct labust_msgs__srv__ControllerSelect_Response__Sequence
{
  labust_msgs__srv__ControllerSelect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__ControllerSelect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__CONTROLLER_SELECT__STRUCT_H_
