// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/StartNeptusParser.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/start_neptus_parser__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `file_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `origin`
// Member `custom_start`
#include "geographic_msgs/msg/detail/geo_point__functions.h"

bool
labust_msgs__msg__StartNeptusParser__init(labust_msgs__msg__StartNeptusParser * msg)
{
  if (!msg) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__init(&msg->file_name)) {
    labust_msgs__msg__StartNeptusParser__fini(msg);
    return false;
  }
  // relative
  // custom_start_flag
  // origin
  if (!geographic_msgs__msg__GeoPoint__init(&msg->origin)) {
    labust_msgs__msg__StartNeptusParser__fini(msg);
    return false;
  }
  // custom_start
  if (!geographic_msgs__msg__GeoPoint__init(&msg->custom_start)) {
    labust_msgs__msg__StartNeptusParser__fini(msg);
    return false;
  }
  // underactuated
  // speed
  // heading
  // victory_radius
  return true;
}

void
labust_msgs__msg__StartNeptusParser__fini(labust_msgs__msg__StartNeptusParser * msg)
{
  if (!msg) {
    return;
  }
  // file_name
  rosidl_runtime_c__String__fini(&msg->file_name);
  // relative
  // custom_start_flag
  // origin
  geographic_msgs__msg__GeoPoint__fini(&msg->origin);
  // custom_start
  geographic_msgs__msg__GeoPoint__fini(&msg->custom_start);
  // underactuated
  // speed
  // heading
  // victory_radius
}

labust_msgs__msg__StartNeptusParser *
labust_msgs__msg__StartNeptusParser__create()
{
  labust_msgs__msg__StartNeptusParser * msg = (labust_msgs__msg__StartNeptusParser *)malloc(sizeof(labust_msgs__msg__StartNeptusParser));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__StartNeptusParser));
  bool success = labust_msgs__msg__StartNeptusParser__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__StartNeptusParser__destroy(labust_msgs__msg__StartNeptusParser * msg)
{
  if (msg) {
    labust_msgs__msg__StartNeptusParser__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__StartNeptusParser__Sequence__init(labust_msgs__msg__StartNeptusParser__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__StartNeptusParser * data = NULL;
  if (size) {
    data = (labust_msgs__msg__StartNeptusParser *)calloc(size, sizeof(labust_msgs__msg__StartNeptusParser));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__StartNeptusParser__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__StartNeptusParser__fini(&data[i - 1]);
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
labust_msgs__msg__StartNeptusParser__Sequence__fini(labust_msgs__msg__StartNeptusParser__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__StartNeptusParser__fini(&array->data[i]);
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

labust_msgs__msg__StartNeptusParser__Sequence *
labust_msgs__msg__StartNeptusParser__Sequence__create(size_t size)
{
  labust_msgs__msg__StartNeptusParser__Sequence * array = (labust_msgs__msg__StartNeptusParser__Sequence *)malloc(sizeof(labust_msgs__msg__StartNeptusParser__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__StartNeptusParser__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__StartNeptusParser__Sequence__destroy(labust_msgs__msg__StartNeptusParser__Sequence * array)
{
  if (array) {
    labust_msgs__msg__StartNeptusParser__Sequence__fini(array);
  }
  free(array);
}
