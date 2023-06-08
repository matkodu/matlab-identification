// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:msg/NavStsReq.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/msg/detail/nav_sts_req__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/msg/detail/nav_sts_req__functions.h"
#include "labust_msgs/msg/detail/nav_sts_req__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `global_position`
// Member `origin`
#include "geographic_msgs/msg/geo_point.h"
// Member `global_position`
// Member `origin`
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "labust_msgs/msg/goal_descriptor.h"
// Member `goal`
#include "labust_msgs/msg/detail/goal_descriptor__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "auv_msgs/msg/ned.h"
// Member `position`
#include "auv_msgs/msg/detail/ned__rosidl_typesupport_introspection_c.h"
// Member `body_velocity`
// Member `gbody_velocity`
#include "geometry_msgs/msg/point.h"
// Member `body_velocity`
// Member `gbody_velocity`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
// Member `orientation_rate`
// Member `orientation_tolerance`
#include "labust_msgs/msg/rpy.h"
// Member `orientation`
// Member `orientation_rate`
// Member `orientation_tolerance`
#include "labust_msgs/msg/detail/rpy__rosidl_typesupport_introspection_c.h"
// Member `position_tolerance`
#include "geometry_msgs/msg/vector3.h"
// Member `position_tolerance`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `disable_axis`
#include "labust_msgs/msg/bool6_axis.h"
// Member `disable_axis`
#include "labust_msgs/msg/detail/bool6_axis__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__msg__NavStsReq__init(message_memory);
}

void NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_fini_function(void * message_memory)
{
  labust_msgs__msg__NavStsReq__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, global_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "origin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, origin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, goal),  // bytes offset in struct
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
    offsetof(labust_msgs__msg__NavStsReq, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, body_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gbody_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, gbody_velocity),  // bytes offset in struct
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
    offsetof(labust_msgs__msg__NavStsReq, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, orientation_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, position_tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, orientation_tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disable_axis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__NavStsReq, disable_axis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_members = {
  "labust_msgs__msg",  // message namespace
  "NavStsReq",  // message name
  13,  // number of fields
  sizeof(labust_msgs__msg__NavStsReq),
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array,  // message members
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_init_function,  // function to initialize message memory (memory has to be allocated)
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_type_support_handle = {
  0,
  &NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, NavStsReq)() {
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, GoalDescriptor)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_msgs, msg, NED)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, RPY)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, RPY)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, RPY)();
  NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, Bool6Axis)();
  if (!NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_type_support_handle.typesupport_identifier) {
    NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NavStsReq__rosidl_typesupport_introspection_c__NavStsReq_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
