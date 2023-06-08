// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/NanomodemRequest.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__NANOMODEM_REQUEST__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__NANOMODEM_REQUEST__BUILDER_HPP_

#include "labust_msgs/msg/detail/nanomodem_request__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_NanomodemRequest_id
{
public:
  explicit Init_NanomodemRequest_id(::labust_msgs::msg::NanomodemRequest & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::NanomodemRequest id(::labust_msgs::msg::NanomodemRequest::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemRequest msg_;
};

class Init_NanomodemRequest_msg
{
public:
  explicit Init_NanomodemRequest_msg(::labust_msgs::msg::NanomodemRequest & msg)
  : msg_(msg)
  {}
  Init_NanomodemRequest_id msg(::labust_msgs::msg::NanomodemRequest::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_NanomodemRequest_id(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemRequest msg_;
};

class Init_NanomodemRequest_scheduled
{
public:
  explicit Init_NanomodemRequest_scheduled(::labust_msgs::msg::NanomodemRequest & msg)
  : msg_(msg)
  {}
  Init_NanomodemRequest_msg scheduled(::labust_msgs::msg::NanomodemRequest::_scheduled_type arg)
  {
    msg_.scheduled = std::move(arg);
    return Init_NanomodemRequest_msg(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemRequest msg_;
};

class Init_NanomodemRequest_req_type
{
public:
  explicit Init_NanomodemRequest_req_type(::labust_msgs::msg::NanomodemRequest & msg)
  : msg_(msg)
  {}
  Init_NanomodemRequest_scheduled req_type(::labust_msgs::msg::NanomodemRequest::_req_type_type arg)
  {
    msg_.req_type = std::move(arg);
    return Init_NanomodemRequest_scheduled(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemRequest msg_;
};

class Init_NanomodemRequest_header
{
public:
  Init_NanomodemRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NanomodemRequest_req_type header(::labust_msgs::msg::NanomodemRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NanomodemRequest_req_type(msg_);
  }

private:
  ::labust_msgs::msg::NanomodemRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::NanomodemRequest>()
{
  return labust_msgs::msg::builder::Init_NanomodemRequest_header();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__NANOMODEM_REQUEST__BUILDER_HPP_
