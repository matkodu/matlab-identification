// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/RelativePosition.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__RelativePosition __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__RelativePosition __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelativePosition_
{
  using Type = RelativePosition_<ContainerAllocator>;

  explicit RelativePosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->x_variance = 0.0f;
      this->y_variance = 0.0f;
      this->range = 0.0f;
      this->bearing = 0.0f;
      this->range_variance = 0.0f;
      this->bearing_variance = 0.0f;
      this->altitude = 0.0f;
      this->altitude_variance = 0.0f;
      this->heading = 0.0f;
    }
  }

  explicit RelativePosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->x_variance = 0.0f;
      this->y_variance = 0.0f;
      this->range = 0.0f;
      this->bearing = 0.0f;
      this->range_variance = 0.0f;
      this->bearing_variance = 0.0f;
      this->altitude = 0.0f;
      this->altitude_variance = 0.0f;
      this->heading = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _x_variance_type =
    float;
  _x_variance_type x_variance;
  using _y_variance_type =
    float;
  _y_variance_type y_variance;
  using _range_type =
    float;
  _range_type range;
  using _bearing_type =
    float;
  _bearing_type bearing;
  using _range_variance_type =
    float;
  _range_variance_type range_variance;
  using _bearing_variance_type =
    float;
  _bearing_variance_type bearing_variance;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _altitude_variance_type =
    float;
  _altitude_variance_type altitude_variance;
  using _heading_type =
    float;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__x_variance(
    const float & _arg)
  {
    this->x_variance = _arg;
    return *this;
  }
  Type & set__y_variance(
    const float & _arg)
  {
    this->y_variance = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__bearing(
    const float & _arg)
  {
    this->bearing = _arg;
    return *this;
  }
  Type & set__range_variance(
    const float & _arg)
  {
    this->range_variance = _arg;
    return *this;
  }
  Type & set__bearing_variance(
    const float & _arg)
  {
    this->bearing_variance = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__altitude_variance(
    const float & _arg)
  {
    this->altitude_variance = _arg;
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
    labust_msgs::msg::RelativePosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::RelativePosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::RelativePosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::RelativePosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::RelativePosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::RelativePosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::RelativePosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::RelativePosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::RelativePosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::RelativePosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__RelativePosition
    std::shared_ptr<labust_msgs::msg::RelativePosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__RelativePosition
    std::shared_ptr<labust_msgs::msg::RelativePosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelativePosition_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->x_variance != other.x_variance) {
      return false;
    }
    if (this->y_variance != other.y_variance) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    if (this->range_variance != other.range_variance) {
      return false;
    }
    if (this->bearing_variance != other.bearing_variance) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->altitude_variance != other.altitude_variance) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelativePosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelativePosition_

// alias to use template instance with default allocator
using RelativePosition =
  labust_msgs::msg::RelativePosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__RELATIVE_POSITION__STRUCT_HPP_
