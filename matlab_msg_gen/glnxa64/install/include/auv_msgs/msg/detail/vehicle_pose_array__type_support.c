// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from auv_msgs:msg/VehiclePoseArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "auv_msgs/msg/detail/vehicle_pose_array__rosidl_typesupport_introspection_c.h"
#include "auv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "auv_msgs/msg/detail/vehicle_pose_array__functions.h"
#include "auv_msgs/msg/detail/vehicle_pose_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "auv_msgs/msg/vehicle_pose.h"
// Member `poses`
#include "auv_msgs/msg/detail/vehicle_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  auv_msgs__msg__VehiclePoseArray__init(message_memory);
}

void VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_fini_function(void * message_memory)
{
  auv_msgs__msg__VehiclePoseArray__fini(message_memory);
}

size_t VehiclePoseArray__rosidl_typesupport_introspection_c__size_function__VehiclePose__poses(
  const void * untyped_member)
{
  const auv_msgs__msg__VehiclePose__Sequence * member =
    (const auv_msgs__msg__VehiclePose__Sequence *)(untyped_member);
  return member->size;
}

const void * VehiclePoseArray__rosidl_typesupport_introspection_c__get_const_function__VehiclePose__poses(
  const void * untyped_member, size_t index)
{
  const auv_msgs__msg__VehiclePose__Sequence * member =
    (const auv_msgs__msg__VehiclePose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VehiclePoseArray__rosidl_typesupport_introspection_c__get_function__VehiclePose__poses(
  void * untyped_member, size_t index)
{
  auv_msgs__msg__VehiclePose__Sequence * member =
    (auv_msgs__msg__VehiclePose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VehiclePoseArray__rosidl_typesupport_introspection_c__resize_function__VehiclePose__poses(
  void * untyped_member, size_t size)
{
  auv_msgs__msg__VehiclePose__Sequence * member =
    (auv_msgs__msg__VehiclePose__Sequence *)(untyped_member);
  auv_msgs__msg__VehiclePose__Sequence__fini(member);
  return auv_msgs__msg__VehiclePose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__VehiclePoseArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__VehiclePoseArray, poses),  // bytes offset in struct
    NULL,  // default value
    VehiclePoseArray__rosidl_typesupport_introspection_c__size_function__VehiclePose__poses,  // size() function pointer
    VehiclePoseArray__rosidl_typesupport_introspection_c__get_const_function__VehiclePose__poses,  // get_const(index) function pointer
    VehiclePoseArray__rosidl_typesupport_introspection_c__get_function__VehiclePose__poses,  // get(index) function pointer
    VehiclePoseArray__rosidl_typesupport_introspection_c__resize_function__VehiclePose__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_message_members = {
  "auv_msgs__msg",  // message namespace
  "VehiclePoseArray",  // message name
  2,  // number of fields
  sizeof(auv_msgs__msg__VehiclePoseArray),
  VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_message_member_array,  // message members
  VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_init_function,  // function to initialize message memory (memory has to be allocated)
  VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_message_type_support_handle = {
  0,
  &VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_auv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, VehiclePoseArray)() {
  VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, VehiclePose)();
  if (!VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_message_type_support_handle.typesupport_identifier) {
    VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehiclePoseArray__rosidl_typesupport_introspection_c__VehiclePoseArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
