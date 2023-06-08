// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:msg/IdentModel.idl
// generated code does not contain a copyright notice
#include "labust_msgs/msg/detail/ident_model__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `tf_num`
// Member `tf_den`
// Member `ss_mat_a`
// Member `ss_mat_b`
// Member `ss_mat_c`
// Member `ss_mat_d`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
labust_msgs__msg__IdentModel__init(labust_msgs__msg__IdentModel * msg)
{
  if (!msg) {
    return false;
  }
  // model_type
  // dof
  // tf_num
  if (!rosidl_runtime_c__float__Sequence__init(&msg->tf_num, 0)) {
    labust_msgs__msg__IdentModel__fini(msg);
    return false;
  }
  // tf_den
  if (!rosidl_runtime_c__float__Sequence__init(&msg->tf_den, 0)) {
    labust_msgs__msg__IdentModel__fini(msg);
    return false;
  }
  // ss_dim_n
  // ss_dim_m
  // ss_mat_a
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ss_mat_a, 0)) {
    labust_msgs__msg__IdentModel__fini(msg);
    return false;
  }
  // ss_mat_b
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ss_mat_b, 0)) {
    labust_msgs__msg__IdentModel__fini(msg);
    return false;
  }
  // ss_mat_c
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ss_mat_c, 0)) {
    labust_msgs__msg__IdentModel__fini(msg);
    return false;
  }
  // ss_mat_d
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ss_mat_d, 0)) {
    labust_msgs__msg__IdentModel__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__msg__IdentModel__fini(labust_msgs__msg__IdentModel * msg)
{
  if (!msg) {
    return;
  }
  // model_type
  // dof
  // tf_num
  rosidl_runtime_c__float__Sequence__fini(&msg->tf_num);
  // tf_den
  rosidl_runtime_c__float__Sequence__fini(&msg->tf_den);
  // ss_dim_n
  // ss_dim_m
  // ss_mat_a
  rosidl_runtime_c__float__Sequence__fini(&msg->ss_mat_a);
  // ss_mat_b
  rosidl_runtime_c__float__Sequence__fini(&msg->ss_mat_b);
  // ss_mat_c
  rosidl_runtime_c__float__Sequence__fini(&msg->ss_mat_c);
  // ss_mat_d
  rosidl_runtime_c__float__Sequence__fini(&msg->ss_mat_d);
}

labust_msgs__msg__IdentModel *
labust_msgs__msg__IdentModel__create()
{
  labust_msgs__msg__IdentModel * msg = (labust_msgs__msg__IdentModel *)malloc(sizeof(labust_msgs__msg__IdentModel));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__msg__IdentModel));
  bool success = labust_msgs__msg__IdentModel__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__msg__IdentModel__destroy(labust_msgs__msg__IdentModel * msg)
{
  if (msg) {
    labust_msgs__msg__IdentModel__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__msg__IdentModel__Sequence__init(labust_msgs__msg__IdentModel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__msg__IdentModel * data = NULL;
  if (size) {
    data = (labust_msgs__msg__IdentModel *)calloc(size, sizeof(labust_msgs__msg__IdentModel));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__msg__IdentModel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__msg__IdentModel__fini(&data[i - 1]);
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
labust_msgs__msg__IdentModel__Sequence__fini(labust_msgs__msg__IdentModel__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__msg__IdentModel__fini(&array->data[i]);
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

labust_msgs__msg__IdentModel__Sequence *
labust_msgs__msg__IdentModel__Sequence__create(size_t size)
{
  labust_msgs__msg__IdentModel__Sequence * array = (labust_msgs__msg__IdentModel__Sequence *)malloc(sizeof(labust_msgs__msg__IdentModel__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__msg__IdentModel__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__msg__IdentModel__Sequence__destroy(labust_msgs__msg__IdentModel__Sequence * array)
{
  if (array) {
    labust_msgs__msg__IdentModel__Sequence__fini(array);
  }
  free(array);
}
