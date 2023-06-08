// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:srv/ConfigureVelocityController.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/srv/detail/configure_velocity_controller__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/srv/detail/configure_velocity_controller__functions.h"
#include "labust_msgs/srv/detail/configure_velocity_controller__struct.h"


// Include directives for member types
// Member `identity_token`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__srv__ConfigureVelocityController_Request__init(message_memory);
}

void ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_fini_function(void * message_memory)
{
  labust_msgs__srv__ConfigureVelocityController_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_message_member_array[2] = {
  {
    "identity_token",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__ConfigureVelocityController_Request, identity_token),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__ConfigureVelocityController_Request, desired_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_message_members = {
  "labust_msgs__srv",  // message namespace
  "ConfigureVelocityController_Request",  // message name
  2,  // number of fields
  sizeof(labust_msgs__srv__ConfigureVelocityController_Request),
  ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_message_member_array,  // message members
  ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_message_type_support_handle = {
  0,
  &ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ConfigureVelocityController_Request)() {
  if (!ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_message_type_support_handle.typesupport_identifier) {
    ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConfigureVelocityController_Request__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/srv/detail/configure_velocity_controller__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/srv/detail/configure_velocity_controller__functions.h"
// already included above
// #include "labust_msgs/srv/detail/configure_velocity_controller__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__srv__ConfigureVelocityController_Response__init(message_memory);
}

void ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_fini_function(void * message_memory)
{
  labust_msgs__srv__ConfigureVelocityController_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__ConfigureVelocityController_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_message_members = {
  "labust_msgs__srv",  // message namespace
  "ConfigureVelocityController_Response",  // message name
  1,  // number of fields
  sizeof(labust_msgs__srv__ConfigureVelocityController_Response),
  ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_message_member_array,  // message members
  ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_message_type_support_handle = {
  0,
  &ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ConfigureVelocityController_Response)() {
  if (!ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_message_type_support_handle.typesupport_identifier) {
    ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConfigureVelocityController_Response__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/srv/detail/configure_velocity_controller__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__srv__detail__configure_velocity_controller__rosidl_typesupport_introspection_c__ConfigureVelocityController_service_members = {
  "labust_msgs__srv",  // service namespace
  "ConfigureVelocityController",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__srv__detail__configure_velocity_controller__rosidl_typesupport_introspection_c__ConfigureVelocityController_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__srv__detail__configure_velocity_controller__rosidl_typesupport_introspection_c__ConfigureVelocityController_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__srv__detail__configure_velocity_controller__rosidl_typesupport_introspection_c__ConfigureVelocityController_service_type_support_handle = {
  0,
  &labust_msgs__srv__detail__configure_velocity_controller__rosidl_typesupport_introspection_c__ConfigureVelocityController_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ConfigureVelocityController_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ConfigureVelocityController_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ConfigureVelocityController)() {
  if (!labust_msgs__srv__detail__configure_velocity_controller__rosidl_typesupport_introspection_c__ConfigureVelocityController_service_type_support_handle.typesupport_identifier) {
    labust_msgs__srv__detail__configure_velocity_controller__rosidl_typesupport_introspection_c__ConfigureVelocityController_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__srv__detail__configure_velocity_controller__rosidl_typesupport_introspection_c__ConfigureVelocityController_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ConfigureVelocityController_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ConfigureVelocityController_Response)()->data;
  }

  return &labust_msgs__srv__detail__configure_velocity_controller__rosidl_typesupport_introspection_c__ConfigureVelocityController_service_type_support_handle;
}
