// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/DataEventsContainer.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__DATA_EVENTS_CONTAINER__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__DATA_EVENTS_CONTAINER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'state_var'
// Member 'mission_var'
#include "std_msgs/msg/detail/float64_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__DataEventsContainer __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__DataEventsContainer __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataEventsContainer_
{
  using Type = DataEventsContainer_<ContainerAllocator>;

  explicit DataEventsContainer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state_var(_init),
    mission_var(_init)
  {
    (void)_init;
  }

  explicit DataEventsContainer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state_var(_alloc, _init),
    mission_var(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _state_var_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _state_var_type state_var;
  using _mission_var_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _mission_var_type mission_var;
  using _events_var_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _events_var_type events_var;

  // setters for named parameter idiom
  Type & set__state_var(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->state_var = _arg;
    return *this;
  }
  Type & set__mission_var(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->mission_var = _arg;
    return *this;
  }
  Type & set__events_var(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->events_var = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::DataEventsContainer_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::DataEventsContainer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::DataEventsContainer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::DataEventsContainer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::DataEventsContainer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::DataEventsContainer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::DataEventsContainer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::DataEventsContainer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::DataEventsContainer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::DataEventsContainer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__DataEventsContainer
    std::shared_ptr<labust_msgs::msg::DataEventsContainer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__DataEventsContainer
    std::shared_ptr<labust_msgs::msg::DataEventsContainer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataEventsContainer_ & other) const
  {
    if (this->state_var != other.state_var) {
      return false;
    }
    if (this->mission_var != other.mission_var) {
      return false;
    }
    if (this->events_var != other.events_var) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataEventsContainer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataEventsContainer_

// alias to use template instance with default allocator
using DataEventsContainer =
  labust_msgs::msg::DataEventsContainer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__DATA_EVENTS_CONTAINER__STRUCT_HPP_
