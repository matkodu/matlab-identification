// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from labust_msgs:action/Docking.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__DOCKING__BUILDER_HPP_
#define LABUST_MSGS__ACTION__DETAIL__DOCKING__BUILDER_HPP_

#include "labust_msgs/action/detail/docking__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_Docking_Goal_surge_stdev
{
public:
  explicit Init_Docking_Goal_surge_stdev(::labust_msgs::action::Docking_Goal & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::Docking_Goal surge_stdev(::labust_msgs::action::Docking_Goal::_surge_stdev_type arg)
  {
    msg_.surge_stdev = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::Docking_Goal msg_;
};

class Init_Docking_Goal_max_surge_speed
{
public:
  explicit Init_Docking_Goal_max_surge_speed(::labust_msgs::action::Docking_Goal & msg)
  : msg_(msg)
  {}
  Init_Docking_Goal_surge_stdev max_surge_speed(::labust_msgs::action::Docking_Goal::_max_surge_speed_type arg)
  {
    msg_.max_surge_speed = std::move(arg);
    return Init_Docking_Goal_surge_stdev(msg_);
  }

private:
  ::labust_msgs::action::Docking_Goal msg_;
};

class Init_Docking_Goal_max_yaw_rate
{
public:
  explicit Init_Docking_Goal_max_yaw_rate(::labust_msgs::action::Docking_Goal & msg)
  : msg_(msg)
  {}
  Init_Docking_Goal_max_surge_speed max_yaw_rate(::labust_msgs::action::Docking_Goal::_max_yaw_rate_type arg)
  {
    msg_.max_yaw_rate = std::move(arg);
    return Init_Docking_Goal_max_surge_speed(msg_);
  }

private:
  ::labust_msgs::action::Docking_Goal msg_;
};

class Init_Docking_Goal_search_yaw_rate
{
public:
  explicit Init_Docking_Goal_search_yaw_rate(::labust_msgs::action::Docking_Goal & msg)
  : msg_(msg)
  {}
  Init_Docking_Goal_max_yaw_rate search_yaw_rate(::labust_msgs::action::Docking_Goal::_search_yaw_rate_type arg)
  {
    msg_.search_yaw_rate = std::move(arg);
    return Init_Docking_Goal_max_yaw_rate(msg_);
  }

private:
  ::labust_msgs::action::Docking_Goal msg_;
};

class Init_Docking_Goal_docking_slot
{
public:
  explicit Init_Docking_Goal_docking_slot(::labust_msgs::action::Docking_Goal & msg)
  : msg_(msg)
  {}
  Init_Docking_Goal_search_yaw_rate docking_slot(::labust_msgs::action::Docking_Goal::_docking_slot_type arg)
  {
    msg_.docking_slot = std::move(arg);
    return Init_Docking_Goal_search_yaw_rate(msg_);
  }

private:
  ::labust_msgs::action::Docking_Goal msg_;
};

class Init_Docking_Goal_docking_action
{
public:
  Init_Docking_Goal_docking_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Docking_Goal_docking_slot docking_action(::labust_msgs::action::Docking_Goal::_docking_action_type arg)
  {
    msg_.docking_action = std::move(arg);
    return Init_Docking_Goal_docking_slot(msg_);
  }

private:
  ::labust_msgs::action::Docking_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::Docking_Goal>()
{
  return labust_msgs::action::builder::Init_Docking_Goal_docking_action();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_Docking_Result_success
{
public:
  Init_Docking_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::Docking_Result success(::labust_msgs::action::Docking_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::Docking_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::Docking_Result>()
{
  return labust_msgs::action::builder::Init_Docking_Result_success();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::Docking_Feedback>()
{
  return ::labust_msgs::action::Docking_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_Docking_SendGoal_Request_goal
{
public:
  explicit Init_Docking_SendGoal_Request_goal(::labust_msgs::action::Docking_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::Docking_SendGoal_Request goal(::labust_msgs::action::Docking_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::Docking_SendGoal_Request msg_;
};

class Init_Docking_SendGoal_Request_goal_id
{
public:
  Init_Docking_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Docking_SendGoal_Request_goal goal_id(::labust_msgs::action::Docking_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Docking_SendGoal_Request_goal(msg_);
  }

private:
  ::labust_msgs::action::Docking_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::Docking_SendGoal_Request>()
{
  return labust_msgs::action::builder::Init_Docking_SendGoal_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_Docking_SendGoal_Response_stamp
{
public:
  explicit Init_Docking_SendGoal_Response_stamp(::labust_msgs::action::Docking_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::Docking_SendGoal_Response stamp(::labust_msgs::action::Docking_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::Docking_SendGoal_Response msg_;
};

class Init_Docking_SendGoal_Response_accepted
{
public:
  Init_Docking_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Docking_SendGoal_Response_stamp accepted(::labust_msgs::action::Docking_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Docking_SendGoal_Response_stamp(msg_);
  }

private:
  ::labust_msgs::action::Docking_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::Docking_SendGoal_Response>()
{
  return labust_msgs::action::builder::Init_Docking_SendGoal_Response_accepted();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_Docking_GetResult_Request_goal_id
{
public:
  Init_Docking_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::labust_msgs::action::Docking_GetResult_Request goal_id(::labust_msgs::action::Docking_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::Docking_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::Docking_GetResult_Request>()
{
  return labust_msgs::action::builder::Init_Docking_GetResult_Request_goal_id();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_Docking_GetResult_Response_result
{
public:
  explicit Init_Docking_GetResult_Response_result(::labust_msgs::action::Docking_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::Docking_GetResult_Response result(::labust_msgs::action::Docking_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::Docking_GetResult_Response msg_;
};

class Init_Docking_GetResult_Response_status
{
public:
  Init_Docking_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Docking_GetResult_Response_result status(::labust_msgs::action::Docking_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Docking_GetResult_Response_result(msg_);
  }

private:
  ::labust_msgs::action::Docking_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::Docking_GetResult_Response>()
{
  return labust_msgs::action::builder::Init_Docking_GetResult_Response_status();
}

}  // namespace labust_msgs


namespace labust_msgs
{

namespace action
{

namespace builder
{

class Init_Docking_FeedbackMessage_feedback
{
public:
  explicit Init_Docking_FeedbackMessage_feedback(::labust_msgs::action::Docking_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::labust_msgs::action::Docking_FeedbackMessage feedback(::labust_msgs::action::Docking_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::labust_msgs::action::Docking_FeedbackMessage msg_;
};

class Init_Docking_FeedbackMessage_goal_id
{
public:
  Init_Docking_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Docking_FeedbackMessage_feedback goal_id(::labust_msgs::action::Docking_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Docking_FeedbackMessage_feedback(msg_);
  }

private:
  ::labust_msgs::action::Docking_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::labust_msgs::action::Docking_FeedbackMessage>()
{
  return labust_msgs::action::builder::Init_Docking_FeedbackMessage_goal_id();
}

}  // namespace labust_msgs

#endif  // LABUST_MSGS__ACTION__DETAIL__DOCKING__BUILDER_HPP_
