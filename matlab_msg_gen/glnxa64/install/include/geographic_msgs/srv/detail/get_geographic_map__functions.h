// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from geographic_msgs:srv/GetGeographicMap.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__FUNCTIONS_H_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "geographic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "geographic_msgs/srv/detail/get_geographic_map__struct.h"

/// Initialize srv/GetGeographicMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * geographic_msgs__srv__GetGeographicMap_Request
 * )) before or use
 * geographic_msgs__srv__GetGeographicMap_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__srv__GetGeographicMap_Request__init(geographic_msgs__srv__GetGeographicMap_Request * msg);

/// Finalize srv/GetGeographicMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__srv__GetGeographicMap_Request__fini(geographic_msgs__srv__GetGeographicMap_Request * msg);

/// Create srv/GetGeographicMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * geographic_msgs__srv__GetGeographicMap_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
geographic_msgs__srv__GetGeographicMap_Request *
geographic_msgs__srv__GetGeographicMap_Request__create();

/// Destroy srv/GetGeographicMap message.
/**
 * It calls
 * geographic_msgs__srv__GetGeographicMap_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__srv__GetGeographicMap_Request__destroy(geographic_msgs__srv__GetGeographicMap_Request * msg);


/// Initialize array of srv/GetGeographicMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * geographic_msgs__srv__GetGeographicMap_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__srv__GetGeographicMap_Request__Sequence__init(geographic_msgs__srv__GetGeographicMap_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetGeographicMap messages.
/**
 * It calls
 * geographic_msgs__srv__GetGeographicMap_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__srv__GetGeographicMap_Request__Sequence__fini(geographic_msgs__srv__GetGeographicMap_Request__Sequence * array);

/// Create array of srv/GetGeographicMap messages.
/**
 * It allocates the memory for the array and calls
 * geographic_msgs__srv__GetGeographicMap_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
geographic_msgs__srv__GetGeographicMap_Request__Sequence *
geographic_msgs__srv__GetGeographicMap_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetGeographicMap messages.
/**
 * It calls
 * geographic_msgs__srv__GetGeographicMap_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__srv__GetGeographicMap_Request__Sequence__destroy(geographic_msgs__srv__GetGeographicMap_Request__Sequence * array);

/// Initialize srv/GetGeographicMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * geographic_msgs__srv__GetGeographicMap_Response
 * )) before or use
 * geographic_msgs__srv__GetGeographicMap_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__srv__GetGeographicMap_Response__init(geographic_msgs__srv__GetGeographicMap_Response * msg);

/// Finalize srv/GetGeographicMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__srv__GetGeographicMap_Response__fini(geographic_msgs__srv__GetGeographicMap_Response * msg);

/// Create srv/GetGeographicMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * geographic_msgs__srv__GetGeographicMap_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
geographic_msgs__srv__GetGeographicMap_Response *
geographic_msgs__srv__GetGeographicMap_Response__create();

/// Destroy srv/GetGeographicMap message.
/**
 * It calls
 * geographic_msgs__srv__GetGeographicMap_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__srv__GetGeographicMap_Response__destroy(geographic_msgs__srv__GetGeographicMap_Response * msg);


/// Initialize array of srv/GetGeographicMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * geographic_msgs__srv__GetGeographicMap_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
bool
geographic_msgs__srv__GetGeographicMap_Response__Sequence__init(geographic_msgs__srv__GetGeographicMap_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetGeographicMap messages.
/**
 * It calls
 * geographic_msgs__srv__GetGeographicMap_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__srv__GetGeographicMap_Response__Sequence__fini(geographic_msgs__srv__GetGeographicMap_Response__Sequence * array);

/// Create array of srv/GetGeographicMap messages.
/**
 * It allocates the memory for the array and calls
 * geographic_msgs__srv__GetGeographicMap_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
geographic_msgs__srv__GetGeographicMap_Response__Sequence *
geographic_msgs__srv__GetGeographicMap_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetGeographicMap messages.
/**
 * It calls
 * geographic_msgs__srv__GetGeographicMap_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
void
geographic_msgs__srv__GetGeographicMap_Response__Sequence__destroy(geographic_msgs__srv__GetGeographicMap_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__FUNCTIONS_H_
