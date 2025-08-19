// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from demo_interfaces_base:action/Action.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__ACTION__DETAIL__ACTION__TRAITS_HPP_
#define DEMO_INTERFACES_BASE__ACTION__DETAIL__ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "demo_interfaces_base/action/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const Action_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace demo_interfaces_base

namespace rosidl_generator_traits
{

[[deprecated("use demo_interfaces_base::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const demo_interfaces_base::action::Action_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::Action_Goal & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::Action_Goal>()
{
  return "demo_interfaces_base::action::Action_Goal";
}

template<>
inline const char * name<demo_interfaces_base::action::Action_Goal>()
{
  return "demo_interfaces_base/action/Action_Goal";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::Action_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::Action_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<demo_interfaces_base::action::Action_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const Action_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace demo_interfaces_base

namespace rosidl_generator_traits
{

[[deprecated("use demo_interfaces_base::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const demo_interfaces_base::action::Action_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::Action_Result & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::Action_Result>()
{
  return "demo_interfaces_base::action::Action_Result";
}

template<>
inline const char * name<demo_interfaces_base::action::Action_Result>()
{
  return "demo_interfaces_base/action/Action_Result";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::Action_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::Action_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<demo_interfaces_base::action::Action_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const Action_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace demo_interfaces_base

namespace rosidl_generator_traits
{

[[deprecated("use demo_interfaces_base::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const demo_interfaces_base::action::Action_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::Action_Feedback & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::Action_Feedback>()
{
  return "demo_interfaces_base::action::Action_Feedback";
}

template<>
inline const char * name<demo_interfaces_base::action::Action_Feedback>()
{
  return "demo_interfaces_base/action/Action_Feedback";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::Action_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::Action_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<demo_interfaces_base::action::Action_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "demo_interfaces_base/action/detail/action__traits.hpp"

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const Action_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace demo_interfaces_base

namespace rosidl_generator_traits
{

[[deprecated("use demo_interfaces_base::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const demo_interfaces_base::action::Action_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::Action_SendGoal_Request & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::Action_SendGoal_Request>()
{
  return "demo_interfaces_base::action::Action_SendGoal_Request";
}

template<>
inline const char * name<demo_interfaces_base::action::Action_SendGoal_Request>()
{
  return "demo_interfaces_base/action/Action_SendGoal_Request";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::Action_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<demo_interfaces_base::action::Action_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::Action_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<demo_interfaces_base::action::Action_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<demo_interfaces_base::action::Action_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const Action_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace demo_interfaces_base

namespace rosidl_generator_traits
{

[[deprecated("use demo_interfaces_base::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const demo_interfaces_base::action::Action_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::Action_SendGoal_Response & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::Action_SendGoal_Response>()
{
  return "demo_interfaces_base::action::Action_SendGoal_Response";
}

template<>
inline const char * name<demo_interfaces_base::action::Action_SendGoal_Response>()
{
  return "demo_interfaces_base/action/Action_SendGoal_Response";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::Action_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::Action_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<demo_interfaces_base::action::Action_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<demo_interfaces_base::action::Action_SendGoal>()
{
  return "demo_interfaces_base::action::Action_SendGoal";
}

template<>
inline const char * name<demo_interfaces_base::action::Action_SendGoal>()
{
  return "demo_interfaces_base/action/Action_SendGoal";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::Action_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<demo_interfaces_base::action::Action_SendGoal_Request>::value &&
    has_fixed_size<demo_interfaces_base::action::Action_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<demo_interfaces_base::action::Action_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<demo_interfaces_base::action::Action_SendGoal_Request>::value &&
    has_bounded_size<demo_interfaces_base::action::Action_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<demo_interfaces_base::action::Action_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<demo_interfaces_base::action::Action_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<demo_interfaces_base::action::Action_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const Action_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace demo_interfaces_base

namespace rosidl_generator_traits
{

[[deprecated("use demo_interfaces_base::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const demo_interfaces_base::action::Action_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::Action_GetResult_Request & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::Action_GetResult_Request>()
{
  return "demo_interfaces_base::action::Action_GetResult_Request";
}

template<>
inline const char * name<demo_interfaces_base::action::Action_GetResult_Request>()
{
  return "demo_interfaces_base/action/Action_GetResult_Request";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::Action_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::Action_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<demo_interfaces_base::action::Action_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "demo_interfaces_base/action/detail/action__traits.hpp"

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const Action_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace demo_interfaces_base

namespace rosidl_generator_traits
{

[[deprecated("use demo_interfaces_base::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const demo_interfaces_base::action::Action_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::Action_GetResult_Response & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::Action_GetResult_Response>()
{
  return "demo_interfaces_base::action::Action_GetResult_Response";
}

template<>
inline const char * name<demo_interfaces_base::action::Action_GetResult_Response>()
{
  return "demo_interfaces_base/action/Action_GetResult_Response";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::Action_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<demo_interfaces_base::action::Action_Result>::value> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::Action_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<demo_interfaces_base::action::Action_Result>::value> {};

template<>
struct is_message<demo_interfaces_base::action::Action_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<demo_interfaces_base::action::Action_GetResult>()
{
  return "demo_interfaces_base::action::Action_GetResult";
}

template<>
inline const char * name<demo_interfaces_base::action::Action_GetResult>()
{
  return "demo_interfaces_base/action/Action_GetResult";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::Action_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<demo_interfaces_base::action::Action_GetResult_Request>::value &&
    has_fixed_size<demo_interfaces_base::action::Action_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<demo_interfaces_base::action::Action_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<demo_interfaces_base::action::Action_GetResult_Request>::value &&
    has_bounded_size<demo_interfaces_base::action::Action_GetResult_Response>::value
  >
{
};

template<>
struct is_service<demo_interfaces_base::action::Action_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<demo_interfaces_base::action::Action_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<demo_interfaces_base::action::Action_GetResult_Response>
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
// #include "demo_interfaces_base/action/detail/action__traits.hpp"

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const Action_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace demo_interfaces_base

namespace rosidl_generator_traits
{

[[deprecated("use demo_interfaces_base::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const demo_interfaces_base::action::Action_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::Action_FeedbackMessage & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::Action_FeedbackMessage>()
{
  return "demo_interfaces_base::action::Action_FeedbackMessage";
}

template<>
inline const char * name<demo_interfaces_base::action::Action_FeedbackMessage>()
{
  return "demo_interfaces_base/action/Action_FeedbackMessage";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::Action_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<demo_interfaces_base::action::Action_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::Action_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<demo_interfaces_base::action::Action_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<demo_interfaces_base::action::Action_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<demo_interfaces_base::action::Action>
  : std::true_type
{
};

template<>
struct is_action_goal<demo_interfaces_base::action::Action_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<demo_interfaces_base::action::Action_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<demo_interfaces_base::action::Action_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DEMO_INTERFACES_BASE__ACTION__DETAIL__ACTION__TRAITS_HPP_
