// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/EventData.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/event_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `on_event_next`
// Member `on_event_next_active`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
labust_msgs__msg__EventData__init(labust_msgs__msg__EventData * msg)
{
  if (!msg) {
    return false;
  }
  // timeout
  // on_event_next
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->on_event_next, 0)) {
    labust_msgs__msg__EventData__fini(msg);
    return false;
  }
  // on_event_next_active
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->on_event_next_active, 0)) {
    labust_msgs__msg__EventData__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__EventData__fini(labust_msgs__msg__EventData * msg)
{
  if (!msg) {
    return;
  }
  // timeout
  // on_event_next
  rosidl_runtime_c__uint8__Sequence__fini(&msg->on_event_next);
  // on_event_next_active
  rosidl_runtime_c__uint8__Sequence__fini(&msg->on_event_next_active);
}

labust_msgs__msg__EventData *
labust_msgs__msg__EventData__create()
{
  labust_msgs__msg__EventData * msg = (labust_msgs__msg__EventData *)malloc(sizeof(labust_msgs__msg__EventData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__EventData));
  bool success = labust_msgs__msg__EventData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__EventData__destroy(labust_msgs__msg__EventData * msg)
{
  if (msg) {
    labust_msgs__msg__EventData__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__EventData__Sequence__init(labust_msgs__msg__EventData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__EventData * data = NULL;
  if (size) {
    data = (labust_msgs__msg__EventData *)calloc(size, sizeof(labust_msgs__msg__EventData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__EventData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__EventData__fini(&data[i - 1]);
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
labust_msgs__msg__EventData__Sequence__fini(labust_msgs__msg__EventData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__EventData__fini(&array->data[i]);
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

labust_msgs__msg__EventData__Sequence *
labust_msgs__msg__EventData__Sequence__create(size_t size)
{
  labust_msgs__msg__EventData__Sequence * array = (labust_msgs__msg__EventData__Sequence *)malloc(sizeof(labust_msgs__msg__EventData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__EventData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__EventData__Sequence__destroy(labust_msgs__msg__EventData__Sequence * array)
{
  if (array) {
    labust_msgs__msg__EventData__Sequence__fini(array);
  }
  free(array);
}
