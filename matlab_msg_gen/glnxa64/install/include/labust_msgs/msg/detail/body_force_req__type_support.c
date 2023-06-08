// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:msg/BodyForceReq.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/msg/detail/body_force_req__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/msg/detail/body_force_req__functions.h"
#include "labust_msgs/msg/detail/body_force_req__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "labust_msgs/msg/goal_descriptor.h"
// Member `goal`
#include "labust_msgs/msg/detail/goal_descriptor__rosidl_typesupport_introspection_c.h"
// Member `wrench`
#include "geometry_msgs/msg/wrench.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__rosidl_typesupport_introspection_c.h"
// Member `disable_axis`
#include "labust_msgs/msg/bool6_axis.h"
// Member `disable_axis`
#include "labust_msgs/msg/detail/bool6_axis__rosidl_typesupport_introspection_c.h"
// Member `windup`
#include "labust_msgs/msg/windup6_axis.h"
// Member `windup`
#include "labust_msgs/msg/detail/windup6_axis__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__msg__BodyForceReq__init(message_memory);
}

void BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_fini_function(void * message_memory)
{
  labust_msgs__msg__BodyForceReq__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__BodyForceReq, header),  // bytes offset in struct
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
    offsetof(labust_msgs__msg__BodyForceReq, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__BodyForceReq, wrench),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disable_axis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__BodyForceReq, disable_axis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "windup",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__BodyForceReq, windup),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_members = {
  "labust_msgs__msg",  // message namespace
  "BodyForceReq",  // message name
  5,  // number of fields
  sizeof(labust_msgs__msg__BodyForceReq),
  BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_member_array,  // message members
  BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_init_function,  // function to initialize message memory (memory has to be allocated)
  BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_type_support_handle = {
  0,
  &BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, BodyForceReq)() {
  BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, GoalDescriptor)();
  BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, Bool6Axis)();
  BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, Windup6Axis)();
  if (!BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_type_support_handle.typesupport_identifier) {
    BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BodyForceReq__rosidl_typesupport_introspection_c__BodyForceReq_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
