// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/RegisterControllerV3.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RegisterControllerV3_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RegisterControllerV3_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterControllerV3_Request_
{
  using Type = RegisterControllerV3_Request_<ContainerAllocator>;

  explicit RegisterControllerV3_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent = "";
      this->name = "";
      this->has_manual = false;
      std::fill<typename std::array<int8_t, 6>::iterator, int8_t>(this->used_tau.begin(), this->used_tau.end(), 0);
    }
  }

  explicit RegisterControllerV3_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parent(_alloc),
    name(_alloc),
    used_tau(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent = "";
      this->name = "";
      this->has_manual = false;
      std::fill<typename std::array<int8_t, 6>::iterator, int8_t>(this->used_tau.begin(), this->used_tau.end(), 0);
    }
  }

  // field types and members
  using _parent_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _parent_type parent;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _has_manual_type =
    bool;
  _has_manual_type has_manual;
  using _used_tau_type =
    std::array<int8_t, 6>;
  _used_tau_type used_tau;
  using _used_other_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _used_other_type used_other;
  using _used_resources_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _used_resources_type used_resources;

  // setters for named parameter idiom
  Type & set__parent(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->parent = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__has_manual(
    const bool & _arg)
  {
    this->has_manual = _arg;
    return *this;
  }
  Type & set__used_tau(
    const std::array<int8_t, 6> & _arg)
  {
    this->used_tau = _arg;
    return *this;
  }
  Type & set__used_other(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->used_other = _arg;
    return *this;
  }
  Type & set__used_resources(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->used_resources = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RegisterControllerV3_Request
    std::shared_ptr<labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RegisterControllerV3_Request
    std::shared_ptr<labust_msgs::srv::RegisterControllerV3_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterControllerV3_Request_ & other) const
  {
    if (this->parent != other.parent) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->has_manual != other.has_manual) {
      return false;
    }
    if (this->used_tau != other.used_tau) {
      return false;
    }
    if (this->used_other != other.used_other) {
      return false;
    }
    if (this->used_resources != other.used_resources) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterControllerV3_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterControllerV3_Request_

// alias to use template instance with default allocator
using RegisterControllerV3_Request =
  labust_msgs::srv::RegisterControllerV3_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RegisterControllerV3_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RegisterControllerV3_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterControllerV3_Response_
{
  using Type = RegisterControllerV3_Response_<ContainerAllocator>;

  explicit RegisterControllerV3_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reply = 0;
    }
  }

  explicit RegisterControllerV3_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reply = 0;
    }
  }

  // field types and members
  using _reply_type =
    uint8_t;
  _reply_type reply;

  // setters for named parameter idiom
  Type & set__reply(
    const uint8_t & _arg)
  {
    this->reply = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SUCCESS =
    0u;
  static constexpr uint8_t MISSING_DEPENDENCY =
    1u;
  static constexpr uint8_t ALREADY_REGISTERED =
    2u;

  // pointer types
  using RawPtr =
    labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RegisterControllerV3_Response
    std::shared_ptr<labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RegisterControllerV3_Response
    std::shared_ptr<labust_msgs::srv::RegisterControllerV3_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterControllerV3_Response_ & other) const
  {
    if (this->reply != other.reply) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterControllerV3_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterControllerV3_Response_

// alias to use template instance with default allocator
using RegisterControllerV3_Response =
  labust_msgs::srv::RegisterControllerV3_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV3_Response_<ContainerAllocator>::SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV3_Response_<ContainerAllocator>::MISSING_DEPENDENCY;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV3_Response_<ContainerAllocator>::ALREADY_REGISTERED;

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct RegisterControllerV3
{
  using Request = labust_msgs::srv::RegisterControllerV3_Request;
  using Response = labust_msgs::srv::RegisterControllerV3_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V3__STRUCT_HPP_
