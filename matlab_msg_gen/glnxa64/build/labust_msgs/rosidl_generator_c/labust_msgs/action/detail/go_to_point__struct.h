// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:action/GoToPoint.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__GO_TO_POINT__STRUCT_H_
#define LABUST_MSGS__ACTION__DETAIL__GO_TO_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GO2POINT_UA'.
enum
{
  labust_msgs__action__GoToPoint_Goal__GO2POINT_UA = 0
};

/// Constant 'GO2POINT_FA'.
enum
{
  labust_msgs__action__GoToPoint_Goal__GO2POINT_FA = 1
};

/// Constant 'GO2POINT_FA_HDG'.
enum
{
  labust_msgs__action__GoToPoint_Goal__GO2POINT_FA_HDG = 2
};

/// Constant 'CONSTANT'.
enum
{
  labust_msgs__action__GoToPoint_Goal__CONSTANT = 0
};

/// Constant 'HEADING_TOPIC'.
enum
{
  labust_msgs__action__GoToPoint_Goal__HEADING_TOPIC = 1
};

/// Constant 'SPEED_TOPIC'.
enum
{
  labust_msgs__action__GoToPoint_Goal__SPEED_TOPIC = 2
};

/// Constant 'ALL_TOPIC'.
enum
{
  labust_msgs__action__GoToPoint_Goal__ALL_TOPIC = 3
};

// Include directives for member types
// Member 't1'
// Member 't2'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"
// Member 'heading_topic'
// Member 'speed_topic'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/GoToPoint in the package labust_msgs.
typedef struct labust_msgs__action__GoToPoint_Goal
{
  uint8_t subtype;
  uint8_t ref_type;
  geometry_msgs__msg__PointStamped t1;
  geometry_msgs__msg__PointStamped t2;
  float heading;
  float speed;
  float victory_radius;
  rosidl_runtime_c__String heading_topic;
  rosidl_runtime_c__String speed_topic;
  bool axis_enable[6];
  bool altitude;
} labust_msgs__action__GoToPoint_Goal;

// Struct for a sequence of labust_msgs__action__GoToPoint_Goal.
typedef struct labust_msgs__action__GoToPoint_Goal__Sequence
{
  labust_msgs__action__GoToPoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__GoToPoint_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'position'
// already included above
// #include "geometry_msgs/msg/detail/point_stamped__struct.h"

// Struct defined in action/GoToPoint in the package labust_msgs.
typedef struct labust_msgs__action__GoToPoint_Result
{
  geometry_msgs__msg__PointStamped position;
  float distance;
  float bearing;
} labust_msgs__action__GoToPoint_Result;

// Struct for a sequence of labust_msgs__action__GoToPoint_Result.
typedef struct labust_msgs__action__GoToPoint_Result__Sequence
{
  labust_msgs__action__GoToPoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__GoToPoint_Result__Sequence;


// Constants defined in the message

// Struct defined in action/GoToPoint in the package labust_msgs.
typedef struct labust_msgs__action__GoToPoint_Feedback
{
  float distance;
  float bearing;
} labust_msgs__action__GoToPoint_Feedback;

// Struct for a sequence of labust_msgs__action__GoToPoint_Feedback.
typedef struct labust_msgs__action__GoToPoint_Feedback__Sequence
{
  labust_msgs__action__GoToPoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__GoToPoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "labust_msgs/action/detail/go_to_point__struct.h"

// Struct defined in action/GoToPoint in the package labust_msgs.
typedef struct labust_msgs__action__GoToPoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__GoToPoint_Goal goal;
} labust_msgs__action__GoToPoint_SendGoal_Request;

// Struct for a sequence of labust_msgs__action__GoToPoint_SendGoal_Request.
typedef struct labust_msgs__action__GoToPoint_SendGoal_Request__Sequence
{
  labust_msgs__action__GoToPoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__GoToPoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/GoToPoint in the package labust_msgs.
typedef struct labust_msgs__action__GoToPoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} labust_msgs__action__GoToPoint_SendGoal_Response;

// Struct for a sequence of labust_msgs__action__GoToPoint_SendGoal_Response.
typedef struct labust_msgs__action__GoToPoint_SendGoal_Response__Sequence
{
  labust_msgs__action__GoToPoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__GoToPoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/GoToPoint in the package labust_msgs.
typedef struct labust_msgs__action__GoToPoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} labust_msgs__action__GoToPoint_GetResult_Request;

// Struct for a sequence of labust_msgs__action__GoToPoint_GetResult_Request.
typedef struct labust_msgs__action__GoToPoint_GetResult_Request__Sequence
{
  labust_msgs__action__GoToPoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__GoToPoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.h"

// Struct defined in action/GoToPoint in the package labust_msgs.
typedef struct labust_msgs__action__GoToPoint_GetResult_Response
{
  int8_t status;
  labust_msgs__action__GoToPoint_Result result;
} labust_msgs__action__GoToPoint_GetResult_Response;

// Struct for a sequence of labust_msgs__action__GoToPoint_GetResult_Response.
typedef struct labust_msgs__action__GoToPoint_GetResult_Response__Sequence
{
  labust_msgs__action__GoToPoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__GoToPoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.h"

// Struct defined in action/GoToPoint in the package labust_msgs.
typedef struct labust_msgs__action__GoToPoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__GoToPoint_Feedback feedback;
} labust_msgs__action__GoToPoint_FeedbackMessage;

// Struct for a sequence of labust_msgs__action__GoToPoint_FeedbackMessage.
typedef struct labust_msgs__action__GoToPoint_FeedbackMessage__Sequence
{
  labust_msgs__action__GoToPoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__GoToPoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__ACTION__DETAIL__GO_TO_POINT__STRUCT_H_
