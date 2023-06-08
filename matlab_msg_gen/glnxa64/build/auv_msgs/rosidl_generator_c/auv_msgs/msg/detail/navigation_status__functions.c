// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auv_msgs:msg/NavigationStatus.idl
// generated code does not contain a copyright notice
#include "auv_msgs/msg/detail/navigation_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `global_position`
// Member `origin`
#include "geographic_msgs/msg/detail/geo_point__functions.h"
// Member `position`
// Member `position_variance`
#include "auv_msgs/msg/detail/ned__functions.h"
// Member `body_velocity`
// Member `seafloor_velocity`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
// Member `orientation_rate`
// Member `orientation_variance`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
auv_msgs__msg__NavigationStatus__init(auv_msgs__msg__NavigationStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    auv_msgs__msg__NavigationStatus__fini(msg);
    return false;
  }
  // global_position
  if (!geographic_msgs__msg__GeoPoint__init(&msg->global_position)) {
    auv_msgs__msg__NavigationStatus__fini(msg);
    return false;
  }
  // origin
  if (!geographic_msgs__msg__GeoPoint__init(&msg->origin)) {
    auv_msgs__msg__NavigationStatus__fini(msg);
    return false;
  }
  // position
  if (!auv_msgs__msg__NED__init(&msg->position)) {
    auv_msgs__msg__NavigationStatus__fini(msg);
    return false;
  }
  // altitude
  // body_velocity
  if (!geometry_msgs__msg__Point__init(&msg->body_velocity)) {
    auv_msgs__msg__NavigationStatus__fini(msg);
    return false;
  }
  // seafloor_velocity
  if (!geometry_msgs__msg__Point__init(&msg->seafloor_velocity)) {
    auv_msgs__msg__NavigationStatus__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation)) {
    auv_msgs__msg__NavigationStatus__fini(msg);
    return false;
  }
  // orientation_rate
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation_rate)) {
    auv_msgs__msg__NavigationStatus__fini(msg);
    return false;
  }
  // position_variance
  if (!auv_msgs__msg__NED__init(&msg->position_variance)) {
    auv_msgs__msg__NavigationStatus__fini(msg);
    return false;
  }
  // orientation_variance
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation_variance)) {
    auv_msgs__msg__NavigationStatus__fini(msg);
    return false;
  }
  // status
  return true;
}

void
auv_msgs__msg__NavigationStatus__fini(auv_msgs__msg__NavigationStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // global_position
  geographic_msgs__msg__GeoPoint__fini(&msg->global_position);
  // origin
  geographic_msgs__msg__GeoPoint__fini(&msg->origin);
  // position
  auv_msgs__msg__NED__fini(&msg->position);
  // altitude
  // body_velocity
  geometry_msgs__msg__Point__fini(&msg->body_velocity);
  // seafloor_velocity
  geometry_msgs__msg__Point__fini(&msg->seafloor_velocity);
  // orientation
  geometry_msgs__msg__Vector3__fini(&msg->orientation);
  // orientation_rate
  geometry_msgs__msg__Vector3__fini(&msg->orientation_rate);
  // position_variance
  auv_msgs__msg__NED__fini(&msg->position_variance);
  // orientation_variance
  geometry_msgs__msg__Vector3__fini(&msg->orientation_variance);
  // status
}

auv_msgs__msg__NavigationStatus *
auv_msgs__msg__NavigationStatus__create()
{
  auv_msgs__msg__NavigationStatus * msg = (auv_msgs__msg__NavigationStatus *)malloc(sizeof(auv_msgs__msg__NavigationStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auv_msgs__msg__NavigationStatus));
  bool success = auv_msgs__msg__NavigationStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
auv_msgs__msg__NavigationStatus__destroy(auv_msgs__msg__NavigationStatus * msg)
{
  if (msg) {
    auv_msgs__msg__NavigationStatus__fini(msg);
  }
  free(msg);
}


bool
auv_msgs__msg__NavigationStatus__Sequence__init(auv_msgs__msg__NavigationStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  auv_msgs__msg__NavigationStatus * data = NULL;
  if (size) {
    data = (auv_msgs__msg__NavigationStatus *)calloc(size, sizeof(auv_msgs__msg__NavigationStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auv_msgs__msg__NavigationStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auv_msgs__msg__NavigationStatus__fini(&data[i - 1]);
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
auv_msgs__msg__NavigationStatus__Sequence__fini(auv_msgs__msg__NavigationStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      auv_msgs__msg__NavigationStatus__fini(&array->data[i]);
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

auv_msgs__msg__NavigationStatus__Sequence *
auv_msgs__msg__NavigationStatus__Sequence__create(size_t size)
{
  auv_msgs__msg__NavigationStatus__Sequence * array = (auv_msgs__msg__NavigationStatus__Sequence *)malloc(sizeof(auv_msgs__msg__NavigationStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = auv_msgs__msg__NavigationStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
auv_msgs__msg__NavigationStatus__Sequence__destroy(auv_msgs__msg__NavigationStatus__Sequence * array)
{
  if (array) {
    auv_msgs__msg__NavigationStatus__Sequence__fini(array);
  }
  free(array);
}
