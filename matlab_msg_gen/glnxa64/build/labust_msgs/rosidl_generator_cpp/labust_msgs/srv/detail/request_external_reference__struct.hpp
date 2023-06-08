// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/RequestExternalReference.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REQUEST_EXTERNAL_REFERENCE__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__REQUEST_EXTERNAL_REFERENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RequestExternalReference_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RequestExternalReference_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RequestExternalReference_Request_
{
  using Type = RequestExternalReference_Request_<ContainerAllocator>;

  explicit RequestExternalReference_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->control_modes.begin(), this->control_modes.end(), 0l);
      this->identity = "";
    }
  }

  explicit RequestExternalReference_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control_modes(_alloc),
    identity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->control_modes.begin(), this->control_modes.end(), 0l);
      this->identity = "";
    }
  }

  // field types and members
  using _control_modes_type =
    std::array<int32_t, 6>;
  _control_modes_type control_modes;
  using _identity_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _identity_type identity;

  // setters for named parameter idiom
  Type & set__control_modes(
    const std::array<int32_t, 6> & _arg)
  {
    this->control_modes = _arg;
    return *this;
  }
  Type & set__identity(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->identity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t IGNORE =
    0;
  static constexpr int32_t TAU_REF =
    1;
  static constexpr int32_t NU_REF =
    2;
  static constexpr int32_t ETA_REF =
    3;

  // pointer types
  using RawPtr =
    labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RequestExternalReference_Request
    std::shared_ptr<labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RequestExternalReference_Request
    std::shared_ptr<labust_msgs::srv::RequestExternalReference_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestExternalReference_Request_ & other) const
  {
    if (this->control_modes != other.control_modes) {
      return false;
    }
    if (this->identity != other.identity) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestExternalReference_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestExternalReference_Request_

// alias to use template instance with default allocator
using RequestExternalReference_Request =
  labust_msgs::srv::RequestExternalReference_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t RequestExternalReference_Request_<ContainerAllocator>::IGNORE;
template<typename ContainerAllocator>
constexpr int32_t RequestExternalReference_Request_<ContainerAllocator>::TAU_REF;
template<typename ContainerAllocator>
constexpr int32_t RequestExternalReference_Request_<ContainerAllocator>::NU_REF;
template<typename ContainerAllocator>
constexpr int32_t RequestExternalReference_Request_<ContainerAllocator>::ETA_REF;

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RequestExternalReference_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RequestExternalReference_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RequestExternalReference_Response_
{
  using Type = RequestExternalReference_Response_<ContainerAllocator>;

  explicit RequestExternalReference_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->identity_token = "";
      this->message = "";
    }
  }

  explicit RequestExternalReference_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : identity_token(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->identity_token = "";
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _identity_token_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _identity_token_type identity_token;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__identity_token(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->identity_token = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RequestExternalReference_Response
    std::shared_ptr<labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RequestExternalReference_Response
    std::shared_ptr<labust_msgs::srv::RequestExternalReference_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestExternalReference_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->identity_token != other.identity_token) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestExternalReference_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestExternalReference_Response_

// alias to use template instance with default allocator
using RequestExternalReference_Response =
  labust_msgs::srv::RequestExternalReference_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct RequestExternalReference
{
  using Request = labust_msgs::srv::RequestExternalReference_Request;
  using Response = labust_msgs::srv::RequestExternalReference_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__REQUEST_EXTERNAL_REFERENCE__STRUCT_HPP_
