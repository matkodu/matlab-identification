// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/MissionStatus.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/mission_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `active_primitive`
#include "rosidl_runtime_c/string_functions.h"

bool
labust_msgs__msg__MissionStatus__init(labust_msgs__msg__MissionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // mission_active
  // active_primitive
  if (!rosidl_runtime_c__String__init(&msg->active_primitive)) {
    labust_msgs__msg__MissionStatus__fini(msg);
    return false;
  }
  // mission_execution_ready
  // manual_enabled
  return true;
}

void
labust_msgs__msg__MissionStatus__fini(labust_msgs__msg__MissionStatus * msg)
{
  if (!msg) {
    return;
  }
  // mission_active
  // active_primitive
  rosidl_runtime_c__String__fini(&msg->active_primitive);
  // mission_execution_ready
  // manual_enabled
}

labust_msgs__msg__MissionStatus *
labust_msgs__msg__MissionStatus__create()
{
  labust_msgs__msg__MissionStatus * msg = (labust_msgs__msg__MissionStatus *)malloc(sizeof(labust_msgs__msg__MissionStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__MissionStatus));
  bool success = labust_msgs__msg__MissionStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__MissionStatus__destroy(labust_msgs__msg__MissionStatus * msg)
{
  if (msg) {
    labust_msgs__msg__MissionStatus__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__MissionStatus__Sequence__init(labust_msgs__msg__MissionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__MissionStatus * data = NULL;
  if (size) {
    data = (labust_msgs__msg__MissionStatus *)calloc(size, sizeof(labust_msgs__msg__MissionStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__MissionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__MissionStatus__fini(&data[i - 1]);
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
labust_msgs__msg__MissionStatus__Sequence__fini(labust_msgs__msg__MissionStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__MissionStatus__fini(&array->data[i]);
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

labust_msgs__msg__MissionStatus__Sequence *
labust_msgs__msg__MissionStatus__Sequence__create(size_t size)
{
  labust_msgs__msg__MissionStatus__Sequence * array = (labust_msgs__msg__MissionStatus__Sequence *)malloc(sizeof(labust_msgs__msg__MissionStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__MissionStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__MissionStatus__Sequence__destroy(labust_msgs__msg__MissionStatus__Sequence * array)
{
  if (array) {
    labust_msgs__msg__MissionStatus__Sequence__fini(array);
  }
  free(array);
}
