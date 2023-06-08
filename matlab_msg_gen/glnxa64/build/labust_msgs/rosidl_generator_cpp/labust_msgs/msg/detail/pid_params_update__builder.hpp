// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/PIDParamsUpdate.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__PID_PARAMS_UPDATE__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__PID_PARAMS_UPDATE__BUILDER_HPP_

#include "labust_msgs/msg/detail/pid_params_update__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_PIDParamsUpdate_dof
{
public:
  explicit Init_PIDParamsUpdate_dof(::labust_msgs::msg::PIDParamsUpdate & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::PIDParamsUpdate dof(::labust_msgs::msg::PIDParamsUpdate::_dof_type arg)
  {
    msg_.dof = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::PIDParamsUpdate msg_;
};

class Init_PIDParamsUpdate_ihigh
{
public:
  explicit Init_PIDParamsUpdate_ihigh(::labust_msgs::msg::PIDParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_PIDParamsUpdate_dof ihigh(::labust_msgs::msg::PIDParamsUpdate::_ihigh_type arg)
  {
    msg_.ihigh = std::move(arg);
    return Init_PIDParamsUpdate_dof(msg_);
  }

private:
  ::labust_msgs::msg::PIDParamsUpdate msg_;
};

class Init_PIDParamsUpdate_ilow
{
public:
  explicit Init_PIDParamsUpdate_ilow(::labust_msgs::msg::PIDParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_PIDParamsUpdate_ihigh ilow(::labust_msgs::msg::PIDParamsUpdate::_ilow_type arg)
  {
    msg_.ilow = std::move(arg);
    return Init_PIDParamsUpdate_ihigh(msg_);
  }

private:
  ::labust_msgs::msg::PIDParamsUpdate msg_;
};

class Init_PIDParamsUpdate_uhigh
{
public:
  explicit Init_PIDParamsUpdate_uhigh(::labust_msgs::msg::PIDParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_PIDParamsUpdate_ilow uhigh(::labust_msgs::msg::PIDParamsUpdate::_uhigh_type arg)
  {
    msg_.uhigh = std::move(arg);
    return Init_PIDParamsUpdate_ilow(msg_);
  }

private:
  ::labust_msgs::msg::PIDParamsUpdate msg_;
};

class Init_PIDParamsUpdate_ulow
{
public:
  explicit Init_PIDParamsUpdate_ulow(::labust_msgs::msg::PIDParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_PIDParamsUpdate_uhigh ulow(::labust_msgs::msg::PIDParamsUpdate::_ulow_type arg)
  {
    msg_.ulow = std::move(arg);
    return Init_PIDParamsUpdate_uhigh(msg_);
  }

private:
  ::labust_msgs::msg::PIDParamsUpdate msg_;
};

class Init_PIDParamsUpdate_b
{
public:
  explicit Init_PIDParamsUpdate_b(::labust_msgs::msg::PIDParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_PIDParamsUpdate_ulow b(::labust_msgs::msg::PIDParamsUpdate::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_PIDParamsUpdate_ulow(msg_);
  }

private:
  ::labust_msgs::msg::PIDParamsUpdate msg_;
};

class Init_PIDParamsUpdate_kd
{
public:
  explicit Init_PIDParamsUpdate_kd(::labust_msgs::msg::PIDParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_PIDParamsUpdate_b kd(::labust_msgs::msg::PIDParamsUpdate::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_PIDParamsUpdate_b(msg_);
  }

private:
  ::labust_msgs::msg::PIDParamsUpdate msg_;
};

class Init_PIDParamsUpdate_ki
{
public:
  explicit Init_PIDParamsUpdate_ki(::labust_msgs::msg::PIDParamsUpdate & msg)
  : msg_(msg)
  {}
  Init_PIDParamsUpdate_kd ki(::labust_msgs::msg::PIDParamsUpdate::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_PIDParamsUpdate_kd(msg_);
  }

private:
  ::labust_msgs::msg::PIDParamsUpdate msg_;
};

class Init_PIDParamsUpdate_kp
{
public:
  Init_PIDParamsUpdate_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PIDParamsUpdate_ki kp(::labust_msgs::msg::PIDParamsUpdate::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_PIDParamsUpdate_ki(msg_);
  }

private:
  ::labust_msgs::msg::PIDParamsUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::PIDParamsUpdate>()
{
  return labust_msgs::msg::builder::Init_PIDParamsUpdate_kp();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__PID_PARAMS_UPDATE__BUILDER_HPP_
