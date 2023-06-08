// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__ControllerInfo __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__ControllerInfo __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerInfo_
{
  using Type = ControllerInfo_<ContainerAllocator>;

  explicit ControllerInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manual_topic = "";
      this->external_topic = "";
      this->state_topic = "";
      this->tracking_topic = "";
      this->state = 0;
    }
  }

  explicit ControllerInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : manual_topic(_alloc),
    external_topic(_alloc),
    state_topic(_alloc),
    tracking_topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->manual_topic = "";
      this->external_topic = "";
      this->state_topic = "";
      this->tracking_topic = "";
      this->state = 0;
    }
  }

  // field types and members
  using _manual_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _manual_topic_type manual_topic;
  using _external_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _external_topic_type external_topic;
  using _state_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _state_topic_type state_topic;
  using _tracking_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tracking_topic_type tracking_topic;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__manual_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->manual_topic = _arg;
    return *this;
  }
  Type & set__external_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->external_topic = _arg;
    return *this;
  }
  Type & set__state_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->state_topic = _arg;
    return *this;
  }
  Type & set__tracking_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tracking_topic = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DISABLED =
    0u;
  static constexpr uint8_t MANUAL =
    1u;
  static constexpr uint8_t EXTERNAL =
    2u;
  static constexpr uint8_t TRACKING =
    3u;

  // pointer types
  using RawPtr =
    labust_msgs::msg::ControllerInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::ControllerInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::ControllerInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::ControllerInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::ControllerInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::ControllerInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::ControllerInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::ControllerInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::ControllerInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::ControllerInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__ControllerInfo
    std::shared_ptr<labust_msgs::msg::ControllerInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__ControllerInfo
    std::shared_ptr<labust_msgs::msg::ControllerInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerInfo_ & other) const
  {
    if (this->manual_topic != other.manual_topic) {
      return false;
    }
    if (this->external_topic != other.external_topic) {
      return false;
    }
    if (this->state_topic != other.state_topic) {
      return false;
    }
    if (this->tracking_topic != other.tracking_topic) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerInfo_

// alias to use template instance with default allocator
using ControllerInfo =
  labust_msgs::msg::ControllerInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ControllerInfo_<ContainerAllocator>::DISABLED;
template<typename ContainerAllocator>
constexpr uint8_t ControllerInfo_<ContainerAllocator>::MANUAL;
template<typename ContainerAllocator>
constexpr uint8_t ControllerInfo_<ContainerAllocator>::EXTERNAL;
template<typename ContainerAllocator>
constexpr uint8_t ControllerInfo_<ContainerAllocator>::TRACKING;

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_HPP_
