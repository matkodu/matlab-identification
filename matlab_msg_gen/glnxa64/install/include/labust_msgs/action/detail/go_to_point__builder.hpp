// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:action/GoToPoint.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__GO_TO_POINT__BUILDER_HPP_
#define LABUST_MSGS__ACTION__DETAIL__GO_TO_POINT__BUILDER_HPP_

#include "labust_msgs/action/detail/go_to_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_GoToPoint_Goal_altitude
{
public:
  explicit Init_GoToPoint_Goal_altitude(::labust_msgs::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::GoToPoint_Goal altitude(::labust_msgs::action::GoToPoint_Goal::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_axis_enable
{
public:
  explicit Init_GoToPoint_Goal_axis_enable(::labust_msgs::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Goal_altitude axis_enable(::labust_msgs::action::GoToPoint_Goal::_axis_enable_type arg)
  {
    msg_.axis_enable = std::move(arg);
    return Init_GoToPoint_Goal_altitude(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_speed_topic
{
public:
  explicit Init_GoToPoint_Goal_speed_topic(::labust_msgs::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Goal_axis_enable speed_topic(::labust_msgs::action::GoToPoint_Goal::_speed_topic_type arg)
  {
    msg_.speed_topic = std::move(arg);
    return Init_GoToPoint_Goal_axis_enable(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_heading_topic
{
public:
  explicit Init_GoToPoint_Goal_heading_topic(::labust_msgs::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Goal_speed_topic heading_topic(::labust_msgs::action::GoToPoint_Goal::_heading_topic_type arg)
  {
    msg_.heading_topic = std::move(arg);
    return Init_GoToPoint_Goal_speed_topic(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_victory_radius
{
public:
  explicit Init_GoToPoint_Goal_victory_radius(::labust_msgs::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Goal_heading_topic victory_radius(::labust_msgs::action::GoToPoint_Goal::_victory_radius_type arg)
  {
    msg_.victory_radius = std::move(arg);
    return Init_GoToPoint_Goal_heading_topic(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_speed
{
public:
  explicit Init_GoToPoint_Goal_speed(::labust_msgs::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Goal_victory_radius speed(::labust_msgs::action::GoToPoint_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GoToPoint_Goal_victory_radius(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_heading
{
public:
  explicit Init_GoToPoint_Goal_heading(::labust_msgs::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Goal_speed heading(::labust_msgs::action::GoToPoint_Goal::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_GoToPoint_Goal_speed(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_t2
{
public:
  explicit Init_GoToPoint_Goal_t2(::labust_msgs::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Goal_heading t2(::labust_msgs::action::GoToPoint_Goal::_t2_type arg)
  {
    msg_.t2 = std::move(arg);
    return Init_GoToPoint_Goal_heading(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_t1
{
public:
  explicit Init_GoToPoint_Goal_t1(::labust_msgs::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Goal_t2 t1(::labust_msgs::action::GoToPoint_Goal::_t1_type arg)
  {
    msg_.t1 = std::move(arg);
    return Init_GoToPoint_Goal_t2(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_ref_type
{
public:
  explicit Init_GoToPoint_Goal_ref_type(::labust_msgs::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Goal_t1 ref_type(::labust_msgs::action::GoToPoint_Goal::_ref_type_type arg)
  {
    msg_.ref_type = std::move(arg);
    return Init_GoToPoint_Goal_t1(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_subtype
{
public:
  Init_GoToPoint_Goal_subtype()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_Goal_ref_type subtype(::labust_msgs::action::GoToPoint_Goal::_subtype_type arg)
  {
    msg_.subtype = std::move(arg);
    return Init_GoToPoint_Goal_ref_type(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::GoToPoint_Goal>()
{
  return labust_msgs::action::builder::Init_GoToPoint_Goal_subtype();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_GoToPoint_Result_bearing
{
public:
  explicit Init_GoToPoint_Result_bearing(::labust_msgs::action::GoToPoint_Result & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::GoToPoint_Result bearing(::labust_msgs::action::GoToPoint_Result::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Result msg_;
};

class Init_GoToPoint_Result_distance
{
public:
  explicit Init_GoToPoint_Result_distance(::labust_msgs::action::GoToPoint_Result & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Result_bearing distance(::labust_msgs::action::GoToPoint_Result::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_GoToPoint_Result_bearing(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Result msg_;
};

class Init_GoToPoint_Result_position
{
public:
  Init_GoToPoint_Result_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_Result_distance position(::labust_msgs::action::GoToPoint_Result::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GoToPoint_Result_distance(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::GoToPoint_Result>()
{
  return labust_msgs::action::builder::Init_GoToPoint_Result_position();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_GoToPoint_Feedback_bearing
{
public:
  explicit Init_GoToPoint_Feedback_bearing(::labust_msgs::action::GoToPoint_Feedback & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::GoToPoint_Feedback bearing(::labust_msgs::action::GoToPoint_Feedback::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Feedback msg_;
};

class Init_GoToPoint_Feedback_distance
{
public:
  Init_GoToPoint_Feedback_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_Feedback_bearing distance(::labust_msgs::action::GoToPoint_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_GoToPoint_Feedback_bearing(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::GoToPoint_Feedback>()
{
  return labust_msgs::action::builder::Init_GoToPoint_Feedback_distance();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_GoToPoint_SendGoal_Request_goal
{
public:
  explicit Init_GoToPoint_SendGoal_Request_goal(::labust_msgs::action::GoToPoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::GoToPoint_SendGoal_Request goal(::labust_msgs::action::GoToPoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_SendGoal_Request msg_;
};

class Init_GoToPoint_SendGoal_Request_goal_id
{
public:
  Init_GoToPoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_SendGoal_Request_goal goal_id(::labust_msgs::action::GoToPoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToPoint_SendGoal_Request_goal(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::GoToPoint_SendGoal_Request>()
{
  return labust_msgs::action::builder::Init_GoToPoint_SendGoal_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_GoToPoint_SendGoal_Response_stamp
{
public:
  explicit Init_GoToPoint_SendGoal_Response_stamp(::labust_msgs::action::GoToPoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::GoToPoint_SendGoal_Response stamp(::labust_msgs::action::GoToPoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_SendGoal_Response msg_;
};

class Init_GoToPoint_SendGoal_Response_accepted
{
public:
  Init_GoToPoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_SendGoal_Response_stamp accepted(::labust_msgs::action::GoToPoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoToPoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::GoToPoint_SendGoal_Response>()
{
  return labust_msgs::action::builder::Init_GoToPoint_SendGoal_Response_accepted();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_GoToPoint_GetResult_Request_goal_id
{
public:
  Init_GoToPoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::GoToPoint_GetResult_Request goal_id(::labust_msgs::action::GoToPoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::GoToPoint_GetResult_Request>()
{
  return labust_msgs::action::builder::Init_GoToPoint_GetResult_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_GoToPoint_GetResult_Response_result
{
public:
  explicit Init_GoToPoint_GetResult_Response_result(::labust_msgs::action::GoToPoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::GoToPoint_GetResult_Response result(::labust_msgs::action::GoToPoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_GetResult_Response msg_;
};

class Init_GoToPoint_GetResult_Response_status
{
public:
  Init_GoToPoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_GetResult_Response_result status(::labust_msgs::action::GoToPoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoToPoint_GetResult_Response_result(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::GoToPoint_GetResult_Response>()
{
  return labust_msgs::action::builder::Init_GoToPoint_GetResult_Response_status();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_GoToPoint_FeedbackMessage_feedback
{
public:
  explicit Init_GoToPoint_FeedbackMessage_feedback(::labust_msgs::action::GoToPoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::GoToPoint_FeedbackMessage feedback(::labust_msgs::action::GoToPoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_FeedbackMessage msg_;
};

class Init_GoToPoint_FeedbackMessage_goal_id
{
public:
  Init_GoToPoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_FeedbackMessage_feedback goal_id(::labust_msgs::action::GoToPoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToPoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::labust_msgs::action::GoToPoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::GoToPoint_FeedbackMessage>()
{
  return labust_msgs::action::builder::Init_GoToPoint_FeedbackMessage_goal_id();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__ACTION__DETAIL__GO_TO_POINT__BUILDER_HPP_
