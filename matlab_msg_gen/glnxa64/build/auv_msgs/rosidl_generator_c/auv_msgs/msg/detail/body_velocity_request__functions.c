// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auv_msgs:msg/BodyVelocityRequest.idl
// generated code does not contain a copyright notice
#include "auv_msgs/msg/detail/body_velocity_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
auv_msgs__msg__BodyVelocityRequest__init(auv_msgs__msg__BodyVelocityRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    auv_msgs__msg__BodyVelocityRequest__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    auv_msgs__msg__BodyVelocityRequest__fini(msg);
    return false;
  }
  // disable_axis
  return true;
}

void
auv_msgs__msg__BodyVelocityRequest__fini(auv_msgs__msg__BodyVelocityRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // disable_axis
}

auv_msgs__msg__BodyVelocityRequest *
auv_msgs__msg__BodyVelocityRequest__create()
{
  auv_msgs__msg__BodyVelocityRequest * msg = (auv_msgs__msg__BodyVelocityRequest *)malloc(sizeof(auv_msgs__msg__BodyVelocityRequest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auv_msgs__msg__BodyVelocityRequest));
  bool success = auv_msgs__msg__BodyVelocityRequest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
auv_msgs__msg__BodyVelocityRequest__destroy(auv_msgs__msg__BodyVelocityRequest * msg)
{
  if (msg) {
    auv_msgs__msg__BodyVelocityRequest__fini(msg);
  }
  free(msg);
}


bool
auv_msgs__msg__BodyVelocityRequest__Sequence__init(auv_msgs__msg__BodyVelocityRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  auv_msgs__msg__BodyVelocityRequest * data = NULL;
  if (size) {
    data = (auv_msgs__msg__BodyVelocityRequest *)calloc(size, sizeof(auv_msgs__msg__BodyVelocityRequest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auv_msgs__msg__BodyVelocityRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auv_msgs__msg__BodyVelocityRequest__fini(&data[i - 1]);
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
auv_msgs__msg__BodyVelocityRequest__Sequence__fini(auv_msgs__msg__BodyVelocityRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      auv_msgs__msg__BodyVelocityRequest__fini(&array->data[i]);
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

auv_msgs__msg__BodyVelocityRequest__Sequence *
auv_msgs__msg__BodyVelocityRequest__Sequence__create(size_t size)
{
  auv_msgs__msg__BodyVelocityRequest__Sequence * array = (auv_msgs__msg__BodyVelocityRequest__Sequence *)malloc(sizeof(auv_msgs__msg__BodyVelocityRequest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = auv_msgs__msg__BodyVelocityRequest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
auv_msgs__msg__BodyVelocityRequest__Sequence__destroy(auv_msgs__msg__BodyVelocityRequest__Sequence * array)
{
  if (array) {
    auv_msgs__msg__BodyVelocityRequest__Sequence__fini(array);
  }
  free(array);
}
