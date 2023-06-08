// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/SendPrimitive.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/send_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `primitive_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `event`
#include "labust_msgs/msg/detail/event_data__functions.h"
// Member `primitive_string`
#include "std_msgs/msg/detail/string__functions.h"

bool
labust_msgs__msg__SendPrimitive__init(labust_msgs__msg__SendPrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // primitive_id
  // primitive_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->primitive_data, 0)) {
    labust_msgs__msg__SendPrimitive__fini(msg);
    return false;
  }
  // event
  if (!labust_msgs__msg__EventData__init(&msg->event)) {
    labust_msgs__msg__SendPrimitive__fini(msg);
    return false;
  }
  // primitive_string
  if (!std_msgs__msg__String__init(&msg->primitive_string)) {
    labust_msgs__msg__SendPrimitive__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__SendPrimitive__fini(labust_msgs__msg__SendPrimitive * msg)
{
  if (!msg) {
    return;
  }
  // primitive_id
  // primitive_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->primitive_data);
  // event
  labust_msgs__msg__EventData__fini(&msg->event);
  // primitive_string
  std_msgs__msg__String__fini(&msg->primitive_string);
}

labust_msgs__msg__SendPrimitive *
labust_msgs__msg__SendPrimitive__create()
{
  labust_msgs__msg__SendPrimitive * msg = (labust_msgs__msg__SendPrimitive *)malloc(sizeof(labust_msgs__msg__SendPrimitive));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__SendPrimitive));
  bool success = labust_msgs__msg__SendPrimitive__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__SendPrimitive__destroy(labust_msgs__msg__SendPrimitive * msg)
{
  if (msg) {
    labust_msgs__msg__SendPrimitive__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__SendPrimitive__Sequence__init(labust_msgs__msg__SendPrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__SendPrimitive * data = NULL;
  if (size) {
    data = (labust_msgs__msg__SendPrimitive *)calloc(size, sizeof(labust_msgs__msg__SendPrimitive));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__SendPrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__SendPrimitive__fini(&data[i - 1]);
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
labust_msgs__msg__SendPrimitive__Sequence__fini(labust_msgs__msg__SendPrimitive__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__SendPrimitive__fini(&array->data[i]);
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

labust_msgs__msg__SendPrimitive__Sequence *
labust_msgs__msg__SendPrimitive__Sequence__create(size_t size)
{
  labust_msgs__msg__SendPrimitive__Sequence * array = (labust_msgs__msg__SendPrimitive__Sequence *)malloc(sizeof(labust_msgs__msg__SendPrimitive__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__SendPrimitive__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__SendPrimitive__Sequence__destroy(labust_msgs__msg__SendPrimitive__Sequence * array)
{
  if (array) {
    labust_msgs__msg__SendPrimitive__Sequence__fini(array);
  }
  free(array);
}
