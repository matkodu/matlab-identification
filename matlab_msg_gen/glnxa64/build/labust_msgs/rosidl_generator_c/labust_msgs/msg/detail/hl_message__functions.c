// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/HLMessage.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/hl_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `ref_point`
#include "geometry_msgs/msg/detail/point_stamped__functions.h"

bool
labust_msgs__msg__HLMessage__init(labust_msgs__msg__HLMessage * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // ref_point
  if (!geometry_msgs__msg__PointStamped__init(&msg->ref_point)) {
    labust_msgs__msg__HLMessage__fini(msg);
    return false;
  }
  // radius
  // surge
  // yaw
  return true;
}

void
labust_msgs__msg__HLMessage__fini(labust_msgs__msg__HLMessage * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // ref_point
  geometry_msgs__msg__PointStamped__fini(&msg->ref_point);
  // radius
  // surge
  // yaw
}

labust_msgs__msg__HLMessage *
labust_msgs__msg__HLMessage__create()
{
  labust_msgs__msg__HLMessage * msg = (labust_msgs__msg__HLMessage *)malloc(sizeof(labust_msgs__msg__HLMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__HLMessage));
  bool success = labust_msgs__msg__HLMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__HLMessage__destroy(labust_msgs__msg__HLMessage * msg)
{
  if (msg) {
    labust_msgs__msg__HLMessage__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__HLMessage__Sequence__init(labust_msgs__msg__HLMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__HLMessage * data = NULL;
  if (size) {
    data = (labust_msgs__msg__HLMessage *)calloc(size, sizeof(labust_msgs__msg__HLMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__HLMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__HLMessage__fini(&data[i - 1]);
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
labust_msgs__msg__HLMessage__Sequence__fini(labust_msgs__msg__HLMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__HLMessage__fini(&array->data[i]);
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

labust_msgs__msg__HLMessage__Sequence *
labust_msgs__msg__HLMessage__Sequence__create(size_t size)
{
  labust_msgs__msg__HLMessage__Sequence * array = (labust_msgs__msg__HLMessage__Sequence *)malloc(sizeof(labust_msgs__msg__HLMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__HLMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__HLMessage__Sequence__destroy(labust_msgs__msg__HLMessage__Sequence * array)
{
  if (array) {
    labust_msgs__msg__HLMessage__Sequence__fini(array);
  }
  free(array);
}
