// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/PointerPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__POINTER_PRIMITIVE_SERVICE__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__POINTER_PRIMITIVE_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'guidance_target'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'guidance_topic'
// Member 'radius_topic'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/PointerPrimitiveService in the package labust_msgs.
typedef struct labust_msgs__srv__PointerPrimitiveService_Request
{
  float radius;
  float vertical_offset;
  geometry_msgs__msg__Point guidance_target;
  bool guidance_enable;
  bool wrapping_enable;
  bool fov_guidance;
  bool streamline_orientation;
  rosidl_runtime_c__String guidance_topic;
  rosidl_runtime_c__String radius_topic;
} labust_msgs__srv__PointerPrimitiveService_Request;

// Struct for a sequence of labust_msgs__srv__PointerPrimitiveService_Request.
typedef struct labust_msgs__srv__PointerPrimitiveService_Request__Sequence
{
  labust_msgs__srv__PointerPrimitiveService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__PointerPrimitiveService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/PointerPrimitiveService in the package labust_msgs.
typedef struct labust_msgs__srv__PointerPrimitiveService_Response
{
  bool status;
} labust_msgs__srv__PointerPrimitiveService_Response;

// Struct for a sequence of labust_msgs__srv__PointerPrimitiveService_Response.
typedef struct labust_msgs__srv__PointerPrimitiveService_Response__Sequence
{
  labust_msgs__srv__PointerPrimitiveService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__PointerPrimitiveService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__POINTER_PRIMITIVE_SERVICE__STRUCT_H_
