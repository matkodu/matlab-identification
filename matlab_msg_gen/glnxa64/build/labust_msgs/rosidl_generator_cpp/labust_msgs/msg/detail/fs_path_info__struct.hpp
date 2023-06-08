// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/FSPathInfo.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__STRUCT_HPP_

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
// Member 'dr_p'
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "labust_msgs/msg/detail/rpy__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__FSPathInfo __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__FSPathInfo __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FSPathInfo_
{
  using Type = FSPathInfo_<ContainerAllocator>;

  explicit FSPathInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    dr_p(_init),
    position(_init),
    orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_r = 0.0;
      this->k = 0.0;
      this->xi_r = 0.0;
      this->dxi_r = 0.0;
      this->pi = 0.0;
      this->pi_tilda = 0.0;
      this->curvature = 0.0;
      this->torsion = 0.0;
    }
  }

  explicit FSPathInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    dr_p(_alloc, _init),
    position(_alloc, _init),
    orientation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_r = 0.0;
      this->k = 0.0;
      this->xi_r = 0.0;
      this->dxi_r = 0.0;
      this->pi = 0.0;
      this->pi_tilda = 0.0;
      this->curvature = 0.0;
      this->torsion = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _delta_r_type =
    double;
  _delta_r_type delta_r;
  using _k_type =
    double;
  _k_type k;
  using _xi_r_type =
    double;
  _xi_r_type xi_r;
  using _dxi_r_type =
    double;
  _dxi_r_type dxi_r;
  using _pi_type =
    double;
  _pi_type pi;
  using _pi_tilda_type =
    double;
  _pi_tilda_type pi_tilda;
  using _dr_p_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _dr_p_type dr_p;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    labust_msgs::msg::RPY_<ContainerAllocator>;
  _orientation_type orientation;
  using _curvature_type =
    double;
  _curvature_type curvature;
  using _torsion_type =
    double;
  _torsion_type torsion;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__delta_r(
    const double & _arg)
  {
    this->delta_r = _arg;
    return *this;
  }
  Type & set__k(
    const double & _arg)
  {
    this->k = _arg;
    return *this;
  }
  Type & set__xi_r(
    const double & _arg)
  {
    this->xi_r = _arg;
    return *this;
  }
  Type & set__dxi_r(
    const double & _arg)
  {
    this->dxi_r = _arg;
    return *this;
  }
  Type & set__pi(
    const double & _arg)
  {
    this->pi = _arg;
    return *this;
  }
  Type & set__pi_tilda(
    const double & _arg)
  {
    this->pi_tilda = _arg;
    return *this;
  }
  Type & set__dr_p(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->dr_p = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const labust_msgs::msg::RPY_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__curvature(
    const double & _arg)
  {
    this->curvature = _arg;
    return *this;
  }
  Type & set__torsion(
    const double & _arg)
  {
    this->torsion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::FSPathInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::FSPathInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::FSPathInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::FSPathInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::FSPathInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::FSPathInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::FSPathInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::FSPathInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::FSPathInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::FSPathInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__FSPathInfo
    std::shared_ptr<labust_msgs::msg::FSPathInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__FSPathInfo
    std::shared_ptr<labust_msgs::msg::FSPathInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FSPathInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->delta_r != other.delta_r) {
      return false;
    }
    if (this->k != other.k) {
      return false;
    }
    if (this->xi_r != other.xi_r) {
      return false;
    }
    if (this->dxi_r != other.dxi_r) {
      return false;
    }
    if (this->pi != other.pi) {
      return false;
    }
    if (this->pi_tilda != other.pi_tilda) {
      return false;
    }
    if (this->dr_p != other.dr_p) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    if (this->torsion != other.torsion) {
      return false;
    }
    return true;
  }
  bool operator!=(const FSPathInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FSPathInfo_

// alias to use template instance with default allocator
using FSPathInfo =
  labust_msgs::msg::FSPathInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__STRUCT_HPP_
