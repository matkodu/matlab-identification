// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/EvaluateExpression.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__EVALUATE_EXPRESSION__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__EVALUATE_EXPRESSION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__EvaluateExpression_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__EvaluateExpression_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EvaluateExpression_Request_
{
  using Type = EvaluateExpression_Request_<ContainerAllocator>;

  explicit EvaluateExpression_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->expression = "";
    }
  }

  explicit EvaluateExpression_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : expression(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->expression = "";
    }
  }

  // field types and members
  using _expression_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _expression_type expression;

  // setters for named parameter idiom
  Type & set__expression(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->expression = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__EvaluateExpression_Request
    std::shared_ptr<labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__EvaluateExpression_Request
    std::shared_ptr<labust_msgs::srv::EvaluateExpression_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EvaluateExpression_Request_ & other) const
  {
    if (this->expression != other.expression) {
      return false;
    }
    return true;
  }
  bool operator!=(const EvaluateExpression_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EvaluateExpression_Request_

// alias to use template instance with default allocator
using EvaluateExpression_Request =
  labust_msgs::srv::EvaluateExpression_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__EvaluateExpression_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__EvaluateExpression_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EvaluateExpression_Response_
{
  using Type = EvaluateExpression_Response_<ContainerAllocator>;

  explicit EvaluateExpression_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0;
    }
  }

  explicit EvaluateExpression_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0.0;
    }
  }

  // field types and members
  using _result_type =
    double;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const double & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__EvaluateExpression_Response
    std::shared_ptr<labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__EvaluateExpression_Response
    std::shared_ptr<labust_msgs::srv::EvaluateExpression_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EvaluateExpression_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const EvaluateExpression_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EvaluateExpression_Response_

// alias to use template instance with default allocator
using EvaluateExpression_Response =
  labust_msgs::srv::EvaluateExpression_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct EvaluateExpression
{
  using Request = labust_msgs::srv::EvaluateExpression_Request;
  using Response = labust_msgs::srv::EvaluateExpression_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__EVALUATE_EXPRESSION__STRUCT_HPP_
