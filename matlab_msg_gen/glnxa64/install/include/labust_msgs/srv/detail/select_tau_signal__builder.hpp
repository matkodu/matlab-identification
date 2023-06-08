// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/SelectTauSignal.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__SELECT_TAU_SIGNAL__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__SELECT_TAU_SIGNAL__BUILDER_HPP_

#include "labust_msgs/srv/detail/select_tau_signal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_SelectTauSignal_Request_desired_mode
{
public:
  explicit Init_SelectTauSignal_Request_desired_mode(::labust_msgs::srv::SelectTauSignal_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::SelectTauSignal_Request desired_mode(::labust_msgs::srv::SelectTauSignal_Request::_desired_mode_type arg)
  {
    msg_.desired_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::SelectTauSignal_Request msg_;
};

class Init_SelectTauSignal_Request_identity_token
{
public:
  Init_SelectTauSignal_Request_identity_token()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SelectTauSignal_Request_desired_mode identity_token(::labust_msgs::srv::SelectTauSignal_Request::_identity_token_type arg)
  {
    msg_.identity_token = std::move(arg);
    return Init_SelectTauSignal_Request_desired_mode(msg_);
  }

private:
  ::labust_msgs::srv::SelectTauSignal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::SelectTauSignal_Request>()
{
  return labust_msgs::srv::builder::Init_SelectTauSignal_Request_identity_token();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::SelectTauSignal_Response>()
{
  return ::labust_msgs::srv::SelectTauSignal_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__SELECT_TAU_SIGNAL__BUILDER_HPP_
