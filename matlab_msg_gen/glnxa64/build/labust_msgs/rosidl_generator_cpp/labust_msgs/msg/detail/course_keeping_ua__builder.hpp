// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:msg/CourseKeepingUA.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_UA__BUILDER_HPP_
#define LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_UA__BUILDER_HPP_

#include "labust_msgs/msg/detail/course_keeping_ua__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace msg
{

namespace builder
{

class Init_CourseKeepingUA_speed
{
public:
  explicit Init_CourseKeepingUA_speed(::labust_msgs::msg::CourseKeepingUA & msg)
  : msg_(msg)
  {}
  ::labust_msgs::msg::CourseKeepingUA speed(::labust_msgs::msg::CourseKeepingUA::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::msg::CourseKeepingUA msg_;
};

class Init_CourseKeepingUA_course
{
public:
  Init_CourseKeepingUA_course()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CourseKeepingUA_speed course(::labust_msgs::msg::CourseKeepingUA::_course_type arg)
  {
    msg_.course = std::move(arg);
    return Init_CourseKeepingUA_speed(msg_);
  }

private:
  ::labust_msgs::msg::CourseKeepingUA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::msg::CourseKeepingUA>()
{
  return labust_msgs::msg::builder::Init_CourseKeepingUA_course();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__MSG__DETAIL__COURSE_KEEPING_UA__BUILDER_HPP_
