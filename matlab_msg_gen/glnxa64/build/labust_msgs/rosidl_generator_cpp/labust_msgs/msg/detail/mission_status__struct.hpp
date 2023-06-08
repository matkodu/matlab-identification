// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__MissionStatus __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__MissionStatus __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionStatus_
{
  using Type = MissionStatus_<ContainerAllocator>;

  explicit MissionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_active = false;
      this->active_primitive = "";
      this->mission_execution_ready = false;
      this->manual_enabled = false;
    }
  }

  explicit MissionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : active_primitive(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_active = false;
      this->active_primitive = "";
      this->mission_execution_ready = false;
      this->manual_enabled = false;
    }
  }

  // field types and members
  using _mission_active_type =
    bool;
  _mission_active_type mission_active;
  using _active_primitive_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _active_primitive_type active_primitive;
  using _mission_execution_ready_type =
    bool;
  _mission_execution_ready_type mission_execution_ready;
  using _manual_enabled_type =
    bool;
  _manual_enabled_type manual_enabled;

  // setters for named parameter idiom
  Type & set__mission_active(
    const bool & _arg)
  {
    this->mission_active = _arg;
    return *this;
  }
  Type & set__active_primitive(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->active_primitive = _arg;
    return *this;
  }
  Type & set__mission_execution_ready(
    const bool & _arg)
  {
    this->mission_execution_ready = _arg;
    return *this;
  }
  Type & set__manual_enabled(
    const bool & _arg)
  {
    this->manual_enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::MissionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::MissionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::MissionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::MissionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::MissionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::MissionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::MissionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::MissionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::MissionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::MissionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__MissionStatus
    std::shared_ptr<labust_msgs::msg::MissionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__MissionStatus
    std::shared_ptr<labust_msgs::msg::MissionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionStatus_ & other) const
  {
    if (this->mission_active != other.mission_active) {
      return false;
    }
    if (this->active_primitive != other.active_primitive) {
      return false;
    }
    if (this->mission_execution_ready != other.mission_execution_ready) {
      return false;
    }
    if (this->manual_enabled != other.manual_enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionStatus_

// alias to use template instance with default allocator
using MissionStatus =
  labust_msgs::msg::MissionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
