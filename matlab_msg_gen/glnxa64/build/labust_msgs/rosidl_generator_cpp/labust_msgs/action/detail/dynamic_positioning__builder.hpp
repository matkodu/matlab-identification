// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:action/DynamicPositioning.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__DYNAMIC_POSITIONING__BUILDER_HPP_
#define LABUST_MSGS__ACTION__DETAIL__DYNAMIC_POSITIONING__BUILDER_HPP_

#include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_DynamicPositioning_Goal_heading_topic
{
public:
  explicit Init_DynamicPositioning_Goal_heading_topic(::labust_msgs::action::DynamicPositioning_Goal & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::DynamicPositioning_Goal heading_topic(::labust_msgs::action::DynamicPositioning_Goal::_heading_topic_type arg)
  {
    msg_.heading_topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Goal msg_;
};

class Init_DynamicPositioning_Goal_target_topic
{
public:
  explicit Init_DynamicPositioning_Goal_target_topic(::labust_msgs::action::DynamicPositioning_Goal & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioning_Goal_heading_topic target_topic(::labust_msgs::action::DynamicPositioning_Goal::_target_topic_type arg)
  {
    msg_.target_topic = std::move(arg);
    return Init_DynamicPositioning_Goal_heading_topic(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Goal msg_;
};

class Init_DynamicPositioning_Goal_target_topic_enable
{
public:
  explicit Init_DynamicPositioning_Goal_target_topic_enable(::labust_msgs::action::DynamicPositioning_Goal & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioning_Goal_target_topic target_topic_enable(::labust_msgs::action::DynamicPositioning_Goal::_target_topic_enable_type arg)
  {
    msg_.target_topic_enable = std::move(arg);
    return Init_DynamicPositioning_Goal_target_topic(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Goal msg_;
};

class Init_DynamicPositioning_Goal_track_heading_enable
{
public:
  explicit Init_DynamicPositioning_Goal_track_heading_enable(::labust_msgs::action::DynamicPositioning_Goal & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioning_Goal_target_topic_enable track_heading_enable(::labust_msgs::action::DynamicPositioning_Goal::_track_heading_enable_type arg)
  {
    msg_.track_heading_enable = std::move(arg);
    return Init_DynamicPositioning_Goal_target_topic_enable(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Goal msg_;
};

class Init_DynamicPositioning_Goal_altitude
{
public:
  explicit Init_DynamicPositioning_Goal_altitude(::labust_msgs::action::DynamicPositioning_Goal & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioning_Goal_track_heading_enable altitude(::labust_msgs::action::DynamicPositioning_Goal::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_DynamicPositioning_Goal_track_heading_enable(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Goal msg_;
};

class Init_DynamicPositioning_Goal_axis_enable
{
public:
  explicit Init_DynamicPositioning_Goal_axis_enable(::labust_msgs::action::DynamicPositioning_Goal & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioning_Goal_altitude axis_enable(::labust_msgs::action::DynamicPositioning_Goal::_axis_enable_type arg)
  {
    msg_.axis_enable = std::move(arg);
    return Init_DynamicPositioning_Goal_altitude(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Goal msg_;
};

class Init_DynamicPositioning_Goal_radius
{
public:
  explicit Init_DynamicPositioning_Goal_radius(::labust_msgs::action::DynamicPositioning_Goal & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioning_Goal_axis_enable radius(::labust_msgs::action::DynamicPositioning_Goal::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_DynamicPositioning_Goal_axis_enable(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Goal msg_;
};

class Init_DynamicPositioning_Goal_yaw
{
public:
  explicit Init_DynamicPositioning_Goal_yaw(::labust_msgs::action::DynamicPositioning_Goal & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioning_Goal_radius yaw(::labust_msgs::action::DynamicPositioning_Goal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_DynamicPositioning_Goal_radius(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Goal msg_;
};

class Init_DynamicPositioning_Goal_t1
{
public:
  Init_DynamicPositioning_Goal_t1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicPositioning_Goal_yaw t1(::labust_msgs::action::DynamicPositioning_Goal::_t1_type arg)
  {
    msg_.t1 = std::move(arg);
    return Init_DynamicPositioning_Goal_yaw(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::DynamicPositioning_Goal>()
{
  return labust_msgs::action::builder::Init_DynamicPositioning_Goal_t1();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_DynamicPositioning_Result_position
{
public:
  Init_DynamicPositioning_Result_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::DynamicPositioning_Result position(::labust_msgs::action::DynamicPositioning_Result::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::DynamicPositioning_Result>()
{
  return labust_msgs::action::builder::Init_DynamicPositioning_Result_position();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_DynamicPositioning_Feedback_bearing
{
public:
  explicit Init_DynamicPositioning_Feedback_bearing(::labust_msgs::action::DynamicPositioning_Feedback & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::DynamicPositioning_Feedback bearing(::labust_msgs::action::DynamicPositioning_Feedback::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Feedback msg_;
};

class Init_DynamicPositioning_Feedback_distance
{
public:
  explicit Init_DynamicPositioning_Feedback_distance(::labust_msgs::action::DynamicPositioning_Feedback & msg)
  : msg_(msg)
  {}
  Init_DynamicPositioning_Feedback_bearing distance(::labust_msgs::action::DynamicPositioning_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_DynamicPositioning_Feedback_bearing(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Feedback msg_;
};

class Init_DynamicPositioning_Feedback_error
{
public:
  Init_DynamicPositioning_Feedback_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicPositioning_Feedback_distance error(::labust_msgs::action::DynamicPositioning_Feedback::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_DynamicPositioning_Feedback_distance(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::DynamicPositioning_Feedback>()
{
  return labust_msgs::action::builder::Init_DynamicPositioning_Feedback_error();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_DynamicPositioning_SendGoal_Request_goal
{
public:
  explicit Init_DynamicPositioning_SendGoal_Request_goal(::labust_msgs::action::DynamicPositioning_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::DynamicPositioning_SendGoal_Request goal(::labust_msgs::action::DynamicPositioning_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_SendGoal_Request msg_;
};

class Init_DynamicPositioning_SendGoal_Request_goal_id
{
public:
  Init_DynamicPositioning_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicPositioning_SendGoal_Request_goal goal_id(::labust_msgs::action::DynamicPositioning_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DynamicPositioning_SendGoal_Request_goal(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::DynamicPositioning_SendGoal_Request>()
{
  return labust_msgs::action::builder::Init_DynamicPositioning_SendGoal_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_DynamicPositioning_SendGoal_Response_stamp
{
public:
  explicit Init_DynamicPositioning_SendGoal_Response_stamp(::labust_msgs::action::DynamicPositioning_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::DynamicPositioning_SendGoal_Response stamp(::labust_msgs::action::DynamicPositioning_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_SendGoal_Response msg_;
};

class Init_DynamicPositioning_SendGoal_Response_accepted
{
public:
  Init_DynamicPositioning_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicPositioning_SendGoal_Response_stamp accepted(::labust_msgs::action::DynamicPositioning_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DynamicPositioning_SendGoal_Response_stamp(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::DynamicPositioning_SendGoal_Response>()
{
  return labust_msgs::action::builder::Init_DynamicPositioning_SendGoal_Response_accepted();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_DynamicPositioning_GetResult_Request_goal_id
{
public:
  Init_DynamicPositioning_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::DynamicPositioning_GetResult_Request goal_id(::labust_msgs::action::DynamicPositioning_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::DynamicPositioning_GetResult_Request>()
{
  return labust_msgs::action::builder::Init_DynamicPositioning_GetResult_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_DynamicPositioning_GetResult_Response_result
{
public:
  explicit Init_DynamicPositioning_GetResult_Response_result(::labust_msgs::action::DynamicPositioning_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::DynamicPositioning_GetResult_Response result(::labust_msgs::action::DynamicPositioning_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_GetResult_Response msg_;
};

class Init_DynamicPositioning_GetResult_Response_status
{
public:
  Init_DynamicPositioning_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicPositioning_GetResult_Response_result status(::labust_msgs::action::DynamicPositioning_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DynamicPositioning_GetResult_Response_result(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::DynamicPositioning_GetResult_Response>()
{
  return labust_msgs::action::builder::Init_DynamicPositioning_GetResult_Response_status();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_DynamicPositioning_FeedbackMessage_feedback
{
public:
  explicit Init_DynamicPositioning_FeedbackMessage_feedback(::labust_msgs::action::DynamicPositioning_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::DynamicPositioning_FeedbackMessage feedback(::labust_msgs::action::DynamicPositioning_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_FeedbackMessage msg_;
};

class Init_DynamicPositioning_FeedbackMessage_goal_id
{
public:
  Init_DynamicPositioning_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicPositioning_FeedbackMessage_feedback goal_id(::labust_msgs::action::DynamicPositioning_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DynamicPositioning_FeedbackMessage_feedback(msg_);
  }

private:
  ::labust_msgs::action::DynamicPositioning_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::DynamicPositioning_FeedbackMessage>()
{
  return labust_msgs::action::builder::Init_DynamicPositioning_FeedbackMessage_goal_id();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__ACTION__DETAIL__DYNAMIC_POSITIONING__BUILDER_HPP_
