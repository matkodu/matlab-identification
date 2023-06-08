// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/RegisterControllerV3.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parent'
// Member 'name'
// Member 'used_other'
// Member 'used_resources'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RegisterControllerV3 in the package labust_msgs.
typedef struct labust_msgs__srv__RegisterControllerV3_Request
{
  rosidl_runtime_c__String parent;
  rosidl_runtime_c__String name;
  bool has_manual;
  int8_t used_tau[6];
  rosidl_runtime_c__String__Sequence used_other;
  rosidl_runtime_c__String__Sequence used_resources;
} labust_msgs__srv__RegisterControllerV3_Request;

// Struct for a sequence of labust_msgs__srv__RegisterControllerV3_Request.
typedef struct labust_msgs__srv__RegisterControllerV3_Request__Sequence
{
  labust_msgs__srv__RegisterControllerV3_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RegisterControllerV3_Request__Sequence;


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  labust_msgs__srv__RegisterControllerV3_Response__SUCCESS = 0
};

/// Constant 'MISSING_DEPENDENCY'.
enum
{
  labust_msgs__srv__RegisterControllerV3_Response__MISSING_DEPENDENCY = 1
};

/// Constant 'ALREADY_REGISTERED'.
enum
{
  labust_msgs__srv__RegisterControllerV3_Response__ALREADY_REGISTERED = 2
};

// Struct defined in srv/RegisterControllerV3 in the package labust_msgs.
typedef struct labust_msgs__srv__RegisterControllerV3_Response
{
  uint8_t reply;
} labust_msgs__srv__RegisterControllerV3_Response;

// Struct for a sequence of labust_msgs__srv__RegisterControllerV3_Response.
typedef struct labust_msgs__srv__RegisterControllerV3_Response__Sequence
{
  labust_msgs__srv__RegisterControllerV3_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RegisterControllerV3_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__STRUCT_H_
