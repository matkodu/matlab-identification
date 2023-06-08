// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/NuReference.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NU_REFERENCE__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__NU_REFERENCE__BUILDER_HPP_

#include "labust_msgs/msg/detail/nu_reference__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_NuReference_reference
{
public:
  explicit Init_NuReference_reference(::labust_msgs::msg::NuReference & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::NuReference reference(::labust_msgs::msg::NuReference::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::NuReference msg_;
};

class Init_NuReference_identity_token
{
public:
  explicit Init_NuReference_identity_token(::labust_msgs::msg::NuReference & msg)
  : msg_(msg)
  {}
  Init_NuReference_reference identity_token(::labust_msgs::msg::NuReference::_identity_token_type arg)
  {
    msg_.identity_token = std::move(arg);
    return Init_NuReference_reference(msg_);
  }

private:
  ::labust_msgs::msg::NuReference msg_;
};

class Init_NuReference_header
{
public:
  Init_NuReference_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NuReference_identity_token header(::labust_msgs::msg::NuReference::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NuReference_identity_token(msg_);
  }

private:
  ::labust_msgs::msg::NuReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::NuReference>()
{
  return labust_msgs::msg::builder::Init_NuReference_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NU_REFERENCE__BUILDER_HPP_
