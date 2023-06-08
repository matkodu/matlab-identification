// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auv_msgs:msg/NEDArray.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__NED_ARRAY__BUILDER_HPP_
#define AUV_MSGS__MSG__DETAIL__NED_ARRAY__BUILDER_HPP_

#include "auv_msgs/msg/detail/ned_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace auv_msgs
{

namespace msg
{

namespace builder
{

class Init_NEDArray_neds
{
public:
  Init_NEDArray_neds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::auv_msgs::msg::NEDArray neds(::auv_msgs::msg::NEDArray::_neds_type arg)
  {
    msg_.neds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_msgs::msg::NEDArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_msgs::msg::NEDArray>()
{
  return auv_msgs::msg::builder::Init_NEDArray_neds();
}

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__NED_ARRAY__BUILDER_HPP_
