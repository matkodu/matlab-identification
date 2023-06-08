// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:action/IdentifyModel.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__IDENTIFY_MODEL__STRUCT_HPP_
#define LABUST_MSGS__ACTION__DETAIL__IDENTIFY_MODEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__IdentifyModel_Goal __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__IdentifyModel_Goal __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct IdentifyModel_Goal_
{
  using Type = IdentifyModel_Goal_<ContainerAllocator>;

  explicit IdentifyModel_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dof = 0l;
    }
  }

  explicit IdentifyModel_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dof = 0l;
    }
  }

  // field types and members
  using _dof_type =
    int32_t;
  _dof_type dof;

  // setters for named parameter idiom
  Type & set__dof(
    const int32_t & _arg)
  {
    this->dof = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t X =
    1;
  static constexpr int32_t Y =
    2;
  static constexpr int32_t Z =
    4;
  static constexpr int32_t K =
    8;
  static constexpr int32_t M =
    16;
  static constexpr int32_t N =
    32;
  static constexpr int32_t MODEL_TF =
    0;

  // pointer types
  using RawPtr =
    labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_Goal
    std::shared_ptr<labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_Goal
    std::shared_ptr<labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IdentifyModel_Goal_ & other) const
  {
    if (this->dof != other.dof) {
      return false;
    }
    return true;
  }
  bool operator!=(const IdentifyModel_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IdentifyModel_Goal_

// alias to use template instance with default allocator
using IdentifyModel_Goal =
  labust_msgs::action::IdentifyModel_Goal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t IdentifyModel_Goal_<ContainerAllocator>::X;
template<typename ContainerAllocator>
constexpr int32_t IdentifyModel_Goal_<ContainerAllocator>::Y;
template<typename ContainerAllocator>
constexpr int32_t IdentifyModel_Goal_<ContainerAllocator>::Z;
template<typename ContainerAllocator>
constexpr int32_t IdentifyModel_Goal_<ContainerAllocator>::K;
template<typename ContainerAllocator>
constexpr int32_t IdentifyModel_Goal_<ContainerAllocator>::M;
template<typename ContainerAllocator>
constexpr int32_t IdentifyModel_Goal_<ContainerAllocator>::N;
template<typename ContainerAllocator>
constexpr int32_t IdentifyModel_Goal_<ContainerAllocator>::MODEL_TF;

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'ident_models'
#include "labust_msgs/msg/detail/ident_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__IdentifyModel_Result __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__IdentifyModel_Result __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct IdentifyModel_Result_
{
  using Type = IdentifyModel_Result_<ContainerAllocator>;

  explicit IdentifyModel_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IdentifyModel_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ident_models_type =
    std::vector<labust_msgs::msg::IdentModel_<ContainerAllocator>, typename ContainerAllocator::template rebind<labust_msgs::msg::IdentModel_<ContainerAllocator>>::other>;
  _ident_models_type ident_models;

  // setters for named parameter idiom
  Type & set__ident_models(
    const std::vector<labust_msgs::msg::IdentModel_<ContainerAllocator>, typename ContainerAllocator::template rebind<labust_msgs::msg::IdentModel_<ContainerAllocator>>::other> & _arg)
  {
    this->ident_models = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::IdentifyModel_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::IdentifyModel_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_Result
    std::shared_ptr<labust_msgs::action::IdentifyModel_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_Result
    std::shared_ptr<labust_msgs::action::IdentifyModel_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IdentifyModel_Result_ & other) const
  {
    if (this->ident_models != other.ident_models) {
      return false;
    }
    return true;
  }
  bool operator!=(const IdentifyModel_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IdentifyModel_Result_

// alias to use template instance with default allocator
using IdentifyModel_Result =
  labust_msgs::action::IdentifyModel_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__IdentifyModel_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__IdentifyModel_Feedback __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct IdentifyModel_Feedback_
{
  using Type = IdentifyModel_Feedback_<ContainerAllocator>;

  explicit IdentifyModel_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dof = 0l;
      this->progress = 0.0f;
      this->error = 0.0f;
      this->additional_data = "";
    }
  }

  explicit IdentifyModel_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : additional_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dof = 0l;
      this->progress = 0.0f;
      this->error = 0.0f;
      this->additional_data = "";
    }
  }

  // field types and members
  using _dof_type =
    int32_t;
  _dof_type dof;
  using _progress_type =
    float;
  _progress_type progress;
  using _error_type =
    float;
  _error_type error;
  using _additional_data_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _additional_data_type additional_data;

  // setters for named parameter idiom
  Type & set__dof(
    const int32_t & _arg)
  {
    this->dof = _arg;
    return *this;
  }
  Type & set__progress(
    const float & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__error(
    const float & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__additional_data(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->additional_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_Feedback
    std::shared_ptr<labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_Feedback
    std::shared_ptr<labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IdentifyModel_Feedback_ & other) const
  {
    if (this->dof != other.dof) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->additional_data != other.additional_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const IdentifyModel_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IdentifyModel_Feedback_

// alias to use template instance with default allocator
using IdentifyModel_Feedback =
  labust_msgs::action::IdentifyModel_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "labust_msgs/action/detail/identify_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__IdentifyModel_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__IdentifyModel_SendGoal_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct IdentifyModel_SendGoal_Request_
{
  using Type = IdentifyModel_SendGoal_Request_<ContainerAllocator>;

  explicit IdentifyModel_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit IdentifyModel_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const labust_msgs::action::IdentifyModel_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_SendGoal_Request
    std::shared_ptr<labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_SendGoal_Request
    std::shared_ptr<labust_msgs::action::IdentifyModel_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IdentifyModel_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const IdentifyModel_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IdentifyModel_SendGoal_Request_

// alias to use template instance with default allocator
using IdentifyModel_SendGoal_Request =
  labust_msgs::action::IdentifyModel_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__IdentifyModel_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__IdentifyModel_SendGoal_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct IdentifyModel_SendGoal_Response_
{
  using Type = IdentifyModel_SendGoal_Response_<ContainerAllocator>;

  explicit IdentifyModel_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit IdentifyModel_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
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
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_SendGoal_Response
    std::shared_ptr<labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_SendGoal_Response
    std::shared_ptr<labust_msgs::action::IdentifyModel_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IdentifyModel_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const IdentifyModel_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IdentifyModel_SendGoal_Response_

// alias to use template instance with default allocator
using IdentifyModel_SendGoal_Response =
  labust_msgs::action::IdentifyModel_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs

namespace labust_msgs
{

namespace action
{

struct IdentifyModel_SendGoal
{
  using Request = labust_msgs::action::IdentifyModel_SendGoal_Request;
  using Response = labust_msgs::action::IdentifyModel_SendGoal_Response;
};

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__IdentifyModel_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__IdentifyModel_GetResult_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct IdentifyModel_GetResult_Request_
{
  using Type = IdentifyModel_GetResult_Request_<ContainerAllocator>;

  explicit IdentifyModel_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit IdentifyModel_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_GetResult_Request
    std::shared_ptr<labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_GetResult_Request
    std::shared_ptr<labust_msgs::action::IdentifyModel_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IdentifyModel_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const IdentifyModel_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IdentifyModel_GetResult_Request_

// alias to use template instance with default allocator
using IdentifyModel_GetResult_Request =
  labust_msgs::action::IdentifyModel_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__IdentifyModel_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__IdentifyModel_GetResult_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct IdentifyModel_GetResult_Response_
{
  using Type = IdentifyModel_GetResult_Response_<ContainerAllocator>;

  explicit IdentifyModel_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit IdentifyModel_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    labust_msgs::action::IdentifyModel_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const labust_msgs::action::IdentifyModel_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_GetResult_Response
    std::shared_ptr<labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_GetResult_Response
    std::shared_ptr<labust_msgs::action::IdentifyModel_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IdentifyModel_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const IdentifyModel_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IdentifyModel_GetResult_Response_

// alias to use template instance with default allocator
using IdentifyModel_GetResult_Response =
  labust_msgs::action::IdentifyModel_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs

namespace labust_msgs
{

namespace action
{

struct IdentifyModel_GetResult
{
  using Request = labust_msgs::action::IdentifyModel_GetResult_Request;
  using Response = labust_msgs::action::IdentifyModel_GetResult_Response;
};

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/identify_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__IdentifyModel_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__IdentifyModel_FeedbackMessage __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct IdentifyModel_FeedbackMessage_
{
  using Type = IdentifyModel_FeedbackMessage_<ContainerAllocator>;

  explicit IdentifyModel_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit IdentifyModel_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const labust_msgs::action::IdentifyModel_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_FeedbackMessage
    std::shared_ptr<labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__IdentifyModel_FeedbackMessage
    std::shared_ptr<labust_msgs::action::IdentifyModel_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IdentifyModel_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const IdentifyModel_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IdentifyModel_FeedbackMessage_

// alias to use template instance with default allocator
using IdentifyModel_FeedbackMessage =
  labust_msgs::action::IdentifyModel_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace labust_msgs
{

namespace action
{

struct IdentifyModel
{
  /// The goal message defined in the action definition.
  using Goal = labust_msgs::action::IdentifyModel_Goal;
  /// The result message defined in the action definition.
  using Result = labust_msgs::action::IdentifyModel_Result;
  /// The feedback message defined in the action definition.
  using Feedback = labust_msgs::action::IdentifyModel_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = labust_msgs::action::IdentifyModel_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = labust_msgs::action::IdentifyModel_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = labust_msgs::action::IdentifyModel_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct IdentifyModel IdentifyModel;

}  // namespace action

}  // namespace labust_msgs

#endif  // LABUST_MSGS__ACTION__DETAIL__IDENTIFY_MODEL__STRUCT_HPP_
