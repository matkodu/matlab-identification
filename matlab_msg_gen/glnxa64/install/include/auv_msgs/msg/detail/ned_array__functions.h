// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from auv_msgs:msg/NEDArray.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NED_ARRAY__FUNCTIONS_H_
#define AUV_MSGS__MSG__DETAIL__NED_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "auv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "auv_msgs/msg/detail/ned_array__struct.h"

/// Initialize msg/NEDArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * auv_msgs__msg__NEDArray
 * )) before or use
 * auv_msgs__msg__NEDArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
bool
auv_msgs__msg__NEDArray__init(auv_msgs__msg__NEDArray * msg);

/// Finalize msg/NEDArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
void
auv_msgs__msg__NEDArray__fini(auv_msgs__msg__NEDArray * msg);

/// Create msg/NEDArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * auv_msgs__msg__NEDArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
auv_msgs__msg__NEDArray *
auv_msgs__msg__NEDArray__create();

/// Destroy msg/NEDArray message.
/**
 * It calls
 * auv_msgs__msg__NEDArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
void
auv_msgs__msg__NEDArray__destroy(auv_msgs__msg__NEDArray * msg);


/// Initialize array of msg/NEDArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * auv_msgs__msg__NEDArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
bool
auv_msgs__msg__NEDArray__Sequence__init(auv_msgs__msg__NEDArray__Sequence * array, size_t size);

/// Finalize array of msg/NEDArray messages.
/**
 * It calls
 * auv_msgs__msg__NEDArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
void
auv_msgs__msg__NEDArray__Sequence__fini(auv_msgs__msg__NEDArray__Sequence * array);

/// Create array of msg/NEDArray messages.
/**
 * It allocates the memory for the array and calls
 * auv_msgs__msg__NEDArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
auv_msgs__msg__NEDArray__Sequence *
auv_msgs__msg__NEDArray__Sequence__create(size_t size);

/// Destroy array of msg/NEDArray messages.
/**
 * It calls
 * auv_msgs__msg__NEDArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
void
auv_msgs__msg__NEDArray__Sequence__destroy(auv_msgs__msg__NEDArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUV_MSGS__MSG__DETAIL__NED_ARRAY__FUNCTIONS_H_
