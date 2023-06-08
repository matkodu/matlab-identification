// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:action/GoToPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/action/detail/go_to_point__functions.h"
#include "labust_msgs/action/detail/go_to_point__struct.h"


// Include directives for member types
// Member `t1`
// Member `t2`
#include "geometry_msgs/msg/point_stamped.h"
// Member `t1`
// Member `t2`
#include "geometry_msgs/msg/detail/point_stamped__rosidl_typesupport_introspection_c.h"
// Member `heading_topic`
// Member `speed_topic`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__GoToPoint_Goal__init(message_memory);
}

void GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_fini_function(void * message_memory)
{
  labust_msgs__action__GoToPoint_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_message_member_array[11] = {
  {
    "subtype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_Goal, subtype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_Goal, ref_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_Goal, t1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_Goal, t2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_Goal, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_Goal, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "victory_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_Goal, victory_radius),  // bytes offset in struct
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
    offsetof(labust_msgs__action__GoToPoint_Goal, heading_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_Goal, speed_topic),  // bytes offset in struct
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
    offsetof(labust_msgs__action__GoToPoint_Goal, axis_enable),  // bytes offset in struct
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
    offsetof(labust_msgs__action__GoToPoint_Goal, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_message_members = {
  "labust_msgs__action",  // message namespace
  "GoToPoint_Goal",  // message name
  11,  // number of fields
  sizeof(labust_msgs__action__GoToPoint_Goal),
  GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_message_member_array,  // message members
  GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_message_type_support_handle = {
  0,
  &GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_Goal)() {
  GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  if (!GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_message_type_support_handle.typesupport_identifier) {
    GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToPoint_Goal__rosidl_typesupport_introspection_c__GoToPoint_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__functions.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.h"


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

void GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__GoToPoint_Result__init(message_memory);
}

void GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_fini_function(void * message_memory)
{
  labust_msgs__action__GoToPoint_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_message_member_array[3] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_Result, position),  // bytes offset in struct
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
    offsetof(labust_msgs__action__GoToPoint_Result, distance),  // bytes offset in struct
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
    offsetof(labust_msgs__action__GoToPoint_Result, bearing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_message_members = {
  "labust_msgs__action",  // message namespace
  "GoToPoint_Result",  // message name
  3,  // number of fields
  sizeof(labust_msgs__action__GoToPoint_Result),
  GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_message_member_array,  // message members
  GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_message_type_support_handle = {
  0,
  &GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_Result)() {
  GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  if (!GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_message_type_support_handle.typesupport_identifier) {
    GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToPoint_Result__rosidl_typesupport_introspection_c__GoToPoint_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__functions.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__GoToPoint_Feedback__init(message_memory);
}

void GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_fini_function(void * message_memory)
{
  labust_msgs__action__GoToPoint_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_message_member_array[2] = {
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_Feedback, distance),  // bytes offset in struct
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
    offsetof(labust_msgs__action__GoToPoint_Feedback, bearing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_message_members = {
  "labust_msgs__action",  // message namespace
  "GoToPoint_Feedback",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__GoToPoint_Feedback),
  GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_message_member_array,  // message members
  GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_message_type_support_handle = {
  0,
  &GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_Feedback)() {
  if (!GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_message_type_support_handle.typesupport_identifier) {
    GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToPoint_Feedback__rosidl_typesupport_introspection_c__GoToPoint_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__functions.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "labust_msgs/action/go_to_point.h"
// Member `goal`
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__GoToPoint_SendGoal_Request__init(message_memory);
}

void GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_fini_function(void * message_memory)
{
  labust_msgs__action__GoToPoint_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(labust_msgs__action__GoToPoint_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "GoToPoint_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__GoToPoint_SendGoal_Request),
  GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_member_array,  // message members
  GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_type_support_handle = {
  0,
  &GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_SendGoal_Request)() {
  GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_Goal)();
  if (!GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToPoint_SendGoal_Request__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__functions.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__GoToPoint_SendGoal_Response__init(message_memory);
}

void GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_fini_function(void * message_memory)
{
  labust_msgs__action__GoToPoint_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(labust_msgs__action__GoToPoint_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "GoToPoint_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__GoToPoint_SendGoal_Response),
  GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_message_member_array,  // message members
  GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_message_type_support_handle = {
  0,
  &GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_SendGoal_Response)() {
  GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToPoint_SendGoal_Response__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_service_members = {
  "labust_msgs__action",  // service namespace
  "GoToPoint_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_SendGoal)() {
  if (!labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_SendGoal_Response)()->data;
  }

  return &labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__functions.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.h"


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

void GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__GoToPoint_GetResult_Request__init(message_memory);
}

void GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_fini_function(void * message_memory)
{
  labust_msgs__action__GoToPoint_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "GoToPoint_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__GoToPoint_GetResult_Request),
  GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_message_member_array,  // message members
  GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_message_type_support_handle = {
  0,
  &GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_GetResult_Request)() {
  GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToPoint_GetResult_Request__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__functions.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "labust_msgs/action/go_to_point.h"
// Member `result`
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__GoToPoint_GetResult_Response__init(message_memory);
}

void GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_fini_function(void * message_memory)
{
  labust_msgs__action__GoToPoint_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(labust_msgs__action__GoToPoint_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "GoToPoint_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__GoToPoint_GetResult_Response),
  GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_message_member_array,  // message members
  GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_message_type_support_handle = {
  0,
  &GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_GetResult_Response)() {
  GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_Result)();
  if (!GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToPoint_GetResult_Response__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_GetResult_service_members = {
  "labust_msgs__action",  // service namespace
  "GoToPoint_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_GetResult_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_GetResult)() {
  if (!labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_GetResult_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_GetResult_Response)()->data;
  }

  return &labust_msgs__action__detail__go_to_point__rosidl_typesupport_introspection_c__GoToPoint_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__functions.h"
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/go_to_point.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/detail/go_to_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__GoToPoint_FeedbackMessage__init(message_memory);
}

void GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_fini_function(void * message_memory)
{
  labust_msgs__action__GoToPoint_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__GoToPoint_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(labust_msgs__action__GoToPoint_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_message_members = {
  "labust_msgs__action",  // message namespace
  "GoToPoint_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__GoToPoint_FeedbackMessage),
  GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_message_member_array,  // message members
  GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_message_type_support_handle = {
  0,
  &GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_FeedbackMessage)() {
  GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, GoToPoint_Feedback)();
  if (!GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToPoint_FeedbackMessage__rosidl_typesupport_introspection_c__GoToPoint_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
