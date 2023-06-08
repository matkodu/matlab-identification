// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auv_msgs:msg/VehiclePose.idl
// generated code does not contain a copyright notice
#include "auv_msgs/msg/detail/vehicle_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "auv_msgs/msg/detail/ned__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
auv_msgs__msg__VehiclePose__init(auv_msgs__msg__VehiclePose * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    auv_msgs__msg__VehiclePose__fini(msg);
    return false;
  }
  // position
  if (!auv_msgs__msg__NED__init(&msg->position)) {
    auv_msgs__msg__VehiclePose__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation)) {
    auv_msgs__msg__VehiclePose__fini(msg);
    return false;
  }
  return true;
}

void
auv_msgs__msg__VehiclePose__fini(auv_msgs__msg__VehiclePose * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // position
  auv_msgs__msg__NED__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Vector3__fini(&msg->orientation);
}

auv_msgs__msg__VehiclePose *
auv_msgs__msg__VehiclePose__create()
{
  auv_msgs__msg__VehiclePose * msg = (auv_msgs__msg__VehiclePose *)malloc(sizeof(auv_msgs__msg__VehiclePose));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auv_msgs__msg__VehiclePose));
  bool success = auv_msgs__msg__VehiclePose__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
auv_msgs__msg__VehiclePose__destroy(auv_msgs__msg__VehiclePose * msg)
{
  if (msg) {
    auv_msgs__msg__VehiclePose__fini(msg);
  }
  free(msg);
}


bool
auv_msgs__msg__VehiclePose__Sequence__init(auv_msgs__msg__VehiclePose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  auv_msgs__msg__VehiclePose * data = NULL;
  if (size) {
    data = (auv_msgs__msg__VehiclePose *)calloc(size, sizeof(auv_msgs__msg__VehiclePose));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auv_msgs__msg__VehiclePose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auv_msgs__msg__VehiclePose__fini(&data[i - 1]);
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
auv_msgs__msg__VehiclePose__Sequence__fini(auv_msgs__msg__VehiclePose__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      auv_msgs__msg__VehiclePose__fini(&array->data[i]);
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

auv_msgs__msg__VehiclePose__Sequence *
auv_msgs__msg__VehiclePose__Sequence__create(size_t size)
{
  auv_msgs__msg__VehiclePose__Sequence * array = (auv_msgs__msg__VehiclePose__Sequence *)malloc(sizeof(auv_msgs__msg__VehiclePose__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = auv_msgs__msg__VehiclePose__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
auv_msgs__msg__VehiclePose__Sequence__destroy(auv_msgs__msg__VehiclePose__Sequence * array)
{
  if (array) {
    auv_msgs__msg__VehiclePose__Sequence__fini(array);
  }
  free(array);
}
