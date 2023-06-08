// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/NanomodemRange.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/nanomodem_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
labust_msgs__msg__NanomodemRange__init(labust_msgs__msg__NanomodemRange * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    labust_msgs__msg__NanomodemRange__fini(msg);
    return false;
  }
  // range
  // range_m
  // id
  return true;
}

void
labust_msgs__msg__NanomodemRange__fini(labust_msgs__msg__NanomodemRange * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // range
  // range_m
  // id
}

labust_msgs__msg__NanomodemRange *
labust_msgs__msg__NanomodemRange__create()
{
  labust_msgs__msg__NanomodemRange * msg = (labust_msgs__msg__NanomodemRange *)malloc(sizeof(labust_msgs__msg__NanomodemRange));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__NanomodemRange));
  bool success = labust_msgs__msg__NanomodemRange__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__NanomodemRange__destroy(labust_msgs__msg__NanomodemRange * msg)
{
  if (msg) {
    labust_msgs__msg__NanomodemRange__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__NanomodemRange__Sequence__init(labust_msgs__msg__NanomodemRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__NanomodemRange * data = NULL;
  if (size) {
    data = (labust_msgs__msg__NanomodemRange *)calloc(size, sizeof(labust_msgs__msg__NanomodemRange));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__NanomodemRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__NanomodemRange__fini(&data[i - 1]);
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
labust_msgs__msg__NanomodemRange__Sequence__fini(labust_msgs__msg__NanomodemRange__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__NanomodemRange__fini(&array->data[i]);
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

labust_msgs__msg__NanomodemRange__Sequence *
labust_msgs__msg__NanomodemRange__Sequence__create(size_t size)
{
  labust_msgs__msg__NanomodemRange__Sequence * array = (labust_msgs__msg__NanomodemRange__Sequence *)malloc(sizeof(labust_msgs__msg__NanomodemRange__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__NanomodemRange__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__NanomodemRange__Sequence__destroy(labust_msgs__msg__NanomodemRange__Sequence * array)
{
  if (array) {
    labust_msgs__msg__NanomodemRange__Sequence__fini(array);
  }
  free(array);
}
