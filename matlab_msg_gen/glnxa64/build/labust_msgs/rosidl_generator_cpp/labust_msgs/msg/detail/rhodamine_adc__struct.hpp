// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/RhodamineAdc.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RHODAMINE_ADC__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__RHODAMINE_ADC__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__RhodamineAdc __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__RhodamineAdc __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RhodamineAdc_
{
  using Type = RhodamineAdc_<ContainerAllocator>;

  explicit RhodamineAdc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->adc = 0;
      this->gain = 0;
    }
  }

  explicit RhodamineAdc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->adc = 0;
      this->gain = 0;
    }
  }

  // field types and members
  using _adc_type =
    uint16_t;
  _adc_type adc;
  using _gain_type =
    uint8_t;
  _gain_type gain;

  // setters for named parameter idiom
  Type & set__adc(
    const uint16_t & _arg)
  {
    this->adc = _arg;
    return *this;
  }
  Type & set__gain(
    const uint8_t & _arg)
  {
    this->gain = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::RhodamineAdc_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::RhodamineAdc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::RhodamineAdc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::RhodamineAdc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::RhodamineAdc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::RhodamineAdc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::RhodamineAdc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::RhodamineAdc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::RhodamineAdc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::RhodamineAdc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__RhodamineAdc
    std::shared_ptr<labust_msgs::msg::RhodamineAdc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__RhodamineAdc
    std::shared_ptr<labust_msgs::msg::RhodamineAdc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RhodamineAdc_ & other) const
  {
    if (this->adc != other.adc) {
      return false;
    }
    if (this->gain != other.gain) {
      return false;
    }
    return true;
  }
  bool operator!=(const RhodamineAdc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RhodamineAdc_

// alias to use template instance with default allocator
using RhodamineAdc =
  labust_msgs::msg::RhodamineAdc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__RHODAMINE_ADC__STRUCT_HPP_
