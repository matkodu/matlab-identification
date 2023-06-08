// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/NanomodemTDOA.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/nanomodem_tdoa__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `modem_times`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
labust_msgs__msg__NanomodemTDOA__init(labust_msgs__msg__NanomodemTDOA * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    labust_msgs__msg__NanomodemTDOA__fini(msg);
    return false;
  }
  // fpga_time
  // modem_times
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->modem_times, 0)) {
    labust_msgs__msg__NanomodemTDOA__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__NanomodemTDOA__fini(labust_msgs__msg__NanomodemTDOA * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fpga_time
  // modem_times
  rosidl_runtime_c__uint64__Sequence__fini(&msg->modem_times);
}

labust_msgs__msg__NanomodemTDOA *
labust_msgs__msg__NanomodemTDOA__create()
{
  labust_msgs__msg__NanomodemTDOA * msg = (labust_msgs__msg__NanomodemTDOA *)malloc(sizeof(labust_msgs__msg__NanomodemTDOA));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__NanomodemTDOA));
  bool success = labust_msgs__msg__NanomodemTDOA__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__NanomodemTDOA__destroy(labust_msgs__msg__NanomodemTDOA * msg)
{
  if (msg) {
    labust_msgs__msg__NanomodemTDOA__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__NanomodemTDOA__Sequence__init(labust_msgs__msg__NanomodemTDOA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__NanomodemTDOA * data = NULL;
  if (size) {
    data = (labust_msgs__msg__NanomodemTDOA *)calloc(size, sizeof(labust_msgs__msg__NanomodemTDOA));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__NanomodemTDOA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__NanomodemTDOA__fini(&data[i - 1]);
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
labust_msgs__msg__NanomodemTDOA__Sequence__fini(labust_msgs__msg__NanomodemTDOA__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__NanomodemTDOA__fini(&array->data[i]);
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

labust_msgs__msg__NanomodemTDOA__Sequence *
labust_msgs__msg__NanomodemTDOA__Sequence__create(size_t size)
{
  labust_msgs__msg__NanomodemTDOA__Sequence * array = (labust_msgs__msg__NanomodemTDOA__Sequence *)malloc(sizeof(labust_msgs__msg__NanomodemTDOA__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__NanomodemTDOA__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__NanomodemTDOA__Sequence__destroy(labust_msgs__msg__NanomodemTDOA__Sequence * array)
{
  if (array) {
    labust_msgs__msg__NanomodemTDOA__Sequence__fini(array);
  }
  free(array);
}
