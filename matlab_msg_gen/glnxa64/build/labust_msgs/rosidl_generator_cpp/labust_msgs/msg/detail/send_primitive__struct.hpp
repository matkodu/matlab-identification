// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/SendPrimitive.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__SEND_PRIMITIVE__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__SEND_PRIMITIVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'event'
#include "labust_msgs/msg/detail/event_data__struct.hpp"
// Member 'primitive_string'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__SendPrimitive __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__SendPrimitive __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SendPrimitive_
{
  using Type = SendPrimitive_<ContainerAllocator>;

  explicit SendPrimitive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event(_init),
    primitive_string(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->primitive_id = 0l;
    }
  }

  explicit SendPrimitive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event(_alloc, _init),
    primitive_string(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->primitive_id = 0l;
    }
  }

  // field types and members
  using _primitive_id_type =
    int32_t;
  _primitive_id_type primitive_id;
  using _primitive_data_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _primitive_data_type primitive_data;
  using _event_type =
    labust_msgs::msg::EventData_<ContainerAllocator>;
  _event_type event;
  using _primitive_string_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _primitive_string_type primitive_string;

  // setters for named parameter idiom
  Type & set__primitive_id(
    const int32_t & _arg)
  {
    this->primitive_id = _arg;
    return *this;
  }
  Type & set__primitive_data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->primitive_data = _arg;
    return *this;
  }
  Type & set__event(
    const labust_msgs::msg::EventData_<ContainerAllocator> & _arg)
  {
    this->event = _arg;
    return *this;
  }
  Type & set__primitive_string(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->primitive_string = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::SendPrimitive_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::SendPrimitive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::SendPrimitive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::SendPrimitive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::SendPrimitive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::SendPrimitive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::SendPrimitive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::SendPrimitive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::SendPrimitive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::SendPrimitive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__SendPrimitive
    std::shared_ptr<labust_msgs::msg::SendPrimitive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__SendPrimitive
    std::shared_ptr<labust_msgs::msg::SendPrimitive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendPrimitive_ & other) const
  {
    if (this->primitive_id != other.primitive_id) {
      return false;
    }
    if (this->primitive_data != other.primitive_data) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    if (this->primitive_string != other.primitive_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendPrimitive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendPrimitive_

// alias to use template instance with default allocator
using SendPrimitive =
  labust_msgs::msg::SendPrimitive_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__SEND_PRIMITIVE__STRUCT_HPP_
