// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:action/IdentifyModel.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__IDENTIFY_MODEL__BUILDER_HPP_
#define LABUST_MSGS__ACTION__DETAIL__IDENTIFY_MODEL__BUILDER_HPP_

#include "labust_msgs/action/detail/identify_model__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_IdentifyModel_Goal_dof
{
public:
  Init_IdentifyModel_Goal_dof()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::IdentifyModel_Goal dof(::labust_msgs::action::IdentifyModel_Goal::_dof_type arg)
  {
    msg_.dof = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::IdentifyModel_Goal>()
{
  return labust_msgs::action::builder::Init_IdentifyModel_Goal_dof();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_IdentifyModel_Result_ident_models
{
public:
  Init_IdentifyModel_Result_ident_models()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::IdentifyModel_Result ident_models(::labust_msgs::action::IdentifyModel_Result::_ident_models_type arg)
  {
    msg_.ident_models = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::IdentifyModel_Result>()
{
  return labust_msgs::action::builder::Init_IdentifyModel_Result_ident_models();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_IdentifyModel_Feedback_additional_data
{
public:
  explicit Init_IdentifyModel_Feedback_additional_data(::labust_msgs::action::IdentifyModel_Feedback & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::IdentifyModel_Feedback additional_data(::labust_msgs::action::IdentifyModel_Feedback::_additional_data_type arg)
  {
    msg_.additional_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_Feedback msg_;
};

class Init_IdentifyModel_Feedback_error
{
public:
  explicit Init_IdentifyModel_Feedback_error(::labust_msgs::action::IdentifyModel_Feedback & msg)
  : msg_(msg)
  {}
  Init_IdentifyModel_Feedback_additional_data error(::labust_msgs::action::IdentifyModel_Feedback::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_IdentifyModel_Feedback_additional_data(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_Feedback msg_;
};

class Init_IdentifyModel_Feedback_progress
{
public:
  explicit Init_IdentifyModel_Feedback_progress(::labust_msgs::action::IdentifyModel_Feedback & msg)
  : msg_(msg)
  {}
  Init_IdentifyModel_Feedback_error progress(::labust_msgs::action::IdentifyModel_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_IdentifyModel_Feedback_error(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_Feedback msg_;
};

class Init_IdentifyModel_Feedback_dof
{
public:
  Init_IdentifyModel_Feedback_dof()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IdentifyModel_Feedback_progress dof(::labust_msgs::action::IdentifyModel_Feedback::_dof_type arg)
  {
    msg_.dof = std::move(arg);
    return Init_IdentifyModel_Feedback_progress(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::IdentifyModel_Feedback>()
{
  return labust_msgs::action::builder::Init_IdentifyModel_Feedback_dof();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_IdentifyModel_SendGoal_Request_goal
{
public:
  explicit Init_IdentifyModel_SendGoal_Request_goal(::labust_msgs::action::IdentifyModel_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::IdentifyModel_SendGoal_Request goal(::labust_msgs::action::IdentifyModel_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_SendGoal_Request msg_;
};

class Init_IdentifyModel_SendGoal_Request_goal_id
{
public:
  Init_IdentifyModel_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IdentifyModel_SendGoal_Request_goal goal_id(::labust_msgs::action::IdentifyModel_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_IdentifyModel_SendGoal_Request_goal(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::IdentifyModel_SendGoal_Request>()
{
  return labust_msgs::action::builder::Init_IdentifyModel_SendGoal_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_IdentifyModel_SendGoal_Response_stamp
{
public:
  explicit Init_IdentifyModel_SendGoal_Response_stamp(::labust_msgs::action::IdentifyModel_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::IdentifyModel_SendGoal_Response stamp(::labust_msgs::action::IdentifyModel_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_SendGoal_Response msg_;
};

class Init_IdentifyModel_SendGoal_Response_accepted
{
public:
  Init_IdentifyModel_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IdentifyModel_SendGoal_Response_stamp accepted(::labust_msgs::action::IdentifyModel_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_IdentifyModel_SendGoal_Response_stamp(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::IdentifyModel_SendGoal_Response>()
{
  return labust_msgs::action::builder::Init_IdentifyModel_SendGoal_Response_accepted();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_IdentifyModel_GetResult_Request_goal_id
{
public:
  Init_IdentifyModel_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::IdentifyModel_GetResult_Request goal_id(::labust_msgs::action::IdentifyModel_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::IdentifyModel_GetResult_Request>()
{
  return labust_msgs::action::builder::Init_IdentifyModel_GetResult_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_IdentifyModel_GetResult_Response_result
{
public:
  explicit Init_IdentifyModel_GetResult_Response_result(::labust_msgs::action::IdentifyModel_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::IdentifyModel_GetResult_Response result(::labust_msgs::action::IdentifyModel_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_GetResult_Response msg_;
};

class Init_IdentifyModel_GetResult_Response_status
{
public:
  Init_IdentifyModel_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IdentifyModel_GetResult_Response_result status(::labust_msgs::action::IdentifyModel_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_IdentifyModel_GetResult_Response_result(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::IdentifyModel_GetResult_Response>()
{
  return labust_msgs::action::builder::Init_IdentifyModel_GetResult_Response_status();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_IdentifyModel_FeedbackMessage_feedback
{
public:
  explicit Init_IdentifyModel_FeedbackMessage_feedback(::labust_msgs::action::IdentifyModel_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::IdentifyModel_FeedbackMessage feedback(::labust_msgs::action::IdentifyModel_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_FeedbackMessage msg_;
};

class Init_IdentifyModel_FeedbackMessage_goal_id
{
public:
  Init_IdentifyModel_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IdentifyModel_FeedbackMessage_feedback goal_id(::labust_msgs::action::IdentifyModel_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_IdentifyModel_FeedbackMessage_feedback(msg_);
  }

private:
  ::labust_msgs::action::IdentifyModel_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::IdentifyModel_FeedbackMessage>()
{
  return labust_msgs::action::builder::Init_IdentifyModel_FeedbackMessage_goal_id();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__ACTION__DETAIL__IDENTIFY_MODEL__BUILDER_HPP_
