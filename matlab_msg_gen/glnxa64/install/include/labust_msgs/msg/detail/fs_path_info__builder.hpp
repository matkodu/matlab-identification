// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/FSPathInfo.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__BUILDER_HPP_

#include "labust_msgs/msg/detail/fs_path_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_FSPathInfo_torsion
{
public:
  explicit Init_FSPathInfo_torsion(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::FSPathInfo torsion(::labust_msgs::msg::FSPathInfo::_torsion_type arg)
  {
    msg_.torsion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_curvature
{
public:
  explicit Init_FSPathInfo_curvature(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  Init_FSPathInfo_torsion curvature(::labust_msgs::msg::FSPathInfo::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return Init_FSPathInfo_torsion(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_orientation
{
public:
  explicit Init_FSPathInfo_orientation(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  Init_FSPathInfo_curvature orientation(::labust_msgs::msg::FSPathInfo::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_FSPathInfo_curvature(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_position
{
public:
  explicit Init_FSPathInfo_position(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  Init_FSPathInfo_orientation position(::labust_msgs::msg::FSPathInfo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_FSPathInfo_orientation(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_dr_p
{
public:
  explicit Init_FSPathInfo_dr_p(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  Init_FSPathInfo_position dr_p(::labust_msgs::msg::FSPathInfo::_dr_p_type arg)
  {
    msg_.dr_p = std::move(arg);
    return Init_FSPathInfo_position(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_pi_tilda
{
public:
  explicit Init_FSPathInfo_pi_tilda(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  Init_FSPathInfo_dr_p pi_tilda(::labust_msgs::msg::FSPathInfo::_pi_tilda_type arg)
  {
    msg_.pi_tilda = std::move(arg);
    return Init_FSPathInfo_dr_p(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_pi
{
public:
  explicit Init_FSPathInfo_pi(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  Init_FSPathInfo_pi_tilda pi(::labust_msgs::msg::FSPathInfo::_pi_type arg)
  {
    msg_.pi = std::move(arg);
    return Init_FSPathInfo_pi_tilda(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_dxi_r
{
public:
  explicit Init_FSPathInfo_dxi_r(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  Init_FSPathInfo_pi dxi_r(::labust_msgs::msg::FSPathInfo::_dxi_r_type arg)
  {
    msg_.dxi_r = std::move(arg);
    return Init_FSPathInfo_pi(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_xi_r
{
public:
  explicit Init_FSPathInfo_xi_r(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  Init_FSPathInfo_dxi_r xi_r(::labust_msgs::msg::FSPathInfo::_xi_r_type arg)
  {
    msg_.xi_r = std::move(arg);
    return Init_FSPathInfo_dxi_r(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_k
{
public:
  explicit Init_FSPathInfo_k(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  Init_FSPathInfo_xi_r k(::labust_msgs::msg::FSPathInfo::_k_type arg)
  {
    msg_.k = std::move(arg);
    return Init_FSPathInfo_xi_r(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_delta_r
{
public:
  explicit Init_FSPathInfo_delta_r(::labust_msgs::msg::FSPathInfo & msg)
  : msg_(msg)
  {}
  Init_FSPathInfo_k delta_r(::labust_msgs::msg::FSPathInfo::_delta_r_type arg)
  {
    msg_.delta_r = std::move(arg);
    return Init_FSPathInfo_k(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

class Init_FSPathInfo_header
{
public:
  Init_FSPathInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FSPathInfo_delta_r header(::labust_msgs::msg::FSPathInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FSPathInfo_delta_r(msg_);
  }

private:
  ::labust_msgs::msg::FSPathInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::FSPathInfo>()
{
  return labust_msgs::msg::builder::Init_FSPathInfo_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__FS_PATH_INFO__BUILDER_HPP_
