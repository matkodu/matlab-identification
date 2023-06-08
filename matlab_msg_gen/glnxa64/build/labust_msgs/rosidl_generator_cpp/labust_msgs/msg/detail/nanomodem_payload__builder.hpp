// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/NanomodemPayload.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_PAYLOAD__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_PAYLOAD__BUILDER_HPP_

#include "labust_msgs/msg/detail/nanomodem_payload__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_NanomodemPayload_msg_type
{
public:
  explicit Init_NanomodemPayload_msg_type(::labust_msgs::msg::NanomodemPayload & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::NanomodemPayload msg_type(::labust_msgs::msg::NanomodemPayload::_msg_type_type arg)
  {
    msg_.msg_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemPayload msg_;
};

class Init_NanomodemPayload_sender_id
{
public:
  explicit Init_NanomodemPayload_sender_id(::labust_msgs::msg::NanomodemPayload & msg)
  : msg_(msg)
  {}
  Init_NanomodemPayload_msg_type sender_id(::labust_msgs::msg::NanomodemPayload::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_NanomodemPayload_msg_type(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemPayload msg_;
};

class Init_NanomodemPayload_msg
{
public:
  explicit Init_NanomodemPayload_msg(::labust_msgs::msg::NanomodemPayload & msg)
  : msg_(msg)
  {}
  Init_NanomodemPayload_sender_id msg(::labust_msgs::msg::NanomodemPayload::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_NanomodemPayload_sender_id(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemPayload msg_;
};

class Init_NanomodemPayload_header
{
public:
  Init_NanomodemPayload_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NanomodemPayload_msg header(::labust_msgs::msg::NanomodemPayload::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NanomodemPayload_msg(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemPayload msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::NanomodemPayload>()
{
  return labust_msgs::msg::builder::Init_NanomodemPayload_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_PAYLOAD__BUILDER_HPP_
