// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/ConfigureAxes.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'disable_axis'
#include "labust_msgs/msg/detail/bool6_axis__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__ConfigureAxes_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__ConfigureAxes_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureAxes_Request_
{
  using Type = ConfigureAxes_Request_<ContainerAllocator>;

  explicit ConfigureAxes_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : disable_axis(_init)
  {
    (void)_init;
  }

  explicit ConfigureAxes_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : disable_axis(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _disable_axis_type =
    labust_msgs::msg::Bool6Axis_<ContainerAllocator>;
  _disable_axis_type disable_axis;

  // setters for named parameter idiom
  Type & set__disable_axis(
    const labust_msgs::msg::Bool6Axis_<ContainerAllocator> & _arg)
  {
    this->disable_axis = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t U =
    0;
  static constexpr int32_t V =
    1;
  static constexpr int32_t W =
    2;
  static constexpr int32_t P =
    3;
  static constexpr int32_t Q =
    4;
  static constexpr int32_t R =
    5;
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
    labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__ConfigureAxes_Request
    std::shared_ptr<labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__ConfigureAxes_Request
    std::shared_ptr<labust_msgs::srv::ConfigureAxes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureAxes_Request_ & other) const
  {
    if (this->disable_axis != other.disable_axis) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureAxes_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureAxes_Request_

// alias to use template instance with default allocator
using ConfigureAxes_Request =
  labust_msgs::srv::ConfigureAxes_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::U;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::V;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::W;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::P;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::Q;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::R;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::X;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::Y;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::Z;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::K;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::M;
template<typename ContainerAllocator>
constexpr int32_t ConfigureAxes_Request_<ContainerAllocator>::N;

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__ConfigureAxes_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__ConfigureAxes_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureAxes_Response_
{
  using Type = ConfigureAxes_Response_<ContainerAllocator>;

  explicit ConfigureAxes_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ConfigureAxes_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__ConfigureAxes_Response
    std::shared_ptr<labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__ConfigureAxes_Response
    std::shared_ptr<labust_msgs::srv::ConfigureAxes_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureAxes_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureAxes_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureAxes_Response_

// alias to use template instance with default allocator
using ConfigureAxes_Response =
  labust_msgs::srv::ConfigureAxes_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct ConfigureAxes
{
  using Request = labust_msgs::srv::ConfigureAxes_Request;
  using Response = labust_msgs::srv::ConfigureAxes_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__STRUCT_HPP_
