// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from labust_msgs:action/CourseKeeping.idl
// generated code does not contain a copyright notice
#include "labust_msgs/action/detail/course_keeping__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `topics`
#include "rosidl_runtime_c/string_functions.h"

bool
labust_msgs__action__CourseKeeping_Goal__init(labust_msgs__action__CourseKeeping_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // subtype
  // ref_type
  // course
  // speed
  // yaw
  // topics
  if (!rosidl_runtime_c__String__Sequence__init(&msg->topics, 0)) {
    labust_msgs__action__CourseKeeping_Goal__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__action__CourseKeeping_Goal__fini(labust_msgs__action__CourseKeeping_Goal * msg)
{
  if (!msg) {
    return;
  }
  // subtype
  // ref_type
  // course
  // speed
  // yaw
  // topics
  rosidl_runtime_c__String__Sequence__fini(&msg->topics);
}

labust_msgs__action__CourseKeeping_Goal *
labust_msgs__action__CourseKeeping_Goal__create()
{
  labust_msgs__action__CourseKeeping_Goal * msg = (labust_msgs__action__CourseKeeping_Goal *)malloc(sizeof(labust_msgs__action__CourseKeeping_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__action__CourseKeeping_Goal));
  bool success = labust_msgs__action__CourseKeeping_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__action__CourseKeeping_Goal__destroy(labust_msgs__action__CourseKeeping_Goal * msg)
{
  if (msg) {
    labust_msgs__action__CourseKeeping_Goal__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__action__CourseKeeping_Goal__Sequence__init(labust_msgs__action__CourseKeeping_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__action__CourseKeeping_Goal * data = NULL;
  if (size) {
    data = (labust_msgs__action__CourseKeeping_Goal *)calloc(size, sizeof(labust_msgs__action__CourseKeeping_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__action__CourseKeeping_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__action__CourseKeeping_Goal__fini(&data[i - 1]);
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
labust_msgs__action__CourseKeeping_Goal__Sequence__fini(labust_msgs__action__CourseKeeping_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__action__CourseKeeping_Goal__fini(&array->data[i]);
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

labust_msgs__action__CourseKeeping_Goal__Sequence *
labust_msgs__action__CourseKeeping_Goal__Sequence__create(size_t size)
{
  labust_msgs__action__CourseKeeping_Goal__Sequence * array = (labust_msgs__action__CourseKeeping_Goal__Sequence *)malloc(sizeof(labust_msgs__action__CourseKeeping_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__action__CourseKeeping_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__action__CourseKeeping_Goal__Sequence__destroy(labust_msgs__action__CourseKeeping_Goal__Sequence * array)
{
  if (array) {
    labust_msgs__action__CourseKeeping_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
labust_msgs__action__CourseKeeping_Result__init(labust_msgs__action__CourseKeeping_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
labust_msgs__action__CourseKeeping_Result__fini(labust_msgs__action__CourseKeeping_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

labust_msgs__action__CourseKeeping_Result *
labust_msgs__action__CourseKeeping_Result__create()
{
  labust_msgs__action__CourseKeeping_Result * msg = (labust_msgs__action__CourseKeeping_Result *)malloc(sizeof(labust_msgs__action__CourseKeeping_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__action__CourseKeeping_Result));
  bool success = labust_msgs__action__CourseKeeping_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__action__CourseKeeping_Result__destroy(labust_msgs__action__CourseKeeping_Result * msg)
{
  if (msg) {
    labust_msgs__action__CourseKeeping_Result__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__action__CourseKeeping_Result__Sequence__init(labust_msgs__action__CourseKeeping_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__action__CourseKeeping_Result * data = NULL;
  if (size) {
    data = (labust_msgs__action__CourseKeeping_Result *)calloc(size, sizeof(labust_msgs__action__CourseKeeping_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__action__CourseKeeping_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__action__CourseKeeping_Result__fini(&data[i - 1]);
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
labust_msgs__action__CourseKeeping_Result__Sequence__fini(labust_msgs__action__CourseKeeping_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__action__CourseKeeping_Result__fini(&array->data[i]);
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

labust_msgs__action__CourseKeeping_Result__Sequence *
labust_msgs__action__CourseKeeping_Result__Sequence__create(size_t size)
{
  labust_msgs__action__CourseKeeping_Result__Sequence * array = (labust_msgs__action__CourseKeeping_Result__Sequence *)malloc(sizeof(labust_msgs__action__CourseKeeping_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__action__CourseKeeping_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__action__CourseKeeping_Result__Sequence__destroy(labust_msgs__action__CourseKeeping_Result__Sequence * array)
{
  if (array) {
    labust_msgs__action__CourseKeeping_Result__Sequence__fini(array);
  }
  free(array);
}


bool
labust_msgs__action__CourseKeeping_Feedback__init(labust_msgs__action__CourseKeeping_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  return true;
}

void
labust_msgs__action__CourseKeeping_Feedback__fini(labust_msgs__action__CourseKeeping_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
}

labust_msgs__action__CourseKeeping_Feedback *
labust_msgs__action__CourseKeeping_Feedback__create()
{
  labust_msgs__action__CourseKeeping_Feedback * msg = (labust_msgs__action__CourseKeeping_Feedback *)malloc(sizeof(labust_msgs__action__CourseKeeping_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__action__CourseKeeping_Feedback));
  bool success = labust_msgs__action__CourseKeeping_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__action__CourseKeeping_Feedback__destroy(labust_msgs__action__CourseKeeping_Feedback * msg)
{
  if (msg) {
    labust_msgs__action__CourseKeeping_Feedback__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__action__CourseKeeping_Feedback__Sequence__init(labust_msgs__action__CourseKeeping_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__action__CourseKeeping_Feedback * data = NULL;
  if (size) {
    data = (labust_msgs__action__CourseKeeping_Feedback *)calloc(size, sizeof(labust_msgs__action__CourseKeeping_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__action__CourseKeeping_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__action__CourseKeeping_Feedback__fini(&data[i - 1]);
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
labust_msgs__action__CourseKeeping_Feedback__Sequence__fini(labust_msgs__action__CourseKeeping_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__action__CourseKeeping_Feedback__fini(&array->data[i]);
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

labust_msgs__action__CourseKeeping_Feedback__Sequence *
labust_msgs__action__CourseKeeping_Feedback__Sequence__create(size_t size)
{
  labust_msgs__action__CourseKeeping_Feedback__Sequence * array = (labust_msgs__action__CourseKeeping_Feedback__Sequence *)malloc(sizeof(labust_msgs__action__CourseKeeping_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__action__CourseKeeping_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__action__CourseKeeping_Feedback__Sequence__destroy(labust_msgs__action__CourseKeeping_Feedback__Sequence * array)
{
  if (array) {
    labust_msgs__action__CourseKeeping_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "labust_msgs/action/detail/course_keeping__functions.h"

bool
labust_msgs__action__CourseKeeping_SendGoal_Request__init(labust_msgs__action__CourseKeeping_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    labust_msgs__action__CourseKeeping_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!labust_msgs__action__CourseKeeping_Goal__init(&msg->goal)) {
    labust_msgs__action__CourseKeeping_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__action__CourseKeeping_SendGoal_Request__fini(labust_msgs__action__CourseKeeping_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  labust_msgs__action__CourseKeeping_Goal__fini(&msg->goal);
}

labust_msgs__action__CourseKeeping_SendGoal_Request *
labust_msgs__action__CourseKeeping_SendGoal_Request__create()
{
  labust_msgs__action__CourseKeeping_SendGoal_Request * msg = (labust_msgs__action__CourseKeeping_SendGoal_Request *)malloc(sizeof(labust_msgs__action__CourseKeeping_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__action__CourseKeeping_SendGoal_Request));
  bool success = labust_msgs__action__CourseKeeping_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__action__CourseKeeping_SendGoal_Request__destroy(labust_msgs__action__CourseKeeping_SendGoal_Request * msg)
{
  if (msg) {
    labust_msgs__action__CourseKeeping_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence__init(labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__action__CourseKeeping_SendGoal_Request * data = NULL;
  if (size) {
    data = (labust_msgs__action__CourseKeeping_SendGoal_Request *)calloc(size, sizeof(labust_msgs__action__CourseKeeping_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__action__CourseKeeping_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__action__CourseKeeping_SendGoal_Request__fini(&data[i - 1]);
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
labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence__fini(labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__action__CourseKeeping_SendGoal_Request__fini(&array->data[i]);
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

labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence *
labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence__create(size_t size)
{
  labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence * array = (labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence *)malloc(sizeof(labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence__destroy(labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence * array)
{
  if (array) {
    labust_msgs__action__CourseKeeping_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
labust_msgs__action__CourseKeeping_SendGoal_Response__init(labust_msgs__action__CourseKeeping_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    labust_msgs__action__CourseKeeping_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__action__CourseKeeping_SendGoal_Response__fini(labust_msgs__action__CourseKeeping_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

labust_msgs__action__CourseKeeping_SendGoal_Response *
labust_msgs__action__CourseKeeping_SendGoal_Response__create()
{
  labust_msgs__action__CourseKeeping_SendGoal_Response * msg = (labust_msgs__action__CourseKeeping_SendGoal_Response *)malloc(sizeof(labust_msgs__action__CourseKeeping_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__action__CourseKeeping_SendGoal_Response));
  bool success = labust_msgs__action__CourseKeeping_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__action__CourseKeeping_SendGoal_Response__destroy(labust_msgs__action__CourseKeeping_SendGoal_Response * msg)
{
  if (msg) {
    labust_msgs__action__CourseKeeping_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence__init(labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__action__CourseKeeping_SendGoal_Response * data = NULL;
  if (size) {
    data = (labust_msgs__action__CourseKeeping_SendGoal_Response *)calloc(size, sizeof(labust_msgs__action__CourseKeeping_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__action__CourseKeeping_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__action__CourseKeeping_SendGoal_Response__fini(&data[i - 1]);
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
labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence__fini(labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__action__CourseKeeping_SendGoal_Response__fini(&array->data[i]);
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

labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence *
labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence__create(size_t size)
{
  labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence * array = (labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence *)malloc(sizeof(labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence__destroy(labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence * array)
{
  if (array) {
    labust_msgs__action__CourseKeeping_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
labust_msgs__action__CourseKeeping_GetResult_Request__init(labust_msgs__action__CourseKeeping_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    labust_msgs__action__CourseKeeping_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__action__CourseKeeping_GetResult_Request__fini(labust_msgs__action__CourseKeeping_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

labust_msgs__action__CourseKeeping_GetResult_Request *
labust_msgs__action__CourseKeeping_GetResult_Request__create()
{
  labust_msgs__action__CourseKeeping_GetResult_Request * msg = (labust_msgs__action__CourseKeeping_GetResult_Request *)malloc(sizeof(labust_msgs__action__CourseKeeping_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__action__CourseKeeping_GetResult_Request));
  bool success = labust_msgs__action__CourseKeeping_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__action__CourseKeeping_GetResult_Request__destroy(labust_msgs__action__CourseKeeping_GetResult_Request * msg)
{
  if (msg) {
    labust_msgs__action__CourseKeeping_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__action__CourseKeeping_GetResult_Request__Sequence__init(labust_msgs__action__CourseKeeping_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__action__CourseKeeping_GetResult_Request * data = NULL;
  if (size) {
    data = (labust_msgs__action__CourseKeeping_GetResult_Request *)calloc(size, sizeof(labust_msgs__action__CourseKeeping_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__action__CourseKeeping_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__action__CourseKeeping_GetResult_Request__fini(&data[i - 1]);
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
labust_msgs__action__CourseKeeping_GetResult_Request__Sequence__fini(labust_msgs__action__CourseKeeping_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__action__CourseKeeping_GetResult_Request__fini(&array->data[i]);
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

labust_msgs__action__CourseKeeping_GetResult_Request__Sequence *
labust_msgs__action__CourseKeeping_GetResult_Request__Sequence__create(size_t size)
{
  labust_msgs__action__CourseKeeping_GetResult_Request__Sequence * array = (labust_msgs__action__CourseKeeping_GetResult_Request__Sequence *)malloc(sizeof(labust_msgs__action__CourseKeeping_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__action__CourseKeeping_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__action__CourseKeeping_GetResult_Request__Sequence__destroy(labust_msgs__action__CourseKeeping_GetResult_Request__Sequence * array)
{
  if (array) {
    labust_msgs__action__CourseKeeping_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "labust_msgs/action/detail/course_keeping__functions.h"

bool
labust_msgs__action__CourseKeeping_GetResult_Response__init(labust_msgs__action__CourseKeeping_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!labust_msgs__action__CourseKeeping_Result__init(&msg->result)) {
    labust_msgs__action__CourseKeeping_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__action__CourseKeeping_GetResult_Response__fini(labust_msgs__action__CourseKeeping_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  labust_msgs__action__CourseKeeping_Result__fini(&msg->result);
}

labust_msgs__action__CourseKeeping_GetResult_Response *
labust_msgs__action__CourseKeeping_GetResult_Response__create()
{
  labust_msgs__action__CourseKeeping_GetResult_Response * msg = (labust_msgs__action__CourseKeeping_GetResult_Response *)malloc(sizeof(labust_msgs__action__CourseKeeping_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__action__CourseKeeping_GetResult_Response));
  bool success = labust_msgs__action__CourseKeeping_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__action__CourseKeeping_GetResult_Response__destroy(labust_msgs__action__CourseKeeping_GetResult_Response * msg)
{
  if (msg) {
    labust_msgs__action__CourseKeeping_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__action__CourseKeeping_GetResult_Response__Sequence__init(labust_msgs__action__CourseKeeping_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__action__CourseKeeping_GetResult_Response * data = NULL;
  if (size) {
    data = (labust_msgs__action__CourseKeeping_GetResult_Response *)calloc(size, sizeof(labust_msgs__action__CourseKeeping_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__action__CourseKeeping_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__action__CourseKeeping_GetResult_Response__fini(&data[i - 1]);
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
labust_msgs__action__CourseKeeping_GetResult_Response__Sequence__fini(labust_msgs__action__CourseKeeping_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__action__CourseKeeping_GetResult_Response__fini(&array->data[i]);
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

labust_msgs__action__CourseKeeping_GetResult_Response__Sequence *
labust_msgs__action__CourseKeeping_GetResult_Response__Sequence__create(size_t size)
{
  labust_msgs__action__CourseKeeping_GetResult_Response__Sequence * array = (labust_msgs__action__CourseKeeping_GetResult_Response__Sequence *)malloc(sizeof(labust_msgs__action__CourseKeeping_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__action__CourseKeeping_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__action__CourseKeeping_GetResult_Response__Sequence__destroy(labust_msgs__action__CourseKeeping_GetResult_Response__Sequence * array)
{
  if (array) {
    labust_msgs__action__CourseKeeping_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "labust_msgs/action/detail/course_keeping__functions.h"

bool
labust_msgs__action__CourseKeeping_FeedbackMessage__init(labust_msgs__action__CourseKeeping_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    labust_msgs__action__CourseKeeping_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!labust_msgs__action__CourseKeeping_Feedback__init(&msg->feedback)) {
    labust_msgs__action__CourseKeeping_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
labust_msgs__action__CourseKeeping_FeedbackMessage__fini(labust_msgs__action__CourseKeeping_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  labust_msgs__action__CourseKeeping_Feedback__fini(&msg->feedback);
}

labust_msgs__action__CourseKeeping_FeedbackMessage *
labust_msgs__action__CourseKeeping_FeedbackMessage__create()
{
  labust_msgs__action__CourseKeeping_FeedbackMessage * msg = (labust_msgs__action__CourseKeeping_FeedbackMessage *)malloc(sizeof(labust_msgs__action__CourseKeeping_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(labust_msgs__action__CourseKeeping_FeedbackMessage));
  bool success = labust_msgs__action__CourseKeeping_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
labust_msgs__action__CourseKeeping_FeedbackMessage__destroy(labust_msgs__action__CourseKeeping_FeedbackMessage * msg)
{
  if (msg) {
    labust_msgs__action__CourseKeeping_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence__init(labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  labust_msgs__action__CourseKeeping_FeedbackMessage * data = NULL;
  if (size) {
    data = (labust_msgs__action__CourseKeeping_FeedbackMessage *)calloc(size, sizeof(labust_msgs__action__CourseKeeping_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = labust_msgs__action__CourseKeeping_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        labust_msgs__action__CourseKeeping_FeedbackMessage__fini(&data[i - 1]);
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
labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence__fini(labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      labust_msgs__action__CourseKeeping_FeedbackMessage__fini(&array->data[i]);
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

labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence *
labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence__create(size_t size)
{
  labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence * array = (labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence *)malloc(sizeof(labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence__destroy(labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence * array)
{
  if (array) {
    labust_msgs__action__CourseKeeping_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
