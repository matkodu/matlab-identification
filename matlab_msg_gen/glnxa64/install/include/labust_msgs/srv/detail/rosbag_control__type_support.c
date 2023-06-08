// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:srv/RosbagControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/srv/detail/rosbag_control__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/srv/detail/rosbag_control__functions.h"
#include "labust_msgs/srv/detail/rosbag_control__struct.h"


// Include directives for member types
// Member `action`
// Member `bag_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__srv__RosbagControl_Request__init(message_memory);
}

void RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_fini_function(void * message_memory)
{
  labust_msgs__srv__RosbagControl_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_message_member_array[2] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__RosbagControl_Request, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bag_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__RosbagControl_Request, bag_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_message_members = {
  "labust_msgs__srv",  // message namespace
  "RosbagControl_Request",  // message name
  2,  // number of fields
  sizeof(labust_msgs__srv__RosbagControl_Request),
  RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_message_member_array,  // message members
  RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_message_type_support_handle = {
  0,
  &RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, RosbagControl_Request)() {
  if (!RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_message_type_support_handle.typesupport_identifier) {
    RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RosbagControl_Request__rosidl_typesupport_introspection_c__RosbagControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/srv/detail/rosbag_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/srv/detail/rosbag_control__functions.h"
// already included above
// #include "labust_msgs/srv/detail/rosbag_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__srv__RosbagControl_Response__init(message_memory);
}

void RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_fini_function(void * message_memory)
{
  labust_msgs__srv__RosbagControl_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__RosbagControl_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_message_members = {
  "labust_msgs__srv",  // message namespace
  "RosbagControl_Response",  // message name
  1,  // number of fields
  sizeof(labust_msgs__srv__RosbagControl_Response),
  RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_message_member_array,  // message members
  RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_message_type_support_handle = {
  0,
  &RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, RosbagControl_Response)() {
  if (!RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_message_type_support_handle.typesupport_identifier) {
    RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RosbagControl_Response__rosidl_typesupport_introspection_c__RosbagControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/srv/detail/rosbag_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__srv__detail__rosbag_control__rosidl_typesupport_introspection_c__RosbagControl_service_members = {
  "labust_msgs__srv",  // service namespace
  "RosbagControl",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__srv__detail__rosbag_control__rosidl_typesupport_introspection_c__RosbagControl_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__srv__detail__rosbag_control__rosidl_typesupport_introspection_c__RosbagControl_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__srv__detail__rosbag_control__rosidl_typesupport_introspection_c__RosbagControl_service_type_support_handle = {
  0,
  &labust_msgs__srv__detail__rosbag_control__rosidl_typesupport_introspection_c__RosbagControl_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, RosbagControl_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, RosbagControl_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, RosbagControl)() {
  if (!labust_msgs__srv__detail__rosbag_control__rosidl_typesupport_introspection_c__RosbagControl_service_type_support_handle.typesupport_identifier) {
    labust_msgs__srv__detail__rosbag_control__rosidl_typesupport_introspection_c__RosbagControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__srv__detail__rosbag_control__rosidl_typesupport_introspection_c__RosbagControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, RosbagControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, RosbagControl_Response)()->data;
  }

  return &labust_msgs__srv__detail__rosbag_control__rosidl_typesupport_introspection_c__RosbagControl_service_type_support_handle;
}
