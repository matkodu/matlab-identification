// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/NanomodemRequest.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_REQUEST__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_REQUEST__STRUCT_HPP_

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
# define DEPRECATED__labust_msgs__msg__NanomodemRequest __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__NanomodemRequest __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NanomodemRequest_
{
  using Type = NanomodemRequest_<ContainerAllocator>;

  explicit NanomodemRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req_type = 0;
      this->scheduled = 0;
      this->id = 0;
    }
  }

  explicit NanomodemRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req_type = 0;
      this->scheduled = 0;
      this->id = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _req_type_type =
    uint8_t;
  _req_type_type req_type;
  using _scheduled_type =
    uint8_t;
  _scheduled_type scheduled;
  using _msg_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _msg_type msg;
  using _id_type =
    uint8_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__req_type(
    const uint8_t & _arg)
  {
    this->req_type = _arg;
    return *this;
  }
  Type & set__scheduled(
    const uint8_t & _arg)
  {
    this->scheduled = _arg;
    return *this;
  }
  Type & set__msg(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BRDCST =
    1u;
  static constexpr uint8_t UNICST =
    2u;
  static constexpr uint8_t PINGID =
    3u;
  static constexpr uint8_t VOLTID =
    4u;
  static constexpr uint8_t CHNGID =
    5u;
  static constexpr uint8_t STATUS =
    6u;
  static constexpr uint8_t UNICSTACK =
    7u;
  static constexpr uint8_t TESTMSG =
    8u;
  static constexpr uint8_t ECHOMSG =
    9u;
  static constexpr uint8_t QUALITY =
    10u;

  // pointer types
  using RawPtr =
    labust_msgs::msg::NanomodemRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::NanomodemRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::NanomodemRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::NanomodemRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NanomodemRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NanomodemRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NanomodemRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NanomodemRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::NanomodemRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::NanomodemRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__NanomodemRequest
    std::shared_ptr<labust_msgs::msg::NanomodemRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__NanomodemRequest
    std::shared_ptr<labust_msgs::msg::NanomodemRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NanomodemRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->req_type != other.req_type) {
      return false;
    }
    if (this->scheduled != other.scheduled) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NanomodemRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NanomodemRequest_

// alias to use template instance with default allocator
using NanomodemRequest =
  labust_msgs::msg::NanomodemRequest_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t NanomodemRequest_<ContainerAllocator>::BRDCST;
template<typename ContainerAllocator>
constexpr uint8_t NanomodemRequest_<ContainerAllocator>::UNICST;
template<typename ContainerAllocator>
constexpr uint8_t NanomodemRequest_<ContainerAllocator>::PINGID;
template<typename ContainerAllocator>
constexpr uint8_t NanomodemRequest_<ContainerAllocator>::VOLTID;
template<typename ContainerAllocator>
constexpr uint8_t NanomodemRequest_<ContainerAllocator>::CHNGID;
template<typename ContainerAllocator>
constexpr uint8_t NanomodemRequest_<ContainerAllocator>::STATUS;
template<typename ContainerAllocator>
constexpr uint8_t NanomodemRequest_<ContainerAllocator>::UNICSTACK;
template<typename ContainerAllocator>
constexpr uint8_t NanomodemRequest_<ContainerAllocator>::TESTMSG;
template<typename ContainerAllocator>
constexpr uint8_t NanomodemRequest_<ContainerAllocator>::ECHOMSG;
template<typename ContainerAllocator>
constexpr uint8_t NanomodemRequest_<ContainerAllocator>::QUALITY;

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_REQUEST__STRUCT_HPP_
