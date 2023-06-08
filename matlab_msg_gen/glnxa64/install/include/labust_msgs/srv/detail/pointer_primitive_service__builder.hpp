// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:srv/PointerPrimitiveService.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__SRV__DETAIL__POINTER_PRIMITIVE_SERVICE__BUILDER_HPP_
#define LABUST_MSGS__SRV__DETAIL__POINTER_PRIMITIVE_SERVICE__BUILDER_HPP_

#include "labust_msgs/srv/detail/pointer_primitive_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_PointerPrimitiveService_Request_radius_topic
{
public:
  explicit Init_PointerPrimitiveService_Request_radius_topic(::labust_msgs::srv::PointerPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::srv::PointerPrimitiveService_Request radius_topic(::labust_msgs::srv::PointerPrimitiveService_Request::_radius_topic_type arg)
  {
    msg_.radius_topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::PointerPrimitiveService_Request msg_;
};

class Init_PointerPrimitiveService_Request_guidance_topic
{
public:
  explicit Init_PointerPrimitiveService_Request_guidance_topic(::labust_msgs::srv::PointerPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_PointerPrimitiveService_Request_radius_topic guidance_topic(::labust_msgs::srv::PointerPrimitiveService_Request::_guidance_topic_type arg)
  {
    msg_.guidance_topic = std::move(arg);
    return Init_PointerPrimitiveService_Request_radius_topic(msg_);
  }

private:
  ::labust_msgs::srv::PointerPrimitiveService_Request msg_;
};

class Init_PointerPrimitiveService_Request_streamline_orientation
{
public:
  explicit Init_PointerPrimitiveService_Request_streamline_orientation(::labust_msgs::srv::PointerPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_PointerPrimitiveService_Request_guidance_topic streamline_orientation(::labust_msgs::srv::PointerPrimitiveService_Request::_streamline_orientation_type arg)
  {
    msg_.streamline_orientation = std::move(arg);
    return Init_PointerPrimitiveService_Request_guidance_topic(msg_);
  }

private:
  ::labust_msgs::srv::PointerPrimitiveService_Request msg_;
};

class Init_PointerPrimitiveService_Request_fov_guidance
{
public:
  explicit Init_PointerPrimitiveService_Request_fov_guidance(::labust_msgs::srv::PointerPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_PointerPrimitiveService_Request_streamline_orientation fov_guidance(::labust_msgs::srv::PointerPrimitiveService_Request::_fov_guidance_type arg)
  {
    msg_.fov_guidance = std::move(arg);
    return Init_PointerPrimitiveService_Request_streamline_orientation(msg_);
  }

private:
  ::labust_msgs::srv::PointerPrimitiveService_Request msg_;
};

class Init_PointerPrimitiveService_Request_wrapping_enable
{
public:
  explicit Init_PointerPrimitiveService_Request_wrapping_enable(::labust_msgs::srv::PointerPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_PointerPrimitiveService_Request_fov_guidance wrapping_enable(::labust_msgs::srv::PointerPrimitiveService_Request::_wrapping_enable_type arg)
  {
    msg_.wrapping_enable = std::move(arg);
    return Init_PointerPrimitiveService_Request_fov_guidance(msg_);
  }

private:
  ::labust_msgs::srv::PointerPrimitiveService_Request msg_;
};

class Init_PointerPrimitiveService_Request_guidance_enable
{
public:
  explicit Init_PointerPrimitiveService_Request_guidance_enable(::labust_msgs::srv::PointerPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_PointerPrimitiveService_Request_wrapping_enable guidance_enable(::labust_msgs::srv::PointerPrimitiveService_Request::_guidance_enable_type arg)
  {
    msg_.guidance_enable = std::move(arg);
    return Init_PointerPrimitiveService_Request_wrapping_enable(msg_);
  }

private:
  ::labust_msgs::srv::PointerPrimitiveService_Request msg_;
};

class Init_PointerPrimitiveService_Request_guidance_target
{
public:
  explicit Init_PointerPrimitiveService_Request_guidance_target(::labust_msgs::srv::PointerPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_PointerPrimitiveService_Request_guidance_enable guidance_target(::labust_msgs::srv::PointerPrimitiveService_Request::_guidance_target_type arg)
  {
    msg_.guidance_target = std::move(arg);
    return Init_PointerPrimitiveService_Request_guidance_enable(msg_);
  }

private:
  ::labust_msgs::srv::PointerPrimitiveService_Request msg_;
};

class Init_PointerPrimitiveService_Request_vertical_offset
{
public:
  explicit Init_PointerPrimitiveService_Request_vertical_offset(::labust_msgs::srv::PointerPrimitiveService_Request & msg)
  : msg_(msg)
  {}
  Init_PointerPrimitiveService_Request_guidance_target vertical_offset(::labust_msgs::srv::PointerPrimitiveService_Request::_vertical_offset_type arg)
  {
    msg_.vertical_offset = std::move(arg);
    return Init_PointerPrimitiveService_Request_guidance_target(msg_);
  }

private:
  ::labust_msgs::srv::PointerPrimitiveService_Request msg_;
};

class Init_PointerPrimitiveService_Request_radius
{
public:
  Init_PointerPrimitiveService_Request_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointerPrimitiveService_Request_vertical_offset radius(::labust_msgs::srv::PointerPrimitiveService_Request::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_PointerPrimitiveService_Request_vertical_offset(msg_);
  }

private:
  ::labust_msgs::srv::PointerPrimitiveService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::PointerPrimitiveService_Request>()
{
  return labust_msgs::srv::builder::Init_PointerPrimitiveService_Request_radius();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace srv
{

namespace builder
{

class Init_PointerPrimitiveService_Response_status
{
public:
  Init_PointerPrimitiveService_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::srv::PointerPrimitiveService_Response status(::labust_msgs::srv::PointerPrimitiveService_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::srv::PointerPrimitiveService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::srv::PointerPrimitiveService_Response>()
{
  return labust_msgs::srv::builder::Init_PointerPrimitiveService_Response_status();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__SRV__DETAIL__POINTER_PRIMITIVE_SERVICE__BUILDER_HPP_
