// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/ModelParamsUpdate.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MODEL_PARAMS_UPDATE__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__MODEL_PARAMS_UPDATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__ModelParamsUpdate __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__ModelParamsUpdate __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModelParamsUpdate_
{
  using Type = ModelParamsUpdate_<ContainerAllocator>;

  explicit ModelParamsUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dof = 0l;
      this->alpha = 0.0f;
      this->beta = 0.0f;
      this->betaa = 0.0f;
      this->delta = 0.0f;
      this->wn = 0.0f;
      this->use_linear = false;
    }
  }

  explicit ModelParamsUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dof = 0l;
      this->alpha = 0.0f;
      this->beta = 0.0f;
      this->betaa = 0.0f;
      this->delta = 0.0f;
      this->wn = 0.0f;
      this->use_linear = false;
    }
  }

  // field types and members
  using _dof_type =
    int32_t;
  _dof_type dof;
  using _alpha_type =
    float;
  _alpha_type alpha;
  using _beta_type =
    float;
  _beta_type beta;
  using _betaa_type =
    float;
  _betaa_type betaa;
  using _delta_type =
    float;
  _delta_type delta;
  using _wn_type =
    float;
  _wn_type wn;
  using _use_linear_type =
    bool;
  _use_linear_type use_linear;

  // setters for named parameter idiom
  Type & set__dof(
    const int32_t & _arg)
  {
    this->dof = _arg;
    return *this;
  }
  Type & set__alpha(
    const float & _arg)
  {
    this->alpha = _arg;
    return *this;
  }
  Type & set__beta(
    const float & _arg)
  {
    this->beta = _arg;
    return *this;
  }
  Type & set__betaa(
    const float & _arg)
  {
    this->betaa = _arg;
    return *this;
  }
  Type & set__delta(
    const float & _arg)
  {
    this->delta = _arg;
    return *this;
  }
  Type & set__wn(
    const float & _arg)
  {
    this->wn = _arg;
    return *this;
  }
  Type & set__use_linear(
    const bool & _arg)
  {
    this->use_linear = _arg;
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
    labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__ModelParamsUpdate
    std::shared_ptr<labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__ModelParamsUpdate
    std::shared_ptr<labust_msgs::msg::ModelParamsUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModelParamsUpdate_ & other) const
  {
    if (this->dof != other.dof) {
      return false;
    }
    if (this->alpha != other.alpha) {
      return false;
    }
    if (this->beta != other.beta) {
      return false;
    }
    if (this->betaa != other.betaa) {
      return false;
    }
    if (this->delta != other.delta) {
      return false;
    }
    if (this->wn != other.wn) {
      return false;
    }
    if (this->use_linear != other.use_linear) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModelParamsUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModelParamsUpdate_

// alias to use template instance with default allocator
using ModelParamsUpdate =
  labust_msgs::msg::ModelParamsUpdate_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t ModelParamsUpdate_<ContainerAllocator>::SURGE;
template<typename ContainerAllocator>
constexpr int32_t ModelParamsUpdate_<ContainerAllocator>::SWAY;
template<typename ContainerAllocator>
constexpr int32_t ModelParamsUpdate_<ContainerAllocator>::HEAVE;
template<typename ContainerAllocator>
constexpr int32_t ModelParamsUpdate_<ContainerAllocator>::ROLL;
template<typename ContainerAllocator>
constexpr int32_t ModelParamsUpdate_<ContainerAllocator>::PITCH;
template<typename ContainerAllocator>
constexpr int32_t ModelParamsUpdate_<ContainerAllocator>::YAW;

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__MODEL_PARAMS_UPDATE__STRUCT_HPP_
