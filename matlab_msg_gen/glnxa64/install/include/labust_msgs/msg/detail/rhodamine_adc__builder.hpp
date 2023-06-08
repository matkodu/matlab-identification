// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/RhodamineAdc.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RHODAMINE_ADC__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__RHODAMINE_ADC__BUILDER_HPP_

#include "labust_msgs/msg/detail/rhodamine_adc__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_RhodamineAdc_gain
{
public:
  explicit Init_RhodamineAdc_gain(::labust_msgs::msg::RhodamineAdc & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::RhodamineAdc gain(::labust_msgs::msg::RhodamineAdc::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::RhodamineAdc msg_;
};

class Init_RhodamineAdc_adc
{
public:
  Init_RhodamineAdc_adc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RhodamineAdc_gain adc(::labust_msgs::msg::RhodamineAdc::_adc_type arg)
  {
    msg_.adc = std::move(arg);
    return Init_RhodamineAdc_gain(msg_);
  }

private:
  ::labust_msgs::msg::RhodamineAdc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::RhodamineAdc>()
{
  return labust_msgs::msg::builder::Init_RhodamineAdc_adc();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__RHODAMINE_ADC__BUILDER_HPP_
