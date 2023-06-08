// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/StartNeptusParser.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__BUILDER_HPP_

#include "labust_msgs/msg/detail/start_neptus_parser__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_StartNeptusParser_victory_radius
{
public:
  explicit Init_StartNeptusParser_victory_radius(::labust_msgs::msg::StartNeptusParser & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::StartNeptusParser victory_radius(::labust_msgs::msg::StartNeptusParser::_victory_radius_type arg)
  {
    msg_.victory_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::StartNeptusParser msg_;
};

class Init_StartNeptusParser_heading
{
public:
  explicit Init_StartNeptusParser_heading(::labust_msgs::msg::StartNeptusParser & msg)
  : msg_(msg)
  {}
  Init_StartNeptusParser_victory_radius heading(::labust_msgs::msg::StartNeptusParser::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_StartNeptusParser_victory_radius(msg_);
  }

private:
  ::labust_msgs::msg::StartNeptusParser msg_;
};

class Init_StartNeptusParser_speed
{
public:
  explicit Init_StartNeptusParser_speed(::labust_msgs::msg::StartNeptusParser & msg)
  : msg_(msg)
  {}
  Init_StartNeptusParser_heading speed(::labust_msgs::msg::StartNeptusParser::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_StartNeptusParser_heading(msg_);
  }

private:
  ::labust_msgs::msg::StartNeptusParser msg_;
};

class Init_StartNeptusParser_underactuated
{
public:
  explicit Init_StartNeptusParser_underactuated(::labust_msgs::msg::StartNeptusParser & msg)
  : msg_(msg)
  {}
  Init_StartNeptusParser_speed underactuated(::labust_msgs::msg::StartNeptusParser::_underactuated_type arg)
  {
    msg_.underactuated = std::move(arg);
    return Init_StartNeptusParser_speed(msg_);
  }

private:
  ::labust_msgs::msg::StartNeptusParser msg_;
};

class Init_StartNeptusParser_custom_start
{
public:
  explicit Init_StartNeptusParser_custom_start(::labust_msgs::msg::StartNeptusParser & msg)
  : msg_(msg)
  {}
  Init_StartNeptusParser_underactuated custom_start(::labust_msgs::msg::StartNeptusParser::_custom_start_type arg)
  {
    msg_.custom_start = std::move(arg);
    return Init_StartNeptusParser_underactuated(msg_);
  }

private:
  ::labust_msgs::msg::StartNeptusParser msg_;
};

class Init_StartNeptusParser_origin
{
public:
  explicit Init_StartNeptusParser_origin(::labust_msgs::msg::StartNeptusParser & msg)
  : msg_(msg)
  {}
  Init_StartNeptusParser_custom_start origin(::labust_msgs::msg::StartNeptusParser::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_StartNeptusParser_custom_start(msg_);
  }

private:
  ::labust_msgs::msg::StartNeptusParser msg_;
};

class Init_StartNeptusParser_custom_start_flag
{
public:
  explicit Init_StartNeptusParser_custom_start_flag(::labust_msgs::msg::StartNeptusParser & msg)
  : msg_(msg)
  {}
  Init_StartNeptusParser_origin custom_start_flag(::labust_msgs::msg::StartNeptusParser::_custom_start_flag_type arg)
  {
    msg_.custom_start_flag = std::move(arg);
    return Init_StartNeptusParser_origin(msg_);
  }

private:
  ::labust_msgs::msg::StartNeptusParser msg_;
};

class Init_StartNeptusParser_relative
{
public:
  explicit Init_StartNeptusParser_relative(::labust_msgs::msg::StartNeptusParser & msg)
  : msg_(msg)
  {}
  Init_StartNeptusParser_custom_start_flag relative(::labust_msgs::msg::StartNeptusParser::_relative_type arg)
  {
    msg_.relative = std::move(arg);
    return Init_StartNeptusParser_custom_start_flag(msg_);
  }

private:
  ::labust_msgs::msg::StartNeptusParser msg_;
};

class Init_StartNeptusParser_file_name
{
public:
  Init_StartNeptusParser_file_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartNeptusParser_relative file_name(::labust_msgs::msg::StartNeptusParser::_file_name_type arg)
  {
    msg_.file_name = std::move(arg);
    return Init_StartNeptusParser_relative(msg_);
  }

private:
  ::labust_msgs::msg::StartNeptusParser msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::StartNeptusParser>()
{
  return labust_msgs::msg::builder::Init_StartNeptusParser_file_name();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__START_NEPTUS_PARSER__BUILDER_HPP_
