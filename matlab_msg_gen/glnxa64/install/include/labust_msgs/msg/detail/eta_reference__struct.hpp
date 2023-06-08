// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/EtaReference.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__ETA_REFERENCE__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__ETA_REFERENCE__STRUCT_HPP_

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
#include "auv_msgs/msg/detail/navigation_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__EtaReference __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__EtaReference __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EtaReference_
{
  using Type = EtaReference_<ContainerAllocator>;

  explicit EtaReference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    reference(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identity_token = "";
    }
  }

  explicit EtaReference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    auv_msgs::msg::NavigationStatus_<ContainerAllocator>;
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
    const auv_msgs::msg::NavigationStatus_<ContainerAllocator> & _arg)
  {
    this->reference = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::EtaReference_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::EtaReference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::EtaReference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::EtaReference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::EtaReference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::EtaReference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::EtaReference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::EtaReference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::EtaReference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::EtaReference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__EtaReference
    std::shared_ptr<labust_msgs::msg::EtaReference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__EtaReference
    std::shared_ptr<labust_msgs::msg::EtaReference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EtaReference_ & other) const
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
  bool operator!=(const EtaReference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EtaReference_

// alias to use template instance with default allocator
using EtaReference =
  labust_msgs::msg::EtaReference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__ETA_REFERENCE__STRUCT_HPP_
