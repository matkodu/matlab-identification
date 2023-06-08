// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:srv/GetRoutePlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/srv/detail/get_route_plan__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/srv/detail/get_route_plan__functions.h"
#include "geographic_msgs/srv/detail/get_route_plan__struct.h"


// Include directives for member types
// Member `network`
// Member `start`
// Member `goal`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `network`
// Member `start`
// Member `goal`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__GetRoutePlan_Request__init(message_memory);
}

void GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_fini_function(void * message_memory)
{
  geographic_msgs__srv__GetRoutePlan_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_member_array[3] = {
  {
    "network",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Request, network),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Request, start),  // bytes offset in struct
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
    offsetof(geographic_msgs__srv__GetRoutePlan_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_members = {
  "geographic_msgs__srv",  // message namespace
  "GetRoutePlan_Request",  // message name
  3,  // number of fields
  sizeof(geographic_msgs__srv__GetRoutePlan_Request),
  GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_member_array,  // message members
  GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle = {
  0,
  &GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Request)() {
  GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle.typesupport_identifier) {
    GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetRoutePlan_Request__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__functions.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"
// Member `plan`
#include "geographic_msgs/msg/route_path.h"
// Member `plan`
#include "geographic_msgs/msg/detail/route_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__GetRoutePlan_Response__init(message_memory);
}

void GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_fini_function(void * message_memory)
{
  geographic_msgs__srv__GetRoutePlan_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__GetRoutePlan_Response, plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_members = {
  "geographic_msgs__srv",  // message namespace
  "GetRoutePlan_Response",  // message name
  3,  // number of fields
  sizeof(geographic_msgs__srv__GetRoutePlan_Response),
  GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_member_array,  // message members
  GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle = {
  0,
  &GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Response)() {
  GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, RoutePath)();
  if (!GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle.typesupport_identifier) {
    GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetRoutePlan_Response__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_members = {
  "geographic_msgs__srv",  // service namespace
  "GetRoutePlan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_Request_message_type_support_handle,
  NULL  // response message
  // geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_Response_message_type_support_handle
};

static rosidl_service_type_support_t geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_type_support_handle = {
  0,
  &geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan)() {
  if (!geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, GetRoutePlan_Response)()->data;
  }

  return &geographic_msgs__srv__detail__get_route_plan__rosidl_typesupport_introspection_c__GetRoutePlan_service_type_support_handle;
}
