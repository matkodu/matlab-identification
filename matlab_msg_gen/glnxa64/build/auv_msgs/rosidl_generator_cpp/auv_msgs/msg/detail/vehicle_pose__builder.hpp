// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auv_msgs:msg/VehiclePose.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__BUILDER_HPP_
#define AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__BUILDER_HPP_

#include "auv_msgs/msg/detail/vehicle_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace auv_msgs
{

namespace msg
{

namespace builder
{

class Init_VehiclePose_orientation
{
public:
  explicit Init_VehiclePose_orientation(::auv_msgs::msg::VehiclePose & msg)
  : msg_(msg)
  {}
  ::auv_msgs::msg::VehiclePose orientation(::auv_msgs::msg::VehiclePose::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_msgs::msg::VehiclePose msg_;
};

class Init_VehiclePose_position
{
public:
  explicit Init_VehiclePose_position(::auv_msgs::msg::VehiclePose & msg)
  : msg_(msg)
  {}
  Init_VehiclePose_orientation position(::auv_msgs::msg::VehiclePose::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_VehiclePose_orientation(msg_);
  }

private:
  ::auv_msgs::msg::VehiclePose msg_;
};

class Init_VehiclePose_id
{
public:
  Init_VehiclePose_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehiclePose_position id(::auv_msgs::msg::VehiclePose::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_VehiclePose_position(msg_);
  }

private:
  ::auv_msgs::msg::VehiclePose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_msgs::msg::VehiclePose>()
{
  return auv_msgs::msg::builder::Init_VehiclePose_id();
}

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__VEHICLE_POSE__BUILDER_HPP_
