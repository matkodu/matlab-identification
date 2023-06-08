// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/DataEventsContainer.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__DATA_EVENTS_CONTAINER__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__DATA_EVENTS_CONTAINER__BUILDER_HPP_

#include "labust_msgs/msg/detail/data_events_container__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_DataEventsContainer_events_var
{
public:
  explicit Init_DataEventsContainer_events_var(::labust_msgs::msg::DataEventsContainer & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::DataEventsContainer events_var(::labust_msgs::msg::DataEventsContainer::_events_var_type arg)
  {
    msg_.events_var = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::DataEventsContainer msg_;
};

class Init_DataEventsContainer_mission_var
{
public:
  explicit Init_DataEventsContainer_mission_var(::labust_msgs::msg::DataEventsContainer & msg)
  : msg_(msg)
  {}
  Init_DataEventsContainer_events_var mission_var(::labust_msgs::msg::DataEventsContainer::_mission_var_type arg)
  {
    msg_.mission_var = std::move(arg);
    return Init_DataEventsContainer_events_var(msg_);
  }

private:
  ::labust_msgs::msg::DataEventsContainer msg_;
};

class Init_DataEventsContainer_state_var
{
public:
  Init_DataEventsContainer_state_var()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataEventsContainer_mission_var state_var(::labust_msgs::msg::DataEventsContainer::_state_var_type arg)
  {
    msg_.state_var = std::move(arg);
    return Init_DataEventsContainer_mission_var(msg_);
  }

private:
  ::labust_msgs::msg::DataEventsContainer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::DataEventsContainer>()
{
  return labust_msgs::msg::builder::Init_DataEventsContainer_state_var();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__DATA_EVENTS_CONTAINER__BUILDER_HPP_
