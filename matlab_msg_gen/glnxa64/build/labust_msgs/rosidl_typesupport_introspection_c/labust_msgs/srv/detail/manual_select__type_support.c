// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:srv/ManualSelect.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/srv/detail/manual_select__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/srv/detail/manual_select__functions.h"
#include "labust_msgs/srv/detail/manual_select__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__srv__ManualSelect_Request__init(message_memory);
}

void ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_fini_function(void * message_memory)
{
  labust_msgs__srv__ManualSelect_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_message_member_array[1] = {
  {
    "use_generator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__ManualSelect_Request, use_generator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_message_members = {
  "labust_msgs__srv",  // message namespace
  "ManualSelect_Request",  // message name
  1,  // number of fields
  sizeof(labust_msgs__srv__ManualSelect_Request),
  ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_message_member_array,  // message members
  ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_message_type_support_handle = {
  0,
  &ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ManualSelect_Request)() {
  if (!ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_message_type_support_handle.typesupport_identifier) {
    ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ManualSelect_Request__rosidl_typesupport_introspection_c__ManualSelect_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/srv/detail/manual_select__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/srv/detail/manual_select__functions.h"
// already included above
// #include "labust_msgs/srv/detail/manual_select__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__srv__ManualSelect_Response__init(message_memory);
}

void ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_fini_function(void * message_memory)
{
  labust_msgs__srv__ManualSelect_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__ManualSelect_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_message_members = {
  "labust_msgs__srv",  // message namespace
  "ManualSelect_Response",  // message name
  1,  // number of fields
  sizeof(labust_msgs__srv__ManualSelect_Response),
  ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_message_member_array,  // message members
  ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_message_type_support_handle = {
  0,
  &ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ManualSelect_Response)() {
  if (!ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_message_type_support_handle.typesupport_identifier) {
    ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ManualSelect_Response__rosidl_typesupport_introspection_c__ManualSelect_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/srv/detail/manual_select__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__srv__detail__manual_select__rosidl_typesupport_introspection_c__ManualSelect_service_members = {
  "labust_msgs__srv",  // service namespace
  "ManualSelect",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__srv__detail__manual_select__rosidl_typesupport_introspection_c__ManualSelect_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__srv__detail__manual_select__rosidl_typesupport_introspection_c__ManualSelect_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__srv__detail__manual_select__rosidl_typesupport_introspection_c__ManualSelect_service_type_support_handle = {
  0,
  &labust_msgs__srv__detail__manual_select__rosidl_typesupport_introspection_c__ManualSelect_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ManualSelect_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ManualSelect_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ManualSelect)() {
  if (!labust_msgs__srv__detail__manual_select__rosidl_typesupport_introspection_c__ManualSelect_service_type_support_handle.typesupport_identifier) {
    labust_msgs__srv__detail__manual_select__rosidl_typesupport_introspection_c__ManualSelect_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__srv__detail__manual_select__rosidl_typesupport_introspection_c__ManualSelect_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ManualSelect_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, ManualSelect_Response)()->data;
  }

  return &labust_msgs__srv__detail__manual_select__rosidl_typesupport_introspection_c__ManualSelect_service_type_support_handle;
}
