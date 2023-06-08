// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/HLMessage.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__HL_MESSAGE__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__HL_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'ref_point'
#include "geometry_msgs/msg/detail/point_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__HLMessage __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__HLMessage __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HLMessage_
{
  using Type = HLMessage_<ContainerAllocator>;

  explicit HLMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ref_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->radius = 0.0f;
      this->surge = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit HLMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ref_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->radius = 0.0f;
      this->surge = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _ref_point_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _ref_point_type ref_point;
  using _radius_type =
    float;
  _radius_type radius;
  using _surge_type =
    float;
  _surge_type surge;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__ref_point(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->ref_point = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__surge(
    const float & _arg)
  {
    this->surge = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t STOP =
    0;
  static constexpr int32_t MANUAL =
    1;
  static constexpr int32_t GOTOPOINT =
    2;
  static constexpr int32_t STATIONKEEPING =
    3;
  static constexpr int32_t CIRCLEPOINT =
    4;
  static constexpr int32_t HEADINGCONTROL =
    5;
  static constexpr int32_t HEADINGSURGE =
    6;

  // pointer types
  using RawPtr =
    labust_msgs::msg::HLMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::HLMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::HLMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::HLMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::HLMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::HLMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::HLMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::HLMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::HLMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::HLMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__HLMessage
    std::shared_ptr<labust_msgs::msg::HLMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__HLMessage
    std::shared_ptr<labust_msgs::msg::HLMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HLMessage_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->ref_point != other.ref_point) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->surge != other.surge) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const HLMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HLMessage_

// alias to use template instance with default allocator
using HLMessage =
  labust_msgs::msg::HLMessage_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t HLMessage_<ContainerAllocator>::STOP;
template<typename ContainerAllocator>
constexpr int32_t HLMessage_<ContainerAllocator>::MANUAL;
template<typename ContainerAllocator>
constexpr int32_t HLMessage_<ContainerAllocator>::GOTOPOINT;
template<typename ContainerAllocator>
constexpr int32_t HLMessage_<ContainerAllocator>::STATIONKEEPING;
template<typename ContainerAllocator>
constexpr int32_t HLMessage_<ContainerAllocator>::CIRCLEPOINT;
template<typename ContainerAllocator>
constexpr int32_t HLMessage_<ContainerAllocator>::HEADINGCONTROL;
template<typename ContainerAllocator>
constexpr int32_t HLMessage_<ContainerAllocator>::HEADINGSURGE;

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__HL_MESSAGE__STRUCT_HPP_
