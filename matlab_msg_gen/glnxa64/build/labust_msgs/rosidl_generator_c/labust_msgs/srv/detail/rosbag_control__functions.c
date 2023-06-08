// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:srv/RosbagControl.idl
// generated code does not contain a copyright notice
#include "labust_msgs/srv/detail/rosbag_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `action`
// Member `bag_name`
#include "rosidl_runtime_c/string_functions.h"

bool
labust_msgs__srv__RosbagControl_Request__init(labust_msgs__srv__RosbagControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    labust_msgs__srv__RosbagControl_Request__fini(msg);
    return false;
  }
  // bag_name
  if (!rosidl_runtime_c__String__init(&msg->bag_name)) {
    labust_msgs__srv__RosbagControl_Request__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__srv__RosbagControl_Request__fini(labust_msgs__srv__RosbagControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // bag_name
  rosidl_runtime_c__String__fini(&msg->bag_name);
}

labust_msgs__srv__RosbagControl_Request *
labust_msgs__srv__RosbagControl_Request__create()
{
  labust_msgs__srv__RosbagControl_Request * msg = (labust_msgs__srv__RosbagControl_Request *)malloc(sizeof(labust_msgs__srv__RosbagControl_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__srv__RosbagControl_Request));
  bool success = labust_msgs__srv__RosbagControl_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__srv__RosbagControl_Request__destroy(labust_msgs__srv__RosbagControl_Request * msg)
{
  if (msg) {
    labust_msgs__srv__RosbagControl_Request__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__srv__RosbagControl_Request__Sequence__init(labust_msgs__srv__RosbagControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__srv__RosbagControl_Request * data = NULL;
  if (size) {
    data = (labust_msgs__srv__RosbagControl_Request *)calloc(size, sizeof(labust_msgs__srv__RosbagControl_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__srv__RosbagControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__srv__RosbagControl_Request__fini(&data[i - 1]);
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
labust_msgs__srv__RosbagControl_Request__Sequence__fini(labust_msgs__srv__RosbagControl_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__srv__RosbagControl_Request__fini(&array->data[i]);
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

labust_msgs__srv__RosbagControl_Request__Sequence *
labust_msgs__srv__RosbagControl_Request__Sequence__create(size_t size)
{
  labust_msgs__srv__RosbagControl_Request__Sequence * array = (labust_msgs__srv__RosbagControl_Request__Sequence *)malloc(sizeof(labust_msgs__srv__RosbagControl_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__srv__RosbagControl_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__srv__RosbagControl_Request__Sequence__destroy(labust_msgs__srv__RosbagControl_Request__Sequence * array)
{
  if (array) {
    labust_msgs__srv__RosbagControl_Request__Sequence__fini(array);
  }
  free(array);
}


bool
labust_msgs__srv__RosbagControl_Response__init(labust_msgs__srv__RosbagControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
labust_msgs__srv__RosbagControl_Response__fini(labust_msgs__srv__RosbagControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

labust_msgs__srv__RosbagControl_Response *
labust_msgs__srv__RosbagControl_Response__create()
{
  labust_msgs__srv__RosbagControl_Response * msg = (labust_msgs__srv__RosbagControl_Response *)malloc(sizeof(labust_msgs__srv__RosbagControl_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__srv__RosbagControl_Response));
  bool success = labust_msgs__srv__RosbagControl_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__srv__RosbagControl_Response__destroy(labust_msgs__srv__RosbagControl_Response * msg)
{
  if (msg) {
    labust_msgs__srv__RosbagControl_Response__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__srv__RosbagControl_Response__Sequence__init(labust_msgs__srv__RosbagControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__srv__RosbagControl_Response * data = NULL;
  if (size) {
    data = (labust_msgs__srv__RosbagControl_Response *)calloc(size, sizeof(labust_msgs__srv__RosbagControl_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__srv__RosbagControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__srv__RosbagControl_Response__fini(&data[i - 1]);
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
labust_msgs__srv__RosbagControl_Response__Sequence__fini(labust_msgs__srv__RosbagControl_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__srv__RosbagControl_Response__fini(&array->data[i]);
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

labust_msgs__srv__RosbagControl_Response__Sequence *
labust_msgs__srv__RosbagControl_Response__Sequence__create(size_t size)
{
  labust_msgs__srv__RosbagControl_Response__Sequence * array = (labust_msgs__srv__RosbagControl_Response__Sequence *)malloc(sizeof(labust_msgs__srv__RosbagControl_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__srv__RosbagControl_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__srv__RosbagControl_Response__Sequence__destroy(labust_msgs__srv__RosbagControl_Response__Sequence * array)
{
  if (array) {
    labust_msgs__srv__RosbagControl_Response__Sequence__fini(array);
  }
  free(array);
}
