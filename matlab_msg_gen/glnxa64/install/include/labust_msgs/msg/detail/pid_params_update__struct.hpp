// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/PIDParamsUpdate.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__PID_PARAMS_UPDATE__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__PID_PARAMS_UPDATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__PIDParamsUpdate __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__PIDParamsUpdate __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PIDParamsUpdate_
{
  using Type = PIDParamsUpdate_<ContainerAllocator>;

  explicit PIDParamsUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0.0f;
      this->ki = 0.0f;
      this->kd = 0.0f;
      this->b = 0.0f;
      this->ulow = 0.0f;
      this->uhigh = 0.0f;
      this->ilow = 0.0f;
      this->ihigh = 0.0f;
      this->dof = 0l;
    }
  }

  explicit PIDParamsUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0.0f;
      this->ki = 0.0f;
      this->kd = 0.0f;
      this->b = 0.0f;
      this->ulow = 0.0f;
      this->uhigh = 0.0f;
      this->ilow = 0.0f;
      this->ihigh = 0.0f;
      this->dof = 0l;
    }
  }

  // field types and members
  using _kp_type =
    float;
  _kp_type kp;
  using _ki_type =
    float;
  _ki_type ki;
  using _kd_type =
    float;
  _kd_type kd;
  using _b_type =
    float;
  _b_type b;
  using _ulow_type =
    float;
  _ulow_type ulow;
  using _uhigh_type =
    float;
  _uhigh_type uhigh;
  using _ilow_type =
    float;
  _ilow_type ilow;
  using _ihigh_type =
    float;
  _ihigh_type ihigh;
  using _dof_type =
    int32_t;
  _dof_type dof;

  // setters for named parameter idiom
  Type & set__kp(
    const float & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__ki(
    const float & _arg)
  {
    this->ki = _arg;
    return *this;
  }
  Type & set__kd(
    const float & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__b(
    const float & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__ulow(
    const float & _arg)
  {
    this->ulow = _arg;
    return *this;
  }
  Type & set__uhigh(
    const float & _arg)
  {
    this->uhigh = _arg;
    return *this;
  }
  Type & set__ilow(
    const float & _arg)
  {
    this->ilow = _arg;
    return *this;
  }
  Type & set__ihigh(
    const float & _arg)
  {
    this->ihigh = _arg;
    return *this;
  }
  Type & set__dof(
    const int32_t & _arg)
  {
    this->dof = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t SURGE =
    0;
  static constexpr int32_t SWAY =
    1;
  static constexpr int32_t HEAVE =
    2;
  static constexpr int32_t ROLL =
    3;
  static constexpr int32_t PITCH =
    4;
  static constexpr int32_t YAW =
    5;

  // pointer types
  using RawPtr =
    labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__PIDParamsUpdate
    std::shared_ptr<labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__PIDParamsUpdate
    std::shared_ptr<labust_msgs::msg::PIDParamsUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PIDParamsUpdate_ & other) const
  {
    if (this->kp != other.kp) {
      return false;
    }
    if (this->ki != other.ki) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->ulow != other.ulow) {
      return false;
    }
    if (this->uhigh != other.uhigh) {
      return false;
    }
    if (this->ilow != other.ilow) {
      return false;
    }
    if (this->ihigh != other.ihigh) {
      return false;
    }
    if (this->dof != other.dof) {
      return false;
    }
    return true;
  }
  bool operator!=(const PIDParamsUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PIDParamsUpdate_

// alias to use template instance with default allocator
using PIDParamsUpdate =
  labust_msgs::msg::PIDParamsUpdate_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t PIDParamsUpdate_<ContainerAllocator>::SURGE;
template<typename ContainerAllocator>
constexpr int32_t PIDParamsUpdate_<ContainerAllocator>::SWAY;
template<typename ContainerAllocator>
constexpr int32_t PIDParamsUpdate_<ContainerAllocator>::HEAVE;
template<typename ContainerAllocator>
constexpr int32_t PIDParamsUpdate_<ContainerAllocator>::ROLL;
template<typename ContainerAllocator>
constexpr int32_t PIDParamsUpdate_<ContainerAllocator>::PITCH;
template<typename ContainerAllocator>
constexpr int32_t PIDParamsUpdate_<ContainerAllocator>::YAW;

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__PID_PARAMS_UPDATE__STRUCT_HPP_
