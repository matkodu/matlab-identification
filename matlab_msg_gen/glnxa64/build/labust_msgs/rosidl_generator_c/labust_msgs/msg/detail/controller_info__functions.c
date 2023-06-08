// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/controller_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `manual_topic`
// Member `external_topic`
// Member `state_topic`
// Member `tracking_topic`
#include "rosidl_runtime_c/string_functions.h"

bool
labust_msgs__msg__ControllerInfo__init(labust_msgs__msg__ControllerInfo * msg)
{
  if (!msg) {
    return false;
  }
  // manual_topic
  if (!rosidl_runtime_c__String__init(&msg->manual_topic)) {
    labust_msgs__msg__ControllerInfo__fini(msg);
    return false;
  }
  // external_topic
  if (!rosidl_runtime_c__String__init(&msg->external_topic)) {
    labust_msgs__msg__ControllerInfo__fini(msg);
    return false;
  }
  // state_topic
  if (!rosidl_runtime_c__String__init(&msg->state_topic)) {
    labust_msgs__msg__ControllerInfo__fini(msg);
    return false;
  }
  // tracking_topic
  if (!rosidl_runtime_c__String__init(&msg->tracking_topic)) {
    labust_msgs__msg__ControllerInfo__fini(msg);
    return false;
  }
  // state
  return true;
}

void
labust_msgs__msg__ControllerInfo__fini(labust_msgs__msg__ControllerInfo * msg)
{
  if (!msg) {
    return;
  }
  // manual_topic
  rosidl_runtime_c__String__fini(&msg->manual_topic);
  // external_topic
  rosidl_runtime_c__String__fini(&msg->external_topic);
  // state_topic
  rosidl_runtime_c__String__fini(&msg->state_topic);
  // tracking_topic
  rosidl_runtime_c__String__fini(&msg->tracking_topic);
  // state
}

labust_msgs__msg__ControllerInfo *
labust_msgs__msg__ControllerInfo__create()
{
  labust_msgs__msg__ControllerInfo * msg = (labust_msgs__msg__ControllerInfo *)malloc(sizeof(labust_msgs__msg__ControllerInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__ControllerInfo));
  bool success = labust_msgs__msg__ControllerInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__ControllerInfo__destroy(labust_msgs__msg__ControllerInfo * msg)
{
  if (msg) {
    labust_msgs__msg__ControllerInfo__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__ControllerInfo__Sequence__init(labust_msgs__msg__ControllerInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__ControllerInfo * data = NULL;
  if (size) {
    data = (labust_msgs__msg__ControllerInfo *)calloc(size, sizeof(labust_msgs__msg__ControllerInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__ControllerInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__ControllerInfo__fini(&data[i - 1]);
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
labust_msgs__msg__ControllerInfo__Sequence__fini(labust_msgs__msg__ControllerInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__ControllerInfo__fini(&array->data[i]);
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

labust_msgs__msg__ControllerInfo__Sequence *
labust_msgs__msg__ControllerInfo__Sequence__create(size_t size)
{
  labust_msgs__msg__ControllerInfo__Sequence * array = (labust_msgs__msg__ControllerInfo__Sequence *)malloc(sizeof(labust_msgs__msg__ControllerInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__ControllerInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__ControllerInfo__Sequence__destroy(labust_msgs__msg__ControllerInfo__Sequence * array)
{
  if (array) {
    labust_msgs__msg__ControllerInfo__Sequence__fini(array);
  }
  free(array);
}
