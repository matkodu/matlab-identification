// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/RosbagControl.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__ROSBAG_CONTROL__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__ROSBAG_CONTROL__BUILDER_HPP_

#include "labust_msgs/srv/detail/rosbag_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RosbagControl_Request_bag_name
{
public:
  explicit Init_RosbagControl_Request_bag_name(::labust_msgs::srv::RosbagControl_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::RosbagControl_Request bag_name(::labust_msgs::srv::RosbagControl_Request::_bag_name_type arg)
  {
    msg_.bag_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RosbagControl_Request msg_;
};

class Init_RosbagControl_Request_action
{
public:
  Init_RosbagControl_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosbagControl_Request_bag_name action(::labust_msgs::srv::RosbagControl_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_RosbagControl_Request_bag_name(msg_);
  }

private:
  ::labust_msgs::srv::RosbagControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RosbagControl_Request>()
{
  return labust_msgs::srv::builder::Init_RosbagControl_Request_action();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_RosbagControl_Response_result
{
public:
  Init_RosbagControl_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::RosbagControl_Response result(::labust_msgs::srv::RosbagControl_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::RosbagControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::RosbagControl_Response>()
{
  return labust_msgs::srv::builder::Init_RosbagControl_Response_result();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__ROSBAG_CONTROL__BUILDER_HPP_
