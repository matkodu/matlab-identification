// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/NanomodemRange.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_RANGE__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_RANGE__STRUCT_HPP_

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
# define DEPRECATED__labust_msgs__msg__NanomodemRange __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__NanomodemRange __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NanomodemRange_
{
  using Type = NanomodemRange_<ContainerAllocator>;

  explicit NanomodemRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0l;
      this->range_m = 0.0f;
      this->id = 0;
    }
  }

  explicit NanomodemRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0l;
      this->range_m = 0.0f;
      this->id = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _range_type =
    int32_t;
  _range_type range;
  using _range_m_type =
    float;
  _range_m_type range_m;
  using _id_type =
    int16_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__range(
    const int32_t & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__range_m(
    const float & _arg)
  {
    this->range_m = _arg;
    return *this;
  }
  Type & set__id(
    const int16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::NanomodemRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::NanomodemRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::NanomodemRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::NanomodemRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NanomodemRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NanomodemRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NanomodemRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NanomodemRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::NanomodemRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::NanomodemRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__NanomodemRange
    std::shared_ptr<labust_msgs::msg::NanomodemRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__NanomodemRange
    std::shared_ptr<labust_msgs::msg::NanomodemRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NanomodemRange_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->range_m != other.range_m) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NanomodemRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NanomodemRange_

// alias to use template instance with default allocator
using NanomodemRange =
  labust_msgs::msg::NanomodemRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_RANGE__STRUCT_HPP_
