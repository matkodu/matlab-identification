// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/RegisterController.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/register_controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `parent`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
labust_msgs__msg__RegisterController__init(labust_msgs__msg__RegisterController * msg)
{
  if (!msg) {
    return false;
  }
  // parent
  if (!rosidl_runtime_c__String__init(&msg->parent)) {
    labust_msgs__msg__RegisterController__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    labust_msgs__msg__RegisterController__fini(msg);
    return false;
  }
  // used_tau
  // used_nu
  return true;
}

void
labust_msgs__msg__RegisterController__fini(labust_msgs__msg__RegisterController * msg)
{
  if (!msg) {
    return;
  }
  // parent
  rosidl_runtime_c__String__fini(&msg->parent);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // used_tau
  // used_nu
}

labust_msgs__msg__RegisterController *
labust_msgs__msg__RegisterController__create()
{
  labust_msgs__msg__RegisterController * msg = (labust_msgs__msg__RegisterController *)malloc(sizeof(labust_msgs__msg__RegisterController));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__RegisterController));
  bool success = labust_msgs__msg__RegisterController__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__RegisterController__destroy(labust_msgs__msg__RegisterController * msg)
{
  if (msg) {
    labust_msgs__msg__RegisterController__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__RegisterController__Sequence__init(labust_msgs__msg__RegisterController__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__RegisterController * data = NULL;
  if (size) {
    data = (labust_msgs__msg__RegisterController *)calloc(size, sizeof(labust_msgs__msg__RegisterController));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__RegisterController__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__RegisterController__fini(&data[i - 1]);
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
labust_msgs__msg__RegisterController__Sequence__fini(labust_msgs__msg__RegisterController__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__RegisterController__fini(&array->data[i]);
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

labust_msgs__msg__RegisterController__Sequence *
labust_msgs__msg__RegisterController__Sequence__create(size_t size)
{
  labust_msgs__msg__RegisterController__Sequence * array = (labust_msgs__msg__RegisterController__Sequence *)malloc(sizeof(labust_msgs__msg__RegisterController__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__RegisterController__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__RegisterController__Sequence__destroy(labust_msgs__msg__RegisterController__Sequence * array)
{
  if (array) {
    labust_msgs__msg__RegisterController__Sequence__fini(array);
  }
  free(array);
}
