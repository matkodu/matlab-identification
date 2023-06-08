// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_

#include "labust_msgs/msg/detail/event_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_EventData_on_event_next_active
{
public:
  explicit Init_EventData_on_event_next_active(::labust_msgs::msg::EventData & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::EventData on_event_next_active(::labust_msgs::msg::EventData::_on_event_next_active_type arg)
  {
    msg_.on_event_next_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::EventData msg_;
};

class Init_EventData_on_event_next
{
public:
  explicit Init_EventData_on_event_next(::labust_msgs::msg::EventData & msg)
  : msg_(msg)
  {}
  Init_EventData_on_event_next_active on_event_next(::labust_msgs::msg::EventData::_on_event_next_type arg)
  {
    msg_.on_event_next = std::move(arg);
    return Init_EventData_on_event_next_active(msg_);
  }

private:
  ::labust_msgs::msg::EventData msg_;
};

class Init_EventData_timeout
{
public:
  Init_EventData_timeout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventData_on_event_next timeout(::labust_msgs::msg::EventData::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_EventData_on_event_next(msg_);
  }

private:
  ::labust_msgs::msg::EventData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::EventData>()
{
  return labust_msgs::msg::builder::Init_EventData_timeout();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
