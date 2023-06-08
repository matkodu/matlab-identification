// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/DynamicPositioning.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/dynamic_positioning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `point`
#include "auv_msgs/msg/detail/ned__functions.h"

bool
labust_msgs__msg__DynamicPositioning__init(labust_msgs__msg__DynamicPositioning * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!auv_msgs__msg__NED__init(&msg->point)) {
    labust_msgs__msg__DynamicPositioning__fini(msg);
    return false;
  }
  // heading
  return true;
}

void
labust_msgs__msg__DynamicPositioning__fini(labust_msgs__msg__DynamicPositioning * msg)
{
  if (!msg) {
    return;
  }
  // point
  auv_msgs__msg__NED__fini(&msg->point);
  // heading
}

labust_msgs__msg__DynamicPositioning *
labust_msgs__msg__DynamicPositioning__create()
{
  labust_msgs__msg__DynamicPositioning * msg = (labust_msgs__msg__DynamicPositioning *)malloc(sizeof(labust_msgs__msg__DynamicPositioning));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__DynamicPositioning));
  bool success = labust_msgs__msg__DynamicPositioning__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__DynamicPositioning__destroy(labust_msgs__msg__DynamicPositioning * msg)
{
  if (msg) {
    labust_msgs__msg__DynamicPositioning__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__DynamicPositioning__Sequence__init(labust_msgs__msg__DynamicPositioning__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__DynamicPositioning * data = NULL;
  if (size) {
    data = (labust_msgs__msg__DynamicPositioning *)calloc(size, sizeof(labust_msgs__msg__DynamicPositioning));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__DynamicPositioning__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__DynamicPositioning__fini(&data[i - 1]);
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
labust_msgs__msg__DynamicPositioning__Sequence__fini(labust_msgs__msg__DynamicPositioning__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__DynamicPositioning__fini(&array->data[i]);
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

labust_msgs__msg__DynamicPositioning__Sequence *
labust_msgs__msg__DynamicPositioning__Sequence__create(size_t size)
{
  labust_msgs__msg__DynamicPositioning__Sequence * array = (labust_msgs__msg__DynamicPositioning__Sequence *)malloc(sizeof(labust_msgs__msg__DynamicPositioning__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__DynamicPositioning__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__DynamicPositioning__Sequence__destroy(labust_msgs__msg__DynamicPositioning__Sequence * array)
{
  if (array) {
    labust_msgs__msg__DynamicPositioning__Sequence__fini(array);
  }
  free(array);
}
