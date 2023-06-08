// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:msg/EtaReference.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/msg/detail/eta_reference__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/msg/detail/eta_reference__functions.h"
#include "labust_msgs/msg/detail/eta_reference__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `identity_token`
#include "rosidl_runtime_c/string_functions.h"
// Member `reference`
#include "auv_msgs/msg/navigation_status.h"
// Member `reference`
#include "auv_msgs/msg/detail/navigation_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EtaReference__rosidl_typesupport_introspection_c__EtaReference_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__msg__EtaReference__init(message_memory);
}

void EtaReference__rosidl_typesupport_introspection_c__EtaReference_fini_function(void * message_memory)
{
  labust_msgs__msg__EtaReference__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EtaReference__rosidl_typesupport_introspection_c__EtaReference_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__EtaReference, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "identity_token",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__EtaReference, identity_token),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__EtaReference, reference),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EtaReference__rosidl_typesupport_introspection_c__EtaReference_message_members = {
  "labust_msgs__msg",  // message namespace
  "EtaReference",  // message name
  3,  // number of fields
  sizeof(labust_msgs__msg__EtaReference),
  EtaReference__rosidl_typesupport_introspection_c__EtaReference_message_member_array,  // message members
  EtaReference__rosidl_typesupport_introspection_c__EtaReference_init_function,  // function to initialize message memory (memory has to be allocated)
  EtaReference__rosidl_typesupport_introspection_c__EtaReference_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EtaReference__rosidl_typesupport_introspection_c__EtaReference_message_type_support_handle = {
  0,
  &EtaReference__rosidl_typesupport_introspection_c__EtaReference_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, EtaReference)() {
  EtaReference__rosidl_typesupport_introspection_c__EtaReference_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  EtaReference__rosidl_typesupport_introspection_c__EtaReference_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, NavigationStatus)();
  if (!EtaReference__rosidl_typesupport_introspection_c__EtaReference_message_type_support_handle.typesupport_identifier) {
    EtaReference__rosidl_typesupport_introspection_c__EtaReference_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EtaReference__rosidl_typesupport_introspection_c__EtaReference_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
