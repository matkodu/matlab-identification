// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:action/Docking.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/action/detail/docking__functions.h"
#include "labust_msgs/action/detail/docking__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__Docking_Goal__init(message_memory);
}

void Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_fini_function(void * message_memory)
{
  labust_msgs__action__Docking_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_message_member_array[6] = {
  {
    "docking_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_Goal, docking_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "docking_slot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_Goal, docking_slot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "search_yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_Goal, search_yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_Goal, max_yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_surge_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_Goal, max_surge_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "surge_stdev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_Goal, surge_stdev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_message_members = {
  "labust_msgs__action",  // message namespace
  "Docking_Goal",  // message name
  6,  // number of fields
  sizeof(labust_msgs__action__Docking_Goal),
  Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_message_member_array,  // message members
  Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_message_type_support_handle = {
  0,
  &Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_Goal)() {
  if (!Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_message_type_support_handle.typesupport_identifier) {
    Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Docking_Goal__rosidl_typesupport_introspection_c__Docking_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/docking__functions.h"
// already included above
// #include "labust_msgs/action/detail/docking__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__Docking_Result__init(message_memory);
}

void Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_fini_function(void * message_memory)
{
  labust_msgs__action__Docking_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_message_members = {
  "labust_msgs__action",  // message namespace
  "Docking_Result",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__Docking_Result),
  Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_message_member_array,  // message members
  Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_message_type_support_handle = {
  0,
  &Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_Result)() {
  if (!Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_message_type_support_handle.typesupport_identifier) {
    Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Docking_Result__rosidl_typesupport_introspection_c__Docking_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/docking__functions.h"
// already included above
// #include "labust_msgs/action/detail/docking__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__Docking_Feedback__init(message_memory);
}

void Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_fini_function(void * message_memory)
{
  labust_msgs__action__Docking_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_message_members = {
  "labust_msgs__action",  // message namespace
  "Docking_Feedback",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__Docking_Feedback),
  Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_message_member_array,  // message members
  Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_message_type_support_handle = {
  0,
  &Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_Feedback)() {
  if (!Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_message_type_support_handle.typesupport_identifier) {
    Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Docking_Feedback__rosidl_typesupport_introspection_c__Docking_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/docking__functions.h"
// already included above
// #include "labust_msgs/action/detail/docking__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "labust_msgs/action/docking.h"
// Member `goal`
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__Docking_SendGoal_Request__init(message_memory);
}

void Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_fini_function(void * message_memory)
{
  labust_msgs__action__Docking_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(labust_msgs__action__Docking_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "Docking_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__Docking_SendGoal_Request),
  Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_member_array,  // message members
  Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_type_support_handle = {
  0,
  &Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_SendGoal_Request)() {
  Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_Goal)();
  if (!Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Docking_SendGoal_Request__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/docking__functions.h"
// already included above
// #include "labust_msgs/action/detail/docking__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__Docking_SendGoal_Response__init(message_memory);
}

void Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_fini_function(void * message_memory)
{
  labust_msgs__action__Docking_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(labust_msgs__action__Docking_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "Docking_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__Docking_SendGoal_Response),
  Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_message_member_array,  // message members
  Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_message_type_support_handle = {
  0,
  &Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_SendGoal_Response)() {
  Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Docking_SendGoal_Response__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_SendGoal_service_members = {
  "labust_msgs__action",  // service namespace
  "Docking_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_SendGoal_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_SendGoal)() {
  if (!labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_SendGoal_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_SendGoal_Response)()->data;
  }

  return &labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/docking__functions.h"
// already included above
// #include "labust_msgs/action/detail/docking__struct.h"


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

void Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__Docking_GetResult_Request__init(message_memory);
}

void Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_fini_function(void * message_memory)
{
  labust_msgs__action__Docking_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "Docking_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__Docking_GetResult_Request),
  Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_message_member_array,  // message members
  Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_message_type_support_handle = {
  0,
  &Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_GetResult_Request)() {
  Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Docking_GetResult_Request__rosidl_typesupport_introspection_c__Docking_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/docking__functions.h"
// already included above
// #include "labust_msgs/action/detail/docking__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "labust_msgs/action/docking.h"
// Member `result`
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__Docking_GetResult_Response__init(message_memory);
}

void Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_fini_function(void * message_memory)
{
  labust_msgs__action__Docking_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(labust_msgs__action__Docking_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "Docking_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__Docking_GetResult_Response),
  Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_message_member_array,  // message members
  Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_message_type_support_handle = {
  0,
  &Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_GetResult_Response)() {
  Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_Result)();
  if (!Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Docking_GetResult_Response__rosidl_typesupport_introspection_c__Docking_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_GetResult_service_members = {
  "labust_msgs__action",  // service namespace
  "Docking_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_GetResult_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_GetResult)() {
  if (!labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_GetResult_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_GetResult_Response)()->data;
  }

  return &labust_msgs__action__detail__docking__rosidl_typesupport_introspection_c__Docking_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/docking__functions.h"
// already included above
// #include "labust_msgs/action/detail/docking__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/docking.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/detail/docking__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__Docking_FeedbackMessage__init(message_memory);
}

void Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_fini_function(void * message_memory)
{
  labust_msgs__action__Docking_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__Docking_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(labust_msgs__action__Docking_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_message_members = {
  "labust_msgs__action",  // message namespace
  "Docking_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__Docking_FeedbackMessage),
  Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_message_member_array,  // message members
  Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_message_type_support_handle = {
  0,
  &Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_FeedbackMessage)() {
  Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, Docking_Feedback)();
  if (!Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Docking_FeedbackMessage__rosidl_typesupport_introspection_c__Docking_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
