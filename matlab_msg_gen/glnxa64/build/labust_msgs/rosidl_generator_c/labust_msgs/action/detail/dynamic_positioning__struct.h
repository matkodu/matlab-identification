// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:action/DynamicPositioning.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__DYNAMIC_POSITIONING__STRUCT_H_
#define LABUST_MSGS__ACTION__DETAIL__DYNAMIC_POSITIONING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 't1'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"
// Member 'target_topic'
// Member 'heading_topic'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/DynamicPositioning in the package labust_msgs.
typedef struct labust_msgs__action__DynamicPositioning_Goal
{
  geometry_msgs__msg__PointStamped t1;
  float yaw;
  float radius;
  bool axis_enable[6];
  bool altitude;
  bool track_heading_enable;
  bool target_topic_enable;
  rosidl_runtime_c__String target_topic;
  rosidl_runtime_c__String heading_topic;
} labust_msgs__action__DynamicPositioning_Goal;

// Struct for a sequence of labust_msgs__action__DynamicPositioning_Goal.
typedef struct labust_msgs__action__DynamicPositioning_Goal__Sequence
{
  labust_msgs__action__DynamicPositioning_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__DynamicPositioning_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'position'
// already included above
// #include "geometry_msgs/msg/detail/point_stamped__struct.h"

// Struct defined in action/DynamicPositioning in the package labust_msgs.
typedef struct labust_msgs__action__DynamicPositioning_Result
{
  geometry_msgs__msg__PointStamped position;
} labust_msgs__action__DynamicPositioning_Result;

// Struct for a sequence of labust_msgs__action__DynamicPositioning_Result.
typedef struct labust_msgs__action__DynamicPositioning_Result__Sequence
{
  labust_msgs__action__DynamicPositioning_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__DynamicPositioning_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
// already included above
// #include "geometry_msgs/msg/detail/point_stamped__struct.h"

// Struct defined in action/DynamicPositioning in the package labust_msgs.
typedef struct labust_msgs__action__DynamicPositioning_Feedback
{
  geometry_msgs__msg__PointStamped error;
  float distance;
  float bearing;
} labust_msgs__action__DynamicPositioning_Feedback;

// Struct for a sequence of labust_msgs__action__DynamicPositioning_Feedback.
typedef struct labust_msgs__action__DynamicPositioning_Feedback__Sequence
{
  labust_msgs__action__DynamicPositioning_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__DynamicPositioning_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "labust_msgs/action/detail/dynamic_positioning__struct.h"

// Struct defined in action/DynamicPositioning in the package labust_msgs.
typedef struct labust_msgs__action__DynamicPositioning_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__DynamicPositioning_Goal goal;
} labust_msgs__action__DynamicPositioning_SendGoal_Request;

// Struct for a sequence of labust_msgs__action__DynamicPositioning_SendGoal_Request.
typedef struct labust_msgs__action__DynamicPositioning_SendGoal_Request__Sequence
{
  labust_msgs__action__DynamicPositioning_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__DynamicPositioning_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/DynamicPositioning in the package labust_msgs.
typedef struct labust_msgs__action__DynamicPositioning_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} labust_msgs__action__DynamicPositioning_SendGoal_Response;

// Struct for a sequence of labust_msgs__action__DynamicPositioning_SendGoal_Response.
typedef struct labust_msgs__action__DynamicPositioning_SendGoal_Response__Sequence
{
  labust_msgs__action__DynamicPositioning_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__DynamicPositioning_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/DynamicPositioning in the package labust_msgs.
typedef struct labust_msgs__action__DynamicPositioning_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} labust_msgs__action__DynamicPositioning_GetResult_Request;

// Struct for a sequence of labust_msgs__action__DynamicPositioning_GetResult_Request.
typedef struct labust_msgs__action__DynamicPositioning_GetResult_Request__Sequence
{
  labust_msgs__action__DynamicPositioning_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__DynamicPositioning_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.h"

// Struct defined in action/DynamicPositioning in the package labust_msgs.
typedef struct labust_msgs__action__DynamicPositioning_GetResult_Response
{
  int8_t status;
  labust_msgs__action__DynamicPositioning_Result result;
} labust_msgs__action__DynamicPositioning_GetResult_Response;

// Struct for a sequence of labust_msgs__action__DynamicPositioning_GetResult_Response.
typedef struct labust_msgs__action__DynamicPositioning_GetResult_Response__Sequence
{
  labust_msgs__action__DynamicPositioning_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__DynamicPositioning_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.h"

// Struct defined in action/DynamicPositioning in the package labust_msgs.
typedef struct labust_msgs__action__DynamicPositioning_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__DynamicPositioning_Feedback feedback;
} labust_msgs__action__DynamicPositioning_FeedbackMessage;

// Struct for a sequence of labust_msgs__action__DynamicPositioning_FeedbackMessage.
typedef struct labust_msgs__action__DynamicPositioning_FeedbackMessage__Sequence
{
  labust_msgs__action__DynamicPositioning_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__DynamicPositioning_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__ACTION__DETAIL__DYNAMIC_POSITIONING__STRUCT_H_
