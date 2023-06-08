// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/NanomodemPayload.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_PAYLOAD__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_PAYLOAD__STRUCT_HPP_

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
# define DEPRECATED__labust_msgs__msg__NanomodemPayload __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__NanomodemPayload __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NanomodemPayload_
{
  using Type = NanomodemPayload_<ContainerAllocator>;

  explicit NanomodemPayload_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = 0;
      this->msg_type = 0;
    }
  }

  explicit NanomodemPayload_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = 0;
      this->msg_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _msg_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _msg_type msg;
  using _sender_id_type =
    int16_t;
  _sender_id_type sender_id;
  using _msg_type_type =
    uint8_t;
  _msg_type_type msg_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__msg(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__sender_id(
    const int16_t & _arg)
  {
    this->sender_id = _arg;
    return *this;
  }
  Type & set__msg_type(
    const uint8_t & _arg)
  {
    this->msg_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BRDCST =
    0u;
  static constexpr uint8_t UNICST =
    1u;

  // pointer types
  using RawPtr =
    labust_msgs::msg::NanomodemPayload_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::NanomodemPayload_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::NanomodemPayload_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::NanomodemPayload_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NanomodemPayload_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NanomodemPayload_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NanomodemPayload_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NanomodemPayload_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::NanomodemPayload_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::NanomodemPayload_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__NanomodemPayload
    std::shared_ptr<labust_msgs::msg::NanomodemPayload_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__NanomodemPayload
    std::shared_ptr<labust_msgs::msg::NanomodemPayload_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NanomodemPayload_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->sender_id != other.sender_id) {
      return false;
    }
    if (this->msg_type != other.msg_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const NanomodemPayload_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NanomodemPayload_

// alias to use template instance with default allocator
using NanomodemPayload =
  labust_msgs::msg::NanomodemPayload_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t NanomodemPayload_<ContainerAllocator>::BRDCST;
template<typename ContainerAllocator>
constexpr uint8_t NanomodemPayload_<ContainerAllocator>::UNICST;

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_PAYLOAD__STRUCT_HPP_
