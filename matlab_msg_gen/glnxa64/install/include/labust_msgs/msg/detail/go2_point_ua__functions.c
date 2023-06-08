// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/Go2PointUA.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/go2_point_ua__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `point`
#include "auv_msgs/msg/detail/ned__functions.h"

bool
labust_msgs__msg__Go2PointUA__init(labust_msgs__msg__Go2PointUA * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!auv_msgs__msg__NED__init(&msg->point)) {
    labust_msgs__msg__Go2PointUA__fini(msg);
    return false;
  }
  // speed
  // victory_radius
  return true;
}

void
labust_msgs__msg__Go2PointUA__fini(labust_msgs__msg__Go2PointUA * msg)
{
  if (!msg) {
    return;
  }
  // point
  auv_msgs__msg__NED__fini(&msg->point);
  // speed
  // victory_radius
}

labust_msgs__msg__Go2PointUA *
labust_msgs__msg__Go2PointUA__create()
{
  labust_msgs__msg__Go2PointUA * msg = (labust_msgs__msg__Go2PointUA *)malloc(sizeof(labust_msgs__msg__Go2PointUA));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__Go2PointUA));
  bool success = labust_msgs__msg__Go2PointUA__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__Go2PointUA__destroy(labust_msgs__msg__Go2PointUA * msg)
{
  if (msg) {
    labust_msgs__msg__Go2PointUA__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__Go2PointUA__Sequence__init(labust_msgs__msg__Go2PointUA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__Go2PointUA * data = NULL;
  if (size) {
    data = (labust_msgs__msg__Go2PointUA *)calloc(size, sizeof(labust_msgs__msg__Go2PointUA));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__Go2PointUA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__Go2PointUA__fini(&data[i - 1]);
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
labust_msgs__msg__Go2PointUA__Sequence__fini(labust_msgs__msg__Go2PointUA__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__Go2PointUA__fini(&array->data[i]);
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

labust_msgs__msg__Go2PointUA__Sequence *
labust_msgs__msg__Go2PointUA__Sequence__create(size_t size)
{
  labust_msgs__msg__Go2PointUA__Sequence * array = (labust_msgs__msg__Go2PointUA__Sequence *)malloc(sizeof(labust_msgs__msg__Go2PointUA__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__Go2PointUA__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__Go2PointUA__Sequence__destroy(labust_msgs__msg__Go2PointUA__Sequence * array)
{
  if (array) {
    labust_msgs__msg__Go2PointUA__Sequence__fini(array);
  }
  free(array);
}
