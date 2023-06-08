// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/DynamicPositioningLLService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_LL_SERVICE__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_LL_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'point'
#include "geographic_msgs/msg/detail/geo_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__DynamicPositioningLLService_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__DynamicPositioningLLService_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynamicPositioningLLService_Request_
{
  using Type = DynamicPositioningLLService_Request_<ContainerAllocator>;

  explicit DynamicPositioningLLService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0;
    }
  }

  explicit DynamicPositioningLLService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0;
    }
  }

  // field types and members
  using _point_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _point_type point;
  using _heading_type =
    double;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__point(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__DynamicPositioningLLService_Request
    std::shared_ptr<labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__DynamicPositioningLLService_Request
    std::shared_ptr<labust_msgs::srv::DynamicPositioningLLService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicPositioningLLService_Request_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicPositioningLLService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicPositioningLLService_Request_

// alias to use template instance with default allocator
using DynamicPositioningLLService_Request =
  labust_msgs::srv::DynamicPositioningLLService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__DynamicPositioningLLService_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__DynamicPositioningLLService_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynamicPositioningLLService_Response_
{
  using Type = DynamicPositioningLLService_Response_<ContainerAllocator>;

  explicit DynamicPositioningLLService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit DynamicPositioningLLService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__DynamicPositioningLLService_Response
    std::shared_ptr<labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__DynamicPositioningLLService_Response
    std::shared_ptr<labust_msgs::srv::DynamicPositioningLLService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicPositioningLLService_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicPositioningLLService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicPositioningLLService_Response_

// alias to use template instance with default allocator
using DynamicPositioningLLService_Response =
  labust_msgs::srv::DynamicPositioningLLService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct DynamicPositioningLLService
{
  using Request = labust_msgs::srv::DynamicPositioningLLService_Request;
  using Response = labust_msgs::srv::DynamicPositioningLLService_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__DYNAMIC_POSITIONING_LL_SERVICE__STRUCT_HPP_
