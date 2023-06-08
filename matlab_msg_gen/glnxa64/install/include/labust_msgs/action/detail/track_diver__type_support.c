// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:action/TrackDiver.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/action/detail/track_diver__functions.h"
#include "labust_msgs/action/detail/track_diver__struct.h"


// Include directives for member types
// Member `guidance_target`
#include "geometry_msgs/msg/point.h"
// Member `guidance_target`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `guidance_topic`
// Member `radius_topic`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__TrackDiver_Goal__init(message_memory);
}

void TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_fini_function(void * message_memory)
{
  labust_msgs__action__TrackDiver_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_message_member_array[9] = {
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Goal, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Goal, vertical_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guidance_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Goal, guidance_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guidance_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Goal, guidance_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrapping_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Goal, wrapping_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "streamline_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Goal, streamline_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fov_guidance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Goal, fov_guidance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guidance_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Goal, guidance_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Goal, radius_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_message_members = {
  "labust_msgs__action",  // message namespace
  "TrackDiver_Goal",  // message name
  9,  // number of fields
  sizeof(labust_msgs__action__TrackDiver_Goal),
  TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_message_member_array,  // message members
  TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_message_type_support_handle = {
  0,
  &TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_Goal)() {
  TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_message_type_support_handle.typesupport_identifier) {
    TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackDiver_Goal__rosidl_typesupport_introspection_c__TrackDiver_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__functions.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__TrackDiver_Result__init(message_memory);
}

void TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_fini_function(void * message_memory)
{
  labust_msgs__action__TrackDiver_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_message_members = {
  "labust_msgs__action",  // message namespace
  "TrackDiver_Result",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__TrackDiver_Result),
  TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_message_member_array,  // message members
  TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_message_type_support_handle = {
  0,
  &TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_Result)() {
  if (!TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_message_type_support_handle.typesupport_identifier) {
    TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackDiver_Result__rosidl_typesupport_introspection_c__TrackDiver_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__functions.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.h"


// Include directives for member types
// Member `ned_tracking_error`
#include "geometry_msgs/msg/vector3.h"
// Member `ned_tracking_error`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__TrackDiver_Feedback__init(message_memory);
}

void TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_fini_function(void * message_memory)
{
  labust_msgs__action__TrackDiver_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_message_member_array[6] = {
  {
    "mu_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Feedback, mu_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gamma_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Feedback, gamma_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operational_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Feedback, operational_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delta_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Feedback, delta_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zeta_r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Feedback, zeta_r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ned_tracking_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_Feedback, ned_tracking_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_message_members = {
  "labust_msgs__action",  // message namespace
  "TrackDiver_Feedback",  // message name
  6,  // number of fields
  sizeof(labust_msgs__action__TrackDiver_Feedback),
  TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_message_member_array,  // message members
  TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_message_type_support_handle = {
  0,
  &TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_Feedback)() {
  TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_message_type_support_handle.typesupport_identifier) {
    TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackDiver_Feedback__rosidl_typesupport_introspection_c__TrackDiver_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__functions.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "labust_msgs/action/track_diver.h"
// Member `goal`
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__TrackDiver_SendGoal_Request__init(message_memory);
}

void TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_fini_function(void * message_memory)
{
  labust_msgs__action__TrackDiver_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "TrackDiver_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__TrackDiver_SendGoal_Request),
  TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_member_array,  // message members
  TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_type_support_handle = {
  0,
  &TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_SendGoal_Request)() {
  TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_Goal)();
  if (!TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackDiver_SendGoal_Request__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__functions.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__TrackDiver_SendGoal_Response__init(message_memory);
}

void TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_fini_function(void * message_memory)
{
  labust_msgs__action__TrackDiver_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "TrackDiver_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__TrackDiver_SendGoal_Response),
  TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_message_member_array,  // message members
  TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_message_type_support_handle = {
  0,
  &TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_SendGoal_Response)() {
  TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackDiver_SendGoal_Response__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_service_members = {
  "labust_msgs__action",  // service namespace
  "TrackDiver_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_SendGoal)() {
  if (!labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_SendGoal_Response)()->data;
  }

  return &labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__functions.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__TrackDiver_GetResult_Request__init(message_memory);
}

void TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_fini_function(void * message_memory)
{
  labust_msgs__action__TrackDiver_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "TrackDiver_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__TrackDiver_GetResult_Request),
  TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_message_member_array,  // message members
  TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_message_type_support_handle = {
  0,
  &TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_GetResult_Request)() {
  TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackDiver_GetResult_Request__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__functions.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "labust_msgs/action/track_diver.h"
// Member `result`
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__TrackDiver_GetResult_Response__init(message_memory);
}

void TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_fini_function(void * message_memory)
{
  labust_msgs__action__TrackDiver_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "TrackDiver_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__TrackDiver_GetResult_Response),
  TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_message_member_array,  // message members
  TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_message_type_support_handle = {
  0,
  &TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_GetResult_Response)() {
  TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_Result)();
  if (!TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackDiver_GetResult_Response__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_GetResult_service_members = {
  "labust_msgs__action",  // service namespace
  "TrackDiver_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_GetResult_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_GetResult)() {
  if (!labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_GetResult_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_GetResult_Response)()->data;
  }

  return &labust_msgs__action__detail__track_diver__rosidl_typesupport_introspection_c__TrackDiver_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__functions.h"
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/track_diver.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/detail/track_diver__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__TrackDiver_FeedbackMessage__init(message_memory);
}

void TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_fini_function(void * message_memory)
{
  labust_msgs__action__TrackDiver_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__TrackDiver_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_message_members = {
  "labust_msgs__action",  // message namespace
  "TrackDiver_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__TrackDiver_FeedbackMessage),
  TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_message_member_array,  // message members
  TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_message_type_support_handle = {
  0,
  &TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_FeedbackMessage)() {
  TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, TrackDiver_Feedback)();
  if (!TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrackDiver_FeedbackMessage__rosidl_typesupport_introspection_c__TrackDiver_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
