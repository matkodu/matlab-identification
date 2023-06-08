// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:msg/EventData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/msg/detail/event_data__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/msg/detail/event_data__functions.h"
#include "labust_msgs/msg/detail/event_data__struct.h"


// Include directives for member types
// Member `on_event_next`
// Member `on_event_next_active`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EventData__rosidl_typesupport_introspection_c__EventData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__msg__EventData__init(message_memory);
}

void EventData__rosidl_typesupport_introspection_c__EventData_fini_function(void * message_memory)
{
  labust_msgs__msg__EventData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EventData__rosidl_typesupport_introspection_c__EventData_message_member_array[3] = {
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__EventData, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "on_event_next",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__EventData, on_event_next),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "on_event_next_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__EventData, on_event_next_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EventData__rosidl_typesupport_introspection_c__EventData_message_members = {
  "labust_msgs__msg",  // message namespace
  "EventData",  // message name
  3,  // number of fields
  sizeof(labust_msgs__msg__EventData),
  EventData__rosidl_typesupport_introspection_c__EventData_message_member_array,  // message members
  EventData__rosidl_typesupport_introspection_c__EventData_init_function,  // function to initialize message memory (memory has to be allocated)
  EventData__rosidl_typesupport_introspection_c__EventData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EventData__rosidl_typesupport_introspection_c__EventData_message_type_support_handle = {
  0,
  &EventData__rosidl_typesupport_introspection_c__EventData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, EventData)() {
  if (!EventData__rosidl_typesupport_introspection_c__EventData_message_type_support_handle.typesupport_identifier) {
    EventData__rosidl_typesupport_introspection_c__EventData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EventData__rosidl_typesupport_introspection_c__EventData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
