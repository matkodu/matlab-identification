// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/NuReference.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NU_REFERENCE__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__NU_REFERENCE__STRUCT_HPP_

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
// Member 'reference'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__NuReference __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__NuReference __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NuReference_
{
  using Type = NuReference_<ContainerAllocator>;

  explicit NuReference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    reference(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identity_token = "";
    }
  }

  explicit NuReference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    identity_token(_alloc),
    reference(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identity_token = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _identity_token_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _identity_token_type identity_token;
  using _reference_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _reference_type reference;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__identity_token(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->identity_token = _arg;
    return *this;
  }
  Type & set__reference(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->reference = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::NuReference_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::NuReference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::NuReference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::NuReference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NuReference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NuReference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NuReference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NuReference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::NuReference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::NuReference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__NuReference
    std::shared_ptr<labust_msgs::msg::NuReference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__NuReference
    std::shared_ptr<labust_msgs::msg::NuReference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NuReference_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->identity_token != other.identity_token) {
      return false;
    }
    if (this->reference != other.reference) {
      return false;
    }
    return true;
  }
  bool operator!=(const NuReference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NuReference_

// alias to use template instance with default allocator
using NuReference =
  labust_msgs::msg::NuReference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NU_REFERENCE__STRUCT_HPP_
