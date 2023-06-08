// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/LawnmoverService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'start_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__LawnmoverService_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__LawnmoverService_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LawnmoverService_Request_
{
  using Type = LawnmoverService_Request_<ContainerAllocator>;

  explicit LawnmoverService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0f;
      this->length = 0.0f;
      this->speed = 0.0f;
      this->victory_radius = 0.0f;
      this->horizontal_step = 0.0f;
      this->bearing = 0.0f;
    }
  }

  explicit LawnmoverService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0f;
      this->length = 0.0f;
      this->speed = 0.0f;
      this->victory_radius = 0.0f;
      this->horizontal_step = 0.0f;
      this->bearing = 0.0f;
    }
  }

  // field types and members
  using _width_type =
    float;
  _width_type width;
  using _length_type =
    float;
  _length_type length;
  using _start_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _start_position_type start_position;
  using _speed_type =
    float;
  _speed_type speed;
  using _victory_radius_type =
    float;
  _victory_radius_type victory_radius;
  using _horizontal_step_type =
    float;
  _horizontal_step_type horizontal_step;
  using _bearing_type =
    float;
  _bearing_type bearing;

  // setters for named parameter idiom
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__start_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->start_position = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__victory_radius(
    const float & _arg)
  {
    this->victory_radius = _arg;
    return *this;
  }
  Type & set__horizontal_step(
    const float & _arg)
  {
    this->horizontal_step = _arg;
    return *this;
  }
  Type & set__bearing(
    const float & _arg)
  {
    this->bearing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__LawnmoverService_Request
    std::shared_ptr<labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__LawnmoverService_Request
    std::shared_ptr<labust_msgs::srv::LawnmoverService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmoverService_Request_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->start_position != other.start_position) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->victory_radius != other.victory_radius) {
      return false;
    }
    if (this->horizontal_step != other.horizontal_step) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    return true;
  }
  bool operator!=(const LawnmoverService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmoverService_Request_

// alias to use template instance with default allocator
using LawnmoverService_Request =
  labust_msgs::srv::LawnmoverService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__LawnmoverService_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__LawnmoverService_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LawnmoverService_Response_
{
  using Type = LawnmoverService_Response_<ContainerAllocator>;

  explicit LawnmoverService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit LawnmoverService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__LawnmoverService_Response
    std::shared_ptr<labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__LawnmoverService_Response
    std::shared_ptr<labust_msgs::srv::LawnmoverService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LawnmoverService_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const LawnmoverService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LawnmoverService_Response_

// alias to use template instance with default allocator
using LawnmoverService_Response =
  labust_msgs::srv::LawnmoverService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct LawnmoverService
{
  using Request = labust_msgs::srv::LawnmoverService_Request;
  using Response = labust_msgs::srv::LawnmoverService_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__LAWNMOVER_SERVICE__STRUCT_HPP_
