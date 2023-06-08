// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/UnRegisterController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__UnRegisterController_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__UnRegisterController_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnRegisterController_Request_
{
  using Type = UnRegisterController_Request_<ContainerAllocator>;

  explicit UnRegisterController_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->parent = "";
      this->name = "";
    }
  }

  explicit UnRegisterController_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parent(_alloc),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->parent = "";
      this->name = "";
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _parent_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _parent_type parent;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
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

  // constant declarations
  static constexpr uint8_t SINGLE =
    0u;
  static constexpr uint8_t SAME_PARENT =
    1u;
  static constexpr uint8_t ALL =
    2u;

  // pointer types
  using RawPtr =
    labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__UnRegisterController_Request
    std::shared_ptr<labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__UnRegisterController_Request
    std::shared_ptr<labust_msgs::srv::UnRegisterController_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnRegisterController_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->parent != other.parent) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnRegisterController_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnRegisterController_Request_

// alias to use template instance with default allocator
using UnRegisterController_Request =
  labust_msgs::srv::UnRegisterController_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t UnRegisterController_Request_<ContainerAllocator>::SINGLE;
template<typename ContainerAllocator>
constexpr uint8_t UnRegisterController_Request_<ContainerAllocator>::SAME_PARENT;
template<typename ContainerAllocator>
constexpr uint8_t UnRegisterController_Request_<ContainerAllocator>::ALL;

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__UnRegisterController_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__UnRegisterController_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnRegisterController_Response_
{
  using Type = UnRegisterController_Response_<ContainerAllocator>;

  explicit UnRegisterController_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reply = 0;
    }
  }

  explicit UnRegisterController_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  // pointer types
  using RawPtr =
    labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__UnRegisterController_Response
    std::shared_ptr<labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__UnRegisterController_Response
    std::shared_ptr<labust_msgs::srv::UnRegisterController_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnRegisterController_Response_ & other) const
  {
    if (this->reply != other.reply) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnRegisterController_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnRegisterController_Response_

// alias to use template instance with default allocator
using UnRegisterController_Response =
  labust_msgs::srv::UnRegisterController_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t UnRegisterController_Response_<ContainerAllocator>::SUCCESS;

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct UnRegisterController
{
  using Request = labust_msgs::srv::UnRegisterController_Request;
  using Response = labust_msgs::srv::UnRegisterController_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__STRUCT_HPP_
