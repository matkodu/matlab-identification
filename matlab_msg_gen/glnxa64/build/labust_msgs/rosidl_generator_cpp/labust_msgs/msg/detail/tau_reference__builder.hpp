// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/TauReference.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__TAU_REFERENCE__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__TAU_REFERENCE__BUILDER_HPP_

#include "labust_msgs/msg/detail/tau_reference__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_TauReference_reference
{
public:
  explicit Init_TauReference_reference(::labust_msgs::msg::TauReference & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::TauReference reference(::labust_msgs::msg::TauReference::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::TauReference msg_;
};

class Init_TauReference_identity_token
{
public:
  explicit Init_TauReference_identity_token(::labust_msgs::msg::TauReference & msg)
  : msg_(msg)
  {}
  Init_TauReference_reference identity_token(::labust_msgs::msg::TauReference::_identity_token_type arg)
  {
    msg_.identity_token = std::move(arg);
    return Init_TauReference_reference(msg_);
  }

private:
  ::labust_msgs::msg::TauReference msg_;
};

class Init_TauReference_header
{
public:
  Init_TauReference_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TauReference_identity_token header(::labust_msgs::msg::TauReference::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TauReference_identity_token(msg_);
  }

private:
  ::labust_msgs::msg::TauReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::TauReference>()
{
  return labust_msgs::msg::builder::Init_TauReference_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__TAU_REFERENCE__BUILDER_HPP_
