// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/ManualSelect.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__MANUAL_SELECT__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__MANUAL_SELECT__BUILDER_HPP_

#include "labust_msgs/srv/detail/manual_select__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_ManualSelect_Request_use_generator
{
public:
  Init_ManualSelect_Request_use_generator()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::ManualSelect_Request use_generator(::labust_msgs::srv::ManualSelect_Request::_use_generator_type arg)
  {
    msg_.use_generator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::ManualSelect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::ManualSelect_Request>()
{
  return labust_msgs::srv::builder::Init_ManualSelect_Request_use_generator();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::ManualSelect_Response>()
{
  return ::labust_msgs::srv::ManualSelect_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__MANUAL_SELECT__BUILDER_HPP_
