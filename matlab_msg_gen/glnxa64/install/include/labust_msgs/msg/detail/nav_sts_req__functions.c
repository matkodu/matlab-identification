// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/NavStsReq.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/nav_sts_req__functions.h"

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
// Member `goal`
#include "labust_msgs/msg/detail/goal_descriptor__functions.h"
// Member `position`
#include "auv_msgs/msg/detail/ned__functions.h"
// Member `body_velocity`
// Member `gbody_velocity`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
// Member `orientation_rate`
// Member `orientation_tolerance`
#include "labust_msgs/msg/detail/rpy__functions.h"
// Member `position_tolerance`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `disable_axis`
#include "labust_msgs/msg/detail/bool6_axis__functions.h"

bool
labust_msgs__msg__NavStsReq__init(labust_msgs__msg__NavStsReq * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // global_position
  if (!geographic_msgs__msg__GeoPoint__init(&msg->global_position)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // origin
  if (!geographic_msgs__msg__GeoPoint__init(&msg->origin)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // goal
  if (!labust_msgs__msg__GoalDescriptor__init(&msg->goal)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // position
  if (!auv_msgs__msg__NED__init(&msg->position)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // altitude
  // body_velocity
  if (!geometry_msgs__msg__Point__init(&msg->body_velocity)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // gbody_velocity
  if (!geometry_msgs__msg__Point__init(&msg->gbody_velocity)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // orientation
  if (!labust_msgs__msg__RPY__init(&msg->orientation)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // orientation_rate
  if (!labust_msgs__msg__RPY__init(&msg->orientation_rate)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // position_tolerance
  if (!geometry_msgs__msg__Vector3__init(&msg->position_tolerance)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // orientation_tolerance
  if (!labust_msgs__msg__RPY__init(&msg->orientation_tolerance)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  // disable_axis
  if (!labust_msgs__msg__Bool6Axis__init(&msg->disable_axis)) {
    labust_msgs__msg__NavStsReq__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__NavStsReq__fini(labust_msgs__msg__NavStsReq * msg)
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
  // goal
  labust_msgs__msg__GoalDescriptor__fini(&msg->goal);
  // position
  auv_msgs__msg__NED__fini(&msg->position);
  // altitude
  // body_velocity
  geometry_msgs__msg__Point__fini(&msg->body_velocity);
  // gbody_velocity
  geometry_msgs__msg__Point__fini(&msg->gbody_velocity);
  // orientation
  labust_msgs__msg__RPY__fini(&msg->orientation);
  // orientation_rate
  labust_msgs__msg__RPY__fini(&msg->orientation_rate);
  // position_tolerance
  geometry_msgs__msg__Vector3__fini(&msg->position_tolerance);
  // orientation_tolerance
  labust_msgs__msg__RPY__fini(&msg->orientation_tolerance);
  // disable_axis
  labust_msgs__msg__Bool6Axis__fini(&msg->disable_axis);
}

labust_msgs__msg__NavStsReq *
labust_msgs__msg__NavStsReq__create()
{
  labust_msgs__msg__NavStsReq * msg = (labust_msgs__msg__NavStsReq *)malloc(sizeof(labust_msgs__msg__NavStsReq));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__NavStsReq));
  bool success = labust_msgs__msg__NavStsReq__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__NavStsReq__destroy(labust_msgs__msg__NavStsReq * msg)
{
  if (msg) {
    labust_msgs__msg__NavStsReq__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__NavStsReq__Sequence__init(labust_msgs__msg__NavStsReq__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__NavStsReq * data = NULL;
  if (size) {
    data = (labust_msgs__msg__NavStsReq *)calloc(size, sizeof(labust_msgs__msg__NavStsReq));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__NavStsReq__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__NavStsReq__fini(&data[i - 1]);
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
labust_msgs__msg__NavStsReq__Sequence__fini(labust_msgs__msg__NavStsReq__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__NavStsReq__fini(&array->data[i]);
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

labust_msgs__msg__NavStsReq__Sequence *
labust_msgs__msg__NavStsReq__Sequence__create(size_t size)
{
  labust_msgs__msg__NavStsReq__Sequence * array = (labust_msgs__msg__NavStsReq__Sequence *)malloc(sizeof(labust_msgs__msg__NavStsReq__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__NavStsReq__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__NavStsReq__Sequence__destroy(labust_msgs__msg__NavStsReq__Sequence * array)
{
  if (array) {
    labust_msgs__msg__NavStsReq__Sequence__fini(array);
  }
  free(array);
}
