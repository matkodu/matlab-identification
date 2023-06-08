// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/ModelParamsUpdate.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MODEL_PARAMS_UPDATE__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__MODEL_PARAMS_UPDATE__BUILDER_HPP_

#include "labust_msgs/msg/detail/model_params_update__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_ModelParamsUpdate_use_linear
{
public:
  explicit Init_ModelParamsUpdate_use_linear(::labust_msgs::msg::ModelParamsUpdate & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::ModelParamsUpdate use_linear(::labust_msgs::msg::ModelParamsUpdate::_use_linear_type arg)
  {
    msg_.use_linear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::ModelParamsUpdate msg_;
};

class Init_ModelParamsUpdate_wn
{
public:
  explicit Init_ModelParamsUpdate_wn(::labust_msgs::msg::ModelParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_ModelParamsUpdate_use_linear wn(::labust_msgs::msg::ModelParamsUpdate::_wn_type arg)
  {
    msg_.wn = std::move(arg);
    return Init_ModelParamsUpdate_use_linear(msg_);
  }

private:
  ::labust_msgs::msg::ModelParamsUpdate msg_;
};

class Init_ModelParamsUpdate_delta
{
public:
  explicit Init_ModelParamsUpdate_delta(::labust_msgs::msg::ModelParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_ModelParamsUpdate_wn delta(::labust_msgs::msg::ModelParamsUpdate::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return Init_ModelParamsUpdate_wn(msg_);
  }

private:
  ::labust_msgs::msg::ModelParamsUpdate msg_;
};

class Init_ModelParamsUpdate_betaa
{
public:
  explicit Init_ModelParamsUpdate_betaa(::labust_msgs::msg::ModelParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_ModelParamsUpdate_delta betaa(::labust_msgs::msg::ModelParamsUpdate::_betaa_type arg)
  {
    msg_.betaa = std::move(arg);
    return Init_ModelParamsUpdate_delta(msg_);
  }

private:
  ::labust_msgs::msg::ModelParamsUpdate msg_;
};

class Init_ModelParamsUpdate_beta
{
public:
  explicit Init_ModelParamsUpdate_beta(::labust_msgs::msg::ModelParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_ModelParamsUpdate_betaa beta(::labust_msgs::msg::ModelParamsUpdate::_beta_type arg)
  {
    msg_.beta = std::move(arg);
    return Init_ModelParamsUpdate_betaa(msg_);
  }

private:
  ::labust_msgs::msg::ModelParamsUpdate msg_;
};

class Init_ModelParamsUpdate_alpha
{
public:
  explicit Init_ModelParamsUpdate_alpha(::labust_msgs::msg::ModelParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_ModelParamsUpdate_beta alpha(::labust_msgs::msg::ModelParamsUpdate::_alpha_type arg)
  {
    msg_.alpha = std::move(arg);
    return Init_ModelParamsUpdate_beta(msg_);
  }

private:
  ::labust_msgs::msg::ModelParamsUpdate msg_;
};

class Init_ModelParamsUpdate_dof
{
public:
  Init_ModelParamsUpdate_dof()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModelParamsUpdate_alpha dof(::labust_msgs::msg::ModelParamsUpdate::_dof_type arg)
  {
    msg_.dof = std::move(arg);
    return Init_ModelParamsUpdate_alpha(msg_);
  }

private:
  ::labust_msgs::msg::ModelParamsUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::ModelParamsUpdate>()
{
  return labust_msgs::msg::builder::Init_ModelParamsUpdate_dof();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__MODEL_PARAMS_UPDATE__BUILDER_HPP_
