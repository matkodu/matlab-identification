// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/GoalDescriptor.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/goal_descriptor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `requester`
#include "rosidl_runtime_c/string_functions.h"

bool
labust_msgs__msg__GoalDescriptor__init(labust_msgs__msg__GoalDescriptor * msg)
{
  if (!msg) {
    return false;
  }
  // requester
  if (!rosidl_runtime_c__String__init(&msg->requester)) {
    labust_msgs__msg__GoalDescriptor__fini(msg);
    return false;
  }
  // id
  // priority
  return true;
}

void
labust_msgs__msg__GoalDescriptor__fini(labust_msgs__msg__GoalDescriptor * msg)
{
  if (!msg) {
    return;
  }
  // requester
  rosidl_runtime_c__String__fini(&msg->requester);
  // id
  // priority
}

labust_msgs__msg__GoalDescriptor *
labust_msgs__msg__GoalDescriptor__create()
{
  labust_msgs__msg__GoalDescriptor * msg = (labust_msgs__msg__GoalDescriptor *)malloc(sizeof(labust_msgs__msg__GoalDescriptor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__GoalDescriptor));
  bool success = labust_msgs__msg__GoalDescriptor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__GoalDescriptor__destroy(labust_msgs__msg__GoalDescriptor * msg)
{
  if (msg) {
    labust_msgs__msg__GoalDescriptor__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__GoalDescriptor__Sequence__init(labust_msgs__msg__GoalDescriptor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__GoalDescriptor * data = NULL;
  if (size) {
    data = (labust_msgs__msg__GoalDescriptor *)calloc(size, sizeof(labust_msgs__msg__GoalDescriptor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__GoalDescriptor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__GoalDescriptor__fini(&data[i - 1]);
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
labust_msgs__msg__GoalDescriptor__Sequence__fini(labust_msgs__msg__GoalDescriptor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__GoalDescriptor__fini(&array->data[i]);
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

labust_msgs__msg__GoalDescriptor__Sequence *
labust_msgs__msg__GoalDescriptor__Sequence__create(size_t size)
{
  labust_msgs__msg__GoalDescriptor__Sequence * array = (labust_msgs__msg__GoalDescriptor__Sequence *)malloc(sizeof(labust_msgs__msg__GoalDescriptor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__GoalDescriptor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__GoalDescriptor__Sequence__destroy(labust_msgs__msg__GoalDescriptor__Sequence * array)
{
  if (array) {
    labust_msgs__msg__GoalDescriptor__Sequence__fini(array);
  }
  free(array);
}
