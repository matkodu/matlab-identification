// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/Go2PointFA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__GO2_POINT_FA__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__GO2_POINT_FA__STRUCT_HPP_

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
# define DEPRECATED__labust_msgs__msg__Go2PointFA __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__Go2PointFA __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Go2PointFA_
{
  using Type = Go2PointFA_<ContainerAllocator>;

  explicit Go2PointFA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
      this->speed = 0.0f;
      this->victory_radius = 0.0f;
    }
  }

  explicit Go2PointFA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
      this->speed = 0.0f;
      this->victory_radius = 0.0f;
    }
  }

  // field types and members
  using _point_type =
    auv_msgs::msg::NED_<ContainerAllocator>;
  _point_type point;
  using _heading_type =
    float;
  _heading_type heading;
  using _speed_type =
    float;
  _speed_type speed;
  using _victory_radius_type =
    float;
  _victory_radius_type victory_radius;

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
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__victory_radius(
    const float & _arg)
  {
    this->victory_radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::Go2PointFA_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::Go2PointFA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::Go2PointFA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::Go2PointFA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::Go2PointFA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::Go2PointFA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::Go2PointFA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::Go2PointFA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::Go2PointFA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::Go2PointFA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__Go2PointFA
    std::shared_ptr<labust_msgs::msg::Go2PointFA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__Go2PointFA
    std::shared_ptr<labust_msgs::msg::Go2PointFA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Go2PointFA_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->victory_radius != other.victory_radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const Go2PointFA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Go2PointFA_

// alias to use template instance with default allocator
using Go2PointFA =
  labust_msgs::msg::Go2PointFA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__GO2_POINT_FA__STRUCT_HPP_
