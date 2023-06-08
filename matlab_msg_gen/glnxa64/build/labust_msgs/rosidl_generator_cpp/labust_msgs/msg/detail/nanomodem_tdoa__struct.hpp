// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/NanomodemTDOA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_TDOA__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_TDOA__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__NanomodemTDOA __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__NanomodemTDOA __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NanomodemTDOA_
{
  using Type = NanomodemTDOA_<ContainerAllocator>;

  explicit NanomodemTDOA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fpga_time = 0.0;
    }
  }

  explicit NanomodemTDOA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fpga_time = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fpga_time_type =
    double;
  _fpga_time_type fpga_time;
  using _modem_times_type =
    std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other>;
  _modem_times_type modem_times;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fpga_time(
    const double & _arg)
  {
    this->fpga_time = _arg;
    return *this;
  }
  Type & set__modem_times(
    const std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other> & _arg)
  {
    this->modem_times = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::msg::NanomodemTDOA_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::NanomodemTDOA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::NanomodemTDOA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::NanomodemTDOA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NanomodemTDOA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NanomodemTDOA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::NanomodemTDOA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::NanomodemTDOA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::NanomodemTDOA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::NanomodemTDOA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__NanomodemTDOA
    std::shared_ptr<labust_msgs::msg::NanomodemTDOA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__NanomodemTDOA
    std::shared_ptr<labust_msgs::msg::NanomodemTDOA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NanomodemTDOA_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fpga_time != other.fpga_time) {
      return false;
    }
    if (this->modem_times != other.modem_times) {
      return false;
    }
    return true;
  }
  bool operator!=(const NanomodemTDOA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NanomodemTDOA_

// alias to use template instance with default allocator
using NanomodemTDOA =
  labust_msgs::msg::NanomodemTDOA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_TDOA__STRUCT_HPP_
