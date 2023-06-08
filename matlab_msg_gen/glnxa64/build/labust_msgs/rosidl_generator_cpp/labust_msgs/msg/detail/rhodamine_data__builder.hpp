// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/RhodamineData.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__RHODAMINE_DATA__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__RHODAMINE_DATA__BUILDER_HPP_

#include "labust_msgs/msg/detail/rhodamine_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_RhodamineData_adc
{
public:
  explicit Init_RhodamineData_adc(::labust_msgs::msg::RhodamineData & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::RhodamineData adc(::labust_msgs::msg::RhodamineData::_adc_type arg)
  {
    msg_.adc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::RhodamineData msg_;
};

class Init_RhodamineData_position
{
public:
  explicit Init_RhodamineData_position(::labust_msgs::msg::RhodamineData & msg)
  : msg_(msg)
  {}
  Init_RhodamineData_adc position(::labust_msgs::msg::RhodamineData::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RhodamineData_adc(msg_);
  }

private:
  ::labust_msgs::msg::RhodamineData msg_;
};

class Init_RhodamineData_header
{
public:
  Init_RhodamineData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RhodamineData_position header(::labust_msgs::msg::RhodamineData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RhodamineData_position(msg_);
  }

private:
  ::labust_msgs::msg::RhodamineData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::RhodamineData>()
{
  return labust_msgs::msg::builder::Init_RhodamineData_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__RHODAMINE_DATA__BUILDER_HPP_
