// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auv_msgs:msg/VehiclePoseArray.idl
// generated code does not contain a copyright notice
#include "auv_msgs/msg/detail/vehicle_pose_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `poses`
#include "auv_msgs/msg/detail/vehicle_pose__functions.h"

bool
auv_msgs__msg__VehiclePoseArray__init(auv_msgs__msg__VehiclePoseArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    auv_msgs__msg__VehiclePoseArray__fini(msg);
    return false;
  }
  // poses
  if (!auv_msgs__msg__VehiclePose__Sequence__init(&msg->poses, 0)) {
    auv_msgs__msg__VehiclePoseArray__fini(msg);
    return false;
  }
  return true;
}

void
auv_msgs__msg__VehiclePoseArray__fini(auv_msgs__msg__VehiclePoseArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // poses
  auv_msgs__msg__VehiclePose__Sequence__fini(&msg->poses);
}

auv_msgs__msg__VehiclePoseArray *
auv_msgs__msg__VehiclePoseArray__create()
{
  auv_msgs__msg__VehiclePoseArray * msg = (auv_msgs__msg__VehiclePoseArray *)malloc(sizeof(auv_msgs__msg__VehiclePoseArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auv_msgs__msg__VehiclePoseArray));
  bool success = auv_msgs__msg__VehiclePoseArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
auv_msgs__msg__VehiclePoseArray__destroy(auv_msgs__msg__VehiclePoseArray * msg)
{
  if (msg) {
    auv_msgs__msg__VehiclePoseArray__fini(msg);
  }
  free(msg);
}


bool
auv_msgs__msg__VehiclePoseArray__Sequence__init(auv_msgs__msg__VehiclePoseArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  auv_msgs__msg__VehiclePoseArray * data = NULL;
  if (size) {
    data = (auv_msgs__msg__VehiclePoseArray *)calloc(size, sizeof(auv_msgs__msg__VehiclePoseArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auv_msgs__msg__VehiclePoseArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auv_msgs__msg__VehiclePoseArray__fini(&data[i - 1]);
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
auv_msgs__msg__VehiclePoseArray__Sequence__fini(auv_msgs__msg__VehiclePoseArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      auv_msgs__msg__VehiclePoseArray__fini(&array->data[i]);
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

auv_msgs__msg__VehiclePoseArray__Sequence *
auv_msgs__msg__VehiclePoseArray__Sequence__create(size_t size)
{
  auv_msgs__msg__VehiclePoseArray__Sequence * array = (auv_msgs__msg__VehiclePoseArray__Sequence *)malloc(sizeof(auv_msgs__msg__VehiclePoseArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = auv_msgs__msg__VehiclePoseArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
auv_msgs__msg__VehiclePoseArray__Sequence__destroy(auv_msgs__msg__VehiclePoseArray__Sequence * array)
{
  if (array) {
    auv_msgs__msg__VehiclePoseArray__Sequence__fini(array);
  }
  free(array);
}
