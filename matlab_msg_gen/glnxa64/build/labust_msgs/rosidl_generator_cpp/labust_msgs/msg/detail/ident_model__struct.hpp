// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from labust_msgs:msg/IdentModel.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__IDENT_MODEL__STRUCT_HPP_
#define LABUST_MSGS__MSG__DETAIL__IDENT_MODEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__labust_msgs__msg__IdentModel __attribute__((deprecated))
#else
# define DEPRECATED__labust_msgs__msg__IdentModel __declspec(deprecated)
#endif

namespace labust_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IdentModel_
{
  using Type = IdentModel_<ContainerAllocator>;

  explicit IdentModel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_type = 0l;
      this->dof = 0l;
      this->ss_dim_n = 0l;
      this->ss_dim_m = 0l;
    }
  }

  explicit IdentModel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_type = 0l;
      this->dof = 0l;
      this->ss_dim_n = 0l;
      this->ss_dim_m = 0l;
    }
  }

  // field types and members
  using _model_type_type =
    int32_t;
  _model_type_type model_type;
  using _dof_type =
    int32_t;
  _dof_type dof;
  using _tf_num_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _tf_num_type tf_num;
  using _tf_den_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _tf_den_type tf_den;
  using _ss_dim_n_type =
    int32_t;
  _ss_dim_n_type ss_dim_n;
  using _ss_dim_m_type =
    int32_t;
  _ss_dim_m_type ss_dim_m;
  using _ss_mat_a_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _ss_mat_a_type ss_mat_a;
  using _ss_mat_b_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _ss_mat_b_type ss_mat_b;
  using _ss_mat_c_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _ss_mat_c_type ss_mat_c;
  using _ss_mat_d_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _ss_mat_d_type ss_mat_d;

  // setters for named parameter idiom
  Type & set__model_type(
    const int32_t & _arg)
  {
    this->model_type = _arg;
    return *this;
  }
  Type & set__dof(
    const int32_t & _arg)
  {
    this->dof = _arg;
    return *this;
  }
  Type & set__tf_num(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->tf_num = _arg;
    return *this;
  }
  Type & set__tf_den(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->tf_den = _arg;
    return *this;
  }
  Type & set__ss_dim_n(
    const int32_t & _arg)
  {
    this->ss_dim_n = _arg;
    return *this;
  }
  Type & set__ss_dim_m(
    const int32_t & _arg)
  {
    this->ss_dim_m = _arg;
    return *this;
  }
  Type & set__ss_mat_a(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->ss_mat_a = _arg;
    return *this;
  }
  Type & set__ss_mat_b(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->ss_mat_b = _arg;
    return *this;
  }
  Type & set__ss_mat_c(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->ss_mat_c = _arg;
    return *this;
  }
  Type & set__ss_mat_d(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->ss_mat_d = _arg;
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
  static constexpr int32_t MODEL_SS =
    1;

  // pointer types
  using RawPtr =
    labust_msgs::msg::IdentModel_<ContainerAllocator> *;
  using ConstRawPtr =
    const labust_msgs::msg::IdentModel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<labust_msgs::msg::IdentModel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<labust_msgs::msg::IdentModel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::IdentModel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::IdentModel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      labust_msgs::msg::IdentModel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<labust_msgs::msg::IdentModel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<labust_msgs::msg::IdentModel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<labust_msgs::msg::IdentModel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__labust_msgs__msg__IdentModel
    std::shared_ptr<labust_msgs::msg::IdentModel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__labust_msgs__msg__IdentModel
    std::shared_ptr<labust_msgs::msg::IdentModel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IdentModel_ & other) const
  {
    if (this->model_type != other.model_type) {
      return false;
    }
    if (this->dof != other.dof) {
      return false;
    }
    if (this->tf_num != other.tf_num) {
      return false;
    }
    if (this->tf_den != other.tf_den) {
      return false;
    }
    if (this->ss_dim_n != other.ss_dim_n) {
      return false;
    }
    if (this->ss_dim_m != other.ss_dim_m) {
      return false;
    }
    if (this->ss_mat_a != other.ss_mat_a) {
      return false;
    }
    if (this->ss_mat_b != other.ss_mat_b) {
      return false;
    }
    if (this->ss_mat_c != other.ss_mat_c) {
      return false;
    }
    if (this->ss_mat_d != other.ss_mat_d) {
      return false;
    }
    return true;
  }
  bool operator!=(const IdentModel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IdentModel_

// alias to use template instance with default allocator
using IdentModel =
  labust_msgs::msg::IdentModel_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t IdentModel_<ContainerAllocator>::X;
template<typename ContainerAllocator>
constexpr int32_t IdentModel_<ContainerAllocator>::Y;
template<typename ContainerAllocator>
constexpr int32_t IdentModel_<ContainerAllocator>::Z;
template<typename ContainerAllocator>
constexpr int32_t IdentModel_<ContainerAllocator>::K;
template<typename ContainerAllocator>
constexpr int32_t IdentModel_<ContainerAllocator>::M;
template<typename ContainerAllocator>
constexpr int32_t IdentModel_<ContainerAllocator>::N;
template<typename ContainerAllocator>
constexpr int32_t IdentModel_<ContainerAllocator>::MODEL_TF;
template<typename ContainerAllocator>
constexpr int32_t IdentModel_<ContainerAllocator>::MODEL_SS;

}  // namespace msg

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__IDENT_MODEL__STRUCT_HPP_
