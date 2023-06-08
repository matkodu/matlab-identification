// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/DynamicPositioningPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_PRIMITIVE_SERVICE__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_PRIMITIVE_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__DynamicPositioningPrimitiveService_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__DynamicPositioningPrimitiveService_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynamicPositioningPrimitiveService_Request_
{
  using Type = DynamicPositioningPrimitiveService_Request_<ContainerAllocator>;

  explicit DynamicPositioningPrimitiveService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->north = 0.0;
      this->east = 0.0;
      this->depth = 0.0;
      this->heading = 0.0;
      this->north_enable = false;
      this->east_enable = false;
      this->depth_enable = false;
      this->heading_enable = false;
      this->altitude_enable = false;
      this->target_topic_enable = false;
      this->track_heading_enable = false;
      this->point_to_target = false;
      this->target_topic = "";
      this->heading_topic = "";
    }
  }

  explicit DynamicPositioningPrimitiveService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_topic(_alloc),
    heading_topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->north = 0.0;
      this->east = 0.0;
      this->depth = 0.0;
      this->heading = 0.0;
      this->north_enable = false;
      this->east_enable = false;
      this->depth_enable = false;
      this->heading_enable = false;
      this->altitude_enable = false;
      this->target_topic_enable = false;
      this->track_heading_enable = false;
      this->point_to_target = false;
      this->target_topic = "";
      this->heading_topic = "";
    }
  }

  // field types and members
  using _north_type =
    double;
  _north_type north;
  using _east_type =
    double;
  _east_type east;
  using _depth_type =
    double;
  _depth_type depth;
  using _heading_type =
    double;
  _heading_type heading;
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
  using _target_topic_enable_type =
    bool;
  _target_topic_enable_type target_topic_enable;
  using _track_heading_enable_type =
    bool;
  _track_heading_enable_type track_heading_enable;
  using _point_to_target_type =
    bool;
  _point_to_target_type point_to_target;
  using _target_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _target_topic_type target_topic;
  using _heading_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _heading_topic_type heading_topic;

  // setters for named parameter idiom
  Type & set__north(
    const double & _arg)
  {
    this->north = _arg;
    return *this;
  }
  Type & set__east(
    const double & _arg)
  {
    this->east = _arg;
    return *this;
  }
  Type & set__depth(
    const double & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
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
  Type & set__target_topic_enable(
    const bool & _arg)
  {
    this->target_topic_enable = _arg;
    return *this;
  }
  Type & set__track_heading_enable(
    const bool & _arg)
  {
    this->track_heading_enable = _arg;
    return *this;
  }
  Type & set__point_to_target(
    const bool & _arg)
  {
    this->point_to_target = _arg;
    return *this;
  }
  Type & set__target_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->target_topic = _arg;
    return *this;
  }
  Type & set__heading_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->heading_topic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__DynamicPositioningPrimitiveService_Request
    std::shared_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__DynamicPositioningPrimitiveService_Request
    std::shared_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicPositioningPrimitiveService_Request_ & other) const
  {
    if (this->north != other.north) {
      return false;
    }
    if (this->east != other.east) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->heading != other.heading) {
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
    if (this->target_topic_enable != other.target_topic_enable) {
      return false;
    }
    if (this->track_heading_enable != other.track_heading_enable) {
      return false;
    }
    if (this->point_to_target != other.point_to_target) {
      return false;
    }
    if (this->target_topic != other.target_topic) {
      return false;
    }
    if (this->heading_topic != other.heading_topic) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicPositioningPrimitiveService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicPositioningPrimitiveService_Request_

// alias to use template instance with default allocator
using DynamicPositioningPrimitiveService_Request =
  labust_msgs::srv::DynamicPositioningPrimitiveService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__DynamicPositioningPrimitiveService_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__DynamicPositioningPrimitiveService_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynamicPositioningPrimitiveService_Response_
{
  using Type = DynamicPositioningPrimitiveService_Response_<ContainerAllocator>;

  explicit DynamicPositioningPrimitiveService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit DynamicPositioningPrimitiveService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__DynamicPositioningPrimitiveService_Response
    std::shared_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__DynamicPositioningPrimitiveService_Response
    std::shared_ptr<labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicPositioningPrimitiveService_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicPositioningPrimitiveService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicPositioningPrimitiveService_Response_

// alias to use template instance with default allocator
using DynamicPositioningPrimitiveService_Response =
  labust_msgs::srv::DynamicPositioningPrimitiveService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct DynamicPositioningPrimitiveService
{
  using Request = labust_msgs::srv::DynamicPositioningPrimitiveService_Request;
  using Response = labust_msgs::srv::DynamicPositioningPrimitiveService_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_PRIMITIVE_SERVICE__STRUCT_HPP_
