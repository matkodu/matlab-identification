// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:action/IdentifyModel.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__IDENTIFY_MODEL__STRUCT_H_
#define LABUST_MSGS__ACTION__DETAIL__IDENTIFY_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'X'.
enum
{
  labust_msgs__action__IdentifyModel_Goal__X = 1l
};

/// Constant 'Y'.
enum
{
  labust_msgs__action__IdentifyModel_Goal__Y = 2l
};

/// Constant 'Z'.
enum
{
  labust_msgs__action__IdentifyModel_Goal__Z = 4l
};

/// Constant 'K'.
enum
{
  labust_msgs__action__IdentifyModel_Goal__K = 8l
};

/// Constant 'M'.
enum
{
  labust_msgs__action__IdentifyModel_Goal__M = 16l
};

/// Constant 'N'.
enum
{
  labust_msgs__action__IdentifyModel_Goal__N = 32l
};

/// Constant 'MODEL_TF'.
enum
{
  labust_msgs__action__IdentifyModel_Goal__MODEL_TF = 0l
};

// Struct defined in action/IdentifyModel in the package labust_msgs.
typedef struct labust_msgs__action__IdentifyModel_Goal
{
  int32_t dof;
} labust_msgs__action__IdentifyModel_Goal;

// Struct for a sequence of labust_msgs__action__IdentifyModel_Goal.
typedef struct labust_msgs__action__IdentifyModel_Goal__Sequence
{
  labust_msgs__action__IdentifyModel_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__IdentifyModel_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ident_models'
#include "labust_msgs/msg/detail/ident_model__struct.h"

// Struct defined in action/IdentifyModel in the package labust_msgs.
typedef struct labust_msgs__action__IdentifyModel_Result
{
  labust_msgs__msg__IdentModel__Sequence ident_models;
} labust_msgs__action__IdentifyModel_Result;

// Struct for a sequence of labust_msgs__action__IdentifyModel_Result.
typedef struct labust_msgs__action__IdentifyModel_Result__Sequence
{
  labust_msgs__action__IdentifyModel_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__IdentifyModel_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'additional_data'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/IdentifyModel in the package labust_msgs.
typedef struct labust_msgs__action__IdentifyModel_Feedback
{
  int32_t dof;
  float progress;
  float error;
  rosidl_runtime_c__String additional_data;
} labust_msgs__action__IdentifyModel_Feedback;

// Struct for a sequence of labust_msgs__action__IdentifyModel_Feedback.
typedef struct labust_msgs__action__IdentifyModel_Feedback__Sequence
{
  labust_msgs__action__IdentifyModel_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__IdentifyModel_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "labust_msgs/action/detail/identify_model__struct.h"

// Struct defined in action/IdentifyModel in the package labust_msgs.
typedef struct labust_msgs__action__IdentifyModel_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__IdentifyModel_Goal goal;
} labust_msgs__action__IdentifyModel_SendGoal_Request;

// Struct for a sequence of labust_msgs__action__IdentifyModel_SendGoal_Request.
typedef struct labust_msgs__action__IdentifyModel_SendGoal_Request__Sequence
{
  labust_msgs__action__IdentifyModel_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__IdentifyModel_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/IdentifyModel in the package labust_msgs.
typedef struct labust_msgs__action__IdentifyModel_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} labust_msgs__action__IdentifyModel_SendGoal_Response;

// Struct for a sequence of labust_msgs__action__IdentifyModel_SendGoal_Response.
typedef struct labust_msgs__action__IdentifyModel_SendGoal_Response__Sequence
{
  labust_msgs__action__IdentifyModel_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__IdentifyModel_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/IdentifyModel in the package labust_msgs.
typedef struct labust_msgs__action__IdentifyModel_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} labust_msgs__action__IdentifyModel_GetResult_Request;

// Struct for a sequence of labust_msgs__action__IdentifyModel_GetResult_Request.
typedef struct labust_msgs__action__IdentifyModel_GetResult_Request__Sequence
{
  labust_msgs__action__IdentifyModel_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__IdentifyModel_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.h"

// Struct defined in action/IdentifyModel in the package labust_msgs.
typedef struct labust_msgs__action__IdentifyModel_GetResult_Response
{
  int8_t status;
  labust_msgs__action__IdentifyModel_Result result;
} labust_msgs__action__IdentifyModel_GetResult_Response;

// Struct for a sequence of labust_msgs__action__IdentifyModel_GetResult_Response.
typedef struct labust_msgs__action__IdentifyModel_GetResult_Response__Sequence
{
  labust_msgs__action__IdentifyModel_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__IdentifyModel_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.h"

// Struct defined in action/IdentifyModel in the package labust_msgs.
typedef struct labust_msgs__action__IdentifyModel_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  labust_msgs__action__IdentifyModel_Feedback feedback;
} labust_msgs__action__IdentifyModel_FeedbackMessage;

// Struct for a sequence of labust_msgs__action__IdentifyModel_FeedbackMessage.
typedef struct labust_msgs__action__IdentifyModel_FeedbackMessage__Sequence
{
  labust_msgs__action__IdentifyModel_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__action__IdentifyModel_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__ACTION__DETAIL__IDENTIFY_MODEL__STRUCT_H_
