// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/CourseKeepingUA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_UA__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_UA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__CourseKeepingUA __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__CourseKeepingUA __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CourseKeepingUA_
{
  using Type = CourseKeepingUA_<ContainerAllocator>;

  explicit CourseKeepingUA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->course = 0.0f;
      this->speed = 0.0f;
    }
  }

  explicit CourseKeepingUA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->course = 0.0f;
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _course_type =
    float;
  _course_type course;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__course(
    const float & _arg)
  {
    this->course = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::CourseKeepingUA_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::CourseKeepingUA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::CourseKeepingUA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::CourseKeepingUA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::CourseKeepingUA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::CourseKeepingUA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::CourseKeepingUA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::CourseKeepingUA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::CourseKeepingUA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::CourseKeepingUA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__CourseKeepingUA
    std::shared_ptr<labust_msgs::msg::CourseKeepingUA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__CourseKeepingUA
    std::shared_ptr<labust_msgs::msg::CourseKeepingUA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CourseKeepingUA_ & other) const
  {
    if (this->course != other.course) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const CourseKeepingUA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CourseKeepingUA_

// alias to use template instance with default allocator
using CourseKeepingUA =
  labust_msgs::msg::CourseKeepingUA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_UA__STRUCT_HPP_
