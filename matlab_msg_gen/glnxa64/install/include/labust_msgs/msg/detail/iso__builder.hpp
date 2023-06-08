// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/ISO.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__ISO__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__ISO__BUILDER_HPP_

#include "labust_msgs/msg/detail/iso__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_ISO_sampling_rate
{
public:
  explicit Init_ISO_sampling_rate(::labust_msgs::msg::ISO & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::ISO sampling_rate(::labust_msgs::msg::ISO::_sampling_rate_type arg)
  {
    msg_.sampling_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::ISO msg_;
};

class Init_ISO_reference
{
public:
  explicit Init_ISO_reference(::labust_msgs::msg::ISO & msg)
  : msg_(msg)
  {}
  Init_ISO_sampling_rate reference(::labust_msgs::msg::ISO::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return Init_ISO_sampling_rate(msg_);
  }

private:
  ::labust_msgs::msg::ISO msg_;
};

class Init_ISO_hysteresis
{
public:
  explicit Init_ISO_hysteresis(::labust_msgs::msg::ISO & msg)
  : msg_(msg)
  {}
  Init_ISO_reference hysteresis(::labust_msgs::msg::ISO::_hysteresis_type arg)
  {
    msg_.hysteresis = std::move(arg);
    return Init_ISO_reference(msg_);
  }

private:
  ::labust_msgs::msg::ISO msg_;
};

class Init_ISO_command
{
public:
  explicit Init_ISO_command(::labust_msgs::msg::ISO & msg)
  : msg_(msg)
  {}
  Init_ISO_hysteresis command(::labust_msgs::msg::ISO::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_ISO_hysteresis(msg_);
  }

private:
  ::labust_msgs::msg::ISO msg_;
};

class Init_ISO_dof
{
public:
  Init_ISO_dof()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ISO_command dof(::labust_msgs::msg::ISO::_dof_type arg)
  {
    msg_.dof = std::move(arg);
    return Init_ISO_command(msg_);
  }

private:
  ::labust_msgs::msg::ISO msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::ISO>()
{
  return labust_msgs::msg::builder::Init_ISO_dof();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__ISO__BUILDER_HPP_
