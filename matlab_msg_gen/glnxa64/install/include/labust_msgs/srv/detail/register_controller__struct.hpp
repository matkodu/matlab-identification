// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:srv/RegisterController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER__STRUCT_HPP_
#define LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RegisterController_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RegisterController_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterController_Request_
{
  using Type = RegisterController_Request_<ContainerAllocator>;

  explicit RegisterController_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->srv_name = "";
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->used_dofs.begin(), this->used_dofs.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->used_meas.begin(), this->used_meas.end(), 0l);
    }
  }

  explicit RegisterController_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    srv_name(_alloc),
    used_dofs(_alloc),
    used_meas(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->srv_name = "";
      std::fill<typename std::array<int32_t, 6>::iterator, int32_t>(this->used_dofs.begin(), this->used_dofs.end(), 0l);
      std::fill<typename std::array<int32_t, 12>::iterator, int32_t>(this->used_meas.begin(), this->used_meas.end(), 0l);
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _srv_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _srv_name_type srv_name;
  using _used_dofs_type =
    std::array<int32_t, 6>;
  _used_dofs_type used_dofs;
  using _used_cnt_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _used_cnt_type used_cnt;
  using _used_meas_type =
    std::array<int32_t, 12>;
  _used_meas_type used_meas;
  using _used_derived_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _used_derived_type used_derived;

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
  Type & set__used_dofs(
    const std::array<int32_t, 6> & _arg)
  {
    this->used_dofs = _arg;
    return *this;
  }
  Type & set__used_cnt(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->used_cnt = _arg;
    return *this;
  }
  Type & set__used_meas(
    const std::array<int32_t, 12> & _arg)
  {
    this->used_meas = _arg;
    return *this;
  }
  Type & set__used_derived(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->used_derived = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t SURGE =
    0;
  static constexpr int32_t SWAY =
    1;
  static constexpr int32_t HEAVE =
    2;
  static constexpr int32_t ROLL =
    3;
  static constexpr int32_t PITCH =
    4;
  static constexpr int32_t YAW =
    5;

  // pointer types
  using RawPtr =
    labust_msgs::srv::RegisterController_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RegisterController_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterController_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterController_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterController_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterController_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterController_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterController_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterController_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterController_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RegisterController_Request
    std::shared_ptr<labust_msgs::srv::RegisterController_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RegisterController_Request
    std::shared_ptr<labust_msgs::srv::RegisterController_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterController_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->srv_name != other.srv_name) {
      return false;
    }
    if (this->used_dofs != other.used_dofs) {
      return false;
    }
    if (this->used_cnt != other.used_cnt) {
      return false;
    }
    if (this->used_meas != other.used_meas) {
      return false;
    }
    if (this->used_derived != other.used_derived) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterController_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterController_Request_

// alias to use template instance with default allocator
using RegisterController_Request =
  labust_msgs::srv::RegisterController_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t RegisterController_Request_<ContainerAllocator>::SURGE;
template<typename ContainerAllocator>
constexpr int32_t RegisterController_Request_<ContainerAllocator>::SWAY;
template<typename ContainerAllocator>
constexpr int32_t RegisterController_Request_<ContainerAllocator>::HEAVE;
template<typename ContainerAllocator>
constexpr int32_t RegisterController_Request_<ContainerAllocator>::ROLL;
template<typename ContainerAllocator>
constexpr int32_t RegisterController_Request_<ContainerAllocator>::PITCH;
template<typename ContainerAllocator>
constexpr int32_t RegisterController_Request_<ContainerAllocator>::YAW;

}  // namespace srv

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__srv__RegisterController_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__srv__RegisterController_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RegisterController_Response_
{
  using Type = RegisterController_Response_<ContainerAllocator>;

  explicit RegisterController_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RegisterController_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _unmet_cnt_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _unmet_cnt_type unmet_cnt;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__unmet_cnt(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->unmet_cnt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::srv::RegisterController_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::srv::RegisterController_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterController_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::srv::RegisterController_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterController_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterController_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::srv::RegisterController_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::srv::RegisterController_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterController_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::srv::RegisterController_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__srv__RegisterController_Response
    std::shared_ptr<labust_msgs::srv::RegisterController_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__srv__RegisterController_Response
    std::shared_ptr<labust_msgs::srv::RegisterController_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterController_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->unmet_cnt != other.unmet_cnt) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterController_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterController_Response_

// alias to use template instance with default allocator
using RegisterController_Response =
  labust_msgs::srv::RegisterController_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace labust_msgs

namespace labust_msgs
{

namespace srv
{

struct RegisterController
{
  using Request = labust_msgs::srv::RegisterController_Request;
  using Response = labust_msgs::srv::RegisterController_Response;
};

}  // namespace srv

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__REGISTER_CONTROLLER__STRUCT_HPP_
