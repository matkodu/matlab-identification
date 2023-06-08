// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auv_msgs:msg/NED.idl
// generated code does not contain a copyright notice
#include "auv_msgs/msg/detail/ned__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
auv_msgs__msg__NED__init(auv_msgs__msg__NED * msg)
{
  if (!msg) {
    return false;
  }
  // north
  // east
  // depth
  return true;
}

void
auv_msgs__msg__NED__fini(auv_msgs__msg__NED * msg)
{
  if (!msg) {
    return;
  }
  // north
  // east
  // depth
}

auv_msgs__msg__NED *
auv_msgs__msg__NED__create()
{
  auv_msgs__msg__NED * msg = (auv_msgs__msg__NED *)malloc(sizeof(auv_msgs__msg__NED));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auv_msgs__msg__NED));
  bool success = auv_msgs__msg__NED__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
auv_msgs__msg__NED__destroy(auv_msgs__msg__NED * msg)
{
  if (msg) {
    auv_msgs__msg__NED__fini(msg);
  }
  free(msg);
}


bool
auv_msgs__msg__NED__Sequence__init(auv_msgs__msg__NED__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  auv_msgs__msg__NED * data = NULL;
  if (size) {
    data = (auv_msgs__msg__NED *)calloc(size, sizeof(auv_msgs__msg__NED));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auv_msgs__msg__NED__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auv_msgs__msg__NED__fini(&data[i - 1]);
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
auv_msgs__msg__NED__Sequence__fini(auv_msgs__msg__NED__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      auv_msgs__msg__NED__fini(&array->data[i]);
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

auv_msgs__msg__NED__Sequence *
auv_msgs__msg__NED__Sequence__create(size_t size)
{
  auv_msgs__msg__NED__Sequence * array = (auv_msgs__msg__NED__Sequence *)malloc(sizeof(auv_msgs__msg__NED__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = auv_msgs__msg__NED__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
auv_msgs__msg__NED__Sequence__destroy(auv_msgs__msg__NED__Sequence * array)
{
  if (array) {
    auv_msgs__msg__NED__Sequence__fini(array);
  }
  free(array);
}
