// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/MissionSetup.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MISSION_SETUP__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__MISSION_SETUP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'mission_offset'
#include "auv_msgs/msg/detail/ned__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__MissionSetup __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__MissionSetup __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionSetup_
{
  using Type = MissionSetup_<ContainerAllocator>;

  explicit MissionSetup_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_offset(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_params = "";
      this->mission_events = "";
    }
  }

  explicit MissionSetup_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_params(_alloc),
    mission_events(_alloc),
    mission_offset(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_params = "";
      this->mission_events = "";
    }
  }

  // field types and members
  using _mission_params_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mission_params_type mission_params;
  using _mission_events_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mission_events_type mission_events;
  using _mission_offset_type =
    auv_msgs::msg::NED_<ContainerAllocator>;
  _mission_offset_type mission_offset;

  // setters for named parameter idiom
  Type & set__mission_params(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mission_params = _arg;
    return *this;
  }
  Type & set__mission_events(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mission_events = _arg;
    return *this;
  }
  Type & set__mission_offset(
    const auv_msgs::msg::NED_<ContainerAllocator> & _arg)
  {
    this->mission_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::MissionSetup_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::MissionSetup_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::MissionSetup_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::MissionSetup_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::MissionSetup_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::MissionSetup_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::MissionSetup_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::MissionSetup_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::MissionSetup_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::MissionSetup_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__MissionSetup
    std::shared_ptr<labust_msgs::msg::MissionSetup_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__MissionSetup
    std::shared_ptr<labust_msgs::msg::MissionSetup_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionSetup_ & other) const
  {
    if (this->mission_params != other.mission_params) {
      return false;
    }
    if (this->mission_events != other.mission_events) {
      return false;
    }
    if (this->mission_offset != other.mission_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionSetup_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionSetup_

// alias to use template instance with default allocator
using MissionSetup =
  labust_msgs::msg::MissionSetup_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__MISSION_SETUP__STRUCT_HPP_
