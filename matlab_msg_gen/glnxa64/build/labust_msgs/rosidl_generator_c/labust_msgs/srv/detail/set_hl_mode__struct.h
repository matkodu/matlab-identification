// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/SetHLMode.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOP'.
enum
{
  labust_msgs__srv__SetHLMode_Request__STOP = 0l
};

/// Constant 'MANUAL'.
enum
{
  labust_msgs__srv__SetHLMode_Request__MANUAL = 1l
};

/// Constant 'GOTOPOINT'.
enum
{
  labust_msgs__srv__SetHLMode_Request__GOTOPOINT = 2l
};

/// Constant 'STATIONKEEPING'.
enum
{
  labust_msgs__srv__SetHLMode_Request__STATIONKEEPING = 3l
};

/// Constant 'CIRCLEPOINT'.
enum
{
  labust_msgs__srv__SetHLMode_Request__CIRCLEPOINT = 4l
};

/// Constant 'HEADINGCONTROL'.
enum
{
  labust_msgs__srv__SetHLMode_Request__HEADINGCONTROL = 5l
};

/// Constant 'HEADINGSURGE'.
enum
{
  labust_msgs__srv__SetHLMode_Request__HEADINGSURGE = 6l
};

// Include directives for member types
// Member 'ref_point'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"

// Struct defined in srv/SetHLMode in the package labust_msgs.
typedef struct labust_msgs__srv__SetHLMode_Request
{
  int32_t mode;
  geometry_msgs__msg__PointStamped ref_point;
  float radius;
  float surge;
  float yaw;
} labust_msgs__srv__SetHLMode_Request;

// Struct for a sequence of labust_msgs__srv__SetHLMode_Request.
typedef struct labust_msgs__srv__SetHLMode_Request__Sequence
{
  labust_msgs__srv__SetHLMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__SetHLMode_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetHLMode in the package labust_msgs.
typedef struct labust_msgs__srv__SetHLMode_Response
{
  uint8_t structure_needs_at_least_one_member;
} labust_msgs__srv__SetHLMode_Response;

// Struct for a sequence of labust_msgs__srv__SetHLMode_Response.
typedef struct labust_msgs__srv__SetHLMode_Response__Sequence
{
  labust_msgs__srv__SetHLMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__SetHLMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__STRUCT_H_
