// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/NanomodemRange.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_RANGE__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_RANGE__BUILDER_HPP_

#include "labust_msgs/msg/detail/nanomodem_range__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_NanomodemRange_id
{
public:
  explicit Init_NanomodemRange_id(::labust_msgs::msg::NanomodemRange & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::NanomodemRange id(::labust_msgs::msg::NanomodemRange::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemRange msg_;
};

class Init_NanomodemRange_range_m
{
public:
  explicit Init_NanomodemRange_range_m(::labust_msgs::msg::NanomodemRange & msg)
  : msg_(msg)
  {}
  Init_NanomodemRange_id range_m(::labust_msgs::msg::NanomodemRange::_range_m_type arg)
  {
    msg_.range_m = std::move(arg);
    return Init_NanomodemRange_id(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemRange msg_;
};

class Init_NanomodemRange_range
{
public:
  explicit Init_NanomodemRange_range(::labust_msgs::msg::NanomodemRange & msg)
  : msg_(msg)
  {}
  Init_NanomodemRange_range_m range(::labust_msgs::msg::NanomodemRange::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_NanomodemRange_range_m(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemRange msg_;
};

class Init_NanomodemRange_header
{
public:
  Init_NanomodemRange_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NanomodemRange_range header(::labust_msgs::msg::NanomodemRange::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NanomodemRange_range(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::NanomodemRange>()
{
  return labust_msgs::msg::builder::Init_NanomodemRange_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_RANGE__BUILDER_HPP_
