// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/ManualConfigure.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'configuration'
#include "labust_msgs/msg/detail/manual_configuration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__ManualConfigure_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__ManualConfigure_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ManualConfigure_Request_
{
  using Type = ManualConfigure_Request_<ContainerAllocator>;

  explicit ManualConfigure_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : configuration(_init)
  {
    (void)_init;
  }

  explicit ManualConfigure_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : configuration(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _configuration_type =
    labust_msgs::msg::ManualConfiguration_<ContainerAllocator>;
  _configuration_type configuration;

  // setters for named parameter idiom
  Type & set__configuration(
    const labust_msgs::msg::ManualConfiguration_<ContainerAllocator> & _arg)
  {
    this->configuration = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t DISABLED =
    -1;
  static constexpr int32_t X =
    0;
  static constexpr int32_t Y =
    1;
  static constexpr int32_t Z =
    2;
  static constexpr int32_t K =
    3;
  static constexpr int32_t M =
    4;
  static constexpr int32_t N =
    5;

  // pointer types
  using RawPtr =
    labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__ManualConfigure_Request
    std::shared_ptr<labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__ManualConfigure_Request
    std::shared_ptr<labust_msgs::srv::ManualConfigure_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManualConfigure_Request_ & other) const
  {
    if (this->configuration != other.configuration) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManualConfigure_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManualConfigure_Request_

// alias to use template instance with default allocator
using ManualConfigure_Request =
  labust_msgs::srv::ManualConfigure_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t ManualConfigure_Request_<ContainerAllocator>::DISABLED;
template<typename ContainerAllocator>
constexpr int32_t ManualConfigure_Request_<ContainerAllocator>::X;
template<typename ContainerAllocator>
constexpr int32_t ManualConfigure_Request_<ContainerAllocator>::Y;
template<typename ContainerAllocator>
constexpr int32_t ManualConfigure_Request_<ContainerAllocator>::Z;
template<typename ContainerAllocator>
constexpr int32_t ManualConfigure_Request_<ContainerAllocator>::K;
template<typename ContainerAllocator>
constexpr int32_t ManualConfigure_Request_<ContainerAllocator>::M;
template<typename ContainerAllocator>
constexpr int32_t ManualConfigure_Request_<ContainerAllocator>::N;

}  // namespace srv

}  // namespace labust_msgs


// Include directives for member types
// Member 'current_configuration'
// already included above
// #include "labust_msgs/msg/detail/manual_configuration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__ManualConfigure_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__ManualConfigure_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ManualConfigure_Response_
{
  using Type = ManualConfigure_Response_<ContainerAllocator>;

  explicit ManualConfigure_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_configuration(_init)
  {
    (void)_init;
  }

  explicit ManualConfigure_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_configuration(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _current_configuration_type =
    labust_msgs::msg::ManualConfiguration_<ContainerAllocator>;
  _current_configuration_type current_configuration;

  // setters for named parameter idiom
  Type & set__current_configuration(
    const labust_msgs::msg::ManualConfiguration_<ContainerAllocator> & _arg)
  {
    this->current_configuration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__ManualConfigure_Response
    std::shared_ptr<labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__ManualConfigure_Response
    std::shared_ptr<labust_msgs::srv::ManualConfigure_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManualConfigure_Response_ & other) const
  {
    if (this->current_configuration != other.current_configuration) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManualConfigure_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManualConfigure_Response_

// alias to use template instance with default allocator
using ManualConfigure_Response =
  labust_msgs::srv::ManualConfigure_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct ManualConfigure
{
  using Request = labust_msgs::srv::ManualConfigure_Request;
  using Response = labust_msgs::srv::ManualConfigure_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__MANUAL_CONFIGURE__STRUCT_HPP_
