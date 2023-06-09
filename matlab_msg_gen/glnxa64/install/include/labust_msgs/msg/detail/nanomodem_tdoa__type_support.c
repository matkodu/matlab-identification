// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:msg/NanomodemTDOA.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/msg/detail/nanomodem_tdoa__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/msg/detail/nanomodem_tdoa__functions.h"
#include "labust_msgs/msg/detail/nanomodem_tdoa__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `modem_times`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__msg__NanomodemTDOA__init(message_memory);
}

void NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_fini_function(void * message_memory)
{
  labust_msgs__msg__NanomodemTDOA__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NanomodemTDOA, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fpga_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NanomodemTDOA, fpga_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "modem_times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NanomodemTDOA, modem_times),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_message_members = {
  "labust_msgs__msg",  // message namespace
  "NanomodemTDOA",  // message name
  3,  // number of fields
  sizeof(labust_msgs__msg__NanomodemTDOA),
  NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_message_member_array,  // message members
  NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_init_function,  // function to initialize message memory (memory has to be allocated)
  NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_message_type_support_handle = {
  0,
  &NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, NanomodemTDOA)() {
  NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_message_type_support_handle.typesupport_identifier) {
    NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NanomodemTDOA__rosidl_typesupport_introspection_c__NanomodemTDOA_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
