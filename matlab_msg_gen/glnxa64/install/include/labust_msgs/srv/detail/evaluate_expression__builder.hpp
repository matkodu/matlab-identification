// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/EvaluateExpression.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__EVALUATE_EXPRESSION__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__EVALUATE_EXPRESSION__BUILDER_HPP_

#include "labust_msgs/srv/detail/evaluate_expression__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_EvaluateExpression_Request_expression
{
public:
  Init_EvaluateExpression_Request_expression()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::EvaluateExpression_Request expression(::labust_msgs::srv::EvaluateExpression_Request::_expression_type arg)
  {
    msg_.expression = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::EvaluateExpression_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::EvaluateExpression_Request>()
{
  return labust_msgs::srv::builder::Init_EvaluateExpression_Request_expression();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_EvaluateExpression_Response_result
{
public:
  Init_EvaluateExpression_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::EvaluateExpression_Response result(::labust_msgs::srv::EvaluateExpression_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::EvaluateExpression_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::EvaluateExpression_Response>()
{
  return labust_msgs::srv::builder::Init_EvaluateExpression_Response_result();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__EVALUATE_EXPRESSION__BUILDER_HPP_
