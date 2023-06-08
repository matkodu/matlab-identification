// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:action/GoToPoint.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__GO_TO_POINT__STRUCT_HPP_
#define LABUST_MSGS__ACTION__DETAIL__GO_TO_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 't1'
// Member 't2'
#include "geometry_msgs/msg/detail/point_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__GoToPoint_Goal __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__GoToPoint_Goal __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_Goal_
{
  using Type = GoToPoint_Goal_<ContainerAllocator>;

  explicit GoToPoint_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t1(_init),
    t2(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->subtype = 0;
      this->ref_type = 0;
      this->heading = 0.0f;
      this->speed = 0.0f;
      this->victory_radius = 0.0f;
      this->heading_topic = "";
      this->speed_topic = "";
      std::fill<typename std::array<bool, 6>::iterator, bool>(this->axis_enable.begin(), this->axis_enable.end(), false);
      this->altitude = false;
    }
  }

  explicit GoToPoint_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : t1(_alloc, _init),
    t2(_alloc, _init),
    heading_topic(_alloc),
    speed_topic(_alloc),
    axis_enable(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->subtype = 0;
      this->ref_type = 0;
      this->heading = 0.0f;
      this->speed = 0.0f;
      this->victory_radius = 0.0f;
      this->heading_topic = "";
      this->speed_topic = "";
      std::fill<typename std::array<bool, 6>::iterator, bool>(this->axis_enable.begin(), this->axis_enable.end(), false);
      this->altitude = false;
    }
  }

  // field types and members
  using _subtype_type =
    uint8_t;
  _subtype_type subtype;
  using _ref_type_type =
    uint8_t;
  _ref_type_type ref_type;
  using _t1_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _t1_type t1;
  using _t2_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _t2_type t2;
  using _heading_type =
    float;
  _heading_type heading;
  using _speed_type =
    float;
  _speed_type speed;
  using _victory_radius_type =
    float;
  _victory_radius_type victory_radius;
  using _heading_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _heading_topic_type heading_topic;
  using _speed_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _speed_topic_type speed_topic;
  using _axis_enable_type =
    std::array<bool, 6>;
  _axis_enable_type axis_enable;
  using _altitude_type =
    bool;
  _altitude_type altitude;

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
  Type & set__t1(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->t1 = _arg;
    return *this;
  }
  Type & set__t2(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->t2 = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__victory_radius(
    const float & _arg)
  {
    this->victory_radius = _arg;
    return *this;
  }
  Type & set__heading_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->heading_topic = _arg;
    return *this;
  }
  Type & set__speed_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->speed_topic = _arg;
    return *this;
  }
  Type & set__axis_enable(
    const std::array<bool, 6> & _arg)
  {
    this->axis_enable = _arg;
    return *this;
  }
  Type & set__altitude(
    const bool & _arg)
  {
    this->altitude = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t GO2POINT_UA =
    0u;
  static constexpr uint8_t GO2POINT_FA =
    1u;
  static constexpr uint8_t GO2POINT_FA_HDG =
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
    labust_msgs::action::GoToPoint_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::GoToPoint_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__GoToPoint_Goal
    std::shared_ptr<labust_msgs::action::GoToPoint_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__GoToPoint_Goal
    std::shared_ptr<labust_msgs::action::GoToPoint_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_Goal_ & other) const
  {
    if (this->subtype != other.subtype) {
      return false;
    }
    if (this->ref_type != other.ref_type) {
      return false;
    }
    if (this->t1 != other.t1) {
      return false;
    }
    if (this->t2 != other.t2) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->victory_radius != other.victory_radius) {
      return false;
    }
    if (this->heading_topic != other.heading_topic) {
      return false;
    }
    if (this->speed_topic != other.speed_topic) {
      return false;
    }
    if (this->axis_enable != other.axis_enable) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_Goal_

// alias to use template instance with default allocator
using GoToPoint_Goal =
  labust_msgs::action::GoToPoint_Goal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t GoToPoint_Goal_<ContainerAllocator>::GO2POINT_UA;
template<typename ContainerAllocator>
constexpr uint8_t GoToPoint_Goal_<ContainerAllocator>::GO2POINT_FA;
template<typename ContainerAllocator>
constexpr uint8_t GoToPoint_Goal_<ContainerAllocator>::GO2POINT_FA_HDG;
template<typename ContainerAllocator>
constexpr uint8_t GoToPoint_Goal_<ContainerAllocator>::CONSTANT;
template<typename ContainerAllocator>
constexpr uint8_t GoToPoint_Goal_<ContainerAllocator>::HEADING_TOPIC;
template<typename ContainerAllocator>
constexpr uint8_t GoToPoint_Goal_<ContainerAllocator>::SPEED_TOPIC;
template<typename ContainerAllocator>
constexpr uint8_t GoToPoint_Goal_<ContainerAllocator>::ALL_TOPIC;

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'position'
// already included above
// #include "geometry_msgs/msg/detail/point_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__GoToPoint_Result __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__GoToPoint_Result __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_Result_
{
  using Type = GoToPoint_Result_<ContainerAllocator>;

  explicit GoToPoint_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->bearing = 0.0f;
    }
  }

  explicit GoToPoint_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->bearing = 0.0f;
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _position_type position;
  using _distance_type =
    float;
  _distance_type distance;
  using _bearing_type =
    float;
  _bearing_type bearing;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__bearing(
    const float & _arg)
  {
    this->bearing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::GoToPoint_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::GoToPoint_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__GoToPoint_Result
    std::shared_ptr<labust_msgs::action::GoToPoint_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__GoToPoint_Result
    std::shared_ptr<labust_msgs::action::GoToPoint_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_Result_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_Result_

// alias to use template instance with default allocator
using GoToPoint_Result =
  labust_msgs::action::GoToPoint_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__GoToPoint_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__GoToPoint_Feedback __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_Feedback_
{
  using Type = GoToPoint_Feedback_<ContainerAllocator>;

  explicit GoToPoint_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->bearing = 0.0f;
    }
  }

  explicit GoToPoint_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->bearing = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;
  using _bearing_type =
    float;
  _bearing_type bearing;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__bearing(
    const float & _arg)
  {
    this->bearing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__GoToPoint_Feedback
    std::shared_ptr<labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__GoToPoint_Feedback
    std::shared_ptr<labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_Feedback_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_Feedback_

// alias to use template instance with default allocator
using GoToPoint_Feedback =
  labust_msgs::action::GoToPoint_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "labust_msgs/action/detail/go_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__GoToPoint_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__GoToPoint_SendGoal_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_SendGoal_Request_
{
  using Type = GoToPoint_SendGoal_Request_<ContainerAllocator>;

  explicit GoToPoint_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GoToPoint_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::GoToPoint_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const labust_msgs::action::GoToPoint_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__GoToPoint_SendGoal_Request
    std::shared_ptr<labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__GoToPoint_SendGoal_Request
    std::shared_ptr<labust_msgs::action::GoToPoint_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_SendGoal_Request_

// alias to use template instance with default allocator
using GoToPoint_SendGoal_Request =
  labust_msgs::action::GoToPoint_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__GoToPoint_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__GoToPoint_SendGoal_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_SendGoal_Response_
{
  using Type = GoToPoint_SendGoal_Response_<ContainerAllocator>;

  explicit GoToPoint_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GoToPoint_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__GoToPoint_SendGoal_Response
    std::shared_ptr<labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__GoToPoint_SendGoal_Response
    std::shared_ptr<labust_msgs::action::GoToPoint_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_SendGoal_Response_

// alias to use template instance with default allocator
using GoToPoint_SendGoal_Response =
  labust_msgs::action::GoToPoint_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs

namespace labust_msgs
{

namespace action
{

struct GoToPoint_SendGoal
{
  using Request = labust_msgs::action::GoToPoint_SendGoal_Request;
  using Response = labust_msgs::action::GoToPoint_SendGoal_Response;
};

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__GoToPoint_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__GoToPoint_GetResult_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_GetResult_Request_
{
  using Type = GoToPoint_GetResult_Request_<ContainerAllocator>;

  explicit GoToPoint_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GoToPoint_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__GoToPoint_GetResult_Request
    std::shared_ptr<labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__GoToPoint_GetResult_Request
    std::shared_ptr<labust_msgs::action::GoToPoint_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_GetResult_Request_

// alias to use template instance with default allocator
using GoToPoint_GetResult_Request =
  labust_msgs::action::GoToPoint_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__GoToPoint_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__GoToPoint_GetResult_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_GetResult_Response_
{
  using Type = GoToPoint_GetResult_Response_<ContainerAllocator>;

  explicit GoToPoint_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GoToPoint_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::GoToPoint_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const labust_msgs::action::GoToPoint_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__GoToPoint_GetResult_Response
    std::shared_ptr<labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__GoToPoint_GetResult_Response
    std::shared_ptr<labust_msgs::action::GoToPoint_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_GetResult_Response_

// alias to use template instance with default allocator
using GoToPoint_GetResult_Response =
  labust_msgs::action::GoToPoint_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs

namespace labust_msgs
{

namespace action
{

struct GoToPoint_GetResult
{
  using Request = labust_msgs::action::GoToPoint_GetResult_Request;
  using Response = labust_msgs::action::GoToPoint_GetResult_Response;
};

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/go_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__GoToPoint_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__GoToPoint_FeedbackMessage __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_FeedbackMessage_
{
  using Type = GoToPoint_FeedbackMessage_<ContainerAllocator>;

  explicit GoToPoint_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GoToPoint_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const labust_msgs::action::GoToPoint_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__GoToPoint_FeedbackMessage
    std::shared_ptr<labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__GoToPoint_FeedbackMessage
    std::shared_ptr<labust_msgs::action::GoToPoint_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_FeedbackMessage_

// alias to use template instance with default allocator
using GoToPoint_FeedbackMessage =
  labust_msgs::action::GoToPoint_FeedbackMessage_<std::allocator<void>>;

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

struct GoToPoint
{
  /// The goal message defined in the action definition.
  using Goal = labust_msgs::action::GoToPoint_Goal;
  /// The result message defined in the action definition.
  using Result = labust_msgs::action::GoToPoint_Result;
  /// The feedback message defined in the action definition.
  using Feedback = labust_msgs::action::GoToPoint_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = labust_msgs::action::GoToPoint_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = labust_msgs::action::GoToPoint_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = labust_msgs::action::GoToPoint_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GoToPoint GoToPoint;

}  // namespace action

}  // namespace labust_msgs

#endif  // LABUST_MSGS__ACTION__DETAIL__GO_TO_POINT__STRUCT_HPP_
