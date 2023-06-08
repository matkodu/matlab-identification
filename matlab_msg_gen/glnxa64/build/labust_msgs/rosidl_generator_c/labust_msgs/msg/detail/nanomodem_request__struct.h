// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/NanomodemRequest.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_REQUEST__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BRDCST'.
enum
{
  labust_msgs__msg__NanomodemRequest__BRDCST = 1
};

/// Constant 'UNICST'.
enum
{
  labust_msgs__msg__NanomodemRequest__UNICST = 2
};

/// Constant 'PINGID'.
enum
{
  labust_msgs__msg__NanomodemRequest__PINGID = 3
};

/// Constant 'VOLTID'.
enum
{
  labust_msgs__msg__NanomodemRequest__VOLTID = 4
};

/// Constant 'CHNGID'.
enum
{
  labust_msgs__msg__NanomodemRequest__CHNGID = 5
};

/// Constant 'STATUS'.
enum
{
  labust_msgs__msg__NanomodemRequest__STATUS = 6
};

/// Constant 'UNICSTACK'.
enum
{
  labust_msgs__msg__NanomodemRequest__UNICSTACK = 7
};

/// Constant 'TESTMSG'.
enum
{
  labust_msgs__msg__NanomodemRequest__TESTMSG = 8
};

/// Constant 'ECHOMSG'.
enum
{
  labust_msgs__msg__NanomodemRequest__ECHOMSG = 9
};

/// Constant 'QUALITY'.
enum
{
  labust_msgs__msg__NanomodemRequest__QUALITY = 10
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'msg'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/NanomodemRequest in the package labust_msgs.
typedef struct labust_msgs__msg__NanomodemRequest
{
  std_msgs__msg__Header header;
  uint8_t req_type;
  uint8_t scheduled;
  rosidl_runtime_c__uint8__Sequence msg;
  uint8_t id;
} labust_msgs__msg__NanomodemRequest;

// Struct for a sequence of labust_msgs__msg__NanomodemRequest.
typedef struct labust_msgs__msg__NanomodemRequest__Sequence
{
  labust_msgs__msg__NanomodemRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__NanomodemRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_REQUEST__STRUCT_H_
