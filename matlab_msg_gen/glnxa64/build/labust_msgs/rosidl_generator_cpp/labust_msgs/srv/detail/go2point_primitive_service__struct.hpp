// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/Go2pointPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__GO2POINT_PRIMITIVE_SERVICE__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__GO2POINT_PRIMITIVE_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__Go2pointPrimitiveService_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__Go2pointPrimitiveService_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Go2pointPrimitiveService_Request_
{
  using Type = Go2pointPrimitiveService_Request_<ContainerAllocator>;

  explicit Go2pointPrimitiveService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fully_actuated_enable = false;
      this->heading = 0.0f;
      this->speed = 0.0f;
      this->victory_radius = 0.0f;
      this->north_enable = false;
      this->east_enable = false;
      this->depth_enable = false;
      this->heading_enable = false;
      this->altitude_enable = false;
      this->heading_topic = "";
      this->speed_topic = "";
    }
  }

  explicit Go2pointPrimitiveService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init),
    heading_topic(_alloc),
    speed_topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fully_actuated_enable = false;
      this->heading = 0.0f;
      this->speed = 0.0f;
      this->victory_radius = 0.0f;
      this->north_enable = false;
      this->east_enable = false;
      this->depth_enable = false;
      this->heading_enable = false;
      this->altitude_enable = false;
      this->heading_topic = "";
      this->speed_topic = "";
    }
  }

  // field types and members
  using _fully_actuated_enable_type =
    bool;
  _fully_actuated_enable_type fully_actuated_enable;
  using _point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _point_type point;
  using _heading_type =
    float;
  _heading_type heading;
  using _speed_type =
    float;
  _speed_type speed;
  using _victory_radius_type =
    float;
  _victory_radius_type victory_radius;
  using _north_enable_type =
    bool;
  _north_enable_type north_enable;
  using _east_enable_type =
    bool;
  _east_enable_type east_enable;
  using _depth_enable_type =
    bool;
  _depth_enable_type depth_enable;
  using _heading_enable_type =
    bool;
  _heading_enable_type heading_enable;
  using _altitude_enable_type =
    bool;
  _altitude_enable_type altitude_enable;
  using _heading_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _heading_topic_type heading_topic;
  using _speed_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _speed_topic_type speed_topic;

  // setters for named parameter idiom
  Type & set__fully_actuated_enable(
    const bool & _arg)
  {
    this->fully_actuated_enable = _arg;
    return *this;
  }
  Type & set__point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
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
  Type & set__north_enable(
    const bool & _arg)
  {
    this->north_enable = _arg;
    return *this;
  }
  Type & set__east_enable(
    const bool & _arg)
  {
    this->east_enable = _arg;
    return *this;
  }
  Type & set__depth_enable(
    const bool & _arg)
  {
    this->depth_enable = _arg;
    return *this;
  }
  Type & set__heading_enable(
    const bool & _arg)
  {
    this->heading_enable = _arg;
    return *this;
  }
  Type & set__altitude_enable(
    const bool & _arg)
  {
    this->altitude_enable = _arg;
    return *this;
  }
  Type & set__heading_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->heading_topic = _arg;
    return *this;
  }
  Type & set__speed_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->speed_topic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__Go2pointPrimitiveService_Request
    std::shared_ptr<labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__Go2pointPrimitiveService_Request
    std::shared_ptr<labust_msgs::srv::Go2pointPrimitiveService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Go2pointPrimitiveService_Request_ & other) const
  {
    if (this->fully_actuated_enable != other.fully_actuated_enable) {
      return false;
    }
    if (this->point != other.point) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->victory_radius != other.victory_radius) {
      return false;
    }
    if (this->north_enable != other.north_enable) {
      return false;
    }
    if (this->east_enable != other.east_enable) {
      return false;
    }
    if (this->depth_enable != other.depth_enable) {
      return false;
    }
    if (this->heading_enable != other.heading_enable) {
      return false;
    }
    if (this->altitude_enable != other.altitude_enable) {
      return false;
    }
    if (this->heading_topic != other.heading_topic) {
      return false;
    }
    if (this->speed_topic != other.speed_topic) {
      return false;
    }
    return true;
  }
  bool operator!=(const Go2pointPrimitiveService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Go2pointPrimitiveService_Request_

// alias to use template instance with default allocator
using Go2pointPrimitiveService_Request =
  labust_msgs::srv::Go2pointPrimitiveService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__Go2pointPrimitiveService_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__Go2pointPrimitiveService_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Go2pointPrimitiveService_Response_
{
  using Type = Go2pointPrimitiveService_Response_<ContainerAllocator>;

  explicit Go2pointPrimitiveService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit Go2pointPrimitiveService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__Go2pointPrimitiveService_Response
    std::shared_ptr<labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__Go2pointPrimitiveService_Response
    std::shared_ptr<labust_msgs::srv::Go2pointPrimitiveService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Go2pointPrimitiveService_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Go2pointPrimitiveService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Go2pointPrimitiveService_Response_

// alias to use template instance with default allocator
using Go2pointPrimitiveService_Response =
  labust_msgs::srv::Go2pointPrimitiveService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct Go2pointPrimitiveService
{
  using Request = labust_msgs::srv::Go2pointPrimitiveService_Request;
  using Response = labust_msgs::srv::Go2pointPrimitiveService_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__GO2POINT_PRIMITIVE_SERVICE__STRUCT_HPP_
