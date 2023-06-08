// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auv_msgs:msg/NEDArray.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NED_ARRAY__STRUCT_HPP_
#define AUV_MSGS__MSG__DETAIL__NED_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'neds'
#include "auv_msgs/msg/detail/ned__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__auv_msgs__msg__NEDArray __attribute__((deprecated))
#else
# define DEPRECATED__auv_msgs__msg__NEDArray __declspec(deprecated)
#endif

namespace auv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NEDArray_
{
  using Type = NEDArray_<ContainerAllocator>;

  explicit NEDArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NEDArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _neds_type =
    std::vector<auv_msgs::msg::NED_<ContainerAllocator>, typename ContainerAllocator::template rebind<auv_msgs::msg::NED_<ContainerAllocator>>::other>;
  _neds_type neds;

  // setters for named parameter idiom
  Type & set__neds(
    const std::vector<auv_msgs::msg::NED_<ContainerAllocator>, typename ContainerAllocator::template rebind<auv_msgs::msg::NED_<ContainerAllocator>>::other> & _arg)
  {
    this->neds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    auv_msgs::msg::NEDArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const auv_msgs::msg::NEDArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auv_msgs::msg::NEDArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auv_msgs::msg::NEDArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auv_msgs::msg::NEDArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auv_msgs::msg::NEDArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auv_msgs::msg::NEDArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auv_msgs::msg::NEDArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auv_msgs::msg::NEDArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auv_msgs::msg::NEDArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auv_msgs__msg__NEDArray
    std::shared_ptr<auv_msgs::msg::NEDArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auv_msgs__msg__NEDArray
    std::shared_ptr<auv_msgs::msg::NEDArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NEDArray_ & other) const
  {
    if (this->neds != other.neds) {
      return false;
    }
    return true;
  }
  bool operator!=(const NEDArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NEDArray_

// alias to use template instance with default allocator
using NEDArray =
  auv_msgs::msg::NEDArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__NED_ARRAY__STRUCT_HPP_
