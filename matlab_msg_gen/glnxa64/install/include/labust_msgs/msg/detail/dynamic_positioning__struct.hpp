// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/DynamicPositioning.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'point'
#include "auv_msgs/msg/detail/ned__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__DynamicPositioning __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__DynamicPositioning __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamicPositioning_
{
  using Type = DynamicPositioning_<ContainerAllocator>;

  explicit DynamicPositioning_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
    }
  }

  explicit DynamicPositioning_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
    }
  }

  // field types and members
  using _point_type =
    auv_msgs::msg::NED_<ContainerAllocator>;
  _point_type point;
  using _heading_type =
    float;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__point(
    const auv_msgs::msg::NED_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::DynamicPositioning_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::DynamicPositioning_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::DynamicPositioning_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::DynamicPositioning_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::DynamicPositioning_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::DynamicPositioning_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::DynamicPositioning_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::DynamicPositioning_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::DynamicPositioning_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::DynamicPositioning_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__DynamicPositioning
    std::shared_ptr<labust_msgs::msg::DynamicPositioning_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__DynamicPositioning
    std::shared_ptr<labust_msgs::msg::DynamicPositioning_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicPositioning_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicPositioning_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicPositioning_

// alias to use template instance with default allocator
using DynamicPositioning =
  labust_msgs::msg::DynamicPositioning_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__DYNAMIC_POSITIONING__STRUCT_HPP_
