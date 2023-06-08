// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/RelayControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__BUILDER_HPP_

#include "labust_msgs/srv/detail/relay_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RelayControl_Request_timeout
{
public:
  explicit Init_RelayControl_Request_timeout(::labust_msgs::srv::RelayControl_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::RelayControl_Request timeout(::labust_msgs::srv::RelayControl_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RelayControl_Request msg_;
};

class Init_RelayControl_Request_relay_state
{
public:
  explicit Init_RelayControl_Request_relay_state(::labust_msgs::srv::RelayControl_Request & msg)
  : msg_(msg)
  {}
  Init_RelayControl_Request_timeout relay_state(::labust_msgs::srv::RelayControl_Request::_relay_state_type arg)
  {
    msg_.relay_state = std::move(arg);
    return Init_RelayControl_Request_timeout(msg_);
  }

private:
  ::labust_msgs::srv::RelayControl_Request msg_;
};

class Init_RelayControl_Request_relay_num
{
public:
  Init_RelayControl_Request_relay_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelayControl_Request_relay_state relay_num(::labust_msgs::srv::RelayControl_Request::_relay_num_type arg)
  {
    msg_.relay_num = std::move(arg);
    return Init_RelayControl_Request_relay_state(msg_);
  }

private:
  ::labust_msgs::srv::RelayControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RelayControl_Request>()
{
  return labust_msgs::srv::builder::Init_RelayControl_Request_relay_num();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RelayControl_Response_result
{
public:
  Init_RelayControl_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::RelayControl_Response result(::labust_msgs::srv::RelayControl_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RelayControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RelayControl_Response>()
{
  return labust_msgs::srv::builder::Init_RelayControl_Response_result();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__RELAY_CONTROL__BUILDER_HPP_
