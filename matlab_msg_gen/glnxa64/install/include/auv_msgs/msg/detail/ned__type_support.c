// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from auv_msgs:msg/NED.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "auv_msgs/msg/detail/ned__rosidl_typesupport_introspection_c.h"
#include "auv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "auv_msgs/msg/detail/ned__functions.h"
#include "auv_msgs/msg/detail/ned__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NED__rosidl_typesupport_introspection_c__NED_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  auv_msgs__msg__NED__init(message_memory);
}

void NED__rosidl_typesupport_introspection_c__NED_fini_function(void * message_memory)
{
  auv_msgs__msg__NED__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NED__rosidl_typesupport_introspection_c__NED_message_member_array[3] = {
  {
    "north",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__NED, north),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "east",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__NED, east),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__NED, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NED__rosidl_typesupport_introspection_c__NED_message_members = {
  "auv_msgs__msg",  // message namespace
  "NED",  // message name
  3,  // number of fields
  sizeof(auv_msgs__msg__NED),
  NED__rosidl_typesupport_introspection_c__NED_message_member_array,  // message members
  NED__rosidl_typesupport_introspection_c__NED_init_function,  // function to initialize message memory (memory has to be allocated)
  NED__rosidl_typesupport_introspection_c__NED_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NED__rosidl_typesupport_introspection_c__NED_message_type_support_handle = {
  0,
  &NED__rosidl_typesupport_introspection_c__NED_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_auv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, NED)() {
  if (!NED__rosidl_typesupport_introspection_c__NED_message_type_support_handle.typesupport_identifier) {
    NED__rosidl_typesupport_introspection_c__NED_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NED__rosidl_typesupport_introspection_c__NED_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
