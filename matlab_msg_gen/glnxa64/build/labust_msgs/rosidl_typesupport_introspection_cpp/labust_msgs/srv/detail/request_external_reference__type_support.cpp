// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:srv/RequestExternalReference.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "labust_msgs/srv/detail/request_external_reference__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace labust_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RequestExternalReference_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) labust_msgs::srv::RequestExternalReference_Request(_init);
}

void RequestExternalReference_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<labust_msgs::srv::RequestExternalReference_Request *>(message_memory);
  typed_message->~RequestExternalReference_Request();
}

size_t size_function__RequestExternalReference_Request__control_modes(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__RequestExternalReference_Request__control_modes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__RequestExternalReference_Request__control_modes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 6> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RequestExternalReference_Request_message_member_array[2] = {
  {
    "control_modes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::srv::RequestExternalReference_Request, control_modes),  // bytes offset in struct
    nullptr,  // default value
    size_function__RequestExternalReference_Request__control_modes,  // size() function pointer
    get_const_function__RequestExternalReference_Request__control_modes,  // get_const(index) function pointer
    get_function__RequestExternalReference_Request__control_modes,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "identity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::srv::RequestExternalReference_Request, identity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RequestExternalReference_Request_message_members = {
  "labust_msgs::srv",  // message namespace
  "RequestExternalReference_Request",  // message name
  2,  // number of fields
  sizeof(labust_msgs::srv::RequestExternalReference_Request),
  RequestExternalReference_Request_message_member_array,  // message members
  RequestExternalReference_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RequestExternalReference_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RequestExternalReference_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RequestExternalReference_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace labust_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::srv::RequestExternalReference_Request>()
{
  return &::labust_msgs::srv::rosidl_typesupport_introspection_cpp::RequestExternalReference_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, srv, RequestExternalReference_Request)() {
  return &::labust_msgs::srv::rosidl_typesupport_introspection_cpp::RequestExternalReference_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "labust_msgs/srv/detail/request_external_reference__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace labust_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RequestExternalReference_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) labust_msgs::srv::RequestExternalReference_Response(_init);
}

void RequestExternalReference_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<labust_msgs::srv::RequestExternalReference_Response *>(message_memory);
  typed_message->~RequestExternalReference_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RequestExternalReference_Response_message_member_array[3] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::srv::RequestExternalReference_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "identity_token",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::srv::RequestExternalReference_Response, identity_token),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(labust_msgs::srv::RequestExternalReference_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RequestExternalReference_Response_message_members = {
  "labust_msgs::srv",  // message namespace
  "RequestExternalReference_Response",  // message name
  3,  // number of fields
  sizeof(labust_msgs::srv::RequestExternalReference_Response),
  RequestExternalReference_Response_message_member_array,  // message members
  RequestExternalReference_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RequestExternalReference_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RequestExternalReference_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RequestExternalReference_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace labust_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::srv::RequestExternalReference_Response>()
{
  return &::labust_msgs::srv::rosidl_typesupport_introspection_cpp::RequestExternalReference_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, srv, RequestExternalReference_Response)() {
  return &::labust_msgs::srv::rosidl_typesupport_introspection_cpp::RequestExternalReference_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "labust_msgs/srv/detail/request_external_reference__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace labust_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RequestExternalReference_service_members = {
  "labust_msgs::srv",  // service namespace
  "RequestExternalReference",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<labust_msgs::srv::RequestExternalReference>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t RequestExternalReference_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RequestExternalReference_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace labust_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<labust_msgs::srv::RequestExternalReference>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::labust_msgs::srv::rosidl_typesupport_introspection_cpp::RequestExternalReference_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::labust_msgs::srv::RequestExternalReference_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::labust_msgs::srv::RequestExternalReference_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, srv, RequestExternalReference)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<labust_msgs::srv::RequestExternalReference>();
}

#ifdef __cplusplus
}
#endif
