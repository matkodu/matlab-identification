// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:action/IdentifyModel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/action/detail/identify_model__functions.h"
#include "labust_msgs/action/detail/identify_model__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__IdentifyModel_Goal__init(message_memory);
}

void IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_fini_function(void * message_memory)
{
  labust_msgs__action__IdentifyModel_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_message_member_array[1] = {
  {
    "dof",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_Goal, dof),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_message_members = {
  "labust_msgs__action",  // message namespace
  "IdentifyModel_Goal",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__IdentifyModel_Goal),
  IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_message_member_array,  // message members
  IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_message_type_support_handle = {
  0,
  &IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_Goal)() {
  if (!IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_message_type_support_handle.typesupport_identifier) {
    IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IdentifyModel_Goal__rosidl_typesupport_introspection_c__IdentifyModel_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__functions.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.h"


// Include directives for member types
// Member `ident_models`
#include "labust_msgs/msg/ident_model.h"
// Member `ident_models`
#include "labust_msgs/msg/detail/ident_model__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__IdentifyModel_Result__init(message_memory);
}

void IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_fini_function(void * message_memory)
{
  labust_msgs__action__IdentifyModel_Result__fini(message_memory);
}

size_t IdentifyModel_Result__rosidl_typesupport_introspection_c__size_function__IdentModel__ident_models(
  const void * untyped_member)
{
  const labust_msgs__msg__IdentModel__Sequence * member =
    (const labust_msgs__msg__IdentModel__Sequence *)(untyped_member);
  return member->size;
}

const void * IdentifyModel_Result__rosidl_typesupport_introspection_c__get_const_function__IdentModel__ident_models(
  const void * untyped_member, size_t index)
{
  const labust_msgs__msg__IdentModel__Sequence * member =
    (const labust_msgs__msg__IdentModel__Sequence *)(untyped_member);
  return &member->data[index];
}

void * IdentifyModel_Result__rosidl_typesupport_introspection_c__get_function__IdentModel__ident_models(
  void * untyped_member, size_t index)
{
  labust_msgs__msg__IdentModel__Sequence * member =
    (labust_msgs__msg__IdentModel__Sequence *)(untyped_member);
  return &member->data[index];
}

bool IdentifyModel_Result__rosidl_typesupport_introspection_c__resize_function__IdentModel__ident_models(
  void * untyped_member, size_t size)
{
  labust_msgs__msg__IdentModel__Sequence * member =
    (labust_msgs__msg__IdentModel__Sequence *)(untyped_member);
  labust_msgs__msg__IdentModel__Sequence__fini(member);
  return labust_msgs__msg__IdentModel__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_message_member_array[1] = {
  {
    "ident_models",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_Result, ident_models),  // bytes offset in struct
    NULL,  // default value
    IdentifyModel_Result__rosidl_typesupport_introspection_c__size_function__IdentModel__ident_models,  // size() function pointer
    IdentifyModel_Result__rosidl_typesupport_introspection_c__get_const_function__IdentModel__ident_models,  // get_const(index) function pointer
    IdentifyModel_Result__rosidl_typesupport_introspection_c__get_function__IdentModel__ident_models,  // get(index) function pointer
    IdentifyModel_Result__rosidl_typesupport_introspection_c__resize_function__IdentModel__ident_models  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_message_members = {
  "labust_msgs__action",  // message namespace
  "IdentifyModel_Result",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__IdentifyModel_Result),
  IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_message_member_array,  // message members
  IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_message_type_support_handle = {
  0,
  &IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_Result)() {
  IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, IdentModel)();
  if (!IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_message_type_support_handle.typesupport_identifier) {
    IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IdentifyModel_Result__rosidl_typesupport_introspection_c__IdentifyModel_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__functions.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.h"


// Include directives for member types
// Member `additional_data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__IdentifyModel_Feedback__init(message_memory);
}

void IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_fini_function(void * message_memory)
{
  labust_msgs__action__IdentifyModel_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_message_member_array[4] = {
  {
    "dof",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_Feedback, dof),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_Feedback, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_Feedback, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "additional_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_Feedback, additional_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_message_members = {
  "labust_msgs__action",  // message namespace
  "IdentifyModel_Feedback",  // message name
  4,  // number of fields
  sizeof(labust_msgs__action__IdentifyModel_Feedback),
  IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_message_member_array,  // message members
  IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_message_type_support_handle = {
  0,
  &IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_Feedback)() {
  if (!IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_message_type_support_handle.typesupport_identifier) {
    IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IdentifyModel_Feedback__rosidl_typesupport_introspection_c__IdentifyModel_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__functions.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "labust_msgs/action/identify_model.h"
// Member `goal`
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__IdentifyModel_SendGoal_Request__init(message_memory);
}

void IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_fini_function(void * message_memory)
{
  labust_msgs__action__IdentifyModel_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(labust_msgs__action__IdentifyModel_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "IdentifyModel_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__IdentifyModel_SendGoal_Request),
  IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_member_array,  // message members
  IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_type_support_handle = {
  0,
  &IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_SendGoal_Request)() {
  IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_Goal)();
  if (!IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IdentifyModel_SendGoal_Request__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__functions.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__IdentifyModel_SendGoal_Response__init(message_memory);
}

void IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_fini_function(void * message_memory)
{
  labust_msgs__action__IdentifyModel_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(labust_msgs__action__IdentifyModel_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "IdentifyModel_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__IdentifyModel_SendGoal_Response),
  IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_message_member_array,  // message members
  IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_message_type_support_handle = {
  0,
  &IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_SendGoal_Response)() {
  IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IdentifyModel_SendGoal_Response__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_service_members = {
  "labust_msgs__action",  // service namespace
  "IdentifyModel_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_SendGoal)() {
  if (!labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_SendGoal_Response)()->data;
  }

  return &labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__functions.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.h"


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

void IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__IdentifyModel_GetResult_Request__init(message_memory);
}

void IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_fini_function(void * message_memory)
{
  labust_msgs__action__IdentifyModel_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_message_members = {
  "labust_msgs__action",  // message namespace
  "IdentifyModel_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(labust_msgs__action__IdentifyModel_GetResult_Request),
  IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_message_member_array,  // message members
  IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_message_type_support_handle = {
  0,
  &IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_GetResult_Request)() {
  IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IdentifyModel_GetResult_Request__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__functions.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "labust_msgs/action/identify_model.h"
// Member `result`
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__IdentifyModel_GetResult_Response__init(message_memory);
}

void IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_fini_function(void * message_memory)
{
  labust_msgs__action__IdentifyModel_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(labust_msgs__action__IdentifyModel_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_message_members = {
  "labust_msgs__action",  // message namespace
  "IdentifyModel_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__IdentifyModel_GetResult_Response),
  IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_message_member_array,  // message members
  IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_message_type_support_handle = {
  0,
  &IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_GetResult_Response)() {
  IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_Result)();
  if (!IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IdentifyModel_GetResult_Response__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_service_members = {
  "labust_msgs__action",  // service namespace
  "IdentifyModel_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_service_type_support_handle = {
  0,
  &labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_GetResult)() {
  if (!labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_service_type_support_handle.typesupport_identifier) {
    labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_GetResult_Response)()->data;
  }

  return &labust_msgs__action__detail__identify_model__rosidl_typesupport_introspection_c__IdentifyModel_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__functions.h"
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/identify_model.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/detail/identify_model__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__action__IdentifyModel_FeedbackMessage__init(message_memory);
}

void IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_fini_function(void * message_memory)
{
  labust_msgs__action__IdentifyModel_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__action__IdentifyModel_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(labust_msgs__action__IdentifyModel_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_message_members = {
  "labust_msgs__action",  // message namespace
  "IdentifyModel_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(labust_msgs__action__IdentifyModel_FeedbackMessage),
  IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_message_member_array,  // message members
  IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_message_type_support_handle = {
  0,
  &IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_FeedbackMessage)() {
  IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, action, IdentifyModel_Feedback)();
  if (!IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IdentifyModel_FeedbackMessage__rosidl_typesupport_introspection_c__IdentifyModel_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
