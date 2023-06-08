// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/RequestControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RequestControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RequestControl_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RequestControl_Request_
{
  using Type = RequestControl_Request_<ContainerAllocator>;

  explicit RequestControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identity = "";
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->nu_desired_mode.begin(), this->nu_desired_mode.end(), 0l);
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->tau_desired_mode.begin(), this->tau_desired_mode.end(), 0l);
    }
  }

  explicit RequestControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : identity(_alloc),
    nu_desired_mode(_alloc),
    tau_desired_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identity = "";
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->nu_desired_mode.begin(), this->nu_desired_mode.end(), 0l);
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->tau_desired_mode.begin(), this->tau_desired_mode.end(), 0l);
    }
  }

  // field types and members
  using _identity_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _identity_type identity;
  using _nu_desired_mode_type =
    std::array<int32_t, 6>;
  _nu_desired_mode_type nu_desired_mode;
  using _tau_desired_mode_type =
    std::array<int32_t, 6>;
  _tau_desired_mode_type tau_desired_mode;

  // setters for named parameter idiom
  Type & set__identity(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->identity = _arg;
    return *this;
  }
  Type & set__nu_desired_mode(
    const std::array<int32_t, 6> & _arg)
  {
    this->nu_desired_mode = _arg;
    return *this;
  }
  Type & set__tau_desired_mode(
    const std::array<int32_t, 6> & _arg)
  {
    this->tau_desired_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t DONTCARE =
    0;
  static constexpr int32_t DISABLEAXIS =
    1;
  static constexpr int32_t MANUALAXIS =
    2;
  static constexpr int32_t CONTROLAXIS =
    3;
  static constexpr int32_t IDENTAXIS =
    4;
  static constexpr int32_t DIRECTAXIS =
    5;
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
    6;
  static constexpr int32_t Y =
    7;
  static constexpr int32_t Z =
    8;
  static constexpr int32_t K =
    9;
  static constexpr int32_t M =
    10;
  static constexpr int32_t N =
    11;

  // pointer types
  using RawPtr =
    labust_msgs::srv::RequestControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RequestControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RequestControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RequestControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RequestControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RequestControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RequestControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RequestControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RequestControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RequestControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RequestControl_Request
    std::shared_ptr<labust_msgs::srv::RequestControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RequestControl_Request
    std::shared_ptr<labust_msgs::srv::RequestControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestControl_Request_ & other) const
  {
    if (this->identity != other.identity) {
      return false;
    }
    if (this->nu_desired_mode != other.nu_desired_mode) {
      return false;
    }
    if (this->tau_desired_mode != other.tau_desired_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const RequestControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestControl_Request_

// alias to use template instance with default allocator
using RequestControl_Request =
  labust_msgs::srv::RequestControl_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::DONTCARE;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::DISABLEAXIS;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::MANUALAXIS;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::CONTROLAXIS;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::IDENTAXIS;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::DIRECTAXIS;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::U;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::V;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::W;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::P;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::Q;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::R;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::X;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::Y;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::Z;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::K;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::M;
template<typename ContainerAllocator>
constexpr int32_t RequestControl_Request_<ContainerAllocator>::N;

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RequestControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RequestControl_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RequestControl_Response_
{
  using Type = RequestControl_Response_<ContainerAllocator>;

  explicit RequestControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->identity_token = "";
      this->message = "";
    }
  }

  explicit RequestControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::RequestControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RequestControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RequestControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RequestControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RequestControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RequestControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RequestControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RequestControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RequestControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RequestControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RequestControl_Response
    std::shared_ptr<labust_msgs::srv::RequestControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RequestControl_Response
    std::shared_ptr<labust_msgs::srv::RequestControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RequestControl_Response_ & other) const
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
  bool operator!=(const RequestControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RequestControl_Response_

// alias to use template instance with default allocator
using RequestControl_Response =
  labust_msgs::srv::RequestControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct RequestControl
{
  using Request = labust_msgs::srv::RequestControl_Request;
  using Response = labust_msgs::srv::RequestControl_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__REQUEST_CONTROL__STRUCT_HPP_
