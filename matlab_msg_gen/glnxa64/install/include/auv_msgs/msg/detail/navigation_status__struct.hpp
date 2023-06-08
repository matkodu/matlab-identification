// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auv_msgs:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_HPP_
#define AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_HPP_

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
// Member 'position'
// Member 'position_variance'
#include "auv_msgs/msg/detail/ned__struct.hpp"
// Member 'body_velocity'
// Member 'seafloor_velocity'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
// Member 'orientation_rate'
// Member 'orientation_variance'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__auv_msgs__msg__NavigationStatus __attribute__((deprecated))
#else
# define DEPRECATED__auv_msgs__msg__NavigationStatus __declspec(deprecated)
#endif

namespace auv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationStatus_
{
  using Type = NavigationStatus_<ContainerAllocator>;

  explicit NavigationStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    global_position(_init),
    origin(_init),
    position(_init),
    body_velocity(_init),
    seafloor_velocity(_init),
    orientation(_init),
    orientation_rate(_init),
    position_variance(_init),
    orientation_variance(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0f;
      this->status = 0;
    }
  }

  explicit NavigationStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    global_position(_alloc, _init),
    origin(_alloc, _init),
    position(_alloc, _init),
    body_velocity(_alloc, _init),
    seafloor_velocity(_alloc, _init),
    orientation(_alloc, _init),
    orientation_rate(_alloc, _init),
    position_variance(_alloc, _init),
    orientation_variance(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0f;
      this->status = 0;
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
  using _position_type =
    auv_msgs::msg::NED_<ContainerAllocator>;
  _position_type position;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _body_velocity_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _body_velocity_type body_velocity;
  using _seafloor_velocity_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _seafloor_velocity_type seafloor_velocity;
  using _orientation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _orientation_type orientation;
  using _orientation_rate_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _orientation_rate_type orientation_rate;
  using _position_variance_type =
    auv_msgs::msg::NED_<ContainerAllocator>;
  _position_variance_type position_variance;
  using _orientation_variance_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _orientation_variance_type orientation_variance;
  using _status_type =
    uint8_t;
  _status_type status;

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
  Type & set__seafloor_velocity(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->seafloor_velocity = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__orientation_rate(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->orientation_rate = _arg;
    return *this;
  }
  Type & set__position_variance(
    const auv_msgs::msg::NED_<ContainerAllocator> & _arg)
  {
    this->position_variance = _arg;
    return *this;
  }
  Type & set__orientation_variance(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->orientation_variance = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_FAULT =
    0u;
  static constexpr uint8_t STATUS_LOCAL_FRAME_OK =
    1u;
  static constexpr uint8_t STATUS_GLOBAL_FRAME_OK =
    2u;
  static constexpr uint8_t STATUS_POSITION_OK =
    3u;
  static constexpr uint8_t STATUS_ESTIMATION_ERROR_OK =
    8u;
  static constexpr uint8_t STATUS_WATER_VELOCITY_OK =
    16u;
  static constexpr uint8_t STATUS_GROUND_VELOCITY_OK =
    32u;
  static constexpr uint8_t STATUS_VELOCITY_OK =
    48u;
  static constexpr uint8_t STATUS_ALL_OK =
    59u;

  // pointer types
  using RawPtr =
    auv_msgs::msg::NavigationStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const auv_msgs::msg::NavigationStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auv_msgs::msg::NavigationStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auv_msgs::msg::NavigationStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auv_msgs::msg::NavigationStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auv_msgs::msg::NavigationStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auv_msgs::msg::NavigationStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auv_msgs::msg::NavigationStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auv_msgs::msg::NavigationStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auv_msgs::msg::NavigationStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auv_msgs__msg__NavigationStatus
    std::shared_ptr<auv_msgs::msg::NavigationStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auv_msgs__msg__NavigationStatus
    std::shared_ptr<auv_msgs::msg::NavigationStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationStatus_ & other) const
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
    if (this->position != other.position) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->body_velocity != other.body_velocity) {
      return false;
    }
    if (this->seafloor_velocity != other.seafloor_velocity) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->orientation_rate != other.orientation_rate) {
      return false;
    }
    if (this->position_variance != other.position_variance) {
      return false;
    }
    if (this->orientation_variance != other.orientation_variance) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationStatus_

// alias to use template instance with default allocator
using NavigationStatus =
  auv_msgs::msg::NavigationStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t NavigationStatus_<ContainerAllocator>::STATUS_FAULT;
template<typename ContainerAllocator>
constexpr uint8_t NavigationStatus_<ContainerAllocator>::STATUS_LOCAL_FRAME_OK;
template<typename ContainerAllocator>
constexpr uint8_t NavigationStatus_<ContainerAllocator>::STATUS_GLOBAL_FRAME_OK;
template<typename ContainerAllocator>
constexpr uint8_t NavigationStatus_<ContainerAllocator>::STATUS_POSITION_OK;
template<typename ContainerAllocator>
constexpr uint8_t NavigationStatus_<ContainerAllocator>::STATUS_ESTIMATION_ERROR_OK;
template<typename ContainerAllocator>
constexpr uint8_t NavigationStatus_<ContainerAllocator>::STATUS_WATER_VELOCITY_OK;
template<typename ContainerAllocator>
constexpr uint8_t NavigationStatus_<ContainerAllocator>::STATUS_GROUND_VELOCITY_OK;
template<typename ContainerAllocator>
constexpr uint8_t NavigationStatus_<ContainerAllocator>::STATUS_VELOCITY_OK;
template<typename ContainerAllocator>
constexpr uint8_t NavigationStatus_<ContainerAllocator>::STATUS_ALL_OK;

}  // namespace msg

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_HPP_
