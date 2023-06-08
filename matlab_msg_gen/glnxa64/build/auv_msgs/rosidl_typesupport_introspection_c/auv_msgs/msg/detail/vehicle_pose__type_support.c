// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from auv_msgs:msg/VehiclePose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "auv_msgs/msg/detail/vehicle_pose__rosidl_typesupport_introspection_c.h"
#include "auv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "auv_msgs/msg/detail/vehicle_pose__functions.h"
#include "auv_msgs/msg/detail/vehicle_pose__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "auv_msgs/msg/ned.h"
// Member `position`
#include "auv_msgs/msg/detail/ned__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/vector3.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  auv_msgs__msg__VehiclePose__init(message_memory);
}

void VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_fini_function(void * message_memory)
{
  auv_msgs__msg__VehiclePose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__VehiclePose, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__VehiclePose, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_msgs__msg__VehiclePose, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_message_members = {
  "auv_msgs__msg",  // message namespace
  "VehiclePose",  // message name
  3,  // number of fields
  sizeof(auv_msgs__msg__VehiclePose),
  VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_message_member_array,  // message members
  VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_init_function,  // function to initialize message memory (memory has to be allocated)
  VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_message_type_support_handle = {
  0,
  &VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_auv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, VehiclePose)() {
  VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, NED)();
  VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_message_type_support_handle.typesupport_identifier) {
    VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehiclePose__rosidl_typesupport_introspection_c__VehiclePose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
