// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/NavStsReq.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__STRUCT_HPP_

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
// Member 'global_position'
// Member 'origin'
#include "geographic_msgs/msg/detail/geo_point__struct.hpp"
// Member 'goal'
#include "labust_msgs/msg/detail/goal_descriptor__struct.hpp"
// Member 'position'
#include "auv_msgs/msg/detail/ned__struct.hpp"
// Member 'body_velocity'
// Member 'gbody_velocity'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
// Member 'orientation_rate'
// Member 'orientation_tolerance'
#include "labust_msgs/msg/detail/rpy__struct.hpp"
// Member 'position_tolerance'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'disable_axis'
#include "labust_msgs/msg/detail/bool6_axis__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__NavStsReq __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__NavStsReq __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavStsReq_
{
  using Type = NavStsReq_<ContainerAllocator>;

  explicit NavStsReq_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    global_position(_init),
    origin(_init),
    goal(_init),
    position(_init),
    body_velocity(_init),
    gbody_velocity(_init),
    orientation(_init),
    orientation_rate(_init),
    position_tolerance(_init),
    orientation_tolerance(_init),
    disable_axis(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0f;
    }
  }

  explicit NavStsReq_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    global_position(_alloc, _init),
    origin(_alloc, _init),
    goal(_alloc, _init),
    position(_alloc, _init),
    body_velocity(_alloc, _init),
    gbody_velocity(_alloc, _init),
    orientation(_alloc, _init),
    orientation_rate(_alloc, _init),
    position_tolerance(_alloc, _init),
    orientation_tolerance(_alloc, _init),
    disable_axis(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _global_position_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _global_position_type global_position;
  using _origin_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _origin_type origin;
  using _goal_type =
    labust_msgs::msg::GoalDescriptor_<ContainerAllocator>;
  _goal_type goal;
  using _position_type =
    auv_msgs::msg::NED_<ContainerAllocator>;
  _position_type position;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _body_velocity_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _body_velocity_type body_velocity;
  using _gbody_velocity_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _gbody_velocity_type gbody_velocity;
  using _orientation_type =
    labust_msgs::msg::RPY_<ContainerAllocator>;
  _orientation_type orientation;
  using _orientation_rate_type =
    labust_msgs::msg::RPY_<ContainerAllocator>;
  _orientation_rate_type orientation_rate;
  using _position_tolerance_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_tolerance_type position_tolerance;
  using _orientation_tolerance_type =
    labust_msgs::msg::RPY_<ContainerAllocator>;
  _orientation_tolerance_type orientation_tolerance;
  using _disable_axis_type =
    labust_msgs::msg::Bool6Axis_<ContainerAllocator>;
  _disable_axis_type disable_axis;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__global_position(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->global_position = _arg;
    return *this;
  }
  Type & set__origin(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__goal(
    const labust_msgs::msg::GoalDescriptor_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__position(
    const auv_msgs::msg::NED_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__body_velocity(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->body_velocity = _arg;
    return *this;
  }
  Type & set__gbody_velocity(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->gbody_velocity = _arg;
    return *this;
  }
  Type & set__orientation(
    const labust_msgs::msg::RPY_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__orientation_rate(
    const labust_msgs::msg::RPY_<ContainerAllocator> & _arg)
  {
    this->orientation_rate = _arg;
    return *this;
  }
  Type & set__position_tolerance(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position_tolerance = _arg;
    return *this;
  }
  Type & set__orientation_tolerance(
    const labust_msgs::msg::RPY_<ContainerAllocator> & _arg)
  {
    this->orientation_tolerance = _arg;
    return *this;
  }
  Type & set__disable_axis(
    const labust_msgs::msg::Bool6Axis_<ContainerAllocator> & _arg)
  {
    this->disable_axis = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::NavStsReq_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::NavStsReq_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::NavStsReq_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::NavStsReq_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NavStsReq_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NavStsReq_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NavStsReq_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NavStsReq_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::NavStsReq_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::NavStsReq_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__NavStsReq
    std::shared_ptr<labust_msgs::msg::NavStsReq_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__NavStsReq
    std::shared_ptr<labust_msgs::msg::NavStsReq_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavStsReq_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->global_position != other.global_position) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->body_velocity != other.body_velocity) {
      return false;
    }
    if (this->gbody_velocity != other.gbody_velocity) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->orientation_rate != other.orientation_rate) {
      return false;
    }
    if (this->position_tolerance != other.position_tolerance) {
      return false;
    }
    if (this->orientation_tolerance != other.orientation_tolerance) {
      return false;
    }
    if (this->disable_axis != other.disable_axis) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavStsReq_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavStsReq_

// alias to use template instance with default allocator
using NavStsReq =
  labust_msgs::msg::NavStsReq_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NAV_STS_REQ__STRUCT_HPP_
