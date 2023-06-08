// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auv_msgs:msg/WorldWaypointRequest.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__WORLD_WAYPOINT_REQUEST__STRUCT_HPP_
#define AUV_MSGS__MSG__DETAIL__WORLD_WAYPOINT_REQUEST__STRUCT_HPP_

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
// Member 'position'
#include "auv_msgs/msg/detail/ned__struct.hpp"
// Member 'orientation'
// Member 'position_tolerance'
// Member 'orientation_tolerance'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'twist_limit'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__auv_msgs__msg__WorldWaypointRequest __attribute__((deprecated))
#else
# define DEPRECATED__auv_msgs__msg__WorldWaypointRequest __declspec(deprecated)
#endif

namespace auv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorldWaypointRequest_
{
  using Type = WorldWaypointRequest_<ContainerAllocator>;

  explicit WorldWaypointRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    orientation(_init),
    position_tolerance(_init),
    orientation_tolerance(_init),
    twist_limit(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 6>::iterator, bool>(this->disable_axis.begin(), this->disable_axis.end(), false);
    }
  }

  explicit WorldWaypointRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    orientation(_alloc, _init),
    disable_axis(_alloc),
    position_tolerance(_alloc, _init),
    orientation_tolerance(_alloc, _init),
    twist_limit(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 6>::iterator, bool>(this->disable_axis.begin(), this->disable_axis.end(), false);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    auv_msgs::msg::NED_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _orientation_type orientation;
  using _disable_axis_type =
    std::array<bool, 6>;
  _disable_axis_type disable_axis;
  using _position_tolerance_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_tolerance_type position_tolerance;
  using _orientation_tolerance_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _orientation_tolerance_type orientation_tolerance;
  using _twist_limit_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_limit_type twist_limit;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const auv_msgs::msg::NED_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__disable_axis(
    const std::array<bool, 6> & _arg)
  {
    this->disable_axis = _arg;
    return *this;
  }
  Type & set__position_tolerance(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position_tolerance = _arg;
    return *this;
  }
  Type & set__orientation_tolerance(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->orientation_tolerance = _arg;
    return *this;
  }
  Type & set__twist_limit(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auv_msgs__msg__WorldWaypointRequest
    std::shared_ptr<auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auv_msgs__msg__WorldWaypointRequest
    std::shared_ptr<auv_msgs::msg::WorldWaypointRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorldWaypointRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->disable_axis != other.disable_axis) {
      return false;
    }
    if (this->position_tolerance != other.position_tolerance) {
      return false;
    }
    if (this->orientation_tolerance != other.orientation_tolerance) {
      return false;
    }
    if (this->twist_limit != other.twist_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorldWaypointRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorldWaypointRequest_

// alias to use template instance with default allocator
using WorldWaypointRequest =
  auv_msgs::msg::WorldWaypointRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__WORLD_WAYPOINT_REQUEST__STRUCT_HPP_
