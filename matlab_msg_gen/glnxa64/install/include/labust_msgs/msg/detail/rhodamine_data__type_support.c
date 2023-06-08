// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:msg/RhodamineData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/msg/detail/rhodamine_data__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/msg/detail/rhodamine_data__functions.h"
#include "labust_msgs/msg/detail/rhodamine_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geographic_msgs/msg/geo_point.h"
// Member `position`
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"
// Member `adc`
#include "labust_msgs/msg/rhodamine_adc.h"
// Member `adc`
#include "labust_msgs/msg/detail/rhodamine_adc__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__msg__RhodamineData__init(message_memory);
}

void RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_fini_function(void * message_memory)
{
  labust_msgs__msg__RhodamineData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__RhodamineData, header),  // bytes offset in struct
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
    offsetof(labust_msgs__msg__RhodamineData, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "adc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__RhodamineData, adc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_members = {
  "labust_msgs__msg",  // message namespace
  "RhodamineData",  // message name
  3,  // number of fields
  sizeof(labust_msgs__msg__RhodamineData),
  RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_member_array,  // message members
  RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_init_function,  // function to initialize message memory (memory has to be allocated)
  RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_type_support_handle = {
  0,
  &RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, RhodamineData)() {
  RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, RhodamineAdc)();
  if (!RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_type_support_handle.typesupport_identifier) {
    RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RhodamineData__rosidl_typesupport_introspection_c__RhodamineData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
