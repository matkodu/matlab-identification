// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from auv_msgs:msg/VehiclePose.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__FUNCTIONS_H_
#define AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "auv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "auv_msgs/msg/detail/vehicle_pose__struct.h"

/// Initialize msg/VehiclePose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * auv_msgs__msg__VehiclePose
 * )) before or use
 * auv_msgs__msg__VehiclePose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
bool
auv_msgs__msg__VehiclePose__init(auv_msgs__msg__VehiclePose * msg);

/// Finalize msg/VehiclePose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
void
auv_msgs__msg__VehiclePose__fini(auv_msgs__msg__VehiclePose * msg);

/// Create msg/VehiclePose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * auv_msgs__msg__VehiclePose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
auv_msgs__msg__VehiclePose *
auv_msgs__msg__VehiclePose__create();

/// Destroy msg/VehiclePose message.
/**
 * It calls
 * auv_msgs__msg__VehiclePose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
void
auv_msgs__msg__VehiclePose__destroy(auv_msgs__msg__VehiclePose * msg);


/// Initialize array of msg/VehiclePose messages.
/**
 * It allocates the memory for the number of elements and calls
 * auv_msgs__msg__VehiclePose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
bool
auv_msgs__msg__VehiclePose__Sequence__init(auv_msgs__msg__VehiclePose__Sequence * array, size_t size);

/// Finalize array of msg/VehiclePose messages.
/**
 * It calls
 * auv_msgs__msg__VehiclePose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
void
auv_msgs__msg__VehiclePose__Sequence__fini(auv_msgs__msg__VehiclePose__Sequence * array);

/// Create array of msg/VehiclePose messages.
/**
 * It allocates the memory for the array and calls
 * auv_msgs__msg__VehiclePose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
auv_msgs__msg__VehiclePose__Sequence *
auv_msgs__msg__VehiclePose__Sequence__create(size_t size);

/// Destroy array of msg/VehiclePose messages.
/**
 * It calls
 * auv_msgs__msg__VehiclePose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_msgs
void
auv_msgs__msg__VehiclePose__Sequence__destroy(auv_msgs__msg__VehiclePose__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__FUNCTIONS_H_
