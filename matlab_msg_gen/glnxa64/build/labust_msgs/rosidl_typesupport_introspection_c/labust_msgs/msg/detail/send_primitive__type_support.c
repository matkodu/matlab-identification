// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:msg/SendPrimitive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/msg/detail/send_primitive__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/msg/detail/send_primitive__functions.h"
#include "labust_msgs/msg/detail/send_primitive__struct.h"


// Include directives for member types
// Member `primitive_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `event`
#include "labust_msgs/msg/event_data.h"
// Member `event`
#include "labust_msgs/msg/detail/event_data__rosidl_typesupport_introspection_c.h"
// Member `primitive_string`
#include "std_msgs/msg/string.h"
// Member `primitive_string`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__msg__SendPrimitive__init(message_memory);
}

void SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_fini_function(void * message_memory)
{
  labust_msgs__msg__SendPrimitive__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_message_member_array[4] = {
  {
    "primitive_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__SendPrimitive, primitive_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "primitive_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__SendPrimitive, primitive_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "event",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__SendPrimitive, event),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "primitive_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__SendPrimitive, primitive_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_message_members = {
  "labust_msgs__msg",  // message namespace
  "SendPrimitive",  // message name
  4,  // number of fields
  sizeof(labust_msgs__msg__SendPrimitive),
  SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_message_member_array,  // message members
  SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_message_type_support_handle = {
  0,
  &SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, SendPrimitive)() {
  SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, EventData)();
  SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_message_type_support_handle.typesupport_identifier) {
    SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SendPrimitive__rosidl_typesupport_introspection_c__SendPrimitive_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
