// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:action/DynamicPositioning.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/action/detail/dynamic_positioning__functions.h"
#include "labust_msgs/action/detail/dynamic_positioning__struct.h"


// Include directives for member types
// Member `t1`
#include "geometry_msgs/msg/point_stamped.h"
// Member `t1`
#include "geometry_msgs/msg/detail/point_stamped__rosidl_typesupport_introspection_c.h"
// Member `target_topic`
// Member `heading_topic`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__DynamicPositioning_Goal__init(message_memory);
}

void DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_fini_function(void * message_memory)
{
  labust_msgs__action__DynamicPositioning_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_message_member_array[9] = {
  {
    "t1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Goal, t1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Goal, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Goal, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "axis_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Goal, axis_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Goal, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_heading_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Goal, track_heading_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_topic_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Goal, target_topic_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Goal, target_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Goal, heading_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_message_members = {
  "labust_msgs__action",  // message namespace
  "DynamicPositioning_Goal",  // message name
  9,  // number of fields
  sizeof(labust_msgs__action__DynamicPositioning_Goal),
  DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_message_member_array,  // message members
  DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_message_type_support_handle = {
  0,
  &DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_Goal)() {
  DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  if (!DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_message_type_support_handle.typesupport_identifier) {
    DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicPositioning_Goal__rosidl_typesupport_introspection_c__DynamicPositioning_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__functions.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.h"


// Include directives for member types
// Member `position`
// already included above
// #include "geometry_msgs/msg/point_stamped.h"
// Member `position`
// already included above
// #include "geometry_msgs/msg/detail/point_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__DynamicPositioning_Result__init(message_memory);
}

void DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_fini_function(void * message_memory)
{
  labust_msgs__action__DynamicPositioning_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_message_member_array[1] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Result, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_message_members = {
  "labust_msgs__action",  // message namespace
  "DynamicPositioning_Result",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__DynamicPositioning_Result),
  DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_message_member_array,  // message members
  DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_message_type_support_handle = {
  0,
  &DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_Result)() {
  DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  if (!DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_message_type_support_handle.typesupport_identifier) {
    DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicPositioning_Result__rosidl_typesupport_introspection_c__DynamicPositioning_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__functions.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.h"


// Include directives for member types
// Member `error`
// already included above
// #include "geometry_msgs/msg/point_stamped.h"
// Member `error`
// already included above
// #include "geometry_msgs/msg/detail/point_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__DynamicPositioning_Feedback__init(message_memory);
}

void DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_fini_function(void * message_memory)
{
  labust_msgs__action__DynamicPositioning_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_message_member_array[3] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Feedback, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Feedback, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bearing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_Feedback, bearing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_message_members = {
  "labust_msgs__action",  // message namespace
  "DynamicPositioning_Feedback",  // message name
  3,  // number of fields
  sizeof(labust_msgs__action__DynamicPositioning_Feedback),
  DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_message_member_array,  // message members
  DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_message_type_support_handle = {
  0,
  &DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_Feedback)() {
  DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  if (!DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_message_type_support_handle.typesupport_identifier) {
    DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicPositioning_Feedback__rosidl_typesupport_introspection_c__DynamicPositioning_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__functions.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "labust_msgs/action/dynamic_positioning.h"
// Member `goal`
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__DynamicPositioning_SendGoal_Request__init(message_memory);
}

void DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_fini_function(void * message_memory)
{
  labust_msgs__action__DynamicPositioning_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(labust_msgs__action__DynamicPositioning_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "DynamicPositioning_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__DynamicPositioning_SendGoal_Request),
  DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_member_array,  // message members
  DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_type_support_handle = {
  0,
  &DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_SendGoal_Request)() {
  DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_Goal)();
  if (!DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicPositioning_SendGoal_Request__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__functions.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__DynamicPositioning_SendGoal_Response__init(message_memory);
}

void DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_fini_function(void * message_memory)
{
  labust_msgs__action__DynamicPositioning_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(labust_msgs__action__DynamicPositioning_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "DynamicPositioning_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__DynamicPositioning_SendGoal_Response),
  DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_message_member_array,  // message members
  DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_message_type_support_handle = {
  0,
  &DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_SendGoal_Response)() {
  DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicPositioning_SendGoal_Response__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_service_members = {
  "labust_msgs__action",  // service namespace
  "DynamicPositioning_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_SendGoal)() {
  if (!labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_SendGoal_Response)()->data;
  }

  return &labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__functions.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.h"


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

void DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__DynamicPositioning_GetResult_Request__init(message_memory);
}

void DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_fini_function(void * message_memory)
{
  labust_msgs__action__DynamicPositioning_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "DynamicPositioning_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__DynamicPositioning_GetResult_Request),
  DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_message_member_array,  // message members
  DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_message_type_support_handle = {
  0,
  &DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_GetResult_Request)() {
  DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicPositioning_GetResult_Request__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__functions.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "labust_msgs/action/dynamic_positioning.h"
// Member `result`
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__DynamicPositioning_GetResult_Response__init(message_memory);
}

void DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_fini_function(void * message_memory)
{
  labust_msgs__action__DynamicPositioning_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(labust_msgs__action__DynamicPositioning_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "DynamicPositioning_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__DynamicPositioning_GetResult_Response),
  DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_message_member_array,  // message members
  DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_message_type_support_handle = {
  0,
  &DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_GetResult_Response)() {
  DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_Result)();
  if (!DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicPositioning_GetResult_Response__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_service_members = {
  "labust_msgs__action",  // service namespace
  "DynamicPositioning_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_GetResult)() {
  if (!labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_GetResult_Response)()->data;
  }

  return &labust_msgs__action__detail__dynamic_positioning__rosidl_typesupport_introspection_c__DynamicPositioning_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__functions.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/dynamic_positioning.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__DynamicPositioning_FeedbackMessage__init(message_memory);
}

void DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_fini_function(void * message_memory)
{
  labust_msgs__action__DynamicPositioning_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__DynamicPositioning_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(labust_msgs__action__DynamicPositioning_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_message_members = {
  "labust_msgs__action",  // message namespace
  "DynamicPositioning_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__DynamicPositioning_FeedbackMessage),
  DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_message_member_array,  // message members
  DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_message_type_support_handle = {
  0,
  &DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_FeedbackMessage)() {
  DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, DynamicPositioning_Feedback)();
  if (!DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicPositioning_FeedbackMessage__rosidl_typesupport_introspection_c__DynamicPositioning_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
