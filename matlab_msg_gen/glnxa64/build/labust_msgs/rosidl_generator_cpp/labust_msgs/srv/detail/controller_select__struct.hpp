// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/ControllerSelect.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__CONTROLLER_SELECT__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__CONTROLLER_SELECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__ControllerSelect_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__ControllerSelect_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControllerSelect_Request_
{
  using Type = ControllerSelect_Request_<ContainerAllocator>;

  explicit ControllerSelect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ControllerSelect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _name_type name;
  using _state_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__state(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DISABLED =
    0u;
  static constexpr uint8_t MANUAL =
    1u;
  static constexpr uint8_t EXTERNAL =
    2u;
  static constexpr uint8_t TRACKING =
    3u;
  static constexpr uint8_t ACTIVATE =
    2u;
  static constexpr uint8_t DEACTIVATE =
    3u;

  // pointer types
  using RawPtr =
    labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__ControllerSelect_Request
    std::shared_ptr<labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__ControllerSelect_Request
    std::shared_ptr<labust_msgs::srv::ControllerSelect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerSelect_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerSelect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerSelect_Request_

// alias to use template instance with default allocator
using ControllerSelect_Request =
  labust_msgs::srv::ControllerSelect_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ControllerSelect_Request_<ContainerAllocator>::DISABLED;
template<typename ContainerAllocator>
constexpr uint8_t ControllerSelect_Request_<ContainerAllocator>::MANUAL;
template<typename ContainerAllocator>
constexpr uint8_t ControllerSelect_Request_<ContainerAllocator>::EXTERNAL;
template<typename ContainerAllocator>
constexpr uint8_t ControllerSelect_Request_<ContainerAllocator>::TRACKING;
template<typename ContainerAllocator>
constexpr uint8_t ControllerSelect_Request_<ContainerAllocator>::ACTIVATE;
template<typename ContainerAllocator>
constexpr uint8_t ControllerSelect_Request_<ContainerAllocator>::DEACTIVATE;

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__ControllerSelect_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__ControllerSelect_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControllerSelect_Response_
{
  using Type = ControllerSelect_Response_<ContainerAllocator>;

  explicit ControllerSelect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ControllerSelect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _name_type name;
  using _success_type =
    std::vector<bool, typename ContainerAllocator::template rebind<bool>::other>;
  _success_type success;

  // setters for named parameter idiom
  Type & set__name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__success(
    const std::vector<bool, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__ControllerSelect_Response
    std::shared_ptr<labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__ControllerSelect_Response
    std::shared_ptr<labust_msgs::srv::ControllerSelect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerSelect_Response_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerSelect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerSelect_Response_

// alias to use template instance with default allocator
using ControllerSelect_Response =
  labust_msgs::srv::ControllerSelect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct ControllerSelect
{
  using Request = labust_msgs::srv::ControllerSelect_Request;
  using Response = labust_msgs::srv::ControllerSelect_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__CONTROLLER_SELECT__STRUCT_HPP_
