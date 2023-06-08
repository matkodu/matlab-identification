// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/ISO.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__ISO__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__ISO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__ISO __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__ISO __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ISO_
{
  using Type = ISO_<ContainerAllocator>;

  explicit ISO_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dof = 0l;
      this->command = 0.0f;
      this->hysteresis = 0.0f;
      this->reference = 0.0f;
      this->sampling_rate = 0.0f;
    }
  }

  explicit ISO_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dof = 0l;
      this->command = 0.0f;
      this->hysteresis = 0.0f;
      this->reference = 0.0f;
      this->sampling_rate = 0.0f;
    }
  }

  // field types and members
  using _dof_type =
    int32_t;
  _dof_type dof;
  using _command_type =
    float;
  _command_type command;
  using _hysteresis_type =
    float;
  _hysteresis_type hysteresis;
  using _reference_type =
    float;
  _reference_type reference;
  using _sampling_rate_type =
    float;
  _sampling_rate_type sampling_rate;

  // setters for named parameter idiom
  Type & set__dof(
    const int32_t & _arg)
  {
    this->dof = _arg;
    return *this;
  }
  Type & set__command(
    const float & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__hysteresis(
    const float & _arg)
  {
    this->hysteresis = _arg;
    return *this;
  }
  Type & set__reference(
    const float & _arg)
  {
    this->reference = _arg;
    return *this;
  }
  Type & set__sampling_rate(
    const float & _arg)
  {
    this->sampling_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::ISO_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::ISO_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::ISO_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::ISO_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::ISO_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::ISO_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::ISO_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::ISO_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::ISO_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::ISO_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__ISO
    std::shared_ptr<labust_msgs::msg::ISO_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__ISO
    std::shared_ptr<labust_msgs::msg::ISO_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ISO_ & other) const
  {
    if (this->dof != other.dof) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->hysteresis != other.hysteresis) {
      return false;
    }
    if (this->reference != other.reference) {
      return false;
    }
    if (this->sampling_rate != other.sampling_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const ISO_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ISO_

// alias to use template instance with default allocator
using ISO =
  labust_msgs::msg::ISO_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__ISO__STRUCT_HPP_
