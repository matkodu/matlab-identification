// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/Windup6Axis.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__WINDUP6_AXIS__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__WINDUP6_AXIS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__Windup6Axis __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__Windup6Axis __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Windup6Axis_
{
  using Type = Windup6Axis_<ContainerAllocator>;

  explicit Windup6Axis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0;
      this->y = 0;
      this->z = 0;
      this->roll = 0;
      this->pitch = 0;
      this->yaw = 0;
    }
  }

  explicit Windup6Axis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0;
      this->y = 0;
      this->z = 0;
      this->roll = 0;
      this->pitch = 0;
      this->yaw = 0;
    }
  }

  // field types and members
  using _x_type =
    int8_t;
  _x_type x;
  using _y_type =
    int8_t;
  _y_type y;
  using _z_type =
    int8_t;
  _z_type z;
  using _roll_type =
    int8_t;
  _roll_type roll;
  using _pitch_type =
    int8_t;
  _pitch_type pitch;
  using _yaw_type =
    int8_t;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__x(
    const int8_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int8_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const int8_t & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__roll(
    const int8_t & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const int8_t & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const int8_t & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::Windup6Axis_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::Windup6Axis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::Windup6Axis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::Windup6Axis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::Windup6Axis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::Windup6Axis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::Windup6Axis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::Windup6Axis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::Windup6Axis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::Windup6Axis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__Windup6Axis
    std::shared_ptr<labust_msgs::msg::Windup6Axis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__Windup6Axis
    std::shared_ptr<labust_msgs::msg::Windup6Axis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Windup6Axis_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Windup6Axis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Windup6Axis_

// alias to use template instance with default allocator
using Windup6Axis =
  labust_msgs::msg::Windup6Axis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__WINDUP6_AXIS__STRUCT_HPP_
