// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/RhodamineData.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/rhodamine_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "geographic_msgs/msg/detail/geo_point__functions.h"
// Member `adc`
#include "labust_msgs/msg/detail/rhodamine_adc__functions.h"

bool
labust_msgs__msg__RhodamineData__init(labust_msgs__msg__RhodamineData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    labust_msgs__msg__RhodamineData__fini(msg);
    return false;
  }
  // position
  if (!geographic_msgs__msg__GeoPoint__init(&msg->position)) {
    labust_msgs__msg__RhodamineData__fini(msg);
    return false;
  }
  // adc
  if (!labust_msgs__msg__RhodamineAdc__init(&msg->adc)) {
    labust_msgs__msg__RhodamineData__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__RhodamineData__fini(labust_msgs__msg__RhodamineData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  geographic_msgs__msg__GeoPoint__fini(&msg->position);
  // adc
  labust_msgs__msg__RhodamineAdc__fini(&msg->adc);
}

labust_msgs__msg__RhodamineData *
labust_msgs__msg__RhodamineData__create()
{
  labust_msgs__msg__RhodamineData * msg = (labust_msgs__msg__RhodamineData *)malloc(sizeof(labust_msgs__msg__RhodamineData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__RhodamineData));
  bool success = labust_msgs__msg__RhodamineData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__RhodamineData__destroy(labust_msgs__msg__RhodamineData * msg)
{
  if (msg) {
    labust_msgs__msg__RhodamineData__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__RhodamineData__Sequence__init(labust_msgs__msg__RhodamineData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__RhodamineData * data = NULL;
  if (size) {
    data = (labust_msgs__msg__RhodamineData *)calloc(size, sizeof(labust_msgs__msg__RhodamineData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__RhodamineData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__RhodamineData__fini(&data[i - 1]);
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
labust_msgs__msg__RhodamineData__Sequence__fini(labust_msgs__msg__RhodamineData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__RhodamineData__fini(&array->data[i]);
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

labust_msgs__msg__RhodamineData__Sequence *
labust_msgs__msg__RhodamineData__Sequence__create(size_t size)
{
  labust_msgs__msg__RhodamineData__Sequence * array = (labust_msgs__msg__RhodamineData__Sequence *)malloc(sizeof(labust_msgs__msg__RhodamineData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__RhodamineData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__RhodamineData__Sequence__destroy(labust_msgs__msg__RhodamineData__Sequence * array)
{
  if (array) {
    labust_msgs__msg__RhodamineData__Sequence__fini(array);
  }
  free(array);
}
