// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/Go2depthService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__GO2DEPTH_SERVICE__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__GO2DEPTH_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Go2depthService in the package labust_msgs.
typedef struct labust_msgs__srv__Go2depthService_Request
{
  double depth;
} labust_msgs__srv__Go2depthService_Request;

// Struct for a sequence of labust_msgs__srv__Go2depthService_Request.
typedef struct labust_msgs__srv__Go2depthService_Request__Sequence
{
  labust_msgs__srv__Go2depthService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__Go2depthService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Go2depthService in the package labust_msgs.
typedef struct labust_msgs__srv__Go2depthService_Response
{
  bool status;
} labust_msgs__srv__Go2depthService_Response;

// Struct for a sequence of labust_msgs__srv__Go2depthService_Response.
typedef struct labust_msgs__srv__Go2depthService_Response__Sequence
{
  labust_msgs__srv__Go2depthService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__Go2depthService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__GO2DEPTH_SERVICE__STRUCT_H_
