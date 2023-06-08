// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:action/CourseKeeping.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/action/detail/course_keeping__functions.h"
#include "labust_msgs/action/detail/course_keeping__struct.h"


// Include directives for member types
// Member `topics`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__CourseKeeping_Goal__init(message_memory);
}

void CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_fini_function(void * message_memory)
{
  labust_msgs__action__CourseKeeping_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_message_member_array[6] = {
  {
    "subtype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__CourseKeeping_Goal, subtype),  // bytes offset in struct
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
    offsetof(labust_msgs__action__CourseKeeping_Goal, ref_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "course",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__CourseKeeping_Goal, course),  // bytes offset in struct
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
    offsetof(labust_msgs__action__CourseKeeping_Goal, speed),  // bytes offset in struct
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
    offsetof(labust_msgs__action__CourseKeeping_Goal, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__CourseKeeping_Goal, topics),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_message_members = {
  "labust_msgs__action",  // message namespace
  "CourseKeeping_Goal",  // message name
  6,  // number of fields
  sizeof(labust_msgs__action__CourseKeeping_Goal),
  CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_message_member_array,  // message members
  CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_message_type_support_handle = {
  0,
  &CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_Goal)() {
  if (!CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_message_type_support_handle.typesupport_identifier) {
    CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CourseKeeping_Goal__rosidl_typesupport_introspection_c__CourseKeeping_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__functions.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__CourseKeeping_Result__init(message_memory);
}

void CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_fini_function(void * message_memory)
{
  labust_msgs__action__CourseKeeping_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__CourseKeeping_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_message_members = {
  "labust_msgs__action",  // message namespace
  "CourseKeeping_Result",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__CourseKeeping_Result),
  CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_message_member_array,  // message members
  CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_message_type_support_handle = {
  0,
  &CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_Result)() {
  if (!CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_message_type_support_handle.typesupport_identifier) {
    CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CourseKeeping_Result__rosidl_typesupport_introspection_c__CourseKeeping_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__functions.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__CourseKeeping_Feedback__init(message_memory);
}

void CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_fini_function(void * message_memory)
{
  labust_msgs__action__CourseKeeping_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__CourseKeeping_Feedback, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_message_members = {
  "labust_msgs__action",  // message namespace
  "CourseKeeping_Feedback",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__CourseKeeping_Feedback),
  CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_message_member_array,  // message members
  CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_message_type_support_handle = {
  0,
  &CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_Feedback)() {
  if (!CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_message_type_support_handle.typesupport_identifier) {
    CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CourseKeeping_Feedback__rosidl_typesupport_introspection_c__CourseKeeping_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__functions.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "labust_msgs/action/course_keeping.h"
// Member `goal`
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__CourseKeeping_SendGoal_Request__init(message_memory);
}

void CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_fini_function(void * message_memory)
{
  labust_msgs__action__CourseKeeping_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__CourseKeeping_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(labust_msgs__action__CourseKeeping_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "CourseKeeping_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__CourseKeeping_SendGoal_Request),
  CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_member_array,  // message members
  CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_type_support_handle = {
  0,
  &CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_SendGoal_Request)() {
  CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_Goal)();
  if (!CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CourseKeeping_SendGoal_Request__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__functions.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__CourseKeeping_SendGoal_Response__init(message_memory);
}

void CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_fini_function(void * message_memory)
{
  labust_msgs__action__CourseKeeping_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__CourseKeeping_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(labust_msgs__action__CourseKeeping_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "CourseKeeping_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__CourseKeeping_SendGoal_Response),
  CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_message_member_array,  // message members
  CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_message_type_support_handle = {
  0,
  &CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_SendGoal_Response)() {
  CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CourseKeeping_SendGoal_Response__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_service_members = {
  "labust_msgs__action",  // service namespace
  "CourseKeeping_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_SendGoal)() {
  if (!labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_SendGoal_Response)()->data;
  }

  return &labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__functions.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.h"


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

void CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__CourseKeeping_GetResult_Request__init(message_memory);
}

void CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_fini_function(void * message_memory)
{
  labust_msgs__action__CourseKeeping_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__CourseKeeping_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "CourseKeeping_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__CourseKeeping_GetResult_Request),
  CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_message_member_array,  // message members
  CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_message_type_support_handle = {
  0,
  &CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_GetResult_Request)() {
  CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CourseKeeping_GetResult_Request__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__functions.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "labust_msgs/action/course_keeping.h"
// Member `result`
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__CourseKeeping_GetResult_Response__init(message_memory);
}

void CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_fini_function(void * message_memory)
{
  labust_msgs__action__CourseKeeping_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__CourseKeeping_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(labust_msgs__action__CourseKeeping_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "CourseKeeping_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__CourseKeeping_GetResult_Response),
  CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_message_member_array,  // message members
  CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_message_type_support_handle = {
  0,
  &CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_GetResult_Response)() {
  CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_Result)();
  if (!CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CourseKeeping_GetResult_Response__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_service_members = {
  "labust_msgs__action",  // service namespace
  "CourseKeeping_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_GetResult)() {
  if (!labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_GetResult_Response)()->data;
  }

  return &labust_msgs__action__detail__course_keeping__rosidl_typesupport_introspection_c__CourseKeeping_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__functions.h"
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/course_keeping.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/detail/course_keeping__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__CourseKeeping_FeedbackMessage__init(message_memory);
}

void CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_fini_function(void * message_memory)
{
  labust_msgs__action__CourseKeeping_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__CourseKeeping_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(labust_msgs__action__CourseKeeping_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_message_members = {
  "labust_msgs__action",  // message namespace
  "CourseKeeping_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__CourseKeeping_FeedbackMessage),
  CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_message_member_array,  // message members
  CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_message_type_support_handle = {
  0,
  &CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_FeedbackMessage)() {
  CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, CourseKeeping_Feedback)();
  if (!CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CourseKeeping_FeedbackMessage__rosidl_typesupport_introspection_c__CourseKeeping_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
