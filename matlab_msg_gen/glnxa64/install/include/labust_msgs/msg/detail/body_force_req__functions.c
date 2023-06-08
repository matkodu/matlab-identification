// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/BodyForceReq.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/body_force_req__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `goal`
#include "labust_msgs/msg/detail/goal_descriptor__functions.h"
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__functions.h"
// Member `disable_axis`
#include "labust_msgs/msg/detail/bool6_axis__functions.h"
// Member `windup`
#include "labust_msgs/msg/detail/windup6_axis__functions.h"

bool
labust_msgs__msg__BodyForceReq__init(labust_msgs__msg__BodyForceReq * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    labust_msgs__msg__BodyForceReq__fini(msg);
    return false;
  }
  // goal
  if (!labust_msgs__msg__GoalDescriptor__init(&msg->goal)) {
    labust_msgs__msg__BodyForceReq__fini(msg);
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__init(&msg->wrench)) {
    labust_msgs__msg__BodyForceReq__fini(msg);
    return false;
  }
  // disable_axis
  if (!labust_msgs__msg__Bool6Axis__init(&msg->disable_axis)) {
    labust_msgs__msg__BodyForceReq__fini(msg);
    return false;
  }
  // windup
  if (!labust_msgs__msg__Windup6Axis__init(&msg->windup)) {
    labust_msgs__msg__BodyForceReq__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__BodyForceReq__fini(labust_msgs__msg__BodyForceReq * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // goal
  labust_msgs__msg__GoalDescriptor__fini(&msg->goal);
  // wrench
  geometry_msgs__msg__Wrench__fini(&msg->wrench);
  // disable_axis
  labust_msgs__msg__Bool6Axis__fini(&msg->disable_axis);
  // windup
  labust_msgs__msg__Windup6Axis__fini(&msg->windup);
}

labust_msgs__msg__BodyForceReq *
labust_msgs__msg__BodyForceReq__create()
{
  labust_msgs__msg__BodyForceReq * msg = (labust_msgs__msg__BodyForceReq *)malloc(sizeof(labust_msgs__msg__BodyForceReq));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__BodyForceReq));
  bool success = labust_msgs__msg__BodyForceReq__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__BodyForceReq__destroy(labust_msgs__msg__BodyForceReq * msg)
{
  if (msg) {
    labust_msgs__msg__BodyForceReq__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__BodyForceReq__Sequence__init(labust_msgs__msg__BodyForceReq__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__BodyForceReq * data = NULL;
  if (size) {
    data = (labust_msgs__msg__BodyForceReq *)calloc(size, sizeof(labust_msgs__msg__BodyForceReq));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__BodyForceReq__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__BodyForceReq__fini(&data[i - 1]);
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
labust_msgs__msg__BodyForceReq__Sequence__fini(labust_msgs__msg__BodyForceReq__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__BodyForceReq__fini(&array->data[i]);
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

labust_msgs__msg__BodyForceReq__Sequence *
labust_msgs__msg__BodyForceReq__Sequence__create(size_t size)
{
  labust_msgs__msg__BodyForceReq__Sequence * array = (labust_msgs__msg__BodyForceReq__Sequence *)malloc(sizeof(labust_msgs__msg__BodyForceReq__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__BodyForceReq__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__BodyForceReq__Sequence__destroy(labust_msgs__msg__BodyForceReq__Sequence * array)
{
  if (array) {
    labust_msgs__msg__BodyForceReq__Sequence__fini(array);
  }
  free(array);
}
