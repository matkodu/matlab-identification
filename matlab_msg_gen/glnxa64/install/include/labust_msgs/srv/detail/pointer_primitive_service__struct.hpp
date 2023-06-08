// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/PointerPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__POINTER_PRIMITIVE_SERVICE__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__POINTER_PRIMITIVE_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'guidance_target'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__PointerPrimitiveService_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__PointerPrimitiveService_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PointerPrimitiveService_Request_
{
  using Type = PointerPrimitiveService_Request_<ContainerAllocator>;

  explicit PointerPrimitiveService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : guidance_target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0f;
      this->vertical_offset = 0.0f;
      this->guidance_enable = false;
      this->wrapping_enable = false;
      this->fov_guidance = false;
      this->streamline_orientation = false;
      this->guidance_topic = "";
      this->radius_topic = "";
    }
  }

  explicit PointerPrimitiveService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : guidance_target(_alloc, _init),
    guidance_topic(_alloc),
    radius_topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0f;
      this->vertical_offset = 0.0f;
      this->guidance_enable = false;
      this->wrapping_enable = false;
      this->fov_guidance = false;
      this->streamline_orientation = false;
      this->guidance_topic = "";
      this->radius_topic = "";
    }
  }

  // field types and members
  using _radius_type =
    float;
  _radius_type radius;
  using _vertical_offset_type =
    float;
  _vertical_offset_type vertical_offset;
  using _guidance_target_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _guidance_target_type guidance_target;
  using _guidance_enable_type =
    bool;
  _guidance_enable_type guidance_enable;
  using _wrapping_enable_type =
    bool;
  _wrapping_enable_type wrapping_enable;
  using _fov_guidance_type =
    bool;
  _fov_guidance_type fov_guidance;
  using _streamline_orientation_type =
    bool;
  _streamline_orientation_type streamline_orientation;
  using _guidance_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _guidance_topic_type guidance_topic;
  using _radius_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _radius_topic_type radius_topic;

  // setters for named parameter idiom
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__vertical_offset(
    const float & _arg)
  {
    this->vertical_offset = _arg;
    return *this;
  }
  Type & set__guidance_target(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->guidance_target = _arg;
    return *this;
  }
  Type & set__guidance_enable(
    const bool & _arg)
  {
    this->guidance_enable = _arg;
    return *this;
  }
  Type & set__wrapping_enable(
    const bool & _arg)
  {
    this->wrapping_enable = _arg;
    return *this;
  }
  Type & set__fov_guidance(
    const bool & _arg)
  {
    this->fov_guidance = _arg;
    return *this;
  }
  Type & set__streamline_orientation(
    const bool & _arg)
  {
    this->streamline_orientation = _arg;
    return *this;
  }
  Type & set__guidance_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->guidance_topic = _arg;
    return *this;
  }
  Type & set__radius_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->radius_topic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__PointerPrimitiveService_Request
    std::shared_ptr<labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__PointerPrimitiveService_Request
    std::shared_ptr<labust_msgs::srv::PointerPrimitiveService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointerPrimitiveService_Request_ & other) const
  {
    if (this->radius != other.radius) {
      return false;
    }
    if (this->vertical_offset != other.vertical_offset) {
      return false;
    }
    if (this->guidance_target != other.guidance_target) {
      return false;
    }
    if (this->guidance_enable != other.guidance_enable) {
      return false;
    }
    if (this->wrapping_enable != other.wrapping_enable) {
      return false;
    }
    if (this->fov_guidance != other.fov_guidance) {
      return false;
    }
    if (this->streamline_orientation != other.streamline_orientation) {
      return false;
    }
    if (this->guidance_topic != other.guidance_topic) {
      return false;
    }
    if (this->radius_topic != other.radius_topic) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointerPrimitiveService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointerPrimitiveService_Request_

// alias to use template instance with default allocator
using PointerPrimitiveService_Request =
  labust_msgs::srv::PointerPrimitiveService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__PointerPrimitiveService_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__PointerPrimitiveService_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PointerPrimitiveService_Response_
{
  using Type = PointerPrimitiveService_Response_<ContainerAllocator>;

  explicit PointerPrimitiveService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit PointerPrimitiveService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__PointerPrimitiveService_Response
    std::shared_ptr<labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__PointerPrimitiveService_Response
    std::shared_ptr<labust_msgs::srv::PointerPrimitiveService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointerPrimitiveService_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointerPrimitiveService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointerPrimitiveService_Response_

// alias to use template instance with default allocator
using PointerPrimitiveService_Response =
  labust_msgs::srv::PointerPrimitiveService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct PointerPrimitiveService
{
  using Request = labust_msgs::srv::PointerPrimitiveService_Request;
  using Response = labust_msgs::srv::PointerPrimitiveService_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__POINTER_PRIMITIVE_SERVICE__STRUCT_HPP_
