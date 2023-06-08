// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from labust_msgs:action/DynamicPositioning.idl
// generated code does not contain a copyright notice

#ifndef LABUST_MSGS__ACTION__DETAIL__DYNAMIC_POSITIONING__TRAITS_HPP_
#define LABUST_MSGS__ACTION__DETAIL__DYNAMIC_POSITIONING__TRAITS_HPP_

#include "labust_msgs/action/detail/dynamic_positioning__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 't1'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::action::DynamicPositioning_Goal>()
{
  return "labust_msgs::action::DynamicPositioning_Goal";
}

template<>
inline const char * name<labust_msgs::action::DynamicPositioning_Goal>()
{
  return "labust_msgs/action/DynamicPositioning_Goal";
}

template<>
struct has_fixed_size<labust_msgs::action::DynamicPositioning_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<labust_msgs::action::DynamicPositioning_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<labust_msgs::action::DynamicPositioning_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'position'
// already included above
// #include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::action::DynamicPositioning_Result>()
{
  return "labust_msgs::action::DynamicPositioning_Result";
}

template<>
inline const char * name<labust_msgs::action::DynamicPositioning_Result>()
{
  return "labust_msgs/action/DynamicPositioning_Result";
}

template<>
struct has_fixed_size<labust_msgs::action::DynamicPositioning_Result>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct has_bounded_size<labust_msgs::action::DynamicPositioning_Result>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct is_message<labust_msgs::action::DynamicPositioning_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error'
// already included above
// #include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::action::DynamicPositioning_Feedback>()
{
  return "labust_msgs::action::DynamicPositioning_Feedback";
}

template<>
inline const char * name<labust_msgs::action::DynamicPositioning_Feedback>()
{
  return "labust_msgs/action/DynamicPositioning_Feedback";
}

template<>
struct has_fixed_size<labust_msgs::action::DynamicPositioning_Feedback>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct has_bounded_size<labust_msgs::action::DynamicPositioning_Feedback>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct is_message<labust_msgs::action::DynamicPositioning_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "labust_msgs/action/detail/dynamic_positioning__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::action::DynamicPositioning_SendGoal_Request>()
{
  return "labust_msgs::action::DynamicPositioning_SendGoal_Request";
}

template<>
inline const char * name<labust_msgs::action::DynamicPositioning_SendGoal_Request>()
{
  return "labust_msgs/action/DynamicPositioning_SendGoal_Request";
}

template<>
struct has_fixed_size<labust_msgs::action::DynamicPositioning_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<labust_msgs::action::DynamicPositioning_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<labust_msgs::action::DynamicPositioning_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<labust_msgs::action::DynamicPositioning_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<labust_msgs::action::DynamicPositioning_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::action::DynamicPositioning_SendGoal_Response>()
{
  return "labust_msgs::action::DynamicPositioning_SendGoal_Response";
}

template<>
inline const char * name<labust_msgs::action::DynamicPositioning_SendGoal_Response>()
{
  return "labust_msgs/action/DynamicPositioning_SendGoal_Response";
}

template<>
struct has_fixed_size<labust_msgs::action::DynamicPositioning_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<labust_msgs::action::DynamicPositioning_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<labust_msgs::action::DynamicPositioning_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::action::DynamicPositioning_SendGoal>()
{
  return "labust_msgs::action::DynamicPositioning_SendGoal";
}

template<>
inline const char * name<labust_msgs::action::DynamicPositioning_SendGoal>()
{
  return "labust_msgs/action/DynamicPositioning_SendGoal";
}

template<>
struct has_fixed_size<labust_msgs::action::DynamicPositioning_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::action::DynamicPositioning_SendGoal_Request>::value &&
    has_fixed_size<labust_msgs::action::DynamicPositioning_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::action::DynamicPositioning_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::action::DynamicPositioning_SendGoal_Request>::value &&
    has_bounded_size<labust_msgs::action::DynamicPositioning_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::action::DynamicPositioning_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::action::DynamicPositioning_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::action::DynamicPositioning_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::action::DynamicPositioning_GetResult_Request>()
{
  return "labust_msgs::action::DynamicPositioning_GetResult_Request";
}

template<>
inline const char * name<labust_msgs::action::DynamicPositioning_GetResult_Request>()
{
  return "labust_msgs/action/DynamicPositioning_GetResult_Request";
}

template<>
struct has_fixed_size<labust_msgs::action::DynamicPositioning_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<labust_msgs::action::DynamicPositioning_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<labust_msgs::action::DynamicPositioning_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::action::DynamicPositioning_GetResult_Response>()
{
  return "labust_msgs::action::DynamicPositioning_GetResult_Response";
}

template<>
inline const char * name<labust_msgs::action::DynamicPositioning_GetResult_Response>()
{
  return "labust_msgs/action/DynamicPositioning_GetResult_Response";
}

template<>
struct has_fixed_size<labust_msgs::action::DynamicPositioning_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<labust_msgs::action::DynamicPositioning_Result>::value> {};

template<>
struct has_bounded_size<labust_msgs::action::DynamicPositioning_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<labust_msgs::action::DynamicPositioning_Result>::value> {};

template<>
struct is_message<labust_msgs::action::DynamicPositioning_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::action::DynamicPositioning_GetResult>()
{
  return "labust_msgs::action::DynamicPositioning_GetResult";
}

template<>
inline const char * name<labust_msgs::action::DynamicPositioning_GetResult>()
{
  return "labust_msgs/action/DynamicPositioning_GetResult";
}

template<>
struct has_fixed_size<labust_msgs::action::DynamicPositioning_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<labust_msgs::action::DynamicPositioning_GetResult_Request>::value &&
    has_fixed_size<labust_msgs::action::DynamicPositioning_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<labust_msgs::action::DynamicPositioning_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<labust_msgs::action::DynamicPositioning_GetResult_Request>::value &&
    has_bounded_size<labust_msgs::action::DynamicPositioning_GetResult_Response>::value
  >
{
};

template<>
struct is_service<labust_msgs::action::DynamicPositioning_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<labust_msgs::action::DynamicPositioning_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<labust_msgs::action::DynamicPositioning_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "labust_msgs/action/detail/dynamic_positioning__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<labust_msgs::action::DynamicPositioning_FeedbackMessage>()
{
  return "labust_msgs::action::DynamicPositioning_FeedbackMessage";
}

template<>
inline const char * name<labust_msgs::action::DynamicPositioning_FeedbackMessage>()
{
  return "labust_msgs/action/DynamicPositioning_FeedbackMessage";
}

template<>
struct has_fixed_size<labust_msgs::action::DynamicPositioning_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<labust_msgs::action::DynamicPositioning_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<labust_msgs::action::DynamicPositioning_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<labust_msgs::action::DynamicPositioning_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<labust_msgs::action::DynamicPositioning_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<labust_msgs::action::DynamicPositioning>
  : std::true_type
{
};

template<>
struct is_action_goal<labust_msgs::action::DynamicPositioning_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<labust_msgs::action::DynamicPositioning_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<labust_msgs::action::DynamicPositioning_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // LABUST_MSGS__ACTION__DETAIL__DYNAMIC_POSITIONING__TRAITS_HPP_
