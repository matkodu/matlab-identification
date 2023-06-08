// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auv_msgs:msg/VehiclePoseArray.idl
// generated code does not contain a copyright notice

#ifndef AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__BUILDER_HPP_
#define AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__BUILDER_HPP_

#include "auv_msgs/msg/detail/vehicle_pose_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace auv_msgs
{

namespace msg
{

namespace builder
{

class Init_VehiclePoseArray_poses
{
public:
  explicit Init_VehiclePoseArray_poses(::auv_msgs::msg::VehiclePoseArray & msg)
  : msg_(msg)
  {}
  ::auv_msgs::msg::VehiclePoseArray poses(::auv_msgs::msg::VehiclePoseArray::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_msgs::msg::VehiclePoseArray msg_;
};

class Init_VehiclePoseArray_header
{
public:
  Init_VehiclePoseArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehiclePoseArray_poses header(::auv_msgs::msg::VehiclePoseArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehiclePoseArray_poses(msg_);
  }

private:
  ::auv_msgs::msg::VehiclePoseArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_msgs::msg::VehiclePoseArray>()
{
  return auv_msgs::msg::builder::Init_VehiclePoseArray_header();
}

}  // namespace auv_msgs

#endif  // AUV_MSGS__MSG__DETAIL__VEHICLE_POSE_ARRAY__BUILDER_HPP_
