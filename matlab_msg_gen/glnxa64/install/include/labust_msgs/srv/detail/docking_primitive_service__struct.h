// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/DockingPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__DOCKING_PRIMITIVE_SERVICE__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__DOCKING_PRIMITIVE_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/DockingPrimitiveService in the package labust_msgs.
typedef struct labust_msgs__srv__DockingPrimitiveService_Request
{
  bool docking_action;
  uint8_t docking_slot;
  float search_yaw_rate;
  float max_yaw_rate;
  float max_surge_speed;
  float surge_stdev;
} labust_msgs__srv__DockingPrimitiveService_Request;

// Struct for a sequence of labust_msgs__srv__DockingPrimitiveService_Request.
typedef struct labust_msgs__srv__DockingPrimitiveService_Request__Sequence
{
  labust_msgs__srv__DockingPrimitiveService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__DockingPrimitiveService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/DockingPrimitiveService in the package labust_msgs.
typedef struct labust_msgs__srv__DockingPrimitiveService_Response
{
  bool status;
} labust_msgs__srv__DockingPrimitiveService_Response;

// Struct for a sequence of labust_msgs__srv__DockingPrimitiveService_Response.
typedef struct labust_msgs__srv__DockingPrimitiveService_Response__Sequence
{
  labust_msgs__srv__DockingPrimitiveService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__DockingPrimitiveService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__DOCKING_PRIMITIVE_SERVICE__STRUCT_H_
