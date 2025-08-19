// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from demo_interfaces_base:action/Action.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__ACTION__DETAIL__ACTION__BUILDER_HPP_
#define DEMO_INTERFACES_BASE__ACTION__DETAIL__ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "demo_interfaces_base/action/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_Action_Goal_num
{
public:
  Init_Action_Goal_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::demo_interfaces_base::action::Action_Goal num(::demo_interfaces_base::action::Action_Goal::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::Action_Goal>()
{
  return demo_interfaces_base::action::builder::Init_Action_Goal_num();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_Action_Result_sum
{
public:
  Init_Action_Result_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::demo_interfaces_base::action::Action_Result sum(::demo_interfaces_base::action::Action_Result::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::Action_Result>()
{
  return demo_interfaces_base::action::builder::Init_Action_Result_sum();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_Action_Feedback_progress
{
public:
  Init_Action_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::demo_interfaces_base::action::Action_Feedback progress(::demo_interfaces_base::action::Action_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::Action_Feedback>()
{
  return demo_interfaces_base::action::builder::Init_Action_Feedback_progress();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_Action_SendGoal_Request_goal
{
public:
  explicit Init_Action_SendGoal_Request_goal(::demo_interfaces_base::action::Action_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::action::Action_SendGoal_Request goal(::demo_interfaces_base::action::Action_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_SendGoal_Request msg_;
};

class Init_Action_SendGoal_Request_goal_id
{
public:
  Init_Action_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action_SendGoal_Request_goal goal_id(::demo_interfaces_base::action::Action_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Action_SendGoal_Request_goal(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::Action_SendGoal_Request>()
{
  return demo_interfaces_base::action::builder::Init_Action_SendGoal_Request_goal_id();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_Action_SendGoal_Response_stamp
{
public:
  explicit Init_Action_SendGoal_Response_stamp(::demo_interfaces_base::action::Action_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::action::Action_SendGoal_Response stamp(::demo_interfaces_base::action::Action_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_SendGoal_Response msg_;
};

class Init_Action_SendGoal_Response_accepted
{
public:
  Init_Action_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action_SendGoal_Response_stamp accepted(::demo_interfaces_base::action::Action_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Action_SendGoal_Response_stamp(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::Action_SendGoal_Response>()
{
  return demo_interfaces_base::action::builder::Init_Action_SendGoal_Response_accepted();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_Action_GetResult_Request_goal_id
{
public:
  Init_Action_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::demo_interfaces_base::action::Action_GetResult_Request goal_id(::demo_interfaces_base::action::Action_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::Action_GetResult_Request>()
{
  return demo_interfaces_base::action::builder::Init_Action_GetResult_Request_goal_id();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_Action_GetResult_Response_result
{
public:
  explicit Init_Action_GetResult_Response_result(::demo_interfaces_base::action::Action_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::action::Action_GetResult_Response result(::demo_interfaces_base::action::Action_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_GetResult_Response msg_;
};

class Init_Action_GetResult_Response_status
{
public:
  Init_Action_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action_GetResult_Response_result status(::demo_interfaces_base::action::Action_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Action_GetResult_Response_result(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::Action_GetResult_Response>()
{
  return demo_interfaces_base::action::builder::Init_Action_GetResult_Response_status();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace action
{

namespace builder
{

class Init_Action_FeedbackMessage_feedback
{
public:
  explicit Init_Action_FeedbackMessage_feedback(::demo_interfaces_base::action::Action_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::action::Action_FeedbackMessage feedback(::demo_interfaces_base::action::Action_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_FeedbackMessage msg_;
};

class Init_Action_FeedbackMessage_goal_id
{
public:
  Init_Action_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action_FeedbackMessage_feedback goal_id(::demo_interfaces_base::action::Action_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Action_FeedbackMessage_feedback(msg_);
  }

private:
  ::demo_interfaces_base::action::Action_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::action::Action_FeedbackMessage>()
{
  return demo_interfaces_base::action::builder::Init_Action_FeedbackMessage_goal_id();
}

}  // namespace demo_interfaces_base

#endif  // DEMO_INTERFACES_BASE__ACTION__DETAIL__ACTION__BUILDER_HPP_
