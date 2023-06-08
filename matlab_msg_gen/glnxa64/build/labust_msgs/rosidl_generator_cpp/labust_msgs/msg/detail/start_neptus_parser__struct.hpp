// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/StartNeptusParser.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'origin'
// Member 'custom_start'
#include "geographic_msgs/msg/detail/geo_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__StartNeptusParser __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__StartNeptusParser __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StartNeptusParser_
{
  using Type = StartNeptusParser_<ContainerAllocator>;

  explicit StartNeptusParser_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : origin(_init),
    custom_start(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_name = "";
      this->relative = false;
      this->custom_start_flag = false;
      this->underactuated = false;
      this->speed = 0.0f;
      this->heading = 0.0f;
      this->victory_radius = 0.0f;
    }
  }

  explicit StartNeptusParser_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_name(_alloc),
    origin(_alloc, _init),
    custom_start(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_name = "";
      this->relative = false;
      this->custom_start_flag = false;
      this->underactuated = false;
      this->speed = 0.0f;
      this->heading = 0.0f;
      this->victory_radius = 0.0f;
    }
  }

  // field types and members
  using _file_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _file_name_type file_name;
  using _relative_type =
    bool;
  _relative_type relative;
  using _custom_start_flag_type =
    bool;
  _custom_start_flag_type custom_start_flag;
  using _origin_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _origin_type origin;
  using _custom_start_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _custom_start_type custom_start;
  using _underactuated_type =
    bool;
  _underactuated_type underactuated;
  using _speed_type =
    float;
  _speed_type speed;
  using _heading_type =
    float;
  _heading_type heading;
  using _victory_radius_type =
    float;
  _victory_radius_type victory_radius;

  // setters for named parameter idiom
  Type & set__file_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->file_name = _arg;
    return *this;
  }
  Type & set__relative(
    const bool & _arg)
  {
    this->relative = _arg;
    return *this;
  }
  Type & set__custom_start_flag(
    const bool & _arg)
  {
    this->custom_start_flag = _arg;
    return *this;
  }
  Type & set__origin(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__custom_start(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->custom_start = _arg;
    return *this;
  }
  Type & set__underactuated(
    const bool & _arg)
  {
    this->underactuated = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__victory_radius(
    const float & _arg)
  {
    this->victory_radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::StartNeptusParser_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::StartNeptusParser_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::StartNeptusParser_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::StartNeptusParser_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::StartNeptusParser_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::StartNeptusParser_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::StartNeptusParser_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::StartNeptusParser_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::StartNeptusParser_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::StartNeptusParser_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__StartNeptusParser
    std::shared_ptr<labust_msgs::msg::StartNeptusParser_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__StartNeptusParser
    std::shared_ptr<labust_msgs::msg::StartNeptusParser_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartNeptusParser_ & other) const
  {
    if (this->file_name != other.file_name) {
      return false;
    }
    if (this->relative != other.relative) {
      return false;
    }
    if (this->custom_start_flag != other.custom_start_flag) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    if (this->custom_start != other.custom_start) {
      return false;
    }
    if (this->underactuated != other.underactuated) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->victory_radius != other.victory_radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartNeptusParser_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartNeptusParser_

// alias to use template instance with default allocator
using StartNeptusParser =
  labust_msgs::msg::StartNeptusParser_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__STRUCT_HPP_
