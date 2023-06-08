// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/UnRegisterController.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__BUILDER_HPP_

#include "labust_msgs/srv/detail/un_register_controller__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_UnRegisterController_Request_name
{
public:
  explicit Init_UnRegisterController_Request_name(::labust_msgs::srv::UnRegisterController_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::UnRegisterController_Request name(::labust_msgs::srv::UnRegisterController_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::UnRegisterController_Request msg_;
};

class Init_UnRegisterController_Request_parent
{
public:
  explicit Init_UnRegisterController_Request_parent(::labust_msgs::srv::UnRegisterController_Request & msg)
  : msg_(msg)
  {}
  Init_UnRegisterController_Request_name parent(::labust_msgs::srv::UnRegisterController_Request::_parent_type arg)
  {
    msg_.parent = std::move(arg);
    return Init_UnRegisterController_Request_name(msg_);
  }

private:
  ::labust_msgs::srv::UnRegisterController_Request msg_;
};

class Init_UnRegisterController_Request_type
{
public:
  Init_UnRegisterController_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnRegisterController_Request_parent type(::labust_msgs::srv::UnRegisterController_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_UnRegisterController_Request_parent(msg_);
  }

private:
  ::labust_msgs::srv::UnRegisterController_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::UnRegisterController_Request>()
{
  return labust_msgs::srv::builder::Init_UnRegisterController_Request_type();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_UnRegisterController_Response_reply
{
public:
  Init_UnRegisterController_Response_reply()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::UnRegisterController_Response reply(::labust_msgs::srv::UnRegisterController_Response::_reply_type arg)
  {
    msg_.reply = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::UnRegisterController_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::UnRegisterController_Response>()
{
  return labust_msgs::srv::builder::Init_UnRegisterController_Response_reply();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__UN_REGISTER_CONTROLLER__BUILDER_HPP_
