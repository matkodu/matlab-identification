// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/DynamicPositioningPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_PRIMITIVE_SERVICE__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_PRIMITIVE_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_topic'
// Member 'heading_topic'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/DynamicPositioningPrimitiveService in the package labust_msgs.
typedef struct labust_msgs__srv__DynamicPositioningPrimitiveService_Request
{
  double north;
  double east;
  double depth;
  double heading;
  bool north_enable;
  bool east_enable;
  bool depth_enable;
  bool heading_enable;
  bool altitude_enable;
  bool target_topic_enable;
  bool track_heading_enable;
  bool point_to_target;
  rosidl_runtime_c__String target_topic;
  rosidl_runtime_c__String heading_topic;
} labust_msgs__srv__DynamicPositioningPrimitiveService_Request;

// Struct for a sequence of labust_msgs__srv__DynamicPositioningPrimitiveService_Request.
typedef struct labust_msgs__srv__DynamicPositioningPrimitiveService_Request__Sequence
{
  labust_msgs__srv__DynamicPositioningPrimitiveService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__DynamicPositioningPrimitiveService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/DynamicPositioningPrimitiveService in the package labust_msgs.
typedef struct labust_msgs__srv__DynamicPositioningPrimitiveService_Response
{
  bool status;
} labust_msgs__srv__DynamicPositioningPrimitiveService_Response;

// Struct for a sequence of labust_msgs__srv__DynamicPositioningPrimitiveService_Response.
typedef struct labust_msgs__srv__DynamicPositioningPrimitiveService_Response__Sequence
{
  labust_msgs__srv__DynamicPositioningPrimitiveService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__DynamicPositioningPrimitiveService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_PRIMITIVE_SERVICE__STRUCT_H_
