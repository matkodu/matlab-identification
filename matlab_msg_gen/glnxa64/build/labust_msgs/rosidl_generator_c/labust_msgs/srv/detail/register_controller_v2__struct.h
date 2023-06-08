// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/RegisterControllerV2.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V2__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V2__STRUCT_H_

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
  labust_msgs__srv__RegisterControllerV2_Request__SURGE = 0
};

/// Constant 'SWAY'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__SWAY = 1
};

/// Constant 'HEAVE'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__HEAVE = 2
};

/// Constant 'ROLL'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__ROLL = 3
};

/// Constant 'PITCH'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__PITCH = 4
};

/// Constant 'YAW'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__YAW = 5
};

/// Constant 'X'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__X = 0
};

/// Constant 'Y'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__Y = 1
};

/// Constant 'Z'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__Z = 2
};

/// Constant 'K'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__K = 3
};

/// Constant 'M'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__M = 4
};

/// Constant 'N'.
enum
{
  labust_msgs__srv__RegisterControllerV2_Request__N = 5
};

// Include directives for member types
// Member 'name'
// Member 'srv_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RegisterControllerV2 in the package labust_msgs.
typedef struct labust_msgs__srv__RegisterControllerV2_Request
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String srv_name;
  int8_t used_tau[6];
  int8_t used_nu[6];
} labust_msgs__srv__RegisterControllerV2_Request;

// Struct for a sequence of labust_msgs__srv__RegisterControllerV2_Request.
typedef struct labust_msgs__srv__RegisterControllerV2_Request__Sequence
{
  labust_msgs__srv__RegisterControllerV2_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RegisterControllerV2_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RegisterControllerV2 in the package labust_msgs.
typedef struct labust_msgs__srv__RegisterControllerV2_Response
{
  uint8_t structure_needs_at_least_one_member;
} labust_msgs__srv__RegisterControllerV2_Response;

// Struct for a sequence of labust_msgs__srv__RegisterControllerV2_Response.
typedef struct labust_msgs__srv__RegisterControllerV2_Response__Sequence
{
  labust_msgs__srv__RegisterControllerV2_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RegisterControllerV2_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V2__STRUCT_H_
