// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/ManualSelect.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__MANUAL_SELECT__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__MANUAL_SELECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'X'.
enum
{
  labust_msgs__srv__ManualSelect_Request__X = 0l
};

/// Constant 'Y'.
enum
{
  labust_msgs__srv__ManualSelect_Request__Y = 1l
};

/// Constant 'Z'.
enum
{
  labust_msgs__srv__ManualSelect_Request__Z = 2l
};

/// Constant 'K'.
enum
{
  labust_msgs__srv__ManualSelect_Request__K = 3l
};

/// Constant 'M'.
enum
{
  labust_msgs__srv__ManualSelect_Request__M = 4l
};

/// Constant 'N'.
enum
{
  labust_msgs__srv__ManualSelect_Request__N = 5l
};

/// Constant 'DISABLED'.
enum
{
  labust_msgs__srv__ManualSelect_Request__DISABLED = 0l
};

/// Constant 'EFFORT'.
enum
{
  labust_msgs__srv__ManualSelect_Request__EFFORT = 1l
};

/// Constant 'SPEED'.
enum
{
  labust_msgs__srv__ManualSelect_Request__SPEED = 2l
};

/// Constant 'POSITION'.
enum
{
  labust_msgs__srv__ManualSelect_Request__POSITION = 3l
};

// Struct defined in srv/ManualSelect in the package labust_msgs.
typedef struct labust_msgs__srv__ManualSelect_Request
{
  int32_t use_generator[6];
} labust_msgs__srv__ManualSelect_Request;

// Struct for a sequence of labust_msgs__srv__ManualSelect_Request.
typedef struct labust_msgs__srv__ManualSelect_Request__Sequence
{
  labust_msgs__srv__ManualSelect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__ManualSelect_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ManualSelect in the package labust_msgs.
typedef struct labust_msgs__srv__ManualSelect_Response
{
  uint8_t structure_needs_at_least_one_member;
} labust_msgs__srv__ManualSelect_Response;

// Struct for a sequence of labust_msgs__srv__ManualSelect_Response.
typedef struct labust_msgs__srv__ManualSelect_Response__Sequence
{
  labust_msgs__srv__ManualSelect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__ManualSelect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__MANUAL_SELECT__STRUCT_H_
