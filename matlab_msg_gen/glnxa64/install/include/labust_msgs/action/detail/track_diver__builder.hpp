// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:action/TrackDiver.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__BUILDER_HPP_
#define LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__BUILDER_HPP_

#include "labust_msgs/action/detail/track_diver__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_TrackDiver_Goal_radius_topic
{
public:
  explicit Init_TrackDiver_Goal_radius_topic(::labust_msgs::action::TrackDiver_Goal & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::TrackDiver_Goal radius_topic(::labust_msgs::action::TrackDiver_Goal::_radius_topic_type arg)
  {
    msg_.radius_topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Goal msg_;
};

class Init_TrackDiver_Goal_guidance_topic
{
public:
  explicit Init_TrackDiver_Goal_guidance_topic(::labust_msgs::action::TrackDiver_Goal & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Goal_radius_topic guidance_topic(::labust_msgs::action::TrackDiver_Goal::_guidance_topic_type arg)
  {
    msg_.guidance_topic = std::move(arg);
    return Init_TrackDiver_Goal_radius_topic(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Goal msg_;
};

class Init_TrackDiver_Goal_fov_guidance
{
public:
  explicit Init_TrackDiver_Goal_fov_guidance(::labust_msgs::action::TrackDiver_Goal & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Goal_guidance_topic fov_guidance(::labust_msgs::action::TrackDiver_Goal::_fov_guidance_type arg)
  {
    msg_.fov_guidance = std::move(arg);
    return Init_TrackDiver_Goal_guidance_topic(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Goal msg_;
};

class Init_TrackDiver_Goal_streamline_orientation
{
public:
  explicit Init_TrackDiver_Goal_streamline_orientation(::labust_msgs::action::TrackDiver_Goal & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Goal_fov_guidance streamline_orientation(::labust_msgs::action::TrackDiver_Goal::_streamline_orientation_type arg)
  {
    msg_.streamline_orientation = std::move(arg);
    return Init_TrackDiver_Goal_fov_guidance(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Goal msg_;
};

class Init_TrackDiver_Goal_wrapping_enable
{
public:
  explicit Init_TrackDiver_Goal_wrapping_enable(::labust_msgs::action::TrackDiver_Goal & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Goal_streamline_orientation wrapping_enable(::labust_msgs::action::TrackDiver_Goal::_wrapping_enable_type arg)
  {
    msg_.wrapping_enable = std::move(arg);
    return Init_TrackDiver_Goal_streamline_orientation(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Goal msg_;
};

class Init_TrackDiver_Goal_guidance_enable
{
public:
  explicit Init_TrackDiver_Goal_guidance_enable(::labust_msgs::action::TrackDiver_Goal & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Goal_wrapping_enable guidance_enable(::labust_msgs::action::TrackDiver_Goal::_guidance_enable_type arg)
  {
    msg_.guidance_enable = std::move(arg);
    return Init_TrackDiver_Goal_wrapping_enable(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Goal msg_;
};

class Init_TrackDiver_Goal_guidance_target
{
public:
  explicit Init_TrackDiver_Goal_guidance_target(::labust_msgs::action::TrackDiver_Goal & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Goal_guidance_enable guidance_target(::labust_msgs::action::TrackDiver_Goal::_guidance_target_type arg)
  {
    msg_.guidance_target = std::move(arg);
    return Init_TrackDiver_Goal_guidance_enable(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Goal msg_;
};

class Init_TrackDiver_Goal_vertical_offset
{
public:
  explicit Init_TrackDiver_Goal_vertical_offset(::labust_msgs::action::TrackDiver_Goal & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Goal_guidance_target vertical_offset(::labust_msgs::action::TrackDiver_Goal::_vertical_offset_type arg)
  {
    msg_.vertical_offset = std::move(arg);
    return Init_TrackDiver_Goal_guidance_target(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Goal msg_;
};

class Init_TrackDiver_Goal_radius
{
public:
  Init_TrackDiver_Goal_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackDiver_Goal_vertical_offset radius(::labust_msgs::action::TrackDiver_Goal::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_TrackDiver_Goal_vertical_offset(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::TrackDiver_Goal>()
{
  return labust_msgs::action::builder::Init_TrackDiver_Goal_radius();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_TrackDiver_Result_success
{
public:
  Init_TrackDiver_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::TrackDiver_Result success(::labust_msgs::action::TrackDiver_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::TrackDiver_Result>()
{
  return labust_msgs::action::builder::Init_TrackDiver_Result_success();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_TrackDiver_Feedback_ned_tracking_error
{
public:
  explicit Init_TrackDiver_Feedback_ned_tracking_error(::labust_msgs::action::TrackDiver_Feedback & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::TrackDiver_Feedback ned_tracking_error(::labust_msgs::action::TrackDiver_Feedback::_ned_tracking_error_type arg)
  {
    msg_.ned_tracking_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Feedback msg_;
};

class Init_TrackDiver_Feedback_zeta_r
{
public:
  explicit Init_TrackDiver_Feedback_zeta_r(::labust_msgs::action::TrackDiver_Feedback & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Feedback_ned_tracking_error zeta_r(::labust_msgs::action::TrackDiver_Feedback::_zeta_r_type arg)
  {
    msg_.zeta_r = std::move(arg);
    return Init_TrackDiver_Feedback_ned_tracking_error(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Feedback msg_;
};

class Init_TrackDiver_Feedback_delta_r
{
public:
  explicit Init_TrackDiver_Feedback_delta_r(::labust_msgs::action::TrackDiver_Feedback & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Feedback_zeta_r delta_r(::labust_msgs::action::TrackDiver_Feedback::_delta_r_type arg)
  {
    msg_.delta_r = std::move(arg);
    return Init_TrackDiver_Feedback_zeta_r(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Feedback msg_;
};

class Init_TrackDiver_Feedback_operational_radius
{
public:
  explicit Init_TrackDiver_Feedback_operational_radius(::labust_msgs::action::TrackDiver_Feedback & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Feedback_delta_r operational_radius(::labust_msgs::action::TrackDiver_Feedback::_operational_radius_type arg)
  {
    msg_.operational_radius = std::move(arg);
    return Init_TrackDiver_Feedback_delta_r(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Feedback msg_;
};

class Init_TrackDiver_Feedback_gamma_r
{
public:
  explicit Init_TrackDiver_Feedback_gamma_r(::labust_msgs::action::TrackDiver_Feedback & msg)
  : msg_(msg)
  {}
  Init_TrackDiver_Feedback_operational_radius gamma_r(::labust_msgs::action::TrackDiver_Feedback::_gamma_r_type arg)
  {
    msg_.gamma_r = std::move(arg);
    return Init_TrackDiver_Feedback_operational_radius(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Feedback msg_;
};

class Init_TrackDiver_Feedback_mu_r
{
public:
  Init_TrackDiver_Feedback_mu_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackDiver_Feedback_gamma_r mu_r(::labust_msgs::action::TrackDiver_Feedback::_mu_r_type arg)
  {
    msg_.mu_r = std::move(arg);
    return Init_TrackDiver_Feedback_gamma_r(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::TrackDiver_Feedback>()
{
  return labust_msgs::action::builder::Init_TrackDiver_Feedback_mu_r();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_TrackDiver_SendGoal_Request_goal
{
public:
  explicit Init_TrackDiver_SendGoal_Request_goal(::labust_msgs::action::TrackDiver_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::TrackDiver_SendGoal_Request goal(::labust_msgs::action::TrackDiver_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_SendGoal_Request msg_;
};

class Init_TrackDiver_SendGoal_Request_goal_id
{
public:
  Init_TrackDiver_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackDiver_SendGoal_Request_goal goal_id(::labust_msgs::action::TrackDiver_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TrackDiver_SendGoal_Request_goal(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::TrackDiver_SendGoal_Request>()
{
  return labust_msgs::action::builder::Init_TrackDiver_SendGoal_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_TrackDiver_SendGoal_Response_stamp
{
public:
  explicit Init_TrackDiver_SendGoal_Response_stamp(::labust_msgs::action::TrackDiver_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::TrackDiver_SendGoal_Response stamp(::labust_msgs::action::TrackDiver_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_SendGoal_Response msg_;
};

class Init_TrackDiver_SendGoal_Response_accepted
{
public:
  Init_TrackDiver_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackDiver_SendGoal_Response_stamp accepted(::labust_msgs::action::TrackDiver_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TrackDiver_SendGoal_Response_stamp(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::TrackDiver_SendGoal_Response>()
{
  return labust_msgs::action::builder::Init_TrackDiver_SendGoal_Response_accepted();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_TrackDiver_GetResult_Request_goal_id
{
public:
  Init_TrackDiver_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::TrackDiver_GetResult_Request goal_id(::labust_msgs::action::TrackDiver_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::TrackDiver_GetResult_Request>()
{
  return labust_msgs::action::builder::Init_TrackDiver_GetResult_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_TrackDiver_GetResult_Response_result
{
public:
  explicit Init_TrackDiver_GetResult_Response_result(::labust_msgs::action::TrackDiver_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::TrackDiver_GetResult_Response result(::labust_msgs::action::TrackDiver_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_GetResult_Response msg_;
};

class Init_TrackDiver_GetResult_Response_status
{
public:
  Init_TrackDiver_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackDiver_GetResult_Response_result status(::labust_msgs::action::TrackDiver_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TrackDiver_GetResult_Response_result(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::TrackDiver_GetResult_Response>()
{
  return labust_msgs::action::builder::Init_TrackDiver_GetResult_Response_status();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_TrackDiver_FeedbackMessage_feedback
{
public:
  explicit Init_TrackDiver_FeedbackMessage_feedback(::labust_msgs::action::TrackDiver_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::TrackDiver_FeedbackMessage feedback(::labust_msgs::action::TrackDiver_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_FeedbackMessage msg_;
};

class Init_TrackDiver_FeedbackMessage_goal_id
{
public:
  Init_TrackDiver_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackDiver_FeedbackMessage_feedback goal_id(::labust_msgs::action::TrackDiver_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TrackDiver_FeedbackMessage_feedback(msg_);
  }

private:
  ::labust_msgs::action::TrackDiver_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::TrackDiver_FeedbackMessage>()
{
  return labust_msgs::action::builder::Init_TrackDiver_FeedbackMessage_goal_id();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__ACTION__DETAIL__TRACK_DIVER__BUILDER_HPP_
