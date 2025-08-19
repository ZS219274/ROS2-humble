// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from demo_interfaces_base:action/Action.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__ACTION__DETAIL__ACTION__STRUCT_H_
#define DEMO_INTERFACES_BASE__ACTION__DETAIL__ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Action in the package demo_interfaces_base.
typedef struct demo_interfaces_base__action__Action_Goal
{
  int64_t num;
} demo_interfaces_base__action__Action_Goal;

// Struct for a sequence of demo_interfaces_base__action__Action_Goal.
typedef struct demo_interfaces_base__action__Action_Goal__Sequence
{
  demo_interfaces_base__action__Action_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__action__Action_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Action in the package demo_interfaces_base.
typedef struct demo_interfaces_base__action__Action_Result
{
  int64_t sum;
} demo_interfaces_base__action__Action_Result;

// Struct for a sequence of demo_interfaces_base__action__Action_Result.
typedef struct demo_interfaces_base__action__Action_Result__Sequence
{
  demo_interfaces_base__action__Action_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__action__Action_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Action in the package demo_interfaces_base.
typedef struct demo_interfaces_base__action__Action_Feedback
{
  double progress;
} demo_interfaces_base__action__Action_Feedback;

// Struct for a sequence of demo_interfaces_base__action__Action_Feedback.
typedef struct demo_interfaces_base__action__Action_Feedback__Sequence
{
  demo_interfaces_base__action__Action_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__action__Action_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "demo_interfaces_base/action/detail/action__struct.h"

/// Struct defined in action/Action in the package demo_interfaces_base.
typedef struct demo_interfaces_base__action__Action_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  demo_interfaces_base__action__Action_Goal goal;
} demo_interfaces_base__action__Action_SendGoal_Request;

// Struct for a sequence of demo_interfaces_base__action__Action_SendGoal_Request.
typedef struct demo_interfaces_base__action__Action_SendGoal_Request__Sequence
{
  demo_interfaces_base__action__Action_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__action__Action_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Action in the package demo_interfaces_base.
typedef struct demo_interfaces_base__action__Action_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} demo_interfaces_base__action__Action_SendGoal_Response;

// Struct for a sequence of demo_interfaces_base__action__Action_SendGoal_Response.
typedef struct demo_interfaces_base__action__Action_SendGoal_Response__Sequence
{
  demo_interfaces_base__action__Action_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__action__Action_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Action in the package demo_interfaces_base.
typedef struct demo_interfaces_base__action__Action_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} demo_interfaces_base__action__Action_GetResult_Request;

// Struct for a sequence of demo_interfaces_base__action__Action_GetResult_Request.
typedef struct demo_interfaces_base__action__Action_GetResult_Request__Sequence
{
  demo_interfaces_base__action__Action_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__action__Action_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "demo_interfaces_base/action/detail/action__struct.h"

/// Struct defined in action/Action in the package demo_interfaces_base.
typedef struct demo_interfaces_base__action__Action_GetResult_Response
{
  int8_t status;
  demo_interfaces_base__action__Action_Result result;
} demo_interfaces_base__action__Action_GetResult_Response;

// Struct for a sequence of demo_interfaces_base__action__Action_GetResult_Response.
typedef struct demo_interfaces_base__action__Action_GetResult_Response__Sequence
{
  demo_interfaces_base__action__Action_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__action__Action_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "demo_interfaces_base/action/detail/action__struct.h"

/// Struct defined in action/Action in the package demo_interfaces_base.
typedef struct demo_interfaces_base__action__Action_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  demo_interfaces_base__action__Action_Feedback feedback;
} demo_interfaces_base__action__Action_FeedbackMessage;

// Struct for a sequence of demo_interfaces_base__action__Action_FeedbackMessage.
typedef struct demo_interfaces_base__action__Action_FeedbackMessage__Sequence
{
  demo_interfaces_base__action__Action_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__action__Action_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEMO_INTERFACES_BASE__ACTION__DETAIL__ACTION__STRUCT_H_
