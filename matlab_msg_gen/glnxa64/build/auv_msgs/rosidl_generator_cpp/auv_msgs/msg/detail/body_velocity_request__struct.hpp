// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auv_msgs:msg/BodyVelocityRequest.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__BODY_VELOCITY_REQUEST__STRUCT_HPP_
#define AUV_MSGS__MSG__DETAIL__BODY_VELOCITY_REQUEST__STRUCT_HPP_

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
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__auv_msgs__msg__BodyVelocityRequest __attribute__((deprecated))
#else
# define DEPRECATED__auv_msgs__msg__BodyVelocityRequest __declspec(deprecated)
#endif

namespace auv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BodyVelocityRequest_
{
  using Type = BodyVelocityRequest_<ContainerAllocator>;

  explicit BodyVelocityRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 6>::iterator, bool>(this->disable_axis.begin(), this->disable_axis.end(), false);
    }
  }

  explicit BodyVelocityRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    twist(_alloc, _init),
    disable_axis(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 6>::iterator, bool>(this->disable_axis.begin(), this->disable_axis.end(), false);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _disable_axis_type =
    std::array<bool, 6>;
  _disable_axis_type disable_axis;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__disable_axis(
    const std::array<bool, 6> & _arg)
  {
    this->disable_axis = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auv_msgs__msg__BodyVelocityRequest
    std::shared_ptr<auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auv_msgs__msg__BodyVelocityRequest
    std::shared_ptr<auv_msgs::msg::BodyVelocityRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BodyVelocityRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->disable_axis != other.disable_axis) {
      return false;
    }
    return true;
  }
  bool operator!=(const BodyVelocityRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BodyVelocityRequest_

// alias to use template instance with default allocator
using BodyVelocityRequest =
  auv_msgs::msg::BodyVelocityRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__BODY_VELOCITY_REQUEST__STRUCT_HPP_
