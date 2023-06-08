// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/ManualConfiguration.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/manual_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `axes_map`
// Member `scale_map`
// Member `integrated`
// Member `maximum_effort`
// Member `maximum_nu`
// Member `maximum_speed`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `topic`
#include "rosidl_runtime_c/string_functions.h"

bool
labust_msgs__msg__ManualConfiguration__init(labust_msgs__msg__ManualConfiguration * msg)
{
  if (!msg) {
    return false;
  }
  // axes_map
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->axes_map, 0)) {
    labust_msgs__msg__ManualConfiguration__fini(msg);
    return false;
  }
  // scale_map
  if (!rosidl_runtime_c__float__Sequence__init(&msg->scale_map, 0)) {
    labust_msgs__msg__ManualConfiguration__fini(msg);
    return false;
  }
  // integrated
  if (!rosidl_runtime_c__float__Sequence__init(&msg->integrated, 0)) {
    labust_msgs__msg__ManualConfiguration__fini(msg);
    return false;
  }
  // maximum_effort
  if (!rosidl_runtime_c__float__Sequence__init(&msg->maximum_effort, 0)) {
    labust_msgs__msg__ManualConfiguration__fini(msg);
    return false;
  }
  // maximum_nu
  if (!rosidl_runtime_c__float__Sequence__init(&msg->maximum_nu, 0)) {
    labust_msgs__msg__ManualConfiguration__fini(msg);
    return false;
  }
  // maximum_speed
  if (!rosidl_runtime_c__float__Sequence__init(&msg->maximum_speed, 0)) {
    labust_msgs__msg__ManualConfiguration__fini(msg);
    return false;
  }
  // sampling_time
  // use_ff
  // topic
  if (!rosidl_runtime_c__String__init(&msg->topic)) {
    labust_msgs__msg__ManualConfiguration__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__ManualConfiguration__fini(labust_msgs__msg__ManualConfiguration * msg)
{
  if (!msg) {
    return;
  }
  // axes_map
  rosidl_runtime_c__int32__Sequence__fini(&msg->axes_map);
  // scale_map
  rosidl_runtime_c__float__Sequence__fini(&msg->scale_map);
  // integrated
  rosidl_runtime_c__float__Sequence__fini(&msg->integrated);
  // maximum_effort
  rosidl_runtime_c__float__Sequence__fini(&msg->maximum_effort);
  // maximum_nu
  rosidl_runtime_c__float__Sequence__fini(&msg->maximum_nu);
  // maximum_speed
  rosidl_runtime_c__float__Sequence__fini(&msg->maximum_speed);
  // sampling_time
  // use_ff
  // topic
  rosidl_runtime_c__String__fini(&msg->topic);
}

labust_msgs__msg__ManualConfiguration *
labust_msgs__msg__ManualConfiguration__create()
{
  labust_msgs__msg__ManualConfiguration * msg = (labust_msgs__msg__ManualConfiguration *)malloc(sizeof(labust_msgs__msg__ManualConfiguration));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__ManualConfiguration));
  bool success = labust_msgs__msg__ManualConfiguration__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__ManualConfiguration__destroy(labust_msgs__msg__ManualConfiguration * msg)
{
  if (msg) {
    labust_msgs__msg__ManualConfiguration__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__ManualConfiguration__Sequence__init(labust_msgs__msg__ManualConfiguration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__ManualConfiguration * data = NULL;
  if (size) {
    data = (labust_msgs__msg__ManualConfiguration *)calloc(size, sizeof(labust_msgs__msg__ManualConfiguration));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__ManualConfiguration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__ManualConfiguration__fini(&data[i - 1]);
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
labust_msgs__msg__ManualConfiguration__Sequence__fini(labust_msgs__msg__ManualConfiguration__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__ManualConfiguration__fini(&array->data[i]);
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

labust_msgs__msg__ManualConfiguration__Sequence *
labust_msgs__msg__ManualConfiguration__Sequence__create(size_t size)
{
  labust_msgs__msg__ManualConfiguration__Sequence * array = (labust_msgs__msg__ManualConfiguration__Sequence *)malloc(sizeof(labust_msgs__msg__ManualConfiguration__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__ManualConfiguration__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__ManualConfiguration__Sequence__destroy(labust_msgs__msg__ManualConfiguration__Sequence * array)
{
  if (array) {
    labust_msgs__msg__ManualConfiguration__Sequence__fini(array);
  }
  free(array);
}
