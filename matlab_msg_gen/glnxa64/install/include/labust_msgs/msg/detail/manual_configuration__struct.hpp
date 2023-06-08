// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/ManualConfiguration.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MANUAL_CONFIGURATION__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__MANUAL_CONFIGURATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__ManualConfiguration __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__ManualConfiguration __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManualConfiguration_
{
  using Type = ManualConfiguration_<ContainerAllocator>;

  explicit ManualConfiguration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sampling_time = 0.0;
      this->use_ff = false;
      this->topic = "";
    }
  }

  explicit ManualConfiguration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sampling_time = 0.0;
      this->use_ff = false;
      this->topic = "";
    }
  }

  // field types and members
  using _axes_map_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _axes_map_type axes_map;
  using _scale_map_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _scale_map_type scale_map;
  using _integrated_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _integrated_type integrated;
  using _maximum_effort_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _maximum_effort_type maximum_effort;
  using _maximum_nu_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _maximum_nu_type maximum_nu;
  using _maximum_speed_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _maximum_speed_type maximum_speed;
  using _sampling_time_type =
    double;
  _sampling_time_type sampling_time;
  using _use_ff_type =
    bool;
  _use_ff_type use_ff;
  using _topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _topic_type topic;

  // setters for named parameter idiom
  Type & set__axes_map(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->axes_map = _arg;
    return *this;
  }
  Type & set__scale_map(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->scale_map = _arg;
    return *this;
  }
  Type & set__integrated(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->integrated = _arg;
    return *this;
  }
  Type & set__maximum_effort(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->maximum_effort = _arg;
    return *this;
  }
  Type & set__maximum_nu(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->maximum_nu = _arg;
    return *this;
  }
  Type & set__maximum_speed(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->maximum_speed = _arg;
    return *this;
  }
  Type & set__sampling_time(
    const double & _arg)
  {
    this->sampling_time = _arg;
    return *this;
  }
  Type & set__use_ff(
    const bool & _arg)
  {
    this->use_ff = _arg;
    return *this;
  }
  Type & set__topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->topic = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t DISABLED =
    -1;
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

  // pointer types
  using RawPtr =
    labust_msgs::msg::ManualConfiguration_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::ManualConfiguration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::ManualConfiguration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::ManualConfiguration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::ManualConfiguration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::ManualConfiguration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::ManualConfiguration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::ManualConfiguration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::ManualConfiguration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::ManualConfiguration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__ManualConfiguration
    std::shared_ptr<labust_msgs::msg::ManualConfiguration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__ManualConfiguration
    std::shared_ptr<labust_msgs::msg::ManualConfiguration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManualConfiguration_ & other) const
  {
    if (this->axes_map != other.axes_map) {
      return false;
    }
    if (this->scale_map != other.scale_map) {
      return false;
    }
    if (this->integrated != other.integrated) {
      return false;
    }
    if (this->maximum_effort != other.maximum_effort) {
      return false;
    }
    if (this->maximum_nu != other.maximum_nu) {
      return false;
    }
    if (this->maximum_speed != other.maximum_speed) {
      return false;
    }
    if (this->sampling_time != other.sampling_time) {
      return false;
    }
    if (this->use_ff != other.use_ff) {
      return false;
    }
    if (this->topic != other.topic) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManualConfiguration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManualConfiguration_

// alias to use template instance with default allocator
using ManualConfiguration =
  labust_msgs::msg::ManualConfiguration_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t ManualConfiguration_<ContainerAllocator>::DISABLED;
template<typename ContainerAllocator>
constexpr int32_t ManualConfiguration_<ContainerAllocator>::X;
template<typename ContainerAllocator>
constexpr int32_t ManualConfiguration_<ContainerAllocator>::Y;
template<typename ContainerAllocator>
constexpr int32_t ManualConfiguration_<ContainerAllocator>::Z;
template<typename ContainerAllocator>
constexpr int32_t ManualConfiguration_<ContainerAllocator>::K;
template<typename ContainerAllocator>
constexpr int32_t ManualConfiguration_<ContainerAllocator>::M;
template<typename ContainerAllocator>
constexpr int32_t ManualConfiguration_<ContainerAllocator>::N;

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__MANUAL_CONFIGURATION__STRUCT_HPP_
