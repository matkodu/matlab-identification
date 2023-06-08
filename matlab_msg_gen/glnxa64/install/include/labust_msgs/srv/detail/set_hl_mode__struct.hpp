// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/SetHLMode.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__STRUCT_HPP_

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
# define DEPRECATED__labust_msgs__srv__SetHLMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__SetHLMode_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetHLMode_Request_
{
  using Type = SetHLMode_Request_<ContainerAllocator>;

  explicit SetHLMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit SetHLMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::SetHLMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::SetHLMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::SetHLMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::SetHLMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::SetHLMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::SetHLMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::SetHLMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::SetHLMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::SetHLMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::SetHLMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__SetHLMode_Request
    std::shared_ptr<labust_msgs::srv::SetHLMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__SetHLMode_Request
    std::shared_ptr<labust_msgs::srv::SetHLMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetHLMode_Request_ & other) const
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
  bool operator!=(const SetHLMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetHLMode_Request_

// alias to use template instance with default allocator
using SetHLMode_Request =
  labust_msgs::srv::SetHLMode_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t SetHLMode_Request_<ContainerAllocator>::STOP;
template<typename ContainerAllocator>
constexpr int32_t SetHLMode_Request_<ContainerAllocator>::MANUAL;
template<typename ContainerAllocator>
constexpr int32_t SetHLMode_Request_<ContainerAllocator>::GOTOPOINT;
template<typename ContainerAllocator>
constexpr int32_t SetHLMode_Request_<ContainerAllocator>::STATIONKEEPING;
template<typename ContainerAllocator>
constexpr int32_t SetHLMode_Request_<ContainerAllocator>::CIRCLEPOINT;
template<typename ContainerAllocator>
constexpr int32_t SetHLMode_Request_<ContainerAllocator>::HEADINGCONTROL;
template<typename ContainerAllocator>
constexpr int32_t SetHLMode_Request_<ContainerAllocator>::HEADINGSURGE;

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__SetHLMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__SetHLMode_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetHLMode_Response_
{
  using Type = SetHLMode_Response_<ContainerAllocator>;

  explicit SetHLMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetHLMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::SetHLMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::SetHLMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::SetHLMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::SetHLMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::SetHLMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::SetHLMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::SetHLMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::SetHLMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::SetHLMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::SetHLMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__SetHLMode_Response
    std::shared_ptr<labust_msgs::srv::SetHLMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__SetHLMode_Response
    std::shared_ptr<labust_msgs::srv::SetHLMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetHLMode_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetHLMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetHLMode_Response_

// alias to use template instance with default allocator
using SetHLMode_Response =
  labust_msgs::srv::SetHLMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct SetHLMode
{
  using Request = labust_msgs::srv::SetHLMode_Request;
  using Response = labust_msgs::srv::SetHLMode_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__SET_HL_MODE__STRUCT_HPP_
