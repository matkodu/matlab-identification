// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:msg/RegisterController.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/msg/detail/register_controller__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/msg/detail/register_controller__functions.h"
#include "labust_msgs/msg/detail/register_controller__struct.h"


// Include directives for member types
// Member `parent`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RegisterController__rosidl_typesupport_introspection_c__RegisterController_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__msg__RegisterController__init(message_memory);
}

void RegisterController__rosidl_typesupport_introspection_c__RegisterController_fini_function(void * message_memory)
{
  labust_msgs__msg__RegisterController__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RegisterController__rosidl_typesupport_introspection_c__RegisterController_message_member_array[4] = {
  {
    "parent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__RegisterController, parent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__RegisterController, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "used_tau",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__RegisterController, used_tau),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "used_nu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__RegisterController, used_nu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterController__rosidl_typesupport_introspection_c__RegisterController_message_members = {
  "labust_msgs__msg",  // message namespace
  "RegisterController",  // message name
  4,  // number of fields
  sizeof(labust_msgs__msg__RegisterController),
  RegisterController__rosidl_typesupport_introspection_c__RegisterController_message_member_array,  // message members
  RegisterController__rosidl_typesupport_introspection_c__RegisterController_init_function,  // function to initialize message memory (memory has to be allocated)
  RegisterController__rosidl_typesupport_introspection_c__RegisterController_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterController__rosidl_typesupport_introspection_c__RegisterController_message_type_support_handle = {
  0,
  &RegisterController__rosidl_typesupport_introspection_c__RegisterController_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, RegisterController)() {
  if (!RegisterController__rosidl_typesupport_introspection_c__RegisterController_message_type_support_handle.typesupport_identifier) {
    RegisterController__rosidl_typesupport_introspection_c__RegisterController_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterController__rosidl_typesupport_introspection_c__RegisterController_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
