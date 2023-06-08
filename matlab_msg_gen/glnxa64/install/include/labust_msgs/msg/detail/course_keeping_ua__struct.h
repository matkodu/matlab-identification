// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from labust_msgs:msg/CourseKeepingUA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_UA__STRUCT_H_
#define LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_UA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CourseKeepingUA in the package labust_msgs.
typedef struct labust_msgs__msg__CourseKeepingUA
{
  float course;
  float speed;
} labust_msgs__msg__CourseKeepingUA;

// Struct for a sequence of labust_msgs__msg__CourseKeepingUA.
typedef struct labust_msgs__msg__CourseKeepingUA__Sequence
{
  labust_msgs__msg__CourseKeepingUA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} labust_msgs__msg__CourseKeepingUA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_UA__STRUCT_H_
