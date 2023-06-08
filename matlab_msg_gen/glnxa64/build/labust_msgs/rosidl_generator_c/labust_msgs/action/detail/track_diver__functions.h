// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from labust_msgs:action/TrackDiver.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__FUNCTIONS_H_
#define LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "labust_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "labust_msgs/action/detail/track_diver__struct.h"

/// Initialize action/TrackDiver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * labust_msgs__action__TrackDiver_Goal
 * )) before or use
 * labust_msgs__action__TrackDiver_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_Goal__init(labust_msgs__action__TrackDiver_Goal * msg);

/// Finalize action/TrackDiver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Goal__fini(labust_msgs__action__TrackDiver_Goal * msg);

/// Create action/TrackDiver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * labust_msgs__action__TrackDiver_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_Goal *
labust_msgs__action__TrackDiver_Goal__create();

/// Destroy action/TrackDiver message.
/**
 * It calls
 * labust_msgs__action__TrackDiver_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Goal__destroy(labust_msgs__action__TrackDiver_Goal * msg);


/// Initialize array of action/TrackDiver messages.
/**
 * It allocates the memory for the number of elements and calls
 * labust_msgs__action__TrackDiver_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_Goal__Sequence__init(labust_msgs__action__TrackDiver_Goal__Sequence * array, size_t size);

/// Finalize array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Goal__Sequence__fini(labust_msgs__action__TrackDiver_Goal__Sequence * array);

/// Create array of action/TrackDiver messages.
/**
 * It allocates the memory for the array and calls
 * labust_msgs__action__TrackDiver_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_Goal__Sequence *
labust_msgs__action__TrackDiver_Goal__Sequence__create(size_t size);

/// Destroy array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Goal__Sequence__destroy(labust_msgs__action__TrackDiver_Goal__Sequence * array);

/// Initialize action/TrackDiver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * labust_msgs__action__TrackDiver_Result
 * )) before or use
 * labust_msgs__action__TrackDiver_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_Result__init(labust_msgs__action__TrackDiver_Result * msg);

/// Finalize action/TrackDiver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Result__fini(labust_msgs__action__TrackDiver_Result * msg);

/// Create action/TrackDiver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * labust_msgs__action__TrackDiver_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_Result *
labust_msgs__action__TrackDiver_Result__create();

/// Destroy action/TrackDiver message.
/**
 * It calls
 * labust_msgs__action__TrackDiver_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Result__destroy(labust_msgs__action__TrackDiver_Result * msg);


/// Initialize array of action/TrackDiver messages.
/**
 * It allocates the memory for the number of elements and calls
 * labust_msgs__action__TrackDiver_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_Result__Sequence__init(labust_msgs__action__TrackDiver_Result__Sequence * array, size_t size);

/// Finalize array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Result__Sequence__fini(labust_msgs__action__TrackDiver_Result__Sequence * array);

/// Create array of action/TrackDiver messages.
/**
 * It allocates the memory for the array and calls
 * labust_msgs__action__TrackDiver_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_Result__Sequence *
labust_msgs__action__TrackDiver_Result__Sequence__create(size_t size);

/// Destroy array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Result__Sequence__destroy(labust_msgs__action__TrackDiver_Result__Sequence * array);

/// Initialize action/TrackDiver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * labust_msgs__action__TrackDiver_Feedback
 * )) before or use
 * labust_msgs__action__TrackDiver_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_Feedback__init(labust_msgs__action__TrackDiver_Feedback * msg);

/// Finalize action/TrackDiver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Feedback__fini(labust_msgs__action__TrackDiver_Feedback * msg);

/// Create action/TrackDiver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * labust_msgs__action__TrackDiver_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_Feedback *
labust_msgs__action__TrackDiver_Feedback__create();

/// Destroy action/TrackDiver message.
/**
 * It calls
 * labust_msgs__action__TrackDiver_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Feedback__destroy(labust_msgs__action__TrackDiver_Feedback * msg);


/// Initialize array of action/TrackDiver messages.
/**
 * It allocates the memory for the number of elements and calls
 * labust_msgs__action__TrackDiver_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_Feedback__Sequence__init(labust_msgs__action__TrackDiver_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Feedback__Sequence__fini(labust_msgs__action__TrackDiver_Feedback__Sequence * array);

/// Create array of action/TrackDiver messages.
/**
 * It allocates the memory for the array and calls
 * labust_msgs__action__TrackDiver_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_Feedback__Sequence *
labust_msgs__action__TrackDiver_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_Feedback__Sequence__destroy(labust_msgs__action__TrackDiver_Feedback__Sequence * array);

/// Initialize action/TrackDiver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * labust_msgs__action__TrackDiver_SendGoal_Request
 * )) before or use
 * labust_msgs__action__TrackDiver_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_SendGoal_Request__init(labust_msgs__action__TrackDiver_SendGoal_Request * msg);

/// Finalize action/TrackDiver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_SendGoal_Request__fini(labust_msgs__action__TrackDiver_SendGoal_Request * msg);

/// Create action/TrackDiver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * labust_msgs__action__TrackDiver_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_SendGoal_Request *
labust_msgs__action__TrackDiver_SendGoal_Request__create();

/// Destroy action/TrackDiver message.
/**
 * It calls
 * labust_msgs__action__TrackDiver_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_SendGoal_Request__destroy(labust_msgs__action__TrackDiver_SendGoal_Request * msg);


/// Initialize array of action/TrackDiver messages.
/**
 * It allocates the memory for the number of elements and calls
 * labust_msgs__action__TrackDiver_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_SendGoal_Request__Sequence__init(labust_msgs__action__TrackDiver_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_SendGoal_Request__Sequence__fini(labust_msgs__action__TrackDiver_SendGoal_Request__Sequence * array);

/// Create array of action/TrackDiver messages.
/**
 * It allocates the memory for the array and calls
 * labust_msgs__action__TrackDiver_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_SendGoal_Request__Sequence *
labust_msgs__action__TrackDiver_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_SendGoal_Request__Sequence__destroy(labust_msgs__action__TrackDiver_SendGoal_Request__Sequence * array);

/// Initialize action/TrackDiver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * labust_msgs__action__TrackDiver_SendGoal_Response
 * )) before or use
 * labust_msgs__action__TrackDiver_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_SendGoal_Response__init(labust_msgs__action__TrackDiver_SendGoal_Response * msg);

/// Finalize action/TrackDiver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_SendGoal_Response__fini(labust_msgs__action__TrackDiver_SendGoal_Response * msg);

/// Create action/TrackDiver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * labust_msgs__action__TrackDiver_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_SendGoal_Response *
labust_msgs__action__TrackDiver_SendGoal_Response__create();

/// Destroy action/TrackDiver message.
/**
 * It calls
 * labust_msgs__action__TrackDiver_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_SendGoal_Response__destroy(labust_msgs__action__TrackDiver_SendGoal_Response * msg);


/// Initialize array of action/TrackDiver messages.
/**
 * It allocates the memory for the number of elements and calls
 * labust_msgs__action__TrackDiver_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_SendGoal_Response__Sequence__init(labust_msgs__action__TrackDiver_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_SendGoal_Response__Sequence__fini(labust_msgs__action__TrackDiver_SendGoal_Response__Sequence * array);

/// Create array of action/TrackDiver messages.
/**
 * It allocates the memory for the array and calls
 * labust_msgs__action__TrackDiver_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_SendGoal_Response__Sequence *
labust_msgs__action__TrackDiver_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_SendGoal_Response__Sequence__destroy(labust_msgs__action__TrackDiver_SendGoal_Response__Sequence * array);

/// Initialize action/TrackDiver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * labust_msgs__action__TrackDiver_GetResult_Request
 * )) before or use
 * labust_msgs__action__TrackDiver_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_GetResult_Request__init(labust_msgs__action__TrackDiver_GetResult_Request * msg);

/// Finalize action/TrackDiver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_GetResult_Request__fini(labust_msgs__action__TrackDiver_GetResult_Request * msg);

/// Create action/TrackDiver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * labust_msgs__action__TrackDiver_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_GetResult_Request *
labust_msgs__action__TrackDiver_GetResult_Request__create();

/// Destroy action/TrackDiver message.
/**
 * It calls
 * labust_msgs__action__TrackDiver_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_GetResult_Request__destroy(labust_msgs__action__TrackDiver_GetResult_Request * msg);


/// Initialize array of action/TrackDiver messages.
/**
 * It allocates the memory for the number of elements and calls
 * labust_msgs__action__TrackDiver_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_GetResult_Request__Sequence__init(labust_msgs__action__TrackDiver_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_GetResult_Request__Sequence__fini(labust_msgs__action__TrackDiver_GetResult_Request__Sequence * array);

/// Create array of action/TrackDiver messages.
/**
 * It allocates the memory for the array and calls
 * labust_msgs__action__TrackDiver_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_GetResult_Request__Sequence *
labust_msgs__action__TrackDiver_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_GetResult_Request__Sequence__destroy(labust_msgs__action__TrackDiver_GetResult_Request__Sequence * array);

/// Initialize action/TrackDiver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * labust_msgs__action__TrackDiver_GetResult_Response
 * )) before or use
 * labust_msgs__action__TrackDiver_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_GetResult_Response__init(labust_msgs__action__TrackDiver_GetResult_Response * msg);

/// Finalize action/TrackDiver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_GetResult_Response__fini(labust_msgs__action__TrackDiver_GetResult_Response * msg);

/// Create action/TrackDiver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * labust_msgs__action__TrackDiver_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_GetResult_Response *
labust_msgs__action__TrackDiver_GetResult_Response__create();

/// Destroy action/TrackDiver message.
/**
 * It calls
 * labust_msgs__action__TrackDiver_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_GetResult_Response__destroy(labust_msgs__action__TrackDiver_GetResult_Response * msg);


/// Initialize array of action/TrackDiver messages.
/**
 * It allocates the memory for the number of elements and calls
 * labust_msgs__action__TrackDiver_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_GetResult_Response__Sequence__init(labust_msgs__action__TrackDiver_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_GetResult_Response__Sequence__fini(labust_msgs__action__TrackDiver_GetResult_Response__Sequence * array);

/// Create array of action/TrackDiver messages.
/**
 * It allocates the memory for the array and calls
 * labust_msgs__action__TrackDiver_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_GetResult_Response__Sequence *
labust_msgs__action__TrackDiver_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_GetResult_Response__Sequence__destroy(labust_msgs__action__TrackDiver_GetResult_Response__Sequence * array);

/// Initialize action/TrackDiver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * labust_msgs__action__TrackDiver_FeedbackMessage
 * )) before or use
 * labust_msgs__action__TrackDiver_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_FeedbackMessage__init(labust_msgs__action__TrackDiver_FeedbackMessage * msg);

/// Finalize action/TrackDiver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_FeedbackMessage__fini(labust_msgs__action__TrackDiver_FeedbackMessage * msg);

/// Create action/TrackDiver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * labust_msgs__action__TrackDiver_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_FeedbackMessage *
labust_msgs__action__TrackDiver_FeedbackMessage__create();

/// Destroy action/TrackDiver message.
/**
 * It calls
 * labust_msgs__action__TrackDiver_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_FeedbackMessage__destroy(labust_msgs__action__TrackDiver_FeedbackMessage * msg);


/// Initialize array of action/TrackDiver messages.
/**
 * It allocates the memory for the number of elements and calls
 * labust_msgs__action__TrackDiver_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
bool
labust_msgs__action__TrackDiver_FeedbackMessage__Sequence__init(labust_msgs__action__TrackDiver_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_FeedbackMessage__Sequence__fini(labust_msgs__action__TrackDiver_FeedbackMessage__Sequence * array);

/// Create array of action/TrackDiver messages.
/**
 * It allocates the memory for the array and calls
 * labust_msgs__action__TrackDiver_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
labust_msgs__action__TrackDiver_FeedbackMessage__Sequence *
labust_msgs__action__TrackDiver_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TrackDiver messages.
/**
 * It calls
 * labust_msgs__action__TrackDiver_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_labust_msgs
void
labust_msgs__action__TrackDiver_FeedbackMessage__Sequence__destroy(labust_msgs__action__TrackDiver_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__FUNCTIONS_H_
