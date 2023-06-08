// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/RosbagControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__ROSBAG_CONTROL__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__ROSBAG_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
// Member 'bag_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/RosbagControl in the package labust_msgs.
typedef struct labust_msgs__srv__RosbagControl_Request
{
  rosidl_runtime_c__String action;
  rosidl_runtime_c__String bag_name;
} labust_msgs__srv__RosbagControl_Request;

// Struct for a sequence of labust_msgs__srv__RosbagControl_Request.
typedef struct labust_msgs__srv__RosbagControl_Request__Sequence
{
  labust_msgs__srv__RosbagControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RosbagControl_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RosbagControl in the package labust_msgs.
typedef struct labust_msgs__srv__RosbagControl_Response
{
  bool result;
} labust_msgs__srv__RosbagControl_Response;

// Struct for a sequence of labust_msgs__srv__RosbagControl_Response.
typedef struct labust_msgs__srv__RosbagControl_Response__Sequence
{
  labust_msgs__srv__RosbagControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RosbagControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__ROSBAG_CONTROL__STRUCT_H_
