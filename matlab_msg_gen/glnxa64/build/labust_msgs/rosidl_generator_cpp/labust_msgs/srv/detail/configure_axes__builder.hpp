// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/ConfigureAxes.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__BUILDER_HPP_

#include "labust_msgs/srv/detail/configure_axes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_ConfigureAxes_Request_disable_axis
{
public:
  Init_ConfigureAxes_Request_disable_axis()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::ConfigureAxes_Request disable_axis(::labust_msgs::srv::ConfigureAxes_Request::_disable_axis_type arg)
  {
    msg_.disable_axis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::ConfigureAxes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::ConfigureAxes_Request>()
{
  return labust_msgs::srv::builder::Init_ConfigureAxes_Request_disable_axis();
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
auto build<::labust_msgs::srv::ConfigureAxes_Response>()
{
  return ::labust_msgs::srv::ConfigureAxes_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__CONFIGURE_AXES__BUILDER_HPP_
