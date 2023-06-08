// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/ManualConfiguration.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__MANUAL_CONFIGURATION__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__MANUAL_CONFIGURATION__BUILDER_HPP_

#include "labust_msgs/msg/detail/manual_configuration__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_ManualConfiguration_topic
{
public:
  explicit Init_ManualConfiguration_topic(::labust_msgs::msg::ManualConfiguration & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::ManualConfiguration topic(::labust_msgs::msg::ManualConfiguration::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::ManualConfiguration msg_;
};

class Init_ManualConfiguration_use_ff
{
public:
  explicit Init_ManualConfiguration_use_ff(::labust_msgs::msg::ManualConfiguration & msg)
  : msg_(msg)
  {}
  Init_ManualConfiguration_topic use_ff(::labust_msgs::msg::ManualConfiguration::_use_ff_type arg)
  {
    msg_.use_ff = std::move(arg);
    return Init_ManualConfiguration_topic(msg_);
  }

private:
  ::labust_msgs::msg::ManualConfiguration msg_;
};

class Init_ManualConfiguration_sampling_time
{
public:
  explicit Init_ManualConfiguration_sampling_time(::labust_msgs::msg::ManualConfiguration & msg)
  : msg_(msg)
  {}
  Init_ManualConfiguration_use_ff sampling_time(::labust_msgs::msg::ManualConfiguration::_sampling_time_type arg)
  {
    msg_.sampling_time = std::move(arg);
    return Init_ManualConfiguration_use_ff(msg_);
  }

private:
  ::labust_msgs::msg::ManualConfiguration msg_;
};

class Init_ManualConfiguration_maximum_speed
{
public:
  explicit Init_ManualConfiguration_maximum_speed(::labust_msgs::msg::ManualConfiguration & msg)
  : msg_(msg)
  {}
  Init_ManualConfiguration_sampling_time maximum_speed(::labust_msgs::msg::ManualConfiguration::_maximum_speed_type arg)
  {
    msg_.maximum_speed = std::move(arg);
    return Init_ManualConfiguration_sampling_time(msg_);
  }

private:
  ::labust_msgs::msg::ManualConfiguration msg_;
};

class Init_ManualConfiguration_maximum_nu
{
public:
  explicit Init_ManualConfiguration_maximum_nu(::labust_msgs::msg::ManualConfiguration & msg)
  : msg_(msg)
  {}
  Init_ManualConfiguration_maximum_speed maximum_nu(::labust_msgs::msg::ManualConfiguration::_maximum_nu_type arg)
  {
    msg_.maximum_nu = std::move(arg);
    return Init_ManualConfiguration_maximum_speed(msg_);
  }

private:
  ::labust_msgs::msg::ManualConfiguration msg_;
};

class Init_ManualConfiguration_maximum_effort
{
public:
  explicit Init_ManualConfiguration_maximum_effort(::labust_msgs::msg::ManualConfiguration & msg)
  : msg_(msg)
  {}
  Init_ManualConfiguration_maximum_nu maximum_effort(::labust_msgs::msg::ManualConfiguration::_maximum_effort_type arg)
  {
    msg_.maximum_effort = std::move(arg);
    return Init_ManualConfiguration_maximum_nu(msg_);
  }

private:
  ::labust_msgs::msg::ManualConfiguration msg_;
};

class Init_ManualConfiguration_integrated
{
public:
  explicit Init_ManualConfiguration_integrated(::labust_msgs::msg::ManualConfiguration & msg)
  : msg_(msg)
  {}
  Init_ManualConfiguration_maximum_effort integrated(::labust_msgs::msg::ManualConfiguration::_integrated_type arg)
  {
    msg_.integrated = std::move(arg);
    return Init_ManualConfiguration_maximum_effort(msg_);
  }

private:
  ::labust_msgs::msg::ManualConfiguration msg_;
};

class Init_ManualConfiguration_scale_map
{
public:
  explicit Init_ManualConfiguration_scale_map(::labust_msgs::msg::ManualConfiguration & msg)
  : msg_(msg)
  {}
  Init_ManualConfiguration_integrated scale_map(::labust_msgs::msg::ManualConfiguration::_scale_map_type arg)
  {
    msg_.scale_map = std::move(arg);
    return Init_ManualConfiguration_integrated(msg_);
  }

private:
  ::labust_msgs::msg::ManualConfiguration msg_;
};

class Init_ManualConfiguration_axes_map
{
public:
  Init_ManualConfiguration_axes_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManualConfiguration_scale_map axes_map(::labust_msgs::msg::ManualConfiguration::_axes_map_type arg)
  {
    msg_.axes_map = std::move(arg);
    return Init_ManualConfiguration_scale_map(msg_);
  }

private:
  ::labust_msgs::msg::ManualConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::ManualConfiguration>()
{
  return labust_msgs::msg::builder::Init_ManualConfiguration_axes_map();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__MANUAL_CONFIGURATION__BUILDER_HPP_
