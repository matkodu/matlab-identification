// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from auv_msgs:msg/BodyVelocityRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "auv_msgs/msg/detail/body_velocity_request__rosidl_typesupport_introspection_c.h"
#include "auv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "auv_msgs/msg/detail/body_velocity_request__functions.h"
#include "auv_msgs/msg/detail/body_velocity_request__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  auv_msgs__msg__BodyVelocityRequest__init(message_memory);
}

void BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_fini_function(void * message_memory)
{
  auv_msgs__msg__BodyVelocityRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__BodyVelocityRequest, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__BodyVelocityRequest, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disable_axis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__BodyVelocityRequest, disable_axis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_message_members = {
  "auv_msgs__msg",  // message namespace
  "BodyVelocityRequest",  // message name
  3,  // number of fields
  sizeof(auv_msgs__msg__BodyVelocityRequest),
  BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_message_member_array,  // message members
  BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_message_type_support_handle = {
  0,
  &BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_auv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, BodyVelocityRequest)() {
  BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_message_type_support_handle.typesupport_identifier) {
    BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BodyVelocityRequest__rosidl_typesupport_introspection_c__BodyVelocityRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
