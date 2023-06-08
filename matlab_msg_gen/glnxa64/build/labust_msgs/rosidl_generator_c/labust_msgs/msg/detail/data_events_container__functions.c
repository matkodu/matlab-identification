// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/DataEventsContainer.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/data_events_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `state_var`
// Member `mission_var`
#include "std_msgs/msg/detail/float64_multi_array__functions.h"
// Member `events_var`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
labust_msgs__msg__DataEventsContainer__init(labust_msgs__msg__DataEventsContainer * msg)
{
  if (!msg) {
    return false;
  }
  // state_var
  if (!std_msgs__msg__Float64MultiArray__init(&msg->state_var)) {
    labust_msgs__msg__DataEventsContainer__fini(msg);
    return false;
  }
  // mission_var
  if (!std_msgs__msg__Float64MultiArray__init(&msg->mission_var)) {
    labust_msgs__msg__DataEventsContainer__fini(msg);
    return false;
  }
  // events_var
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->events_var, 0)) {
    labust_msgs__msg__DataEventsContainer__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__DataEventsContainer__fini(labust_msgs__msg__DataEventsContainer * msg)
{
  if (!msg) {
    return;
  }
  // state_var
  std_msgs__msg__Float64MultiArray__fini(&msg->state_var);
  // mission_var
  std_msgs__msg__Float64MultiArray__fini(&msg->mission_var);
  // events_var
  rosidl_runtime_c__uint8__Sequence__fini(&msg->events_var);
}

labust_msgs__msg__DataEventsContainer *
labust_msgs__msg__DataEventsContainer__create()
{
  labust_msgs__msg__DataEventsContainer * msg = (labust_msgs__msg__DataEventsContainer *)malloc(sizeof(labust_msgs__msg__DataEventsContainer));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__DataEventsContainer));
  bool success = labust_msgs__msg__DataEventsContainer__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__DataEventsContainer__destroy(labust_msgs__msg__DataEventsContainer * msg)
{
  if (msg) {
    labust_msgs__msg__DataEventsContainer__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__DataEventsContainer__Sequence__init(labust_msgs__msg__DataEventsContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__DataEventsContainer * data = NULL;
  if (size) {
    data = (labust_msgs__msg__DataEventsContainer *)calloc(size, sizeof(labust_msgs__msg__DataEventsContainer));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__DataEventsContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__DataEventsContainer__fini(&data[i - 1]);
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
labust_msgs__msg__DataEventsContainer__Sequence__fini(labust_msgs__msg__DataEventsContainer__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__DataEventsContainer__fini(&array->data[i]);
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

labust_msgs__msg__DataEventsContainer__Sequence *
labust_msgs__msg__DataEventsContainer__Sequence__create(size_t size)
{
  labust_msgs__msg__DataEventsContainer__Sequence * array = (labust_msgs__msg__DataEventsContainer__Sequence *)malloc(sizeof(labust_msgs__msg__DataEventsContainer__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__DataEventsContainer__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__DataEventsContainer__Sequence__destroy(labust_msgs__msg__DataEventsContainer__Sequence * array)
{
  if (array) {
    labust_msgs__msg__DataEventsContainer__Sequence__fini(array);
  }
  free(array);
}
