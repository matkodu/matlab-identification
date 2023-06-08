// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/DockingPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__DOCKING_PRIMITIVE_SERVICE__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__DOCKING_PRIMITIVE_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__DockingPrimitiveService_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__DockingPrimitiveService_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DockingPrimitiveService_Request_
{
  using Type = DockingPrimitiveService_Request_<ContainerAllocator>;

  explicit DockingPrimitiveService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->docking_action = false;
      this->docking_slot = 0;
      this->search_yaw_rate = 0.0f;
      this->max_yaw_rate = 0.0f;
      this->max_surge_speed = 0.0f;
      this->surge_stdev = 0.0f;
    }
  }

  explicit DockingPrimitiveService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->docking_action = false;
      this->docking_slot = 0;
      this->search_yaw_rate = 0.0f;
      this->max_yaw_rate = 0.0f;
      this->max_surge_speed = 0.0f;
      this->surge_stdev = 0.0f;
    }
  }

  // field types and members
  using _docking_action_type =
    bool;
  _docking_action_type docking_action;
  using _docking_slot_type =
    uint8_t;
  _docking_slot_type docking_slot;
  using _search_yaw_rate_type =
    float;
  _search_yaw_rate_type search_yaw_rate;
  using _max_yaw_rate_type =
    float;
  _max_yaw_rate_type max_yaw_rate;
  using _max_surge_speed_type =
    float;
  _max_surge_speed_type max_surge_speed;
  using _surge_stdev_type =
    float;
  _surge_stdev_type surge_stdev;

  // setters for named parameter idiom
  Type & set__docking_action(
    const bool & _arg)
  {
    this->docking_action = _arg;
    return *this;
  }
  Type & set__docking_slot(
    const uint8_t & _arg)
  {
    this->docking_slot = _arg;
    return *this;
  }
  Type & set__search_yaw_rate(
    const float & _arg)
  {
    this->search_yaw_rate = _arg;
    return *this;
  }
  Type & set__max_yaw_rate(
    const float & _arg)
  {
    this->max_yaw_rate = _arg;
    return *this;
  }
  Type & set__max_surge_speed(
    const float & _arg)
  {
    this->max_surge_speed = _arg;
    return *this;
  }
  Type & set__surge_stdev(
    const float & _arg)
  {
    this->surge_stdev = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__DockingPrimitiveService_Request
    std::shared_ptr<labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__DockingPrimitiveService_Request
    std::shared_ptr<labust_msgs::srv::DockingPrimitiveService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockingPrimitiveService_Request_ & other) const
  {
    if (this->docking_action != other.docking_action) {
      return false;
    }
    if (this->docking_slot != other.docking_slot) {
      return false;
    }
    if (this->search_yaw_rate != other.search_yaw_rate) {
      return false;
    }
    if (this->max_yaw_rate != other.max_yaw_rate) {
      return false;
    }
    if (this->max_surge_speed != other.max_surge_speed) {
      return false;
    }
    if (this->surge_stdev != other.surge_stdev) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockingPrimitiveService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockingPrimitiveService_Request_

// alias to use template instance with default allocator
using DockingPrimitiveService_Request =
  labust_msgs::srv::DockingPrimitiveService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__DockingPrimitiveService_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__DockingPrimitiveService_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DockingPrimitiveService_Response_
{
  using Type = DockingPrimitiveService_Response_<ContainerAllocator>;

  explicit DockingPrimitiveService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit DockingPrimitiveService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__DockingPrimitiveService_Response
    std::shared_ptr<labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__DockingPrimitiveService_Response
    std::shared_ptr<labust_msgs::srv::DockingPrimitiveService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockingPrimitiveService_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockingPrimitiveService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockingPrimitiveService_Response_

// alias to use template instance with default allocator
using DockingPrimitiveService_Response =
  labust_msgs::srv::DockingPrimitiveService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct DockingPrimitiveService
{
  using Request = labust_msgs::srv::DockingPrimitiveService_Request;
  using Response = labust_msgs::srv::DockingPrimitiveService_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__DOCKING_PRIMITIVE_SERVICE__STRUCT_HPP_
