// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:action/TrackDiver.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__STRUCT_HPP_
#define LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'guidance_target'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__TrackDiver_Goal __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__TrackDiver_Goal __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrackDiver_Goal_
{
  using Type = TrackDiver_Goal_<ContainerAllocator>;

  explicit TrackDiver_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : guidance_target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0f;
      this->vertical_offset = 0.0f;
      this->guidance_enable = false;
      this->wrapping_enable = false;
      this->streamline_orientation = false;
      this->fov_guidance = false;
      this->guidance_topic = "";
      this->radius_topic = "";
    }
  }

  explicit TrackDiver_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : guidance_target(_alloc, _init),
    guidance_topic(_alloc),
    radius_topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0f;
      this->vertical_offset = 0.0f;
      this->guidance_enable = false;
      this->wrapping_enable = false;
      this->streamline_orientation = false;
      this->fov_guidance = false;
      this->guidance_topic = "";
      this->radius_topic = "";
    }
  }

  // field types and members
  using _radius_type =
    float;
  _radius_type radius;
  using _vertical_offset_type =
    float;
  _vertical_offset_type vertical_offset;
  using _guidance_target_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _guidance_target_type guidance_target;
  using _guidance_enable_type =
    bool;
  _guidance_enable_type guidance_enable;
  using _wrapping_enable_type =
    bool;
  _wrapping_enable_type wrapping_enable;
  using _streamline_orientation_type =
    bool;
  _streamline_orientation_type streamline_orientation;
  using _fov_guidance_type =
    bool;
  _fov_guidance_type fov_guidance;
  using _guidance_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _guidance_topic_type guidance_topic;
  using _radius_topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _radius_topic_type radius_topic;

  // setters for named parameter idiom
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__vertical_offset(
    const float & _arg)
  {
    this->vertical_offset = _arg;
    return *this;
  }
  Type & set__guidance_target(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->guidance_target = _arg;
    return *this;
  }
  Type & set__guidance_enable(
    const bool & _arg)
  {
    this->guidance_enable = _arg;
    return *this;
  }
  Type & set__wrapping_enable(
    const bool & _arg)
  {
    this->wrapping_enable = _arg;
    return *this;
  }
  Type & set__streamline_orientation(
    const bool & _arg)
  {
    this->streamline_orientation = _arg;
    return *this;
  }
  Type & set__fov_guidance(
    const bool & _arg)
  {
    this->fov_guidance = _arg;
    return *this;
  }
  Type & set__guidance_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->guidance_topic = _arg;
    return *this;
  }
  Type & set__radius_topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->radius_topic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::TrackDiver_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::TrackDiver_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__TrackDiver_Goal
    std::shared_ptr<labust_msgs::action::TrackDiver_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__TrackDiver_Goal
    std::shared_ptr<labust_msgs::action::TrackDiver_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackDiver_Goal_ & other) const
  {
    if (this->radius != other.radius) {
      return false;
    }
    if (this->vertical_offset != other.vertical_offset) {
      return false;
    }
    if (this->guidance_target != other.guidance_target) {
      return false;
    }
    if (this->guidance_enable != other.guidance_enable) {
      return false;
    }
    if (this->wrapping_enable != other.wrapping_enable) {
      return false;
    }
    if (this->streamline_orientation != other.streamline_orientation) {
      return false;
    }
    if (this->fov_guidance != other.fov_guidance) {
      return false;
    }
    if (this->guidance_topic != other.guidance_topic) {
      return false;
    }
    if (this->radius_topic != other.radius_topic) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackDiver_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackDiver_Goal_

// alias to use template instance with default allocator
using TrackDiver_Goal =
  labust_msgs::action::TrackDiver_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__TrackDiver_Result __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__TrackDiver_Result __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrackDiver_Result_
{
  using Type = TrackDiver_Result_<ContainerAllocator>;

  explicit TrackDiver_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit TrackDiver_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::TrackDiver_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::TrackDiver_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__TrackDiver_Result
    std::shared_ptr<labust_msgs::action::TrackDiver_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__TrackDiver_Result
    std::shared_ptr<labust_msgs::action::TrackDiver_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackDiver_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackDiver_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackDiver_Result_

// alias to use template instance with default allocator
using TrackDiver_Result =
  labust_msgs::action::TrackDiver_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'ned_tracking_error'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__TrackDiver_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__TrackDiver_Feedback __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrackDiver_Feedback_
{
  using Type = TrackDiver_Feedback_<ContainerAllocator>;

  explicit TrackDiver_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ned_tracking_error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mu_r = 0.0;
      this->gamma_r = 0.0;
      this->operational_radius = 0.0;
      this->delta_r = 0.0;
      this->zeta_r = 0.0;
    }
  }

  explicit TrackDiver_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ned_tracking_error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mu_r = 0.0;
      this->gamma_r = 0.0;
      this->operational_radius = 0.0;
      this->delta_r = 0.0;
      this->zeta_r = 0.0;
    }
  }

  // field types and members
  using _mu_r_type =
    double;
  _mu_r_type mu_r;
  using _gamma_r_type =
    double;
  _gamma_r_type gamma_r;
  using _operational_radius_type =
    double;
  _operational_radius_type operational_radius;
  using _delta_r_type =
    double;
  _delta_r_type delta_r;
  using _zeta_r_type =
    double;
  _zeta_r_type zeta_r;
  using _ned_tracking_error_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ned_tracking_error_type ned_tracking_error;

  // setters for named parameter idiom
  Type & set__mu_r(
    const double & _arg)
  {
    this->mu_r = _arg;
    return *this;
  }
  Type & set__gamma_r(
    const double & _arg)
  {
    this->gamma_r = _arg;
    return *this;
  }
  Type & set__operational_radius(
    const double & _arg)
  {
    this->operational_radius = _arg;
    return *this;
  }
  Type & set__delta_r(
    const double & _arg)
  {
    this->delta_r = _arg;
    return *this;
  }
  Type & set__zeta_r(
    const double & _arg)
  {
    this->zeta_r = _arg;
    return *this;
  }
  Type & set__ned_tracking_error(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ned_tracking_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__TrackDiver_Feedback
    std::shared_ptr<labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__TrackDiver_Feedback
    std::shared_ptr<labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackDiver_Feedback_ & other) const
  {
    if (this->mu_r != other.mu_r) {
      return false;
    }
    if (this->gamma_r != other.gamma_r) {
      return false;
    }
    if (this->operational_radius != other.operational_radius) {
      return false;
    }
    if (this->delta_r != other.delta_r) {
      return false;
    }
    if (this->zeta_r != other.zeta_r) {
      return false;
    }
    if (this->ned_tracking_error != other.ned_tracking_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackDiver_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackDiver_Feedback_

// alias to use template instance with default allocator
using TrackDiver_Feedback =
  labust_msgs::action::TrackDiver_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "labust_msgs/action/detail/track_diver__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__TrackDiver_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__TrackDiver_SendGoal_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrackDiver_SendGoal_Request_
{
  using Type = TrackDiver_SendGoal_Request_<ContainerAllocator>;

  explicit TrackDiver_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TrackDiver_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::TrackDiver_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const labust_msgs::action::TrackDiver_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__TrackDiver_SendGoal_Request
    std::shared_ptr<labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__TrackDiver_SendGoal_Request
    std::shared_ptr<labust_msgs::action::TrackDiver_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackDiver_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackDiver_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackDiver_SendGoal_Request_

// alias to use template instance with default allocator
using TrackDiver_SendGoal_Request =
  labust_msgs::action::TrackDiver_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__TrackDiver_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__TrackDiver_SendGoal_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrackDiver_SendGoal_Response_
{
  using Type = TrackDiver_SendGoal_Response_<ContainerAllocator>;

  explicit TrackDiver_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TrackDiver_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__TrackDiver_SendGoal_Response
    std::shared_ptr<labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__TrackDiver_SendGoal_Response
    std::shared_ptr<labust_msgs::action::TrackDiver_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackDiver_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackDiver_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackDiver_SendGoal_Response_

// alias to use template instance with default allocator
using TrackDiver_SendGoal_Response =
  labust_msgs::action::TrackDiver_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs

namespace labust_msgs
{

namespace action
{

struct TrackDiver_SendGoal
{
  using Request = labust_msgs::action::TrackDiver_SendGoal_Request;
  using Response = labust_msgs::action::TrackDiver_SendGoal_Response;
};

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__TrackDiver_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__TrackDiver_GetResult_Request __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrackDiver_GetResult_Request_
{
  using Type = TrackDiver_GetResult_Request_<ContainerAllocator>;

  explicit TrackDiver_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TrackDiver_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__TrackDiver_GetResult_Request
    std::shared_ptr<labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__TrackDiver_GetResult_Request
    std::shared_ptr<labust_msgs::action::TrackDiver_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackDiver_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackDiver_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackDiver_GetResult_Request_

// alias to use template instance with default allocator
using TrackDiver_GetResult_Request =
  labust_msgs::action::TrackDiver_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__TrackDiver_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__TrackDiver_GetResult_Response __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrackDiver_GetResult_Response_
{
  using Type = TrackDiver_GetResult_Response_<ContainerAllocator>;

  explicit TrackDiver_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TrackDiver_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::TrackDiver_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const labust_msgs::action::TrackDiver_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__TrackDiver_GetResult_Response
    std::shared_ptr<labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__TrackDiver_GetResult_Response
    std::shared_ptr<labust_msgs::action::TrackDiver_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackDiver_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackDiver_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackDiver_GetResult_Response_

// alias to use template instance with default allocator
using TrackDiver_GetResult_Response =
  labust_msgs::action::TrackDiver_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace labust_msgs

namespace labust_msgs
{

namespace action
{

struct TrackDiver_GetResult
{
  using Request = labust_msgs::action::TrackDiver_GetResult_Request;
  using Response = labust_msgs::action::TrackDiver_GetResult_Response;
};

}  // namespace action

}  // namespace labust_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/track_diver__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__labust_msgs__action__TrackDiver_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__action__TrackDiver_FeedbackMessage __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrackDiver_FeedbackMessage_
{
  using Type = TrackDiver_FeedbackMessage_<ContainerAllocator>;

  explicit TrackDiver_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TrackDiver_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const labust_msgs::action::TrackDiver_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__action__TrackDiver_FeedbackMessage
    std::shared_ptr<labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__action__TrackDiver_FeedbackMessage
    std::shared_ptr<labust_msgs::action::TrackDiver_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackDiver_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackDiver_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackDiver_FeedbackMessage_

// alias to use template instance with default allocator
using TrackDiver_FeedbackMessage =
  labust_msgs::action::TrackDiver_FeedbackMessage_<std::allocator<void>>;

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

struct TrackDiver
{
  /// The goal message defined in the action definition.
  using Goal = labust_msgs::action::TrackDiver_Goal;
  /// The result message defined in the action definition.
  using Result = labust_msgs::action::TrackDiver_Result;
  /// The feedback message defined in the action definition.
  using Feedback = labust_msgs::action::TrackDiver_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = labust_msgs::action::TrackDiver_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = labust_msgs::action::TrackDiver_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = labust_msgs::action::TrackDiver_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TrackDiver TrackDiver;

}  // namespace action

}  // namespace labust_msgs

#endif  // LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__STRUCT_HPP_
