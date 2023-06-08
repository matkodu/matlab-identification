// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/SelectTauSignal.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__SELECT_TAU_SIGNAL__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__SELECT_TAU_SIGNAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__SelectTauSignal_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__SelectTauSignal_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelectTauSignal_Request_
{
  using Type = SelectTauSignal_Request_<ContainerAllocator>;

  explicit SelectTauSignal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identity_token = "";
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->desired_mode.begin(), this->desired_mode.end(), 0l);
    }
  }

  explicit SelectTauSignal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : identity_token(_alloc),
    desired_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identity_token = "";
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->desired_mode.begin(), this->desired_mode.end(), 0l);
    }
  }

  // field types and members
  using _identity_token_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _identity_token_type identity_token;
  using _desired_mode_type =
    std::array<int32_t, 6>;
  _desired_mode_type desired_mode;

  // setters for named parameter idiom
  Type & set__identity_token(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->identity_token = _arg;
    return *this;
  }
  Type & set__desired_mode(
    const std::array<int32_t, 6> & _arg)
  {
    this->desired_mode = _arg;
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

  // pointer types
  using RawPtr =
    labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__SelectTauSignal_Request
    std::shared_ptr<labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__SelectTauSignal_Request
    std::shared_ptr<labust_msgs::srv::SelectTauSignal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectTauSignal_Request_ & other) const
  {
    if (this->identity_token != other.identity_token) {
      return false;
    }
    if (this->desired_mode != other.desired_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectTauSignal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectTauSignal_Request_

// alias to use template instance with default allocator
using SelectTauSignal_Request =
  labust_msgs::srv::SelectTauSignal_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::DONTCARE;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::DISABLEAXIS;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::MANUALAXIS;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::CONTROLAXIS;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::IDENTAXIS;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::DIRECTAXIS;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::U;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::V;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::W;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::P;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::Q;
template<typename ContainerAllocator>
constexpr int32_t SelectTauSignal_Request_<ContainerAllocator>::R;

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__SelectTauSignal_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__SelectTauSignal_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SelectTauSignal_Response_
{
  using Type = SelectTauSignal_Response_<ContainerAllocator>;

  explicit SelectTauSignal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SelectTauSignal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__SelectTauSignal_Response
    std::shared_ptr<labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__SelectTauSignal_Response
    std::shared_ptr<labust_msgs::srv::SelectTauSignal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectTauSignal_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectTauSignal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectTauSignal_Response_

// alias to use template instance with default allocator
using SelectTauSignal_Response =
  labust_msgs::srv::SelectTauSignal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct SelectTauSignal
{
  using Request = labust_msgs::srv::SelectTauSignal_Request;
  using Response = labust_msgs::srv::SelectTauSignal_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__SELECT_TAU_SIGNAL__STRUCT_HPP_
