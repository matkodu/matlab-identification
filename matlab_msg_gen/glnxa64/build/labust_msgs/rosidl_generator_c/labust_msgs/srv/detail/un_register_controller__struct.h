// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/UnRegisterController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SINGLE'.
enum
{
  labust_msgs__srv__UnRegisterController_Request__SINGLE = 0
};

/// Constant 'SAME_PARENT'.
enum
{
  labust_msgs__srv__UnRegisterController_Request__SAME_PARENT = 1
};

/// Constant 'ALL'.
enum
{
  labust_msgs__srv__UnRegisterController_Request__ALL = 2
};

// Include directives for member types
// Member 'parent'
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/UnRegisterController in the package labust_msgs.
typedef struct labust_msgs__srv__UnRegisterController_Request
{
  uint8_t type;
  rosidl_runtime_c__String parent;
  rosidl_runtime_c__String name;
} labust_msgs__srv__UnRegisterController_Request;

// Struct for a sequence of labust_msgs__srv__UnRegisterController_Request.
typedef struct labust_msgs__srv__UnRegisterController_Request__Sequence
{
  labust_msgs__srv__UnRegisterController_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__UnRegisterController_Request__Sequence;


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  labust_msgs__srv__UnRegisterController_Response__SUCCESS = 0
};

// Struct defined in srv/UnRegisterController in the package labust_msgs.
typedef struct labust_msgs__srv__UnRegisterController_Response
{
  uint8_t reply;
} labust_msgs__srv__UnRegisterController_Response;

// Struct for a sequence of labust_msgs__srv__UnRegisterController_Response.
typedef struct labust_msgs__srv__UnRegisterController_Response__Sequence
{
  labust_msgs__srv__UnRegisterController_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__UnRegisterController_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__STRUCT_H_
