// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from geographic_msgs:srv/UpdateGeographicMap.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "geographic_msgs/srv/detail/update_geographic_map__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace geographic_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _UpdateGeographicMap_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpdateGeographicMap_Request_type_support_ids_t;

static const _UpdateGeographicMap_Request_type_support_ids_t _UpdateGeographicMap_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _UpdateGeographicMap_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpdateGeographicMap_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpdateGeographicMap_Request_type_support_symbol_names_t _UpdateGeographicMap_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, geographic_msgs, srv, UpdateGeographicMap_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, srv, UpdateGeographicMap_Request)),
  }
};

typedef struct _UpdateGeographicMap_Request_type_support_data_t
{
  void * data[2];
} _UpdateGeographicMap_Request_type_support_data_t;

static _UpdateGeographicMap_Request_type_support_data_t _UpdateGeographicMap_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpdateGeographicMap_Request_message_typesupport_map = {
  2,
  "geographic_msgs",
  &_UpdateGeographicMap_Request_message_typesupport_ids.typesupport_identifier[0],
  &_UpdateGeographicMap_Request_message_typesupport_symbol_names.symbol_name[0],
  &_UpdateGeographicMap_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UpdateGeographicMap_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpdateGeographicMap_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace geographic_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::srv::UpdateGeographicMap_Request>()
{
  return &::geographic_msgs::srv::rosidl_typesupport_cpp::UpdateGeographicMap_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, geographic_msgs, srv, UpdateGeographicMap_Request)() {
  return get_message_type_support_handle<geographic_msgs::srv::UpdateGeographicMap_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace geographic_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _UpdateGeographicMap_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpdateGeographicMap_Response_type_support_ids_t;

static const _UpdateGeographicMap_Response_type_support_ids_t _UpdateGeographicMap_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _UpdateGeographicMap_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpdateGeographicMap_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpdateGeographicMap_Response_type_support_symbol_names_t _UpdateGeographicMap_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, geographic_msgs, srv, UpdateGeographicMap_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, srv, UpdateGeographicMap_Response)),
  }
};

typedef struct _UpdateGeographicMap_Response_type_support_data_t
{
  void * data[2];
} _UpdateGeographicMap_Response_type_support_data_t;

static _UpdateGeographicMap_Response_type_support_data_t _UpdateGeographicMap_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpdateGeographicMap_Response_message_typesupport_map = {
  2,
  "geographic_msgs",
  &_UpdateGeographicMap_Response_message_typesupport_ids.typesupport_identifier[0],
  &_UpdateGeographicMap_Response_message_typesupport_symbol_names.symbol_name[0],
  &_UpdateGeographicMap_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UpdateGeographicMap_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpdateGeographicMap_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace geographic_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::srv::UpdateGeographicMap_Response>()
{
  return &::geographic_msgs::srv::rosidl_typesupport_cpp::UpdateGeographicMap_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, geographic_msgs, srv, UpdateGeographicMap_Response)() {
  return get_message_type_support_handle<geographic_msgs::srv::UpdateGeographicMap_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace geographic_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _UpdateGeographicMap_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UpdateGeographicMap_type_support_ids_t;

static const _UpdateGeographicMap_type_support_ids_t _UpdateGeographicMap_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _UpdateGeographicMap_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UpdateGeographicMap_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UpdateGeographicMap_type_support_symbol_names_t _UpdateGeographicMap_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, geographic_msgs, srv, UpdateGeographicMap)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, srv, UpdateGeographicMap)),
  }
};

typedef struct _UpdateGeographicMap_type_support_data_t
{
  void * data[2];
} _UpdateGeographicMap_type_support_data_t;

static _UpdateGeographicMap_type_support_data_t _UpdateGeographicMap_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UpdateGeographicMap_service_typesupport_map = {
  2,
  "geographic_msgs",
  &_UpdateGeographicMap_service_typesupport_ids.typesupport_identifier[0],
  &_UpdateGeographicMap_service_typesupport_symbol_names.symbol_name[0],
  &_UpdateGeographicMap_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t UpdateGeographicMap_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UpdateGeographicMap_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace geographic_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<geographic_msgs::srv::UpdateGeographicMap>()
{
  return &::geographic_msgs::srv::rosidl_typesupport_cpp::UpdateGeographicMap_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
