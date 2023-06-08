// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:action/CourseKeeping.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__COURSE_KEEPING__STRUCT_HPP_
#define LABUST_MSGS__ACTION__DETAIL__COURSE_KEEPING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__CourseKeeping_Goal __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__CourseKeeping_Goal __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CourseKeeping_Goal_
{
  using Type = CourseKeeping_Goal_<ContainerAllocator>;

  explicit CourseKeeping_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->subtype = 0;
      this->ref_type = 0;
      this->course = 0.0f;
      this->speed = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit CourseKeeping_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->subtype = 0;
      this->ref_type = 0;
      this->course = 0.0f;
      this->speed = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _subtype_type =
    uint8_t;
  _subtype_type subtype;
  using _ref_type_type =
    uint8_t;
  _ref_type_type ref_type;
  using _course_type =
    float;
  _course_type course;
  using _speed_type =
    float;
  _speed_type speed;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _topics_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _topics_type topics;

  // setters for named parameter idiom
  Type & set__subtype(
    const uint8_t & _arg)
  {
    this->subtype = _arg;
    return *this;
  }
  Type & set__ref_type(
    const uint8_t & _arg)
  {
    this->ref_type = _arg;
    return *this;
  }
  Type & set__course(
    const float & _arg)
  {
    this->course = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__topics(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->topics = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COURSE_KEEPING_UA =
    0u;
  static constexpr uint8_t COURSE_KEEPING_FA =
    1u;
  static constexpr uint8_t COURSE_KEEPING_FA_HDG =
    2u;
  static constexpr uint8_t CONSTANT =
    0u;
  static constexpr uint8_t HEADING_TOPIC =
    1u;
  static constexpr uint8_t SPEED_TOPIC =
    2u;
  static constexpr uint8_t ALL_TOPIC =
    3u;

  // pointer types
  using RawPtr =
    labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_Goal
    std::shared_ptr<labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_Goal
    std::shared_ptr<labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CourseKeeping_Goal_ & other) const
  {
    if (this->subtype != other.subtype) {
      return false;
    }
    if (this->ref_type != other.ref_type) {
      return false;
    }
    if (this->course != other.course) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->topics != other.topics) {
      return false;
    }
    return true;
  }
  bool operator!=(const CourseKeeping_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CourseKeeping_Goal_

// alias to use template instance with default allocator
using CourseKeeping_Goal =
  labust_msgs::action::CourseKeeping_Goal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CourseKeeping_Goal_<ContainerAllocator>::COURSE_KEEPING_UA;
template<typename ContainerAllocator>
constexpr uint8_t CourseKeeping_Goal_<ContainerAllocator>::COURSE_KEEPING_FA;
template<typename ContainerAllocator>
constexpr uint8_t CourseKeeping_Goal_<ContainerAllocator>::COURSE_KEEPING_FA_HDG;
template<typename ContainerAllocator>
constexpr uint8_t CourseKeeping_Goal_<ContainerAllocator>::CONSTANT;
template<typename ContainerAllocator>
constexpr uint8_t CourseKeeping_Goal_<ContainerAllocator>::HEADING_TOPIC;
template<typename ContainerAllocator>
constexpr uint8_t CourseKeeping_Goal_<ContainerAllocator>::SPEED_TOPIC;
template<typename ContainerAllocator>
constexpr uint8_t CourseKeeping_Goal_<ContainerAllocator>::ALL_TOPIC;

}  // namespace action

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__CourseKeeping_Result __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__CourseKeeping_Result __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CourseKeeping_Result_
{
  using Type = CourseKeeping_Result_<ContainerAllocator>;

  explicit CourseKeeping_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0l;
    }
  }

  explicit CourseKeeping_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0l;
    }
  }

  // field types and members
  using _success_type =
    int32_t;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const int32_t & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::CourseKeeping_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::CourseKeeping_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_Result
    std::shared_ptr<labust_msgs::action::CourseKeeping_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_Result
    std::shared_ptr<labust_msgs::action::CourseKeeping_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CourseKeeping_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const CourseKeeping_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CourseKeeping_Result_

// alias to use template instance with default allocator
using CourseKeeping_Result =
  labust_msgs::action::CourseKeeping_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__CourseKeeping_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__CourseKeeping_Feedback __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CourseKeeping_Feedback_
{
  using Type = CourseKeeping_Feedback_<ContainerAllocator>;

  explicit CourseKeeping_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = 0l;
    }
  }

  explicit CourseKeeping_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = 0l;
    }
  }

  // field types and members
  using _feedback_type =
    int32_t;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const int32_t & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_Feedback
    std::shared_ptr<labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_Feedback
    std::shared_ptr<labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CourseKeeping_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CourseKeeping_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CourseKeeping_Feedback_

// alias to use template instance with default allocator
using CourseKeeping_Feedback =
  labust_msgs::action::CourseKeeping_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "labust_msgs/action/detail/course_keeping__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__CourseKeeping_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__CourseKeeping_SendGoal_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CourseKeeping_SendGoal_Request_
{
  using Type = CourseKeeping_SendGoal_Request_<ContainerAllocator>;

  explicit CourseKeeping_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit CourseKeeping_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const labust_msgs::action::CourseKeeping_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_SendGoal_Request
    std::shared_ptr<labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_SendGoal_Request
    std::shared_ptr<labust_msgs::action::CourseKeeping_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CourseKeeping_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CourseKeeping_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CourseKeeping_SendGoal_Request_

// alias to use template instance with default allocator
using CourseKeeping_SendGoal_Request =
  labust_msgs::action::CourseKeeping_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__CourseKeeping_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__CourseKeeping_SendGoal_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CourseKeeping_SendGoal_Response_
{
  using Type = CourseKeeping_SendGoal_Response_<ContainerAllocator>;

  explicit CourseKeeping_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit CourseKeeping_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_SendGoal_Response
    std::shared_ptr<labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_SendGoal_Response
    std::shared_ptr<labust_msgs::action::CourseKeeping_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CourseKeeping_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CourseKeeping_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CourseKeeping_SendGoal_Response_

// alias to use template instance with default allocator
using CourseKeeping_SendGoal_Response =
  labust_msgs::action::CourseKeeping_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs

namespace labust_msgs
{

namespace action
{

struct CourseKeeping_SendGoal
{
  using Request = labust_msgs::action::CourseKeeping_SendGoal_Request;
  using Response = labust_msgs::action::CourseKeeping_SendGoal_Response;
};

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__CourseKeeping_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__CourseKeeping_GetResult_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CourseKeeping_GetResult_Request_
{
  using Type = CourseKeeping_GetResult_Request_<ContainerAllocator>;

  explicit CourseKeeping_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit CourseKeeping_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_GetResult_Request
    std::shared_ptr<labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_GetResult_Request
    std::shared_ptr<labust_msgs::action::CourseKeeping_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CourseKeeping_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CourseKeeping_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CourseKeeping_GetResult_Request_

// alias to use template instance with default allocator
using CourseKeeping_GetResult_Request =
  labust_msgs::action::CourseKeeping_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__CourseKeeping_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__CourseKeeping_GetResult_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CourseKeeping_GetResult_Response_
{
  using Type = CourseKeeping_GetResult_Response_<ContainerAllocator>;

  explicit CourseKeeping_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CourseKeeping_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::CourseKeeping_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const labust_msgs::action::CourseKeeping_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_GetResult_Response
    std::shared_ptr<labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_GetResult_Response
    std::shared_ptr<labust_msgs::action::CourseKeeping_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CourseKeeping_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CourseKeeping_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CourseKeeping_GetResult_Response_

// alias to use template instance with default allocator
using CourseKeeping_GetResult_Response =
  labust_msgs::action::CourseKeeping_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs

namespace labust_msgs
{

namespace action
{

struct CourseKeeping_GetResult
{
  using Request = labust_msgs::action::CourseKeeping_GetResult_Request;
  using Response = labust_msgs::action::CourseKeeping_GetResult_Response;
};

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/course_keeping__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__CourseKeeping_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__CourseKeeping_FeedbackMessage __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CourseKeeping_FeedbackMessage_
{
  using Type = CourseKeeping_FeedbackMessage_<ContainerAllocator>;

  explicit CourseKeeping_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit CourseKeeping_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const labust_msgs::action::CourseKeeping_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_FeedbackMessage
    std::shared_ptr<labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__CourseKeeping_FeedbackMessage
    std::shared_ptr<labust_msgs::action::CourseKeeping_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CourseKeeping_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CourseKeeping_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CourseKeeping_FeedbackMessage_

// alias to use template instance with default allocator
using CourseKeeping_FeedbackMessage =
  labust_msgs::action::CourseKeeping_FeedbackMessage_<std::allocator<void>>;

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

struct CourseKeeping
{
  /// The goal message defined in the action definition.
  using Goal = labust_msgs::action::CourseKeeping_Goal;
  /// The result message defined in the action definition.
  using Result = labust_msgs::action::CourseKeeping_Result;
  /// The feedback message defined in the action definition.
  using Feedback = labust_msgs::action::CourseKeeping_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = labust_msgs::action::CourseKeeping_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = labust_msgs::action::CourseKeeping_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = labust_msgs::action::CourseKeeping_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct CourseKeeping CourseKeeping;

}  // namespace action

}  // namespace labust_msgs

#endif  // LABUST_MSGS__ACTION__DETAIL__COURSE_KEEPING__STRUCT_HPP_
