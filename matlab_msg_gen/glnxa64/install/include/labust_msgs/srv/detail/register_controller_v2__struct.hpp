// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/RegisterControllerV2.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V2__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V2__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RegisterControllerV2_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RegisterControllerV2_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterControllerV2_Request_
{
  using Type = RegisterControllerV2_Request_<ContainerAllocator>;

  explicit RegisterControllerV2_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->srv_name = "";
      std::fill<typename std::array<int8_t, 6>::iterator, int8_t>(this->used_tau.begin(), this->used_tau.end(), 0);
      std::fill<typename std::array<int8_t, 6>::iterator, int8_t>(this->used_nu.begin(), this->used_nu.end(), 0);
    }
  }

  explicit RegisterControllerV2_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    srv_name(_alloc),
    used_tau(_alloc),
    used_nu(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->srv_name = "";
      std::fill<typename std::array<int8_t, 6>::iterator, int8_t>(this->used_tau.begin(), this->used_tau.end(), 0);
      std::fill<typename std::array<int8_t, 6>::iterator, int8_t>(this->used_nu.begin(), this->used_nu.end(), 0);
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _srv_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _srv_name_type srv_name;
  using _used_tau_type =
    std::array<int8_t, 6>;
  _used_tau_type used_tau;
  using _used_nu_type =
    std::array<int8_t, 6>;
  _used_nu_type used_nu;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__srv_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->srv_name = _arg;
    return *this;
  }
  Type & set__used_tau(
    const std::array<int8_t, 6> & _arg)
  {
    this->used_tau = _arg;
    return *this;
  }
  Type & set__used_nu(
    const std::array<int8_t, 6> & _arg)
  {
    this->used_nu = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SURGE =
    0u;
  static constexpr uint8_t SWAY =
    1u;
  static constexpr uint8_t HEAVE =
    2u;
  static constexpr uint8_t ROLL =
    3u;
  static constexpr uint8_t PITCH =
    4u;
  static constexpr uint8_t YAW =
    5u;
  static constexpr uint8_t X =
    0u;
  static constexpr uint8_t Y =
    1u;
  static constexpr uint8_t Z =
    2u;
  static constexpr uint8_t K =
    3u;
  static constexpr uint8_t M =
    4u;
  static constexpr uint8_t N =
    5u;

  // pointer types
  using RawPtr =
    labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RegisterControllerV2_Request
    std::shared_ptr<labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RegisterControllerV2_Request
    std::shared_ptr<labust_msgs::srv::RegisterControllerV2_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterControllerV2_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->srv_name != other.srv_name) {
      return false;
    }
    if (this->used_tau != other.used_tau) {
      return false;
    }
    if (this->used_nu != other.used_nu) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterControllerV2_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterControllerV2_Request_

// alias to use template instance with default allocator
using RegisterControllerV2_Request =
  labust_msgs::srv::RegisterControllerV2_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::SURGE;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::SWAY;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::HEAVE;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::ROLL;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::PITCH;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::YAW;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::X;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::Y;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::Z;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::K;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::M;
template<typename ContainerAllocator>
constexpr uint8_t RegisterControllerV2_Request_<ContainerAllocator>::N;

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RegisterControllerV2_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RegisterControllerV2_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterControllerV2_Response_
{
  using Type = RegisterControllerV2_Response_<ContainerAllocator>;

  explicit RegisterControllerV2_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RegisterControllerV2_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RegisterControllerV2_Response
    std::shared_ptr<labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RegisterControllerV2_Response
    std::shared_ptr<labust_msgs::srv::RegisterControllerV2_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterControllerV2_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterControllerV2_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterControllerV2_Response_

// alias to use template instance with default allocator
using RegisterControllerV2_Response =
  labust_msgs::srv::RegisterControllerV2_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct RegisterControllerV2
{
  using Request = labust_msgs::srv::RegisterControllerV2_Request;
  using Response = labust_msgs::srv::RegisterControllerV2_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER_V2__STRUCT_HPP_
