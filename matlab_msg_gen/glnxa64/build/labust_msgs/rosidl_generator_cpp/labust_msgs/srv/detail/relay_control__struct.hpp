// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/RelayControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RelayControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RelayControl_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RelayControl_Request_
{
  using Type = RelayControl_Request_<ContainerAllocator>;

  explicit RelayControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relay_num = 0;
      this->relay_state = false;
      this->timeout = 0;
    }
  }

  explicit RelayControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->relay_num = 0;
      this->relay_state = false;
      this->timeout = 0;
    }
  }

  // field types and members
  using _relay_num_type =
    uint8_t;
  _relay_num_type relay_num;
  using _relay_state_type =
    bool;
  _relay_state_type relay_state;
  using _timeout_type =
    uint8_t;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__relay_num(
    const uint8_t & _arg)
  {
    this->relay_num = _arg;
    return *this;
  }
  Type & set__relay_state(
    const bool & _arg)
  {
    this->relay_state = _arg;
    return *this;
  }
  Type & set__timeout(
    const uint8_t & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::RelayControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RelayControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RelayControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RelayControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RelayControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RelayControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RelayControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RelayControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RelayControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RelayControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RelayControl_Request
    std::shared_ptr<labust_msgs::srv::RelayControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RelayControl_Request
    std::shared_ptr<labust_msgs::srv::RelayControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayControl_Request_ & other) const
  {
    if (this->relay_num != other.relay_num) {
      return false;
    }
    if (this->relay_state != other.relay_state) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayControl_Request_

// alias to use template instance with default allocator
using RelayControl_Request =
  labust_msgs::srv::RelayControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RelayControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RelayControl_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RelayControl_Response_
{
  using Type = RelayControl_Response_<ContainerAllocator>;

  explicit RelayControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit RelayControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::RelayControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RelayControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RelayControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RelayControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RelayControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RelayControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RelayControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RelayControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RelayControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RelayControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RelayControl_Response
    std::shared_ptr<labust_msgs::srv::RelayControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RelayControl_Response
    std::shared_ptr<labust_msgs::srv::RelayControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayControl_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayControl_Response_

// alias to use template instance with default allocator
using RelayControl_Response =
  labust_msgs::srv::RelayControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct RelayControl
{
  using Request = labust_msgs::srv::RelayControl_Request;
  using Response = labust_msgs::srv::RelayControl_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__STRUCT_HPP_
