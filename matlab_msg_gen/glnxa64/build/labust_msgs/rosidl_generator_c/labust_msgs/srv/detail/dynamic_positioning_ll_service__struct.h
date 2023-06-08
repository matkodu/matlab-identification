// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/DynamicPositioningLLService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_LL_SERVICE__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_LL_SERVICE__STRUCT_H_

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
#include "geographic_msgs/msg/detail/geo_point__struct.h"

// Struct defined in srv/DynamicPositioningLLService in the package labust_msgs.
typedef struct labust_msgs__srv__DynamicPositioningLLService_Request
{
  geographic_msgs__msg__GeoPoint point;
  double heading;
} labust_msgs__srv__DynamicPositioningLLService_Request;

// Struct for a sequence of labust_msgs__srv__DynamicPositioningLLService_Request.
typedef struct labust_msgs__srv__DynamicPositioningLLService_Request__Sequence
{
  labust_msgs__srv__DynamicPositioningLLService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__DynamicPositioningLLService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/DynamicPositioningLLService in the package labust_msgs.
typedef struct labust_msgs__srv__DynamicPositioningLLService_Response
{
  bool status;
} labust_msgs__srv__DynamicPositioningLLService_Response;

// Struct for a sequence of labust_msgs__srv__DynamicPositioningLLService_Response.
typedef struct labust_msgs__srv__DynamicPositioningLLService_Response__Sequence
{
  labust_msgs__srv__DynamicPositioningLLService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__DynamicPositioningLLService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_LL_SERVICE__STRUCT_H_
