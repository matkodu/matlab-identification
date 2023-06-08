// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auv_msgs:msg/WorldWaypointRequest.idl
// generated code does not contain a copyright notice
#include "auv_msgs/msg/detail/world_waypoint_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "auv_msgs/msg/detail/ned__functions.h"
// Member `orientation`
// Member `position_tolerance`
// Member `orientation_tolerance`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `twist_limit`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
auv_msgs__msg__WorldWaypointRequest__init(auv_msgs__msg__WorldWaypointRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    auv_msgs__msg__WorldWaypointRequest__fini(msg);
    return false;
  }
  // position
  if (!auv_msgs__msg__NED__init(&msg->position)) {
    auv_msgs__msg__WorldWaypointRequest__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation)) {
    auv_msgs__msg__WorldWaypointRequest__fini(msg);
    return false;
  }
  // disable_axis
  // position_tolerance
  if (!geometry_msgs__msg__Vector3__init(&msg->position_tolerance)) {
    auv_msgs__msg__WorldWaypointRequest__fini(msg);
    return false;
  }
  // orientation_tolerance
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation_tolerance)) {
    auv_msgs__msg__WorldWaypointRequest__fini(msg);
    return false;
  }
  // twist_limit
  if (!geometry_msgs__msg__Twist__init(&msg->twist_limit)) {
    auv_msgs__msg__WorldWaypointRequest__fini(msg);
    return false;
  }
  return true;
}

void
auv_msgs__msg__WorldWaypointRequest__fini(auv_msgs__msg__WorldWaypointRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  auv_msgs__msg__NED__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Vector3__fini(&msg->orientation);
  // disable_axis
  // position_tolerance
  geometry_msgs__msg__Vector3__fini(&msg->position_tolerance);
  // orientation_tolerance
  geometry_msgs__msg__Vector3__fini(&msg->orientation_tolerance);
  // twist_limit
  geometry_msgs__msg__Twist__fini(&msg->twist_limit);
}

auv_msgs__msg__WorldWaypointRequest *
auv_msgs__msg__WorldWaypointRequest__create()
{
  auv_msgs__msg__WorldWaypointRequest * msg = (auv_msgs__msg__WorldWaypointRequest *)malloc(sizeof(auv_msgs__msg__WorldWaypointRequest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auv_msgs__msg__WorldWaypointRequest));
  bool success = auv_msgs__msg__WorldWaypointRequest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
auv_msgs__msg__WorldWaypointRequest__destroy(auv_msgs__msg__WorldWaypointRequest * msg)
{
  if (msg) {
    auv_msgs__msg__WorldWaypointRequest__fini(msg);
  }
  free(msg);
}


bool
auv_msgs__msg__WorldWaypointRequest__Sequence__init(auv_msgs__msg__WorldWaypointRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  auv_msgs__msg__WorldWaypointRequest * data = NULL;
  if (size) {
    data = (auv_msgs__msg__WorldWaypointRequest *)calloc(size, sizeof(auv_msgs__msg__WorldWaypointRequest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auv_msgs__msg__WorldWaypointRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auv_msgs__msg__WorldWaypointRequest__fini(&data[i - 1]);
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
auv_msgs__msg__WorldWaypointRequest__Sequence__fini(auv_msgs__msg__WorldWaypointRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      auv_msgs__msg__WorldWaypointRequest__fini(&array->data[i]);
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

auv_msgs__msg__WorldWaypointRequest__Sequence *
auv_msgs__msg__WorldWaypointRequest__Sequence__create(size_t size)
{
  auv_msgs__msg__WorldWaypointRequest__Sequence * array = (auv_msgs__msg__WorldWaypointRequest__Sequence *)malloc(sizeof(auv_msgs__msg__WorldWaypointRequest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = auv_msgs__msg__WorldWaypointRequest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
auv_msgs__msg__WorldWaypointRequest__Sequence__destroy(auv_msgs__msg__WorldWaypointRequest__Sequence * array)
{
  if (array) {
    auv_msgs__msg__WorldWaypointRequest__Sequence__fini(array);
  }
  free(array);
}
