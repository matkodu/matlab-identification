// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:action/TrackDiver.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__STRUCT_H_
#define LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__STRUCT_H_

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

// Struct defined in action/TrackDiver in the package labust_msgs.
typedef struct labust_msgs__action__TrackDiver_Goal
{
  float radius;
  float vertical_offset;
  geometry_msgs__msg__Point guidance_target;
  bool guidance_enable;
  bool wrapping_enable;
  bool streamline_orientation;
  bool fov_guidance;
  rosidl_runtime_c__String guidance_topic;
  rosidl_runtime_c__String radius_topic;
} labust_msgs__action__TrackDiver_Goal;

// Struct for a sequence of labust_msgs__action__TrackDiver_Goal.
typedef struct labust_msgs__action__TrackDiver_Goal__Sequence
{
  labust_msgs__action__TrackDiver_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__TrackDiver_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/TrackDiver in the package labust_msgs.
typedef struct labust_msgs__action__TrackDiver_Result
{
  bool success;
} labust_msgs__action__TrackDiver_Result;

// Struct for a sequence of labust_msgs__action__TrackDiver_Result.
typedef struct labust_msgs__action__TrackDiver_Result__Sequence
{
  labust_msgs__action__TrackDiver_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__TrackDiver_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ned_tracking_error'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in action/TrackDiver in the package labust_msgs.
typedef struct labust_msgs__action__TrackDiver_Feedback
{
  double mu_r;
  double gamma_r;
  double operational_radius;
  double delta_r;
  double zeta_r;
  geometry_msgs__msg__Vector3 ned_tracking_error;
} labust_msgs__action__TrackDiver_Feedback;

// Struct for a sequence of labust_msgs__action__TrackDiver_Feedback.
typedef struct labust_msgs__action__TrackDiver_Feedback__Sequence
{
  labust_msgs__action__TrackDiver_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__TrackDiver_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "labust_msgs/action/detail/track_diver__struct.h"

// Struct defined in action/TrackDiver in the package labust_msgs.
typedef struct labust_msgs__action__TrackDiver_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__TrackDiver_Goal goal;
} labust_msgs__action__TrackDiver_SendGoal_Request;

// Struct for a sequence of labust_msgs__action__TrackDiver_SendGoal_Request.
typedef struct labust_msgs__action__TrackDiver_SendGoal_Request__Sequence
{
  labust_msgs__action__TrackDiver_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__TrackDiver_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/TrackDiver in the package labust_msgs.
typedef struct labust_msgs__action__TrackDiver_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} labust_msgs__action__TrackDiver_SendGoal_Response;

// Struct for a sequence of labust_msgs__action__TrackDiver_SendGoal_Response.
typedef struct labust_msgs__action__TrackDiver_SendGoal_Response__Sequence
{
  labust_msgs__action__TrackDiver_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__TrackDiver_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/TrackDiver in the package labust_msgs.
typedef struct labust_msgs__action__TrackDiver_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} labust_msgs__action__TrackDiver_GetResult_Request;

// Struct for a sequence of labust_msgs__action__TrackDiver_GetResult_Request.
typedef struct labust_msgs__action__TrackDiver_GetResult_Request__Sequence
{
  labust_msgs__action__TrackDiver_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__TrackDiver_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.h"

// Struct defined in action/TrackDiver in the package labust_msgs.
typedef struct labust_msgs__action__TrackDiver_GetResult_Response
{
  int8_t status;
  labust_msgs__action__TrackDiver_Result result;
} labust_msgs__action__TrackDiver_GetResult_Response;

// Struct for a sequence of labust_msgs__action__TrackDiver_GetResult_Response.
typedef struct labust_msgs__action__TrackDiver_GetResult_Response__Sequence
{
  labust_msgs__action__TrackDiver_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__TrackDiver_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.h"

// Struct defined in action/TrackDiver in the package labust_msgs.
typedef struct labust_msgs__action__TrackDiver_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__TrackDiver_Feedback feedback;
} labust_msgs__action__TrackDiver_FeedbackMessage;

// Struct for a sequence of labust_msgs__action__TrackDiver_FeedbackMessage.
typedef struct labust_msgs__action__TrackDiver_FeedbackMessage__Sequence
{
  labust_msgs__action__TrackDiver_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__TrackDiver_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__STRUCT_H_
