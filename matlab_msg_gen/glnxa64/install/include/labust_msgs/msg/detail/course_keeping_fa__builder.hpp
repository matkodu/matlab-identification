// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/CourseKeepingFA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_FA__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_FA__BUILDER_HPP_

#include "labust_msgs/msg/detail/course_keeping_fa__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_CourseKeepingFA_speed
{
public:
  explicit Init_CourseKeepingFA_speed(::labust_msgs::msg::CourseKeepingFA & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::CourseKeepingFA speed(::labust_msgs::msg::CourseKeepingFA::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::CourseKeepingFA msg_;
};

class Init_CourseKeepingFA_heading
{
public:
  explicit Init_CourseKeepingFA_heading(::labust_msgs::msg::CourseKeepingFA & msg)
  : msg_(msg)
  {}
  Init_CourseKeepingFA_speed heading(::labust_msgs::msg::CourseKeepingFA::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_CourseKeepingFA_speed(msg_);
  }

private:
  ::labust_msgs::msg::CourseKeepingFA msg_;
};

class Init_CourseKeepingFA_course
{
public:
  Init_CourseKeepingFA_course()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CourseKeepingFA_heading course(::labust_msgs::msg::CourseKeepingFA::_course_type arg)
  {
    msg_.course = std::move(arg);
    return Init_CourseKeepingFA_heading(msg_);
  }

private:
  ::labust_msgs::msg::CourseKeepingFA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::CourseKeepingFA>()
{
  return labust_msgs::msg::builder::Init_CourseKeepingFA_course();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_FA__BUILDER_HPP_
