// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/ExternalEvent.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__ExternalEvent __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__ExternalEvent __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExternalEvent_
{
  using Type = ExternalEvent_<ContainerAllocator>;

  explicit ExternalEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->description = "";
      this->value = 0.0f;
    }
  }

  explicit ExternalEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->description = "";
      this->value = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _description_type description;
  using _value_type =
    float;
  _value_type value;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::ExternalEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::ExternalEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::ExternalEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::ExternalEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::ExternalEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::ExternalEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::ExternalEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::ExternalEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::ExternalEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::ExternalEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__ExternalEvent
    std::shared_ptr<labust_msgs::msg::ExternalEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__ExternalEvent
    std::shared_ptr<labust_msgs::msg::ExternalEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExternalEvent_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExternalEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExternalEvent_

// alias to use template instance with default allocator
using ExternalEvent =
  labust_msgs::msg::ExternalEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__EXTERNAL_EVENT__STRUCT_HPP_
