// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from demo_interfaces_base:action/RealTimeDistance.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__ACTION__DETAIL__REAL_TIME_DISTANCE__TRAITS_HPP_
#define DEMO_INTERFACES_BASE__ACTION__DETAIL__REAL_TIME_DISTANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "demo_interfaces_base/action/detail/real_time_distance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const RealTimeDistance_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_x
  {
    out << "goal_x: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_x, out);
    out << ", ";
  }

  // member: goal_y
  {
    out << "goal_y: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_y, out);
    out << ", ";
  }

  // member: goal_theta
  {
    out << "goal_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RealTimeDistance_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_x: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_x, out);
    out << "\n";
  }

  // member: goal_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_y: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_y, out);
    out << "\n";
  }

  // member: goal_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RealTimeDistance_Goal & msg, bool use_flow_style = false)
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
  const demo_interfaces_base::action::RealTimeDistance_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::RealTimeDistance_Goal & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::RealTimeDistance_Goal>()
{
  return "demo_interfaces_base::action::RealTimeDistance_Goal";
}

template<>
inline const char * name<demo_interfaces_base::action::RealTimeDistance_Goal>()
{
  return "demo_interfaces_base/action/RealTimeDistance_Goal";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::RealTimeDistance_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::RealTimeDistance_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<demo_interfaces_base::action::RealTimeDistance_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const RealTimeDistance_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle_x
  {
    out << "turtle_x: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_x, out);
    out << ", ";
  }

  // member: turtle_y
  {
    out << "turtle_y: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_y, out);
    out << ", ";
  }

  // member: turtle_theta
  {
    out << "turtle_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RealTimeDistance_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtle_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_x: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_x, out);
    out << "\n";
  }

  // member: turtle_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_y: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_y, out);
    out << "\n";
  }

  // member: turtle_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RealTimeDistance_Result & msg, bool use_flow_style = false)
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
  const demo_interfaces_base::action::RealTimeDistance_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::RealTimeDistance_Result & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::RealTimeDistance_Result>()
{
  return "demo_interfaces_base::action::RealTimeDistance_Result";
}

template<>
inline const char * name<demo_interfaces_base::action::RealTimeDistance_Result>()
{
  return "demo_interfaces_base/action/RealTimeDistance_Result";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::RealTimeDistance_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::RealTimeDistance_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<demo_interfaces_base::action::RealTimeDistance_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const RealTimeDistance_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_distance
  {
    out << "current_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.current_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RealTimeDistance_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.current_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RealTimeDistance_Feedback & msg, bool use_flow_style = false)
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
  const demo_interfaces_base::action::RealTimeDistance_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::RealTimeDistance_Feedback & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::RealTimeDistance_Feedback>()
{
  return "demo_interfaces_base::action::RealTimeDistance_Feedback";
}

template<>
inline const char * name<demo_interfaces_base::action::RealTimeDistance_Feedback>()
{
  return "demo_interfaces_base/action/RealTimeDistance_Feedback";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::RealTimeDistance_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::RealTimeDistance_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<demo_interfaces_base::action::RealTimeDistance_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "demo_interfaces_base/action/detail/real_time_distance__traits.hpp"

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const RealTimeDistance_SendGoal_Request & msg,
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
  const RealTimeDistance_SendGoal_Request & msg,
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

inline std::string to_yaml(const RealTimeDistance_SendGoal_Request & msg, bool use_flow_style = false)
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
  const demo_interfaces_base::action::RealTimeDistance_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::RealTimeDistance_SendGoal_Request & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request>()
{
  return "demo_interfaces_base::action::RealTimeDistance_SendGoal_Request";
}

template<>
inline const char * name<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request>()
{
  return "demo_interfaces_base/action/RealTimeDistance_SendGoal_Request";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<demo_interfaces_base::action::RealTimeDistance_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<demo_interfaces_base::action::RealTimeDistance_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request>
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
  const RealTimeDistance_SendGoal_Response & msg,
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
  const RealTimeDistance_SendGoal_Response & msg,
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

inline std::string to_yaml(const RealTimeDistance_SendGoal_Response & msg, bool use_flow_style = false)
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
  const demo_interfaces_base::action::RealTimeDistance_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::RealTimeDistance_SendGoal_Response & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response>()
{
  return "demo_interfaces_base::action::RealTimeDistance_SendGoal_Response";
}

template<>
inline const char * name<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response>()
{
  return "demo_interfaces_base/action/RealTimeDistance_SendGoal_Response";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<demo_interfaces_base::action::RealTimeDistance_SendGoal>()
{
  return "demo_interfaces_base::action::RealTimeDistance_SendGoal";
}

template<>
inline const char * name<demo_interfaces_base::action::RealTimeDistance_SendGoal>()
{
  return "demo_interfaces_base/action/RealTimeDistance_SendGoal";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::RealTimeDistance_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request>::value &&
    has_fixed_size<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<demo_interfaces_base::action::RealTimeDistance_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request>::value &&
    has_bounded_size<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<demo_interfaces_base::action::RealTimeDistance_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response>
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
  const RealTimeDistance_GetResult_Request & msg,
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
  const RealTimeDistance_GetResult_Request & msg,
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

inline std::string to_yaml(const RealTimeDistance_GetResult_Request & msg, bool use_flow_style = false)
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
  const demo_interfaces_base::action::RealTimeDistance_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::RealTimeDistance_GetResult_Request & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::RealTimeDistance_GetResult_Request>()
{
  return "demo_interfaces_base::action::RealTimeDistance_GetResult_Request";
}

template<>
inline const char * name<demo_interfaces_base::action::RealTimeDistance_GetResult_Request>()
{
  return "demo_interfaces_base/action/RealTimeDistance_GetResult_Request";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::RealTimeDistance_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::RealTimeDistance_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<demo_interfaces_base::action::RealTimeDistance_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "demo_interfaces_base/action/detail/real_time_distance__traits.hpp"

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const RealTimeDistance_GetResult_Response & msg,
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
  const RealTimeDistance_GetResult_Response & msg,
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

inline std::string to_yaml(const RealTimeDistance_GetResult_Response & msg, bool use_flow_style = false)
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
  const demo_interfaces_base::action::RealTimeDistance_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::RealTimeDistance_GetResult_Response & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::RealTimeDistance_GetResult_Response>()
{
  return "demo_interfaces_base::action::RealTimeDistance_GetResult_Response";
}

template<>
inline const char * name<demo_interfaces_base::action::RealTimeDistance_GetResult_Response>()
{
  return "demo_interfaces_base/action/RealTimeDistance_GetResult_Response";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::RealTimeDistance_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<demo_interfaces_base::action::RealTimeDistance_Result>::value> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::RealTimeDistance_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<demo_interfaces_base::action::RealTimeDistance_Result>::value> {};

template<>
struct is_message<demo_interfaces_base::action::RealTimeDistance_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<demo_interfaces_base::action::RealTimeDistance_GetResult>()
{
  return "demo_interfaces_base::action::RealTimeDistance_GetResult";
}

template<>
inline const char * name<demo_interfaces_base::action::RealTimeDistance_GetResult>()
{
  return "demo_interfaces_base/action/RealTimeDistance_GetResult";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::RealTimeDistance_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<demo_interfaces_base::action::RealTimeDistance_GetResult_Request>::value &&
    has_fixed_size<demo_interfaces_base::action::RealTimeDistance_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<demo_interfaces_base::action::RealTimeDistance_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<demo_interfaces_base::action::RealTimeDistance_GetResult_Request>::value &&
    has_bounded_size<demo_interfaces_base::action::RealTimeDistance_GetResult_Response>::value
  >
{
};

template<>
struct is_service<demo_interfaces_base::action::RealTimeDistance_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<demo_interfaces_base::action::RealTimeDistance_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<demo_interfaces_base::action::RealTimeDistance_GetResult_Response>
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
// #include "demo_interfaces_base/action/detail/real_time_distance__traits.hpp"

namespace demo_interfaces_base
{

namespace action
{

inline void to_flow_style_yaml(
  const RealTimeDistance_FeedbackMessage & msg,
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
  const RealTimeDistance_FeedbackMessage & msg,
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

inline std::string to_yaml(const RealTimeDistance_FeedbackMessage & msg, bool use_flow_style = false)
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
  const demo_interfaces_base::action::RealTimeDistance_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::action::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::action::RealTimeDistance_FeedbackMessage & msg)
{
  return demo_interfaces_base::action::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage>()
{
  return "demo_interfaces_base::action::RealTimeDistance_FeedbackMessage";
}

template<>
inline const char * name<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage>()
{
  return "demo_interfaces_base/action/RealTimeDistance_FeedbackMessage";
}

template<>
struct has_fixed_size<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<demo_interfaces_base::action::RealTimeDistance_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<demo_interfaces_base::action::RealTimeDistance_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<demo_interfaces_base::action::RealTimeDistance>
  : std::true_type
{
};

template<>
struct is_action_goal<demo_interfaces_base::action::RealTimeDistance_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<demo_interfaces_base::action::RealTimeDistance_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<demo_interfaces_base::action::RealTimeDistance_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DEMO_INTERFACES_BASE__ACTION__DETAIL__REAL_TIME_DISTANCE__TRAITS_HPP_
