// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/RegisterController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER__STRUCT_H_

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
  labust_msgs__srv__RegisterController_Request__SURGE = 0l
};

/// Constant 'SWAY'.
enum
{
  labust_msgs__srv__RegisterController_Request__SWAY = 1l
};

/// Constant 'HEAVE'.
enum
{
  labust_msgs__srv__RegisterController_Request__HEAVE = 2l
};

/// Constant 'ROLL'.
enum
{
  labust_msgs__srv__RegisterController_Request__ROLL = 3l
};

/// Constant 'PITCH'.
enum
{
  labust_msgs__srv__RegisterController_Request__PITCH = 4l
};

/// Constant 'YAW'.
enum
{
  labust_msgs__srv__RegisterController_Request__YAW = 5l
};

// Include directives for member types
// Member 'name'
// Member 'srv_name'
// Member 'used_cnt'
// Member 'used_derived'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RegisterController in the package labust_msgs.
typedef struct labust_msgs__srv__RegisterController_Request
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String srv_name;
  int32_t used_dofs[6];
  rosidl_runtime_c__String__Sequence used_cnt;
  int32_t used_meas[12];
  rosidl_runtime_c__String__Sequence used_derived;
} labust_msgs__srv__RegisterController_Request;

// Struct for a sequence of labust_msgs__srv__RegisterController_Request.
typedef struct labust_msgs__srv__RegisterController_Request__Sequence
{
  labust_msgs__srv__RegisterController_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RegisterController_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'unmet_cnt'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/RegisterController in the package labust_msgs.
typedef struct labust_msgs__srv__RegisterController_Response
{
  bool accepted;
  rosidl_runtime_c__String__Sequence unmet_cnt;
} labust_msgs__srv__RegisterController_Response;

// Struct for a sequence of labust_msgs__srv__RegisterController_Response.
typedef struct labust_msgs__srv__RegisterController_Response__Sequence
{
  labust_msgs__srv__RegisterController_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RegisterController_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER__STRUCT_H_
