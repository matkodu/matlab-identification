// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from auv_msgs:msg/BodyForceRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "auv_msgs/msg/detail/body_force_request__rosidl_typesupport_introspection_c.h"
#include "auv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "auv_msgs/msg/detail/body_force_request__functions.h"
#include "auv_msgs/msg/detail/body_force_request__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `wrench`
#include "geometry_msgs/msg/wrench.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  auv_msgs__msg__BodyForceRequest__init(message_memory);
}

void BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_fini_function(void * message_memory)
{
  auv_msgs__msg__BodyForceRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__BodyForceRequest, header),  // bytes offset in struct
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
    offsetof(auv_msgs__msg__BodyForceRequest, wrench),  // bytes offset in struct
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
    offsetof(auv_msgs__msg__BodyForceRequest, disable_axis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_message_members = {
  "auv_msgs__msg",  // message namespace
  "BodyForceRequest",  // message name
  3,  // number of fields
  sizeof(auv_msgs__msg__BodyForceRequest),
  BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_message_member_array,  // message members
  BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_message_type_support_handle = {
  0,
  &BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_auv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, BodyForceRequest)() {
  BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  if (!BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_message_type_support_handle.typesupport_identifier) {
    BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BodyForceRequest__rosidl_typesupport_introspection_c__BodyForceRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
