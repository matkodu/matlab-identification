// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/NanomodemTDOA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_TDOA__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_TDOA__BUILDER_HPP_

#include "labust_msgs/msg/detail/nanomodem_tdoa__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_NanomodemTDOA_modem_times
{
public:
  explicit Init_NanomodemTDOA_modem_times(::labust_msgs::msg::NanomodemTDOA & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::NanomodemTDOA modem_times(::labust_msgs::msg::NanomodemTDOA::_modem_times_type arg)
  {
    msg_.modem_times = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemTDOA msg_;
};

class Init_NanomodemTDOA_fpga_time
{
public:
  explicit Init_NanomodemTDOA_fpga_time(::labust_msgs::msg::NanomodemTDOA & msg)
  : msg_(msg)
  {}
  Init_NanomodemTDOA_modem_times fpga_time(::labust_msgs::msg::NanomodemTDOA::_fpga_time_type arg)
  {
    msg_.fpga_time = std::move(arg);
    return Init_NanomodemTDOA_modem_times(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemTDOA msg_;
};

class Init_NanomodemTDOA_header
{
public:
  Init_NanomodemTDOA_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NanomodemTDOA_fpga_time header(::labust_msgs::msg::NanomodemTDOA::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NanomodemTDOA_fpga_time(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemTDOA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::NanomodemTDOA>()
{
  return labust_msgs::msg::builder::Init_NanomodemTDOA_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_TDOA__BUILDER_HPP_
