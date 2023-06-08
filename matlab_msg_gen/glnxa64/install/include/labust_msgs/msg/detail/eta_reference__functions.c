// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/EtaReference.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/eta_reference__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `identity_token`
#include "rosidl_runtime_c/string_functions.h"
// Member `reference`
#include "auv_msgs/msg/detail/navigation_status__functions.h"

bool
labust_msgs__msg__EtaReference__init(labust_msgs__msg__EtaReference * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    labust_msgs__msg__EtaReference__fini(msg);
    return false;
  }
  // identity_token
  if (!rosidl_runtime_c__String__init(&msg->identity_token)) {
    labust_msgs__msg__EtaReference__fini(msg);
    return false;
  }
  // reference
  if (!auv_msgs__msg__NavigationStatus__init(&msg->reference)) {
    labust_msgs__msg__EtaReference__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__EtaReference__fini(labust_msgs__msg__EtaReference * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // identity_token
  rosidl_runtime_c__String__fini(&msg->identity_token);
  // reference
  auv_msgs__msg__NavigationStatus__fini(&msg->reference);
}

labust_msgs__msg__EtaReference *
labust_msgs__msg__EtaReference__create()
{
  labust_msgs__msg__EtaReference * msg = (labust_msgs__msg__EtaReference *)malloc(sizeof(labust_msgs__msg__EtaReference));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__EtaReference));
  bool success = labust_msgs__msg__EtaReference__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__EtaReference__destroy(labust_msgs__msg__EtaReference * msg)
{
  if (msg) {
    labust_msgs__msg__EtaReference__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__EtaReference__Sequence__init(labust_msgs__msg__EtaReference__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__EtaReference * data = NULL;
  if (size) {
    data = (labust_msgs__msg__EtaReference *)calloc(size, sizeof(labust_msgs__msg__EtaReference));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__EtaReference__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__EtaReference__fini(&data[i - 1]);
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
labust_msgs__msg__EtaReference__Sequence__fini(labust_msgs__msg__EtaReference__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__EtaReference__fini(&array->data[i]);
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

labust_msgs__msg__EtaReference__Sequence *
labust_msgs__msg__EtaReference__Sequence__create(size_t size)
{
  labust_msgs__msg__EtaReference__Sequence * array = (labust_msgs__msg__EtaReference__Sequence *)malloc(sizeof(labust_msgs__msg__EtaReference__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__EtaReference__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__EtaReference__Sequence__destroy(labust_msgs__msg__EtaReference__Sequence * array)
{
  if (array) {
    labust_msgs__msg__EtaReference__Sequence__fini(array);
  }
  free(array);
}
