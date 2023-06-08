// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/HLMessage.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__HL_MESSAGE__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__HL_MESSAGE__BUILDER_HPP_

#include "labust_msgs/msg/detail/hl_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_HLMessage_yaw
{
public:
  explicit Init_HLMessage_yaw(::labust_msgs::msg::HLMessage & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::HLMessage yaw(::labust_msgs::msg::HLMessage::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::HLMessage msg_;
};

class Init_HLMessage_surge
{
public:
  explicit Init_HLMessage_surge(::labust_msgs::msg::HLMessage & msg)
  : msg_(msg)
  {}
  Init_HLMessage_yaw surge(::labust_msgs::msg::HLMessage::_surge_type arg)
  {
    msg_.surge = std::move(arg);
    return Init_HLMessage_yaw(msg_);
  }

private:
  ::labust_msgs::msg::HLMessage msg_;
};

class Init_HLMessage_radius
{
public:
  explicit Init_HLMessage_radius(::labust_msgs::msg::HLMessage & msg)
  : msg_(msg)
  {}
  Init_HLMessage_surge radius(::labust_msgs::msg::HLMessage::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_HLMessage_surge(msg_);
  }

private:
  ::labust_msgs::msg::HLMessage msg_;
};

class Init_HLMessage_ref_point
{
public:
  explicit Init_HLMessage_ref_point(::labust_msgs::msg::HLMessage & msg)
  : msg_(msg)
  {}
  Init_HLMessage_radius ref_point(::labust_msgs::msg::HLMessage::_ref_point_type arg)
  {
    msg_.ref_point = std::move(arg);
    return Init_HLMessage_radius(msg_);
  }

private:
  ::labust_msgs::msg::HLMessage msg_;
};

class Init_HLMessage_mode
{
public:
  Init_HLMessage_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HLMessage_ref_point mode(::labust_msgs::msg::HLMessage::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_HLMessage_ref_point(msg_);
  }

private:
  ::labust_msgs::msg::HLMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::HLMessage>()
{
  return labust_msgs::msg::builder::Init_HLMessage_mode();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__HL_MESSAGE__BUILDER_HPP_
