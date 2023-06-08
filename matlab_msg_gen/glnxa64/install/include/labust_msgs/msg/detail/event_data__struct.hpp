// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__EventData __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__EventData __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventData_
{
  using Type = EventData_<ContainerAllocator>;

  explicit EventData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = 0.0f;
    }
  }

  explicit EventData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = 0.0f;
    }
  }

  // field types and members
  using _timeout_type =
    float;
  _timeout_type timeout;
  using _on_event_next_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _on_event_next_type on_event_next;
  using _on_event_next_active_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _on_event_next_active_type on_event_next_active;

  // setters for named parameter idiom
  Type & set__timeout(
    const float & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__on_event_next(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->on_event_next = _arg;
    return *this;
  }
  Type & set__on_event_next_active(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->on_event_next_active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::EventData_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::EventData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::EventData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::EventData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::EventData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::EventData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::EventData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::EventData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::EventData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::EventData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__EventData
    std::shared_ptr<labust_msgs::msg::EventData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__EventData
    std::shared_ptr<labust_msgs::msg::EventData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventData_ & other) const
  {
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->on_event_next != other.on_event_next) {
      return false;
    }
    if (this->on_event_next_active != other.on_event_next_active) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventData_

// alias to use template instance with default allocator
using EventData =
  labust_msgs::msg::EventData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_
