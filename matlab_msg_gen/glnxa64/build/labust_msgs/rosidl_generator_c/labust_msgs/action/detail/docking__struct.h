// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:action/Docking.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__DOCKING__STRUCT_H_
#define LABUST_MSGS__ACTION__DETAIL__DOCKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Docking in the package labust_msgs.
typedef struct labust_msgs__action__Docking_Goal
{
  bool docking_action;
  uint8_t docking_slot;
  float search_yaw_rate;
  float max_yaw_rate;
  float max_surge_speed;
  float surge_stdev;
} labust_msgs__action__Docking_Goal;

// Struct for a sequence of labust_msgs__action__Docking_Goal.
typedef struct labust_msgs__action__Docking_Goal__Sequence
{
  labust_msgs__action__Docking_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__Docking_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Docking in the package labust_msgs.
typedef struct labust_msgs__action__Docking_Result
{
  bool success;
} labust_msgs__action__Docking_Result;

// Struct for a sequence of labust_msgs__action__Docking_Result.
typedef struct labust_msgs__action__Docking_Result__Sequence
{
  labust_msgs__action__Docking_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__Docking_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Docking in the package labust_msgs.
typedef struct labust_msgs__action__Docking_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} labust_msgs__action__Docking_Feedback;

// Struct for a sequence of labust_msgs__action__Docking_Feedback.
typedef struct labust_msgs__action__Docking_Feedback__Sequence
{
  labust_msgs__action__Docking_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__Docking_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "labust_msgs/action/detail/docking__struct.h"

// Struct defined in action/Docking in the package labust_msgs.
typedef struct labust_msgs__action__Docking_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__Docking_Goal goal;
} labust_msgs__action__Docking_SendGoal_Request;

// Struct for a sequence of labust_msgs__action__Docking_SendGoal_Request.
typedef struct labust_msgs__action__Docking_SendGoal_Request__Sequence
{
  labust_msgs__action__Docking_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__Docking_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Docking in the package labust_msgs.
typedef struct labust_msgs__action__Docking_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} labust_msgs__action__Docking_SendGoal_Response;

// Struct for a sequence of labust_msgs__action__Docking_SendGoal_Response.
typedef struct labust_msgs__action__Docking_SendGoal_Response__Sequence
{
  labust_msgs__action__Docking_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__Docking_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Docking in the package labust_msgs.
typedef struct labust_msgs__action__Docking_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} labust_msgs__action__Docking_GetResult_Request;

// Struct for a sequence of labust_msgs__action__Docking_GetResult_Request.
typedef struct labust_msgs__action__Docking_GetResult_Request__Sequence
{
  labust_msgs__action__Docking_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__Docking_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/docking__struct.h"

// Struct defined in action/Docking in the package labust_msgs.
typedef struct labust_msgs__action__Docking_GetResult_Response
{
  int8_t status;
  labust_msgs__action__Docking_Result result;
} labust_msgs__action__Docking_GetResult_Response;

// Struct for a sequence of labust_msgs__action__Docking_GetResult_Response.
typedef struct labust_msgs__action__Docking_GetResult_Response__Sequence
{
  labust_msgs__action__Docking_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__Docking_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/docking__struct.h"

// Struct defined in action/Docking in the package labust_msgs.
typedef struct labust_msgs__action__Docking_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__Docking_Feedback feedback;
} labust_msgs__action__Docking_FeedbackMessage;

// Struct for a sequence of labust_msgs__action__Docking_FeedbackMessage.
typedef struct labust_msgs__action__Docking_FeedbackMessage__Sequence
{
  labust_msgs__action__Docking_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__Docking_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__ACTION__DETAIL__DOCKING__STRUCT_H_
