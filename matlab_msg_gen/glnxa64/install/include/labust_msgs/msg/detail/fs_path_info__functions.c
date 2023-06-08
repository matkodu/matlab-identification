// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/FSPathInfo.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/fs_path_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `dr_p`
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
#include "labust_msgs/msg/detail/rpy__functions.h"

bool
labust_msgs__msg__FSPathInfo__init(labust_msgs__msg__FSPathInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    labust_msgs__msg__FSPathInfo__fini(msg);
    return false;
  }
  // delta_r
  // k
  // xi_r
  // dxi_r
  // pi
  // pi_tilda
  // dr_p
  if (!geometry_msgs__msg__Point__init(&msg->dr_p)) {
    labust_msgs__msg__FSPathInfo__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    labust_msgs__msg__FSPathInfo__fini(msg);
    return false;
  }
  // orientation
  if (!labust_msgs__msg__RPY__init(&msg->orientation)) {
    labust_msgs__msg__FSPathInfo__fini(msg);
    return false;
  }
  // curvature
  // torsion
  return true;
}

void
labust_msgs__msg__FSPathInfo__fini(labust_msgs__msg__FSPathInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // delta_r
  // k
  // xi_r
  // dxi_r
  // pi
  // pi_tilda
  // dr_p
  geometry_msgs__msg__Point__fini(&msg->dr_p);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // orientation
  labust_msgs__msg__RPY__fini(&msg->orientation);
  // curvature
  // torsion
}

labust_msgs__msg__FSPathInfo *
labust_msgs__msg__FSPathInfo__create()
{
  labust_msgs__msg__FSPathInfo * msg = (labust_msgs__msg__FSPathInfo *)malloc(sizeof(labust_msgs__msg__FSPathInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__FSPathInfo));
  bool success = labust_msgs__msg__FSPathInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__FSPathInfo__destroy(labust_msgs__msg__FSPathInfo * msg)
{
  if (msg) {
    labust_msgs__msg__FSPathInfo__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__FSPathInfo__Sequence__init(labust_msgs__msg__FSPathInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__FSPathInfo * data = NULL;
  if (size) {
    data = (labust_msgs__msg__FSPathInfo *)calloc(size, sizeof(labust_msgs__msg__FSPathInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__FSPathInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__FSPathInfo__fini(&data[i - 1]);
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
labust_msgs__msg__FSPathInfo__Sequence__fini(labust_msgs__msg__FSPathInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__FSPathInfo__fini(&array->data[i]);
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

labust_msgs__msg__FSPathInfo__Sequence *
labust_msgs__msg__FSPathInfo__Sequence__create(size_t size)
{
  labust_msgs__msg__FSPathInfo__Sequence * array = (labust_msgs__msg__FSPathInfo__Sequence *)malloc(sizeof(labust_msgs__msg__FSPathInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__FSPathInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__FSPathInfo__Sequence__destroy(labust_msgs__msg__FSPathInfo__Sequence * array)
{
  if (array) {
    labust_msgs__msg__FSPathInfo__Sequence__fini(array);
  }
  free(array);
}
