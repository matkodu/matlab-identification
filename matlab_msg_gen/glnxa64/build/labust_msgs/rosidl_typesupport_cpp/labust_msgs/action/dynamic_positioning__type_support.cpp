// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from labust_msgs:action/DynamicPositioning.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicPositioning_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicPositioning_Goal_type_support_ids_t;

static const _DynamicPositioning_Goal_type_support_ids_t _DynamicPositioning_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicPositioning_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicPositioning_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicPositioning_Goal_type_support_symbol_names_t _DynamicPositioning_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, action, DynamicPositioning_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, action, DynamicPositioning_Goal)),
  }
};

typedef struct _DynamicPositioning_Goal_type_support_data_t
{
  void * data[2];
} _DynamicPositioning_Goal_type_support_data_t;

static _DynamicPositioning_Goal_type_support_data_t _DynamicPositioning_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicPositioning_Goal_message_typesupport_map = {
  2,
  "labust_msgs",
  &_DynamicPositioning_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DynamicPositioning_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DynamicPositioning_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DynamicPositioning_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicPositioning_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::action::DynamicPositioning_Goal>()
{
  return &::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, labust_msgs, action, DynamicPositioning_Goal)() {
  return get_message_type_support_handle<labust_msgs::action::DynamicPositioning_Goal>();
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
// #include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
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

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicPositioning_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicPositioning_Result_type_support_ids_t;

static const _DynamicPositioning_Result_type_support_ids_t _DynamicPositioning_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicPositioning_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicPositioning_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicPositioning_Result_type_support_symbol_names_t _DynamicPositioning_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, action, DynamicPositioning_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, action, DynamicPositioning_Result)),
  }
};

typedef struct _DynamicPositioning_Result_type_support_data_t
{
  void * data[2];
} _DynamicPositioning_Result_type_support_data_t;

static _DynamicPositioning_Result_type_support_data_t _DynamicPositioning_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicPositioning_Result_message_typesupport_map = {
  2,
  "labust_msgs",
  &_DynamicPositioning_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DynamicPositioning_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DynamicPositioning_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DynamicPositioning_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicPositioning_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::action::DynamicPositioning_Result>()
{
  return &::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, labust_msgs, action, DynamicPositioning_Result)() {
  return get_message_type_support_handle<labust_msgs::action::DynamicPositioning_Result>();
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
// #include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
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

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicPositioning_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicPositioning_Feedback_type_support_ids_t;

static const _DynamicPositioning_Feedback_type_support_ids_t _DynamicPositioning_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicPositioning_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicPositioning_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicPositioning_Feedback_type_support_symbol_names_t _DynamicPositioning_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, action, DynamicPositioning_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, action, DynamicPositioning_Feedback)),
  }
};

typedef struct _DynamicPositioning_Feedback_type_support_data_t
{
  void * data[2];
} _DynamicPositioning_Feedback_type_support_data_t;

static _DynamicPositioning_Feedback_type_support_data_t _DynamicPositioning_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicPositioning_Feedback_message_typesupport_map = {
  2,
  "labust_msgs",
  &_DynamicPositioning_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DynamicPositioning_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DynamicPositioning_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DynamicPositioning_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicPositioning_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::action::DynamicPositioning_Feedback>()
{
  return &::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, labust_msgs, action, DynamicPositioning_Feedback)() {
  return get_message_type_support_handle<labust_msgs::action::DynamicPositioning_Feedback>();
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
// #include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
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

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicPositioning_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicPositioning_SendGoal_Request_type_support_ids_t;

static const _DynamicPositioning_SendGoal_Request_type_support_ids_t _DynamicPositioning_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicPositioning_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicPositioning_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicPositioning_SendGoal_Request_type_support_symbol_names_t _DynamicPositioning_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, action, DynamicPositioning_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, action, DynamicPositioning_SendGoal_Request)),
  }
};

typedef struct _DynamicPositioning_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DynamicPositioning_SendGoal_Request_type_support_data_t;

static _DynamicPositioning_SendGoal_Request_type_support_data_t _DynamicPositioning_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicPositioning_SendGoal_Request_message_typesupport_map = {
  2,
  "labust_msgs",
  &_DynamicPositioning_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DynamicPositioning_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DynamicPositioning_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DynamicPositioning_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicPositioning_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::action::DynamicPositioning_SendGoal_Request>()
{
  return &::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, labust_msgs, action, DynamicPositioning_SendGoal_Request)() {
  return get_message_type_support_handle<labust_msgs::action::DynamicPositioning_SendGoal_Request>();
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
// #include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
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

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicPositioning_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicPositioning_SendGoal_Response_type_support_ids_t;

static const _DynamicPositioning_SendGoal_Response_type_support_ids_t _DynamicPositioning_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicPositioning_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicPositioning_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicPositioning_SendGoal_Response_type_support_symbol_names_t _DynamicPositioning_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, action, DynamicPositioning_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, action, DynamicPositioning_SendGoal_Response)),
  }
};

typedef struct _DynamicPositioning_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DynamicPositioning_SendGoal_Response_type_support_data_t;

static _DynamicPositioning_SendGoal_Response_type_support_data_t _DynamicPositioning_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicPositioning_SendGoal_Response_message_typesupport_map = {
  2,
  "labust_msgs",
  &_DynamicPositioning_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DynamicPositioning_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DynamicPositioning_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DynamicPositioning_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicPositioning_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::action::DynamicPositioning_SendGoal_Response>()
{
  return &::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, labust_msgs, action, DynamicPositioning_SendGoal_Response)() {
  return get_message_type_support_handle<labust_msgs::action::DynamicPositioning_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
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

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicPositioning_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicPositioning_SendGoal_type_support_ids_t;

static const _DynamicPositioning_SendGoal_type_support_ids_t _DynamicPositioning_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicPositioning_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicPositioning_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicPositioning_SendGoal_type_support_symbol_names_t _DynamicPositioning_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, action, DynamicPositioning_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, action, DynamicPositioning_SendGoal)),
  }
};

typedef struct _DynamicPositioning_SendGoal_type_support_data_t
{
  void * data[2];
} _DynamicPositioning_SendGoal_type_support_data_t;

static _DynamicPositioning_SendGoal_type_support_data_t _DynamicPositioning_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicPositioning_SendGoal_service_typesupport_map = {
  2,
  "labust_msgs",
  &_DynamicPositioning_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DynamicPositioning_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DynamicPositioning_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DynamicPositioning_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicPositioning_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<labust_msgs::action::DynamicPositioning_SendGoal>()
{
  return &::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
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

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicPositioning_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicPositioning_GetResult_Request_type_support_ids_t;

static const _DynamicPositioning_GetResult_Request_type_support_ids_t _DynamicPositioning_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicPositioning_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicPositioning_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicPositioning_GetResult_Request_type_support_symbol_names_t _DynamicPositioning_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, action, DynamicPositioning_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, action, DynamicPositioning_GetResult_Request)),
  }
};

typedef struct _DynamicPositioning_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DynamicPositioning_GetResult_Request_type_support_data_t;

static _DynamicPositioning_GetResult_Request_type_support_data_t _DynamicPositioning_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicPositioning_GetResult_Request_message_typesupport_map = {
  2,
  "labust_msgs",
  &_DynamicPositioning_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DynamicPositioning_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DynamicPositioning_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DynamicPositioning_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicPositioning_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::action::DynamicPositioning_GetResult_Request>()
{
  return &::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, labust_msgs, action, DynamicPositioning_GetResult_Request)() {
  return get_message_type_support_handle<labust_msgs::action::DynamicPositioning_GetResult_Request>();
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
// #include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
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

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicPositioning_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicPositioning_GetResult_Response_type_support_ids_t;

static const _DynamicPositioning_GetResult_Response_type_support_ids_t _DynamicPositioning_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicPositioning_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicPositioning_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicPositioning_GetResult_Response_type_support_symbol_names_t _DynamicPositioning_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, action, DynamicPositioning_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, action, DynamicPositioning_GetResult_Response)),
  }
};

typedef struct _DynamicPositioning_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DynamicPositioning_GetResult_Response_type_support_data_t;

static _DynamicPositioning_GetResult_Response_type_support_data_t _DynamicPositioning_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicPositioning_GetResult_Response_message_typesupport_map = {
  2,
  "labust_msgs",
  &_DynamicPositioning_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DynamicPositioning_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DynamicPositioning_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DynamicPositioning_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicPositioning_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::action::DynamicPositioning_GetResult_Response>()
{
  return &::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, labust_msgs, action, DynamicPositioning_GetResult_Response)() {
  return get_message_type_support_handle<labust_msgs::action::DynamicPositioning_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicPositioning_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicPositioning_GetResult_type_support_ids_t;

static const _DynamicPositioning_GetResult_type_support_ids_t _DynamicPositioning_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicPositioning_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicPositioning_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicPositioning_GetResult_type_support_symbol_names_t _DynamicPositioning_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, action, DynamicPositioning_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, action, DynamicPositioning_GetResult)),
  }
};

typedef struct _DynamicPositioning_GetResult_type_support_data_t
{
  void * data[2];
} _DynamicPositioning_GetResult_type_support_data_t;

static _DynamicPositioning_GetResult_type_support_data_t _DynamicPositioning_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicPositioning_GetResult_service_typesupport_map = {
  2,
  "labust_msgs",
  &_DynamicPositioning_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DynamicPositioning_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DynamicPositioning_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DynamicPositioning_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicPositioning_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<labust_msgs::action::DynamicPositioning_GetResult>()
{
  return &::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
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

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DynamicPositioning_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DynamicPositioning_FeedbackMessage_type_support_ids_t;

static const _DynamicPositioning_FeedbackMessage_type_support_ids_t _DynamicPositioning_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DynamicPositioning_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DynamicPositioning_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DynamicPositioning_FeedbackMessage_type_support_symbol_names_t _DynamicPositioning_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, labust_msgs, action, DynamicPositioning_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, labust_msgs, action, DynamicPositioning_FeedbackMessage)),
  }
};

typedef struct _DynamicPositioning_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DynamicPositioning_FeedbackMessage_type_support_data_t;

static _DynamicPositioning_FeedbackMessage_type_support_data_t _DynamicPositioning_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DynamicPositioning_FeedbackMessage_message_typesupport_map = {
  2,
  "labust_msgs",
  &_DynamicPositioning_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DynamicPositioning_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DynamicPositioning_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DynamicPositioning_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DynamicPositioning_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<labust_msgs::action::DynamicPositioning_FeedbackMessage>()
{
  return &::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, labust_msgs, action, DynamicPositioning_FeedbackMessage)() {
  return get_message_type_support_handle<labust_msgs::action::DynamicPositioning_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace labust_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t DynamicPositioning_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace labust_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<labust_msgs::action::DynamicPositioning>()
{
  using ::labust_msgs::action::rosidl_typesupport_cpp::DynamicPositioning_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  DynamicPositioning_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::labust_msgs::action::DynamicPositioning::Impl::SendGoalService>();
  DynamicPositioning_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::labust_msgs::action::DynamicPositioning::Impl::GetResultService>();
  DynamicPositioning_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::labust_msgs::action::DynamicPositioning::Impl::CancelGoalService>();
  DynamicPositioning_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::labust_msgs::action::DynamicPositioning::Impl::FeedbackMessage>();
  DynamicPositioning_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::labust_msgs::action::DynamicPositioning::Impl::GoalStatusMessage>();
  return &DynamicPositioning_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
