// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/IdentModel.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__IDENT_MODEL__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__IDENT_MODEL__BUILDER_HPP_

#include "labust_msgs/msg/detail/ident_model__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_IdentModel_ss_mat_d
{
public:
  explicit Init_IdentModel_ss_mat_d(::labust_msgs::msg::IdentModel & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::IdentModel ss_mat_d(::labust_msgs::msg::IdentModel::_ss_mat_d_type arg)
  {
    msg_.ss_mat_d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::IdentModel msg_;
};

class Init_IdentModel_ss_mat_c
{
public:
  explicit Init_IdentModel_ss_mat_c(::labust_msgs::msg::IdentModel & msg)
  : msg_(msg)
  {}
  Init_IdentModel_ss_mat_d ss_mat_c(::labust_msgs::msg::IdentModel::_ss_mat_c_type arg)
  {
    msg_.ss_mat_c = std::move(arg);
    return Init_IdentModel_ss_mat_d(msg_);
  }

private:
  ::labust_msgs::msg::IdentModel msg_;
};

class Init_IdentModel_ss_mat_b
{
public:
  explicit Init_IdentModel_ss_mat_b(::labust_msgs::msg::IdentModel & msg)
  : msg_(msg)
  {}
  Init_IdentModel_ss_mat_c ss_mat_b(::labust_msgs::msg::IdentModel::_ss_mat_b_type arg)
  {
    msg_.ss_mat_b = std::move(arg);
    return Init_IdentModel_ss_mat_c(msg_);
  }

private:
  ::labust_msgs::msg::IdentModel msg_;
};

class Init_IdentModel_ss_mat_a
{
public:
  explicit Init_IdentModel_ss_mat_a(::labust_msgs::msg::IdentModel & msg)
  : msg_(msg)
  {}
  Init_IdentModel_ss_mat_b ss_mat_a(::labust_msgs::msg::IdentModel::_ss_mat_a_type arg)
  {
    msg_.ss_mat_a = std::move(arg);
    return Init_IdentModel_ss_mat_b(msg_);
  }

private:
  ::labust_msgs::msg::IdentModel msg_;
};

class Init_IdentModel_ss_dim_m
{
public:
  explicit Init_IdentModel_ss_dim_m(::labust_msgs::msg::IdentModel & msg)
  : msg_(msg)
  {}
  Init_IdentModel_ss_mat_a ss_dim_m(::labust_msgs::msg::IdentModel::_ss_dim_m_type arg)
  {
    msg_.ss_dim_m = std::move(arg);
    return Init_IdentModel_ss_mat_a(msg_);
  }

private:
  ::labust_msgs::msg::IdentModel msg_;
};

class Init_IdentModel_ss_dim_n
{
public:
  explicit Init_IdentModel_ss_dim_n(::labust_msgs::msg::IdentModel & msg)
  : msg_(msg)
  {}
  Init_IdentModel_ss_dim_m ss_dim_n(::labust_msgs::msg::IdentModel::_ss_dim_n_type arg)
  {
    msg_.ss_dim_n = std::move(arg);
    return Init_IdentModel_ss_dim_m(msg_);
  }

private:
  ::labust_msgs::msg::IdentModel msg_;
};

class Init_IdentModel_tf_den
{
public:
  explicit Init_IdentModel_tf_den(::labust_msgs::msg::IdentModel & msg)
  : msg_(msg)
  {}
  Init_IdentModel_ss_dim_n tf_den(::labust_msgs::msg::IdentModel::_tf_den_type arg)
  {
    msg_.tf_den = std::move(arg);
    return Init_IdentModel_ss_dim_n(msg_);
  }

private:
  ::labust_msgs::msg::IdentModel msg_;
};

class Init_IdentModel_tf_num
{
public:
  explicit Init_IdentModel_tf_num(::labust_msgs::msg::IdentModel & msg)
  : msg_(msg)
  {}
  Init_IdentModel_tf_den tf_num(::labust_msgs::msg::IdentModel::_tf_num_type arg)
  {
    msg_.tf_num = std::move(arg);
    return Init_IdentModel_tf_den(msg_);
  }

private:
  ::labust_msgs::msg::IdentModel msg_;
};

class Init_IdentModel_dof
{
public:
  explicit Init_IdentModel_dof(::labust_msgs::msg::IdentModel & msg)
  : msg_(msg)
  {}
  Init_IdentModel_tf_num dof(::labust_msgs::msg::IdentModel::_dof_type arg)
  {
    msg_.dof = std::move(arg);
    return Init_IdentModel_tf_num(msg_);
  }

private:
  ::labust_msgs::msg::IdentModel msg_;
};

class Init_IdentModel_model_type
{
public:
  Init_IdentModel_model_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IdentModel_dof model_type(::labust_msgs::msg::IdentModel::_model_type_type arg)
  {
    msg_.model_type = std::move(arg);
    return Init_IdentModel_dof(msg_);
  }

private:
  ::labust_msgs::msg::IdentModel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::IdentModel>()
{
  return labust_msgs::msg::builder::Init_IdentModel_model_type();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__IDENT_MODEL__BUILDER_HPP_
