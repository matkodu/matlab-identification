// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from labust_msgs:srv/DynamicPositioningPrimitiveService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "labust_msgs/srv/detail/dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c.h"
#include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "labust_msgs/srv/detail/dynamic_positioning_primitive_service__functions.h"
#include "labust_msgs/srv/detail/dynamic_positioning_primitive_service__struct.h"


// Include directives for member types
// Member `target_topic`
// Member `heading_topic`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__srv__DynamicPositioningPrimitiveService_Request__init(message_memory);
}

void DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_fini_function(void * message_memory)
{
  labust_msgs__srv__DynamicPositioningPrimitiveService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_message_member_array[14] = {
  {
    "north",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, north),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "east",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, east),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "north_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, north_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "east_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, east_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, depth_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, heading_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, altitude_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_topic_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, target_topic_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_heading_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, track_heading_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_to_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, point_to_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, target_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request, heading_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_message_members = {
  "labust_msgs__srv",  // message namespace
  "DynamicPositioningPrimitiveService_Request",  // message name
  14,  // number of fields
  sizeof(labust_msgs__srv__DynamicPositioningPrimitiveService_Request),
  DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_message_member_array,  // message members
  DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_message_type_support_handle = {
  0,
  &DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, DynamicPositioningPrimitiveService_Request)() {
  if (!DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_message_type_support_handle.typesupport_identifier) {
    DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicPositioningPrimitiveService_Request__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "labust_msgs/srv/detail/dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "labust_msgs/srv/detail/dynamic_positioning_primitive_service__functions.h"
// already included above
// #include "labust_msgs/srv/detail/dynamic_positioning_primitive_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  labust_msgs__srv__DynamicPositioningPrimitiveService_Response__init(message_memory);
}

void DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_fini_function(void * message_memory)
{
  labust_msgs__srv__DynamicPositioningPrimitiveService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs__srv__DynamicPositioningPrimitiveService_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_message_members = {
  "labust_msgs__srv",  // message namespace
  "DynamicPositioningPrimitiveService_Response",  // message name
  1,  // number of fields
  sizeof(labust_msgs__srv__DynamicPositioningPrimitiveService_Response),
  DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_message_member_array,  // message members
  DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_message_type_support_handle = {
  0,
  &DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, DynamicPositioningPrimitiveService_Response)() {
  if (!DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_message_type_support_handle.typesupport_identifier) {
    DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicPositioningPrimitiveService_Response__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "labust_msgs/srv/detail/dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers labust_msgs__srv__detail__dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_service_members = {
  "labust_msgs__srv",  // service namespace
  "DynamicPositioningPrimitiveService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // labust_msgs__srv__detail__dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Request_message_type_support_handle,
  NULL  // response message
  // labust_msgs__srv__detail__dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_Response_message_type_support_handle
};

static rosidl_service_type_support_t labust_msgs__srv__detail__dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_service_type_support_handle = {
  0,
  &labust_msgs__srv__detail__dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, DynamicPositioningPrimitiveService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, DynamicPositioningPrimitiveService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_labust_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, DynamicPositioningPrimitiveService)() {
  if (!labust_msgs__srv__detail__dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_service_type_support_handle.typesupport_identifier) {
    labust_msgs__srv__detail__dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)labust_msgs__srv__detail__dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, DynamicPositioningPrimitiveService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, srv, DynamicPositioningPrimitiveService_Response)()->data;
  }

  return &labust_msgs__srv__detail__dynamic_positioning_primitive_service__rosidl_typesupport_introspection_c__DynamicPositioningPrimitiveService_service_type_support_handle;
}
