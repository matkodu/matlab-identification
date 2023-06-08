// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from labust_msgs:srv/UnRegisterController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__FUNCTIONS_H_
#define LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "labust_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "labust_msgs/srv/detail/un_register_controller__struct.h"

/// Initialize srv/UnRegisterController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * labust_msgs__srv__UnRegisterController_Request
 * )) before or use
 * labust_msgs__srv__UnRegisterController_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__srv__UnRegisterController_Request__init(labust_msgs__srv__UnRegisterController_Request * msg);

/// Finalize srv/UnRegisterController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__srv__UnRegisterController_Request__fini(labust_msgs__srv__UnRegisterController_Request * msg);

/// Create srv/UnRegisterController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * labust_msgs__srv__UnRegisterController_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__srv__UnRegisterController_Request *
labust_msgs__srv__UnRegisterController_Request__create();

/// Destroy srv/UnRegisterController message.
/**
 * It calls
 * labust_msgs__srv__UnRegisterController_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__srv__UnRegisterController_Request__destroy(labust_msgs__srv__UnRegisterController_Request * msg);


/// Initialize array of srv/UnRegisterController messages.
/**
 * It allocates the memory for the number of elements and calls
 * labust_msgs__srv__UnRegisterController_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__srv__UnRegisterController_Request__Sequence__init(labust_msgs__srv__UnRegisterController_Request__Sequence * array, size_t size);

/// Finalize array of srv/UnRegisterController messages.
/**
 * It calls
 * labust_msgs__srv__UnRegisterController_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__srv__UnRegisterController_Request__Sequence__fini(labust_msgs__srv__UnRegisterController_Request__Sequence * array);

/// Create array of srv/UnRegisterController messages.
/**
 * It allocates the memory for the array and calls
 * labust_msgs__srv__UnRegisterController_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__srv__UnRegisterController_Request__Sequence *
labust_msgs__srv__UnRegisterController_Request__Sequence__create(size_t size);

/// Destroy array of srv/UnRegisterController messages.
/**
 * It calls
 * labust_msgs__srv__UnRegisterController_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__srv__UnRegisterController_Request__Sequence__destroy(labust_msgs__srv__UnRegisterController_Request__Sequence * array);

/// Initialize srv/UnRegisterController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * labust_msgs__srv__UnRegisterController_Response
 * )) before or use
 * labust_msgs__srv__UnRegisterController_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__srv__UnRegisterController_Response__init(labust_msgs__srv__UnRegisterController_Response * msg);

/// Finalize srv/UnRegisterController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__srv__UnRegisterController_Response__fini(labust_msgs__srv__UnRegisterController_Response * msg);

/// Create srv/UnRegisterController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * labust_msgs__srv__UnRegisterController_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__srv__UnRegisterController_Response *
labust_msgs__srv__UnRegisterController_Response__create();

/// Destroy srv/UnRegisterController message.
/**
 * It calls
 * labust_msgs__srv__UnRegisterController_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__srv__UnRegisterController_Response__destroy(labust_msgs__srv__UnRegisterController_Response * msg);


/// Initialize array of srv/UnRegisterController messages.
/**
 * It allocates the memory for the number of elements and calls
 * labust_msgs__srv__UnRegisterController_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__srv__UnRegisterController_Response__Sequence__init(labust_msgs__srv__UnRegisterController_Response__Sequence * array, size_t size);

/// Finalize array of srv/UnRegisterController messages.
/**
 * It calls
 * labust_msgs__srv__UnRegisterController_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__srv__UnRegisterController_Response__Sequence__fini(labust_msgs__srv__UnRegisterController_Response__Sequence * array);

/// Create array of srv/UnRegisterController messages.
/**
 * It allocates the memory for the array and calls
 * labust_msgs__srv__UnRegisterController_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__srv__UnRegisterController_Response__Sequence *
labust_msgs__srv__UnRegisterController_Response__Sequence__create(size_t size);

/// Destroy array of srv/UnRegisterController messages.
/**
 * It calls
 * labust_msgs__srv__UnRegisterController_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__srv__UnRegisterController_Response__Sequence__destroy(labust_msgs__srv__UnRegisterController_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__FUNCTIONS_H_
