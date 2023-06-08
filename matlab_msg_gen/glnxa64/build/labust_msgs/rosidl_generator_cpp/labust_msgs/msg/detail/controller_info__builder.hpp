// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__BUILDER_HPP_

#include "labust_msgs/msg/detail/controller_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerInfo_state
{
public:
  explicit Init_ControllerInfo_state(::labust_msgs::msg::ControllerInfo & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::ControllerInfo state(::labust_msgs::msg::ControllerInfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::ControllerInfo msg_;
};

class Init_ControllerInfo_tracking_topic
{
public:
  explicit Init_ControllerInfo_tracking_topic(::labust_msgs::msg::ControllerInfo & msg)
  : msg_(msg)
  {}
  Init_ControllerInfo_state tracking_topic(::labust_msgs::msg::ControllerInfo::_tracking_topic_type arg)
  {
    msg_.tracking_topic = std::move(arg);
    return Init_ControllerInfo_state(msg_);
  }

private:
  ::labust_msgs::msg::ControllerInfo msg_;
};

class Init_ControllerInfo_state_topic
{
public:
  explicit Init_ControllerInfo_state_topic(::labust_msgs::msg::ControllerInfo & msg)
  : msg_(msg)
  {}
  Init_ControllerInfo_tracking_topic state_topic(::labust_msgs::msg::ControllerInfo::_state_topic_type arg)
  {
    msg_.state_topic = std::move(arg);
    return Init_ControllerInfo_tracking_topic(msg_);
  }

private:
  ::labust_msgs::msg::ControllerInfo msg_;
};

class Init_ControllerInfo_external_topic
{
public:
  explicit Init_ControllerInfo_external_topic(::labust_msgs::msg::ControllerInfo & msg)
  : msg_(msg)
  {}
  Init_ControllerInfo_state_topic external_topic(::labust_msgs::msg::ControllerInfo::_external_topic_type arg)
  {
    msg_.external_topic = std::move(arg);
    return Init_ControllerInfo_state_topic(msg_);
  }

private:
  ::labust_msgs::msg::ControllerInfo msg_;
};

class Init_ControllerInfo_manual_topic
{
public:
  Init_ControllerInfo_manual_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerInfo_external_topic manual_topic(::labust_msgs::msg::ControllerInfo::_manual_topic_type arg)
  {
    msg_.manual_topic = std::move(arg);
    return Init_ControllerInfo_external_topic(msg_);
  }

private:
  ::labust_msgs::msg::ControllerInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::ControllerInfo>()
{
  return labust_msgs::msg::builder::Init_ControllerInfo_manual_topic();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__CONTROLLER_INFO__BUILDER_HPP_
