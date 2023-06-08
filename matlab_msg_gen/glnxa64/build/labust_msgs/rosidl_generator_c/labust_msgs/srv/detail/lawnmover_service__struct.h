// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/LawnmoverService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_position'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in srv/LawnmoverService in the package labust_msgs.
typedef struct labust_msgs__srv__LawnmoverService_Request
{
  float width;
  float length;
  geometry_msgs__msg__Point start_position;
  float speed;
  float victory_radius;
  float horizontal_step;
  float bearing;
} labust_msgs__srv__LawnmoverService_Request;

// Struct for a sequence of labust_msgs__srv__LawnmoverService_Request.
typedef struct labust_msgs__srv__LawnmoverService_Request__Sequence
{
  labust_msgs__srv__LawnmoverService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__LawnmoverService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/LawnmoverService in the package labust_msgs.
typedef struct labust_msgs__srv__LawnmoverService_Response
{
  bool status;
} labust_msgs__srv__LawnmoverService_Response;

// Struct for a sequence of labust_msgs__srv__LawnmoverService_Response.
typedef struct labust_msgs__srv__LawnmoverService_Response__Sequence
{
  labust_msgs__srv__LawnmoverService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__LawnmoverService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__STRUCT_H_
