// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/StartParser.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__START_PARSER__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__START_PARSER__BUILDER_HPP_

#include "labust_msgs/msg/detail/start_parser__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_StartParser_start_position
{
public:
  explicit Init_StartParser_start_position(::labust_msgs::msg::StartParser & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::StartParser start_position(::labust_msgs::msg::StartParser::_start_position_type arg)
  {
    msg_.start_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::StartParser msg_;
};

class Init_StartParser_relative
{
public:
  explicit Init_StartParser_relative(::labust_msgs::msg::StartParser & msg)
  : msg_(msg)
  {}
  Init_StartParser_start_position relative(::labust_msgs::msg::StartParser::_relative_type arg)
  {
    msg_.relative = std::move(arg);
    return Init_StartParser_start_position(msg_);
  }

private:
  ::labust_msgs::msg::StartParser msg_;
};

class Init_StartParser_mission_data
{
public:
  explicit Init_StartParser_mission_data(::labust_msgs::msg::StartParser & msg)
  : msg_(msg)
  {}
  Init_StartParser_relative mission_data(::labust_msgs::msg::StartParser::_mission_data_type arg)
  {
    msg_.mission_data = std::move(arg);
    return Init_StartParser_relative(msg_);
  }

private:
  ::labust_msgs::msg::StartParser msg_;
};

class Init_StartParser_method
{
public:
  Init_StartParser_method()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartParser_mission_data method(::labust_msgs::msg::StartParser::_method_type arg)
  {
    msg_.method = std::move(arg);
    return Init_StartParser_mission_data(msg_);
  }

private:
  ::labust_msgs::msg::StartParser msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::StartParser>()
{
  return labust_msgs::msg::builder::Init_StartParser_method();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__START_PARSER__BUILDER_HPP_
