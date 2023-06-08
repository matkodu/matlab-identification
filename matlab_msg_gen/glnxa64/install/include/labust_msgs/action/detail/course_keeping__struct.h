// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:action/CourseKeeping.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__COURSE_KEEPING__STRUCT_H_
#define LABUST_MSGS__ACTION__DETAIL__COURSE_KEEPING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COURSE_KEEPING_UA'.
enum
{
  labust_msgs__action__CourseKeeping_Goal__COURSE_KEEPING_UA = 0
};

/// Constant 'COURSE_KEEPING_FA'.
enum
{
  labust_msgs__action__CourseKeeping_Goal__COURSE_KEEPING_FA = 1
};

/// Constant 'COURSE_KEEPING_FA_HDG'.
enum
{
  labust_msgs__action__CourseKeeping_Goal__COURSE_KEEPING_FA_HDG = 2
};

/// Constant 'CONSTANT'.
enum
{
  labust_msgs__action__CourseKeeping_Goal__CONSTANT = 0
};

/// Constant 'HEADING_TOPIC'.
enum
{
  labust_msgs__action__CourseKeeping_Goal__HEADING_TOPIC = 1
};

/// Constant 'SPEED_TOPIC'.
enum
{
  labust_msgs__action__CourseKeeping_Goal__SPEED_TOPIC = 2
};

/// Constant 'ALL_TOPIC'.
enum
{
  labust_msgs__action__CourseKeeping_Goal__ALL_TOPIC = 3
};

// Include directives for member types
// Member 'topics'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/CourseKeeping in the package labust_msgs.
typedef struct labust_msgs__action__CourseKeeping_Goal
{
  uint8_t subtype;
  uint8_t ref_type;
  float course;
  float speed;
  float yaw;
  rosidl_runtime_c__String__Sequence topics;
} labust_msgs__action__CourseKeeping_Goal;

// Struct for a sequence of labust_msgs__action__CourseKeeping_Goal.
typedef struct labust_msgs__action__CourseKeeping_Goal__Sequence
{
  labust_msgs__action__CourseKeeping_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__CourseKeeping_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/CourseKeeping in the package labust_msgs.
typedef struct labust_msgs__action__CourseKeeping_Result
{
  int32_t success;
} labust_msgs__action__CourseKeeping_Result;

// Struct for a sequence of labust_msgs__action__CourseKeeping_Result.
typedef struct labust_msgs__action__CourseKeeping_Result__Sequence
{
  labust_msgs__action__CourseKeeping_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__CourseKeeping_Result__Sequence;


// Constants defined in the message

// Struct defined in action/CourseKeeping in the package labust_msgs.
typedef struct labust_msgs__action__CourseKeeping_Feedback
{
  int32_t feedback;
} labust_msgs__action__CourseKeeping_Feedback;

// Struct for a sequence of labust_msgs__action__CourseKeeping_Feedback.
typedef struct labust_msgs__action__CourseKeeping_Feedback__Sequence
{
  labust_msgs__action__CourseKeeping_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__CourseKeeping_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "labust_msgs/action/detail/course_keeping__struct.h"

// Struct defined in action/CourseKeeping in the package labust_msgs.
typedef struct labust_msgs__action__CourseKeeping_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__CourseKeeping_Goal goal;
} labust_msgs__action__CourseKeeping_SendGoal_Request;

// Struct for a sequence of labust_msgs__action__CourseKeeping_SendGoal_Request.
typedef struct labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence
{
  labust_msgs__action__CourseKeeping_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/CourseKeeping in the package labust_msgs.
typedef struct labust_msgs__action__CourseKeeping_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} labust_msgs__action__CourseKeeping_SendGoal_Response;

// Struct for a sequence of labust_msgs__action__CourseKeeping_SendGoal_Response.
typedef struct labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence
{
  labust_msgs__action__CourseKeeping_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/CourseKeeping in the package labust_msgs.
typedef struct labust_msgs__action__CourseKeeping_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} labust_msgs__action__CourseKeeping_GetResult_Request;

// Struct for a sequence of labust_msgs__action__CourseKeeping_GetResult_Request.
typedef struct labust_msgs__action__CourseKeeping_GetResult_Request__Sequence
{
  labust_msgs__action__CourseKeeping_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__CourseKeeping_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.h"

// Struct defined in action/CourseKeeping in the package labust_msgs.
typedef struct labust_msgs__action__CourseKeeping_GetResult_Response
{
  int8_t status;
  labust_msgs__action__CourseKeeping_Result result;
} labust_msgs__action__CourseKeeping_GetResult_Response;

// Struct for a sequence of labust_msgs__action__CourseKeeping_GetResult_Response.
typedef struct labust_msgs__action__CourseKeeping_GetResult_Response__Sequence
{
  labust_msgs__action__CourseKeeping_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__CourseKeeping_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.h"

// Struct defined in action/CourseKeeping in the package labust_msgs.
typedef struct labust_msgs__action__CourseKeeping_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__CourseKeeping_Feedback feedback;
} labust_msgs__action__CourseKeeping_FeedbackMessage;

// Struct for a sequence of labust_msgs__action__CourseKeeping_FeedbackMessage.
typedef struct labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence
{
  labust_msgs__action__CourseKeeping_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__ACTION__DETAIL__COURSE_KEEPING__STRUCT_H_
