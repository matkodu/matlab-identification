// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from auv_msgs:msg/NEDArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "auv_msgs/msg/detail/ned_array__rosidl_typesupport_introspection_c.h"
#include "auv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "auv_msgs/msg/detail/ned_array__functions.h"
#include "auv_msgs/msg/detail/ned_array__struct.h"


// Include directives for member types
// Member `neds`
#include "auv_msgs/msg/ned.h"
// Member `neds`
#include "auv_msgs/msg/detail/ned__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NEDArray__rosidl_typesupport_introspection_c__NEDArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  auv_msgs__msg__NEDArray__init(message_memory);
}

void NEDArray__rosidl_typesupport_introspection_c__NEDArray_fini_function(void * message_memory)
{
  auv_msgs__msg__NEDArray__fini(message_memory);
}

size_t NEDArray__rosidl_typesupport_introspection_c__size_function__NED__neds(
  const void * untyped_member)
{
  const auv_msgs__msg__NED__Sequence * member =
    (const auv_msgs__msg__NED__Sequence *)(untyped_member);
  return member->size;
}

const void * NEDArray__rosidl_typesupport_introspection_c__get_const_function__NED__neds(
  const void * untyped_member, size_t index)
{
  const auv_msgs__msg__NED__Sequence * member =
    (const auv_msgs__msg__NED__Sequence *)(untyped_member);
  return &member->data[index];
}

void * NEDArray__rosidl_typesupport_introspection_c__get_function__NED__neds(
  void * untyped_member, size_t index)
{
  auv_msgs__msg__NED__Sequence * member =
    (auv_msgs__msg__NED__Sequence *)(untyped_member);
  return &member->data[index];
}

bool NEDArray__rosidl_typesupport_introspection_c__resize_function__NED__neds(
  void * untyped_member, size_t size)
{
  auv_msgs__msg__NED__Sequence * member =
    (auv_msgs__msg__NED__Sequence *)(untyped_member);
  auv_msgs__msg__NED__Sequence__fini(member);
  return auv_msgs__msg__NED__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember NEDArray__rosidl_typesupport_introspection_c__NEDArray_message_member_array[1] = {
  {
    "neds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__NEDArray, neds),  // bytes offset in struct
    NULL,  // default value
    NEDArray__rosidl_typesupport_introspection_c__size_function__NED__neds,  // size() function pointer
    NEDArray__rosidl_typesupport_introspection_c__get_const_function__NED__neds,  // get_const(index) function pointer
    NEDArray__rosidl_typesupport_introspection_c__get_function__NED__neds,  // get(index) function pointer
    NEDArray__rosidl_typesupport_introspection_c__resize_function__NED__neds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NEDArray__rosidl_typesupport_introspection_c__NEDArray_message_members = {
  "auv_msgs__msg",  // message namespace
  "NEDArray",  // message name
  1,  // number of fields
  sizeof(auv_msgs__msg__NEDArray),
  NEDArray__rosidl_typesupport_introspection_c__NEDArray_message_member_array,  // message members
  NEDArray__rosidl_typesupport_introspection_c__NEDArray_init_function,  // function to initialize message memory (memory has to be allocated)
  NEDArray__rosidl_typesupport_introspection_c__NEDArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NEDArray__rosidl_typesupport_introspection_c__NEDArray_message_type_support_handle = {
  0,
  &NEDArray__rosidl_typesupport_introspection_c__NEDArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_auv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, NEDArray)() {
  NEDArray__rosidl_typesupport_introspection_c__NEDArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, NED)();
  if (!NEDArray__rosidl_typesupport_introspection_c__NEDArray_message_type_support_handle.typesupport_identifier) {
    NEDArray__rosidl_typesupport_introspection_c__NEDArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NEDArray__rosidl_typesupport_introspection_c__NEDArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
