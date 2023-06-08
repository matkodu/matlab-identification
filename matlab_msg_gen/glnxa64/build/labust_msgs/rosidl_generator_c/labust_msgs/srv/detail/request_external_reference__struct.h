// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/RequestExternalReference.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REQUEST_EXTERNAL_REFERENCE__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__REQUEST_EXTERNAL_REFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IGNORE'.
enum
{
  labust_msgs__srv__RequestExternalReference_Request__IGNORE = 0l
};

/// Constant 'TAU_REF'.
enum
{
  labust_msgs__srv__RequestExternalReference_Request__TAU_REF = 1l
};

/// Constant 'NU_REF'.
enum
{
  labust_msgs__srv__RequestExternalReference_Request__NU_REF = 2l
};

/// Constant 'ETA_REF'.
enum
{
  labust_msgs__srv__RequestExternalReference_Request__ETA_REF = 3l
};

// Include directives for member types
// Member 'identity'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RequestExternalReference in the package labust_msgs.
typedef struct labust_msgs__srv__RequestExternalReference_Request
{
  int32_t control_modes[6];
  rosidl_runtime_c__String identity;
} labust_msgs__srv__RequestExternalReference_Request;

// Struct for a sequence of labust_msgs__srv__RequestExternalReference_Request.
typedef struct labust_msgs__srv__RequestExternalReference_Request__Sequence
{
  labust_msgs__srv__RequestExternalReference_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RequestExternalReference_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'identity_token'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/RequestExternalReference in the package labust_msgs.
typedef struct labust_msgs__srv__RequestExternalReference_Response
{
  bool success;
  rosidl_runtime_c__String identity_token;
  rosidl_runtime_c__String message;
} labust_msgs__srv__RequestExternalReference_Response;

// Struct for a sequence of labust_msgs__srv__RequestExternalReference_Response.
typedef struct labust_msgs__srv__RequestExternalReference_Response__Sequence
{
  labust_msgs__srv__RequestExternalReference_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RequestExternalReference_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__REQUEST_EXTERNAL_REFERENCE__STRUCT_H_
