// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/StartParser.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__START_PARSER__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__START_PARSER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'start_position'
#include "auv_msgs/msg/detail/ned__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__StartParser __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__StartParser __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StartParser_
{
  using Type = StartParser_<ContainerAllocator>;

  explicit StartParser_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->method = 0;
      this->mission_data = "";
      this->relative = false;
    }
  }

  explicit StartParser_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_data(_alloc),
    start_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->method = 0;
      this->mission_data = "";
      this->relative = false;
    }
  }

  // field types and members
  using _method_type =
    uint8_t;
  _method_type method;
  using _mission_data_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mission_data_type mission_data;
  using _relative_type =
    bool;
  _relative_type relative;
  using _start_position_type =
    auv_msgs::msg::NED_<ContainerAllocator>;
  _start_position_type start_position;

  // setters for named parameter idiom
  Type & set__method(
    const uint8_t & _arg)
  {
    this->method = _arg;
    return *this;
  }
  Type & set__mission_data(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mission_data = _arg;
    return *this;
  }
  Type & set__relative(
    const bool & _arg)
  {
    this->relative = _arg;
    return *this;
  }
  Type & set__start_position(
    const auv_msgs::msg::NED_<ContainerAllocator> & _arg)
  {
    this->start_position = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FILENAME =
    0u;
  static constexpr uint8_t STRING =
    1u;

  // pointer types
  using RawPtr =
    labust_msgs::msg::StartParser_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::StartParser_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::StartParser_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::StartParser_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::StartParser_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::StartParser_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::StartParser_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::StartParser_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::StartParser_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::StartParser_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__StartParser
    std::shared_ptr<labust_msgs::msg::StartParser_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__StartParser
    std::shared_ptr<labust_msgs::msg::StartParser_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartParser_ & other) const
  {
    if (this->method != other.method) {
      return false;
    }
    if (this->mission_data != other.mission_data) {
      return false;
    }
    if (this->relative != other.relative) {
      return false;
    }
    if (this->start_position != other.start_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartParser_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartParser_

// alias to use template instance with default allocator
using StartParser =
  labust_msgs::msg::StartParser_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t StartParser_<ContainerAllocator>::FILENAME;
template<typename ContainerAllocator>
constexpr uint8_t StartParser_<ContainerAllocator>::STRING;

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__START_PARSER__STRUCT_HPP_
