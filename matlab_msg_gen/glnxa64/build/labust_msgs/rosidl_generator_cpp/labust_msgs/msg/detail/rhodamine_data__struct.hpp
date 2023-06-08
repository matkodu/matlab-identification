// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/RhodamineData.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RHODAMINE_DATA__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__RHODAMINE_DATA__STRUCT_HPP_

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
#include "geographic_msgs/msg/detail/geo_point__struct.hpp"
// Member 'adc'
#include "labust_msgs/msg/detail/rhodamine_adc__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__RhodamineData __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__RhodamineData __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RhodamineData_
{
  using Type = RhodamineData_<ContainerAllocator>;

  explicit RhodamineData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    adc(_init)
  {
    (void)_init;
  }

  explicit RhodamineData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    adc(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _position_type position;
  using _adc_type =
    labust_msgs::msg::RhodamineAdc_<ContainerAllocator>;
  _adc_type adc;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__adc(
    const labust_msgs::msg::RhodamineAdc_<ContainerAllocator> & _arg)
  {
    this->adc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::RhodamineData_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::RhodamineData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::RhodamineData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::RhodamineData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::RhodamineData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::RhodamineData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::RhodamineData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::RhodamineData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::RhodamineData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::RhodamineData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__RhodamineData
    std::shared_ptr<labust_msgs::msg::RhodamineData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__RhodamineData
    std::shared_ptr<labust_msgs::msg::RhodamineData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RhodamineData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->adc != other.adc) {
      return false;
    }
    return true;
  }
  bool operator!=(const RhodamineData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RhodamineData_

// alias to use template instance with default allocator
using RhodamineData =
  labust_msgs::msg::RhodamineData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__RHODAMINE_DATA__STRUCT_HPP_
