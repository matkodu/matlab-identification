// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/ManualSelect.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__MANUAL_SELECT__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__MANUAL_SELECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__ManualSelect_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__ManualSelect_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ManualSelect_Request_
{
  using Type = ManualSelect_Request_<ContainerAllocator>;

  explicit ManualSelect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->use_generator.begin(), this->use_generator.end(), 0l);
    }
  }

  explicit ManualSelect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : use_generator(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->use_generator.begin(), this->use_generator.end(), 0l);
    }
  }

  // field types and members
  using _use_generator_type =
    std::array<int32_t, 6>;
  _use_generator_type use_generator;

  // setters for named parameter idiom
  Type & set__use_generator(
    const std::array<int32_t, 6> & _arg)
  {
    this->use_generator = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t X =
    0;
  static constexpr int32_t Y =
    1;
  static constexpr int32_t Z =
    2;
  static constexpr int32_t K =
    3;
  static constexpr int32_t M =
    4;
  static constexpr int32_t N =
    5;
  static constexpr int32_t DISABLED =
    0;
  static constexpr int32_t EFFORT =
    1;
  static constexpr int32_t SPEED =
    2;
  static constexpr int32_t POSITION =
    3;

  // pointer types
  using RawPtr =
    labust_msgs::srv::ManualSelect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::ManualSelect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::ManualSelect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::ManualSelect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ManualSelect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ManualSelect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ManualSelect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ManualSelect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::ManualSelect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::ManualSelect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__ManualSelect_Request
    std::shared_ptr<labust_msgs::srv::ManualSelect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__ManualSelect_Request
    std::shared_ptr<labust_msgs::srv::ManualSelect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManualSelect_Request_ & other) const
  {
    if (this->use_generator != other.use_generator) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManualSelect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManualSelect_Request_

// alias to use template instance with default allocator
using ManualSelect_Request =
  labust_msgs::srv::ManualSelect_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t ManualSelect_Request_<ContainerAllocator>::X;
template<typename ContainerAllocator>
constexpr int32_t ManualSelect_Request_<ContainerAllocator>::Y;
template<typename ContainerAllocator>
constexpr int32_t ManualSelect_Request_<ContainerAllocator>::Z;
template<typename ContainerAllocator>
constexpr int32_t ManualSelect_Request_<ContainerAllocator>::K;
template<typename ContainerAllocator>
constexpr int32_t ManualSelect_Request_<ContainerAllocator>::M;
template<typename ContainerAllocator>
constexpr int32_t ManualSelect_Request_<ContainerAllocator>::N;
template<typename ContainerAllocator>
constexpr int32_t ManualSelect_Request_<ContainerAllocator>::DISABLED;
template<typename ContainerAllocator>
constexpr int32_t ManualSelect_Request_<ContainerAllocator>::EFFORT;
template<typename ContainerAllocator>
constexpr int32_t ManualSelect_Request_<ContainerAllocator>::SPEED;
template<typename ContainerAllocator>
constexpr int32_t ManualSelect_Request_<ContainerAllocator>::POSITION;

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__ManualSelect_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__ManualSelect_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ManualSelect_Response_
{
  using Type = ManualSelect_Response_<ContainerAllocator>;

  explicit ManualSelect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ManualSelect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::ManualSelect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::ManualSelect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::ManualSelect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::ManualSelect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ManualSelect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ManualSelect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::ManualSelect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::ManualSelect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::ManualSelect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::ManualSelect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__ManualSelect_Response
    std::shared_ptr<labust_msgs::srv::ManualSelect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__ManualSelect_Response
    std::shared_ptr<labust_msgs::srv::ManualSelect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManualSelect_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManualSelect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManualSelect_Response_

// alias to use template instance with default allocator
using ManualSelect_Response =
  labust_msgs::srv::ManualSelect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct ManualSelect
{
  using Request = labust_msgs::srv::ManualSelect_Request;
  using Response = labust_msgs::srv::ManualSelect_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__MANUAL_SELECT__STRUCT_HPP_
