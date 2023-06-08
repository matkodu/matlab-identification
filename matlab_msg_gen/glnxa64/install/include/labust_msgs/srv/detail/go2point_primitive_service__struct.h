// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/Go2pointPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__GO2POINT_PRIMITIVE_SERVICE__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__GO2POINT_PRIMITIVE_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'heading_topic'
// Member 'speed_topic'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Go2pointPrimitiveService in the package labust_msgs.
typedef struct labust_msgs__srv__Go2pointPrimitiveService_Request
{
  bool fully_actuated_enable;
  geometry_msgs__msg__Point point;
  float heading;
  float speed;
  float victory_radius;
  bool north_enable;
  bool east_enable;
  bool depth_enable;
  bool heading_enable;
  bool altitude_enable;
  rosidl_runtime_c__String heading_topic;
  rosidl_runtime_c__String speed_topic;
} labust_msgs__srv__Go2pointPrimitiveService_Request;

// Struct for a sequence of labust_msgs__srv__Go2pointPrimitiveService_Request.
typedef struct labust_msgs__srv__Go2pointPrimitiveService_Request__Sequence
{
  labust_msgs__srv__Go2pointPrimitiveService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__Go2pointPrimitiveService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Go2pointPrimitiveService in the package labust_msgs.
typedef struct labust_msgs__srv__Go2pointPrimitiveService_Response
{
  bool status;
} labust_msgs__srv__Go2pointPrimitiveService_Response;

// Struct for a sequence of labust_msgs__srv__Go2pointPrimitiveService_Response.
typedef struct labust_msgs__srv__Go2pointPrimitiveService_Response__Sequence
{
  labust_msgs__srv__Go2pointPrimitiveService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__Go2pointPrimitiveService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__GO2POINT_PRIMITIVE_SERVICE__STRUCT_H_
