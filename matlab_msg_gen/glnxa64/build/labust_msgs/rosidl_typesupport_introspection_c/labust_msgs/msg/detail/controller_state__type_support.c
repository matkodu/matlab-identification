// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/msg/detail/controller_state__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/msg/detail/controller_state__functions.h"
#include "labust_msgs/msg/detail/controller_state__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `info`
#include "labust_msgs/msg/controller_info.h"
// Member `info`
#include "labust_msgs/msg/detail/controller_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ControllerState__rosidl_typesupport_introspection_c__ControllerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__msg__ControllerState__init(message_memory);
}

void ControllerState__rosidl_typesupport_introspection_c__ControllerState_fini_function(void * message_memory)
{
  labust_msgs__msg__ControllerState__fini(message_memory);
}

size_t ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerInfo__info(
  const void * untyped_member)
{
  const labust_msgs__msg__ControllerInfo__Sequence * member =
    (const labust_msgs__msg__ControllerInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerInfo__info(
  const void * untyped_member, size_t index)
{
  const labust_msgs__msg__ControllerInfo__Sequence * member =
    (const labust_msgs__msg__ControllerInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerInfo__info(
  void * untyped_member, size_t index)
{
  labust_msgs__msg__ControllerInfo__Sequence * member =
    (labust_msgs__msg__ControllerInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerInfo__info(
  void * untyped_member, size_t size)
{
  labust_msgs__msg__ControllerInfo__Sequence * member =
    (labust_msgs__msg__ControllerInfo__Sequence *)(untyped_member);
  labust_msgs__msg__ControllerInfo__Sequence__fini(member);
  return labust_msgs__msg__ControllerInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__ControllerState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__ControllerState, info),  // bytes offset in struct
    NULL,  // default value
    ControllerState__rosidl_typesupport_introspection_c__size_function__ControllerInfo__info,  // size() function pointer
    ControllerState__rosidl_typesupport_introspection_c__get_const_function__ControllerInfo__info,  // get_const(index) function pointer
    ControllerState__rosidl_typesupport_introspection_c__get_function__ControllerInfo__info,  // get(index) function pointer
    ControllerState__rosidl_typesupport_introspection_c__resize_function__ControllerInfo__info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_members = {
  "labust_msgs__msg",  // message namespace
  "ControllerState",  // message name
  2,  // number of fields
  sizeof(labust_msgs__msg__ControllerState),
  ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_member_array,  // message members
  ControllerState__rosidl_typesupport_introspection_c__ControllerState_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerState__rosidl_typesupport_introspection_c__ControllerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle = {
  0,
  &ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, ControllerState)() {
  ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, ControllerInfo)();
  if (!ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle.typesupport_identifier) {
    ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ControllerState__rosidl_typesupport_introspection_c__ControllerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
