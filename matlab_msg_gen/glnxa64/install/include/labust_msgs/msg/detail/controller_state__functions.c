// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/controller_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `info`
#include "labust_msgs/msg/detail/controller_info__functions.h"

bool
labust_msgs__msg__ControllerState__init(labust_msgs__msg__ControllerState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    labust_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // info
  if (!labust_msgs__msg__ControllerInfo__Sequence__init(&msg->info, 0)) {
    labust_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__ControllerState__fini(labust_msgs__msg__ControllerState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // info
  labust_msgs__msg__ControllerInfo__Sequence__fini(&msg->info);
}

labust_msgs__msg__ControllerState *
labust_msgs__msg__ControllerState__create()
{
  labust_msgs__msg__ControllerState * msg = (labust_msgs__msg__ControllerState *)malloc(sizeof(labust_msgs__msg__ControllerState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__ControllerState));
  bool success = labust_msgs__msg__ControllerState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__ControllerState__destroy(labust_msgs__msg__ControllerState * msg)
{
  if (msg) {
    labust_msgs__msg__ControllerState__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__ControllerState__Sequence__init(labust_msgs__msg__ControllerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__ControllerState * data = NULL;
  if (size) {
    data = (labust_msgs__msg__ControllerState *)calloc(size, sizeof(labust_msgs__msg__ControllerState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__ControllerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__ControllerState__fini(&data[i - 1]);
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
labust_msgs__msg__ControllerState__Sequence__fini(labust_msgs__msg__ControllerState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__ControllerState__fini(&array->data[i]);
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

labust_msgs__msg__ControllerState__Sequence *
labust_msgs__msg__ControllerState__Sequence__create(size_t size)
{
  labust_msgs__msg__ControllerState__Sequence * array = (labust_msgs__msg__ControllerState__Sequence *)malloc(sizeof(labust_msgs__msg__ControllerState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__ControllerState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__ControllerState__Sequence__destroy(labust_msgs__msg__ControllerState__Sequence * array)
{
  if (array) {
    labust_msgs__msg__ControllerState__Sequence__fini(array);
  }
  free(array);
}
