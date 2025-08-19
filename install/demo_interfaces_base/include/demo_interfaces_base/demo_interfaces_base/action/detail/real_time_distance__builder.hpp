// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from demo_interfaces_base:action/RealTimeDistance.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__ACTION__DETAIL__REAL_TIME_DISTANCE__BUILDER_HPP_
#define DEMO_INTERFACES_BASE__ACTION__DETAIL__REAL_TIME_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "demo_interfaces_base/action/detail/real_time_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_RealTimeDistance_Goal_goal_theta
{
public:
  explicit Init_RealTimeDistance_Goal_goal_theta(::demo_interfaces_base::action::RealTimeDistance_Goal & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::action::RealTimeDistance_Goal goal_theta(::demo_interfaces_base::action::RealTimeDistance_Goal::_goal_theta_type arg)
  {
    msg_.goal_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_Goal msg_;
};

class Init_RealTimeDistance_Goal_goal_y
{
public:
  explicit Init_RealTimeDistance_Goal_goal_y(::demo_interfaces_base::action::RealTimeDistance_Goal & msg)
  : msg_(msg)
  {}
  Init_RealTimeDistance_Goal_goal_theta goal_y(::demo_interfaces_base::action::RealTimeDistance_Goal::_goal_y_type arg)
  {
    msg_.goal_y = std::move(arg);
    return Init_RealTimeDistance_Goal_goal_theta(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_Goal msg_;
};

class Init_RealTimeDistance_Goal_goal_x
{
public:
  Init_RealTimeDistance_Goal_goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RealTimeDistance_Goal_goal_y goal_x(::demo_interfaces_base::action::RealTimeDistance_Goal::_goal_x_type arg)
  {
    msg_.goal_x = std::move(arg);
    return Init_RealTimeDistance_Goal_goal_y(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::RealTimeDistance_Goal>()
{
  return demo_interfaces_base::action::builder::Init_RealTimeDistance_Goal_goal_x();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_RealTimeDistance_Result_turtle_theta
{
public:
  explicit Init_RealTimeDistance_Result_turtle_theta(::demo_interfaces_base::action::RealTimeDistance_Result & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::action::RealTimeDistance_Result turtle_theta(::demo_interfaces_base::action::RealTimeDistance_Result::_turtle_theta_type arg)
  {
    msg_.turtle_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_Result msg_;
};

class Init_RealTimeDistance_Result_turtle_y
{
public:
  explicit Init_RealTimeDistance_Result_turtle_y(::demo_interfaces_base::action::RealTimeDistance_Result & msg)
  : msg_(msg)
  {}
  Init_RealTimeDistance_Result_turtle_theta turtle_y(::demo_interfaces_base::action::RealTimeDistance_Result::_turtle_y_type arg)
  {
    msg_.turtle_y = std::move(arg);
    return Init_RealTimeDistance_Result_turtle_theta(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_Result msg_;
};

class Init_RealTimeDistance_Result_turtle_x
{
public:
  Init_RealTimeDistance_Result_turtle_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RealTimeDistance_Result_turtle_y turtle_x(::demo_interfaces_base::action::RealTimeDistance_Result::_turtle_x_type arg)
  {
    msg_.turtle_x = std::move(arg);
    return Init_RealTimeDistance_Result_turtle_y(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::RealTimeDistance_Result>()
{
  return demo_interfaces_base::action::builder::Init_RealTimeDistance_Result_turtle_x();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_RealTimeDistance_Feedback_current_distance
{
public:
  Init_RealTimeDistance_Feedback_current_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::demo_interfaces_base::action::RealTimeDistance_Feedback current_distance(::demo_interfaces_base::action::RealTimeDistance_Feedback::_current_distance_type arg)
  {
    msg_.current_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::RealTimeDistance_Feedback>()
{
  return demo_interfaces_base::action::builder::Init_RealTimeDistance_Feedback_current_distance();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_RealTimeDistance_SendGoal_Request_goal
{
public:
  explicit Init_RealTimeDistance_SendGoal_Request_goal(::demo_interfaces_base::action::RealTimeDistance_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::action::RealTimeDistance_SendGoal_Request goal(::demo_interfaces_base::action::RealTimeDistance_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_SendGoal_Request msg_;
};

class Init_RealTimeDistance_SendGoal_Request_goal_id
{
public:
  Init_RealTimeDistance_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RealTimeDistance_SendGoal_Request_goal goal_id(::demo_interfaces_base::action::RealTimeDistance_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RealTimeDistance_SendGoal_Request_goal(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::RealTimeDistance_SendGoal_Request>()
{
  return demo_interfaces_base::action::builder::Init_RealTimeDistance_SendGoal_Request_goal_id();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_RealTimeDistance_SendGoal_Response_stamp
{
public:
  explicit Init_RealTimeDistance_SendGoal_Response_stamp(::demo_interfaces_base::action::RealTimeDistance_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::action::RealTimeDistance_SendGoal_Response stamp(::demo_interfaces_base::action::RealTimeDistance_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_SendGoal_Response msg_;
};

class Init_RealTimeDistance_SendGoal_Response_accepted
{
public:
  Init_RealTimeDistance_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RealTimeDistance_SendGoal_Response_stamp accepted(::demo_interfaces_base::action::RealTimeDistance_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RealTimeDistance_SendGoal_Response_stamp(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::RealTimeDistance_SendGoal_Response>()
{
  return demo_interfaces_base::action::builder::Init_RealTimeDistance_SendGoal_Response_accepted();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_RealTimeDistance_GetResult_Request_goal_id
{
public:
  Init_RealTimeDistance_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::demo_interfaces_base::action::RealTimeDistance_GetResult_Request goal_id(::demo_interfaces_base::action::RealTimeDistance_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::RealTimeDistance_GetResult_Request>()
{
  return demo_interfaces_base::action::builder::Init_RealTimeDistance_GetResult_Request_goal_id();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_RealTimeDistance_GetResult_Response_result
{
public:
  explicit Init_RealTimeDistance_GetResult_Response_result(::demo_interfaces_base::action::RealTimeDistance_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::action::RealTimeDistance_GetResult_Response result(::demo_interfaces_base::action::RealTimeDistance_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_GetResult_Response msg_;
};

class Init_RealTimeDistance_GetResult_Response_status
{
public:
  Init_RealTimeDistance_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RealTimeDistance_GetResult_Response_result status(::demo_interfaces_base::action::RealTimeDistance_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RealTimeDistance_GetResult_Response_result(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::RealTimeDistance_GetResult_Response>()
{
  return demo_interfaces_base::action::builder::Init_RealTimeDistance_GetResult_Response_status();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_RealTimeDistance_FeedbackMessage_feedback
{
public:
  explicit Init_RealTimeDistance_FeedbackMessage_feedback(::demo_interfaces_base::action::RealTimeDistance_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::action::RealTimeDistance_FeedbackMessage feedback(::demo_interfaces_base::action::RealTimeDistance_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_FeedbackMessage msg_;
};

class Init_RealTimeDistance_FeedbackMessage_goal_id
{
public:
  Init_RealTimeDistance_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RealTimeDistance_FeedbackMessage_feedback goal_id(::demo_interfaces_base::action::RealTimeDistance_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RealTimeDistance_FeedbackMessage_feedback(msg_);
  }

private:
  ::demo_interfaces_base::action::RealTimeDistance_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::RealTimeDistance_FeedbackMessage>()
{
  return demo_interfaces_base::action::builder::Init_RealTimeDistance_FeedbackMessage_goal_id();
}

}  // namespace demo_interfaces_base

#endif  // DEMO_INTERFACES_BASE__ACTION__DETAIL__REAL_TIME_DISTANCE__BUILDER_HPP_
