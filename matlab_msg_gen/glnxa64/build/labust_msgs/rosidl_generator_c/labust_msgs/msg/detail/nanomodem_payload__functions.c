// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/NanomodemPayload.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/nanomodem_payload__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `msg`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
labust_msgs__msg__NanomodemPayload__init(labust_msgs__msg__NanomodemPayload * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    labust_msgs__msg__NanomodemPayload__fini(msg);
    return false;
  }
  // msg
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->msg, 0)) {
    labust_msgs__msg__NanomodemPayload__fini(msg);
    return false;
  }
  // sender_id
  // msg_type
  return true;
}

void
labust_msgs__msg__NanomodemPayload__fini(labust_msgs__msg__NanomodemPayload * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // msg
  rosidl_runtime_c__uint8__Sequence__fini(&msg->msg);
  // sender_id
  // msg_type
}

labust_msgs__msg__NanomodemPayload *
labust_msgs__msg__NanomodemPayload__create()
{
  labust_msgs__msg__NanomodemPayload * msg = (labust_msgs__msg__NanomodemPayload *)malloc(sizeof(labust_msgs__msg__NanomodemPayload));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__NanomodemPayload));
  bool success = labust_msgs__msg__NanomodemPayload__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__NanomodemPayload__destroy(labust_msgs__msg__NanomodemPayload * msg)
{
  if (msg) {
    labust_msgs__msg__NanomodemPayload__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__NanomodemPayload__Sequence__init(labust_msgs__msg__NanomodemPayload__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__NanomodemPayload * data = NULL;
  if (size) {
    data = (labust_msgs__msg__NanomodemPayload *)calloc(size, sizeof(labust_msgs__msg__NanomodemPayload));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__NanomodemPayload__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__NanomodemPayload__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
labust_msgs__msg__NanomodemPayload__Sequence__fini(labust_msgs__msg__NanomodemPayload__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__NanomodemPayload__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

labust_msgs__msg__NanomodemPayload__Sequence *
labust_msgs__msg__NanomodemPayload__Sequence__create(size_t size)
{
  labust_msgs__msg__NanomodemPayload__Sequence * array = (labust_msgs__msg__NanomodemPayload__Sequence *)malloc(sizeof(labust_msgs__msg__NanomodemPayload__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__NanomodemPayload__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__NanomodemPayload__Sequence__destroy(labust_msgs__msg__NanomodemPayload__Sequence * array)
{
  if (array) {
    labust_msgs__msg__NanomodemPayload__Sequence__fini(array);
  }
  free(array);
}
