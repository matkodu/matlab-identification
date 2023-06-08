// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auv_msgs:msg/VehiclePoseArray.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__STRUCT_HPP_
#define AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__STRUCT_HPP_

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
// Member 'poses'
#include "auv_msgs/msg/detail/vehicle_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__auv_msgs__msg__VehiclePoseArray __attribute__((deprecated))
#else
# define DEPRECATED__auv_msgs__msg__VehiclePoseArray __declspec(deprecated)
#endif

namespace auv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehiclePoseArray_
{
  using Type = VehiclePoseArray_<ContainerAllocator>;

  explicit VehiclePoseArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit VehiclePoseArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _poses_type =
    std::vector<auv_msgs::msg::VehiclePose_<ContainerAllocator>, typename ContainerAllocator::template rebind<auv_msgs::msg::VehiclePose_<ContainerAllocator>>::other>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<auv_msgs::msg::VehiclePose_<ContainerAllocator>, typename ContainerAllocator::template rebind<auv_msgs::msg::VehiclePose_<ContainerAllocator>>::other> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    auv_msgs::msg::VehiclePoseArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const auv_msgs::msg::VehiclePoseArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auv_msgs::msg::VehiclePoseArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auv_msgs::msg::VehiclePoseArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auv_msgs::msg::VehiclePoseArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auv_msgs::msg::VehiclePoseArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auv_msgs::msg::VehiclePoseArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auv_msgs::msg::VehiclePoseArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auv_msgs::msg::VehiclePoseArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auv_msgs::msg::VehiclePoseArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auv_msgs__msg__VehiclePoseArray
    std::shared_ptr<auv_msgs::msg::VehiclePoseArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auv_msgs__msg__VehiclePoseArray
    std::shared_ptr<auv_msgs::msg::VehiclePoseArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehiclePoseArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehiclePoseArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehiclePoseArray_

// alias to use template instance with default allocator
using VehiclePoseArray =
  auv_msgs::msg::VehiclePoseArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__STRUCT_HPP_
