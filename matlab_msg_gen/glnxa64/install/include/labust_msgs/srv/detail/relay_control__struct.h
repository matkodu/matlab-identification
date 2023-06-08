// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:srv/RelayControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__STRUCT_H_
#define LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/RelayControl in the package labust_msgs.
typedef struct labust_msgs__srv__RelayControl_Request
{
  uint8_t relay_num;
  bool relay_state;
  uint8_t timeout;
} labust_msgs__srv__RelayControl_Request;

// Struct for a sequence of labust_msgs__srv__RelayControl_Request.
typedef struct labust_msgs__srv__RelayControl_Request__Sequence
{
  labust_msgs__srv__RelayControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RelayControl_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RelayControl in the package labust_msgs.
typedef struct labust_msgs__srv__RelayControl_Response
{
  bool result;
} labust_msgs__srv__RelayControl_Response;

// Struct for a sequence of labust_msgs__srv__RelayControl_Response.
typedef struct labust_msgs__srv__RelayControl_Response__Sequence
{
  labust_msgs__srv__RelayControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__srv__RelayControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__STRUCT_H_
