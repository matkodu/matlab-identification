// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from labust_msgs:msg/CourseKeepingUA.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "labust_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "labust_msgs/msg/detail/course_keeping_ua__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace labust_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _CourseKeepingUA_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CourseKeepingUA_type_support_ids_t;

static const _CourseKeepingUA_type_support_ids_t _CourseKeepingUA_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CourseKeepingUA_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CourseKeepingUA_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CourseKeepingUA_type_support_symbol_names_t _CourseKeepingUA_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, labust_msgs, msg, CourseKeepingUA)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, labust_msgs, msg, CourseKeepingUA)),
  }
};

typedef struct _CourseKeepingUA_type_support_data_t
{
  void * data[2];
} _CourseKeepingUA_type_support_data_t;

static _CourseKeepingUA_type_support_data_t _CourseKeepingUA_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CourseKeepingUA_message_typesupport_map = {
  2,
  "labust_msgs",
  &_CourseKeepingUA_message_typesupport_ids.typesupport_identifier[0],
  &_CourseKeepingUA_message_typesupport_symbol_names.symbol_name[0],
  &_CourseKeepingUA_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CourseKeepingUA_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CourseKeepingUA_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace labust_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_labust_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, labust_msgs, msg, CourseKeepingUA)() {
  return &::labust_msgs::msg::rosidl_typesupport_c::CourseKeepingUA_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
