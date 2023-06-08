// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:action/CourseKeeping.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__COURSE_KEEPING__BUILDER_HPP_
#define LABUST_MSGS__ACTION__DETAIL__COURSE_KEEPING__BUILDER_HPP_

#include "labust_msgs/action/detail/course_keeping__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_CourseKeeping_Goal_topics
{
public:
  explicit Init_CourseKeeping_Goal_topics(::labust_msgs::action::CourseKeeping_Goal & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::CourseKeeping_Goal topics(::labust_msgs::action::CourseKeeping_Goal::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_Goal msg_;
};

class Init_CourseKeeping_Goal_yaw
{
public:
  explicit Init_CourseKeeping_Goal_yaw(::labust_msgs::action::CourseKeeping_Goal & msg)
  : msg_(msg)
  {}
  Init_CourseKeeping_Goal_topics yaw(::labust_msgs::action::CourseKeeping_Goal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_CourseKeeping_Goal_topics(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_Goal msg_;
};

class Init_CourseKeeping_Goal_speed
{
public:
  explicit Init_CourseKeeping_Goal_speed(::labust_msgs::action::CourseKeeping_Goal & msg)
  : msg_(msg)
  {}
  Init_CourseKeeping_Goal_yaw speed(::labust_msgs::action::CourseKeeping_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_CourseKeeping_Goal_yaw(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_Goal msg_;
};

class Init_CourseKeeping_Goal_course
{
public:
  explicit Init_CourseKeeping_Goal_course(::labust_msgs::action::CourseKeeping_Goal & msg)
  : msg_(msg)
  {}
  Init_CourseKeeping_Goal_speed course(::labust_msgs::action::CourseKeeping_Goal::_course_type arg)
  {
    msg_.course = std::move(arg);
    return Init_CourseKeeping_Goal_speed(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_Goal msg_;
};

class Init_CourseKeeping_Goal_ref_type
{
public:
  explicit Init_CourseKeeping_Goal_ref_type(::labust_msgs::action::CourseKeeping_Goal & msg)
  : msg_(msg)
  {}
  Init_CourseKeeping_Goal_course ref_type(::labust_msgs::action::CourseKeeping_Goal::_ref_type_type arg)
  {
    msg_.ref_type = std::move(arg);
    return Init_CourseKeeping_Goal_course(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_Goal msg_;
};

class Init_CourseKeeping_Goal_subtype
{
public:
  Init_CourseKeeping_Goal_subtype()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CourseKeeping_Goal_ref_type subtype(::labust_msgs::action::CourseKeeping_Goal::_subtype_type arg)
  {
    msg_.subtype = std::move(arg);
    return Init_CourseKeeping_Goal_ref_type(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::CourseKeeping_Goal>()
{
  return labust_msgs::action::builder::Init_CourseKeeping_Goal_subtype();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_CourseKeeping_Result_success
{
public:
  Init_CourseKeeping_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::CourseKeeping_Result success(::labust_msgs::action::CourseKeeping_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::CourseKeeping_Result>()
{
  return labust_msgs::action::builder::Init_CourseKeeping_Result_success();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_CourseKeeping_Feedback_feedback
{
public:
  Init_CourseKeeping_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::CourseKeeping_Feedback feedback(::labust_msgs::action::CourseKeeping_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::CourseKeeping_Feedback>()
{
  return labust_msgs::action::builder::Init_CourseKeeping_Feedback_feedback();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_CourseKeeping_SendGoal_Request_goal
{
public:
  explicit Init_CourseKeeping_SendGoal_Request_goal(::labust_msgs::action::CourseKeeping_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::CourseKeeping_SendGoal_Request goal(::labust_msgs::action::CourseKeeping_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_SendGoal_Request msg_;
};

class Init_CourseKeeping_SendGoal_Request_goal_id
{
public:
  Init_CourseKeeping_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CourseKeeping_SendGoal_Request_goal goal_id(::labust_msgs::action::CourseKeeping_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CourseKeeping_SendGoal_Request_goal(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::CourseKeeping_SendGoal_Request>()
{
  return labust_msgs::action::builder::Init_CourseKeeping_SendGoal_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_CourseKeeping_SendGoal_Response_stamp
{
public:
  explicit Init_CourseKeeping_SendGoal_Response_stamp(::labust_msgs::action::CourseKeeping_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::CourseKeeping_SendGoal_Response stamp(::labust_msgs::action::CourseKeeping_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_SendGoal_Response msg_;
};

class Init_CourseKeeping_SendGoal_Response_accepted
{
public:
  Init_CourseKeeping_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CourseKeeping_SendGoal_Response_stamp accepted(::labust_msgs::action::CourseKeeping_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CourseKeeping_SendGoal_Response_stamp(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::CourseKeeping_SendGoal_Response>()
{
  return labust_msgs::action::builder::Init_CourseKeeping_SendGoal_Response_accepted();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_CourseKeeping_GetResult_Request_goal_id
{
public:
  Init_CourseKeeping_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::CourseKeeping_GetResult_Request goal_id(::labust_msgs::action::CourseKeeping_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::CourseKeeping_GetResult_Request>()
{
  return labust_msgs::action::builder::Init_CourseKeeping_GetResult_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_CourseKeeping_GetResult_Response_result
{
public:
  explicit Init_CourseKeeping_GetResult_Response_result(::labust_msgs::action::CourseKeeping_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::CourseKeeping_GetResult_Response result(::labust_msgs::action::CourseKeeping_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_GetResult_Response msg_;
};

class Init_CourseKeeping_GetResult_Response_status
{
public:
  Init_CourseKeeping_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CourseKeeping_GetResult_Response_result status(::labust_msgs::action::CourseKeeping_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CourseKeeping_GetResult_Response_result(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::CourseKeeping_GetResult_Response>()
{
  return labust_msgs::action::builder::Init_CourseKeeping_GetResult_Response_status();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_CourseKeeping_FeedbackMessage_feedback
{
public:
  explicit Init_CourseKeeping_FeedbackMessage_feedback(::labust_msgs::action::CourseKeeping_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::CourseKeeping_FeedbackMessage feedback(::labust_msgs::action::CourseKeeping_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_FeedbackMessage msg_;
};

class Init_CourseKeeping_FeedbackMessage_goal_id
{
public:
  Init_CourseKeeping_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CourseKeeping_FeedbackMessage_feedback goal_id(::labust_msgs::action::CourseKeeping_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CourseKeeping_FeedbackMessage_feedback(msg_);
  }

private:
  ::labust_msgs::action::CourseKeeping_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::CourseKeeping_FeedbackMessage>()
{
  return labust_msgs::action::builder::Init_CourseKeeping_FeedbackMessage_goal_id();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__ACTION__DETAIL__COURSE_KEEPING__BUILDER_HPP_
