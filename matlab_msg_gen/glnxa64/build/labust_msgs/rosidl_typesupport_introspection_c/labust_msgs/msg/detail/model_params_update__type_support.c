// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:msg/ModelParamsUpdate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/msg/detail/model_params_update__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/msg/detail/model_params_update__functions.h"
#include "labust_msgs/msg/detail/model_params_update__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__msg__ModelParamsUpdate__init(message_memory);
}

void ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_fini_function(void * message_memory)
{
  labust_msgs__msg__ModelParamsUpdate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_message_member_array[7] = {
  {
    "dof",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__ModelParamsUpdate, dof),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alpha",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__ModelParamsUpdate, alpha),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__ModelParamsUpdate, beta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "betaa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__ModelParamsUpdate, betaa),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__ModelParamsUpdate, delta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__ModelParamsUpdate, wn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_linear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__msg__ModelParamsUpdate, use_linear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_message_members = {
  "labust_msgs__msg",  // message namespace
  "ModelParamsUpdate",  // message name
  7,  // number of fields
  sizeof(labust_msgs__msg__ModelParamsUpdate),
  ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_message_member_array,  // message members
  ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_message_type_support_handle = {
  0,
  &ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, ModelParamsUpdate)() {
  if (!ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_message_type_support_handle.typesupport_identifier) {
    ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ModelParamsUpdate__rosidl_typesupport_introspection_c__ModelParamsUpdate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
