// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from demo_interfaces_base:action/RealTimeDistance.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__ACTION__DETAIL__REAL_TIME_DISTANCE__STRUCT_HPP_
#define DEMO_INTERFACES_BASE__ACTION__DETAIL__REAL_TIME_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Goal __attribute__((deprecated))
#else
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Goal __declspec(deprecated)
#endif

namespace demo_interfaces_base
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RealTimeDistance_Goal_
{
  using Type = RealTimeDistance_Goal_<ContainerAllocator>;

  explicit RealTimeDistance_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_x = 0.0f;
      this->goal_y = 0.0f;
      this->goal_theta = 0.0f;
    }
  }

  explicit RealTimeDistance_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_x = 0.0f;
      this->goal_y = 0.0f;
      this->goal_theta = 0.0f;
    }
  }

  // field types and members
  using _goal_x_type =
    float;
  _goal_x_type goal_x;
  using _goal_y_type =
    float;
  _goal_y_type goal_y;
  using _goal_theta_type =
    float;
  _goal_theta_type goal_theta;

  // setters for named parameter idiom
  Type & set__goal_x(
    const float & _arg)
  {
    this->goal_x = _arg;
    return *this;
  }
  Type & set__goal_y(
    const float & _arg)
  {
    this->goal_y = _arg;
    return *this;
  }
  Type & set__goal_theta(
    const float & _arg)
  {
    this->goal_theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Goal
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Goal
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealTimeDistance_Goal_ & other) const
  {
    if (this->goal_x != other.goal_x) {
      return false;
    }
    if (this->goal_y != other.goal_y) {
      return false;
    }
    if (this->goal_theta != other.goal_theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealTimeDistance_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealTimeDistance_Goal_

// alias to use template instance with default allocator
using RealTimeDistance_Goal =
  demo_interfaces_base::action::RealTimeDistance_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace demo_interfaces_base


#ifndef _WIN32
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Result __attribute__((deprecated))
#else
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Result __declspec(deprecated)
#endif

namespace demo_interfaces_base
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RealTimeDistance_Result_
{
  using Type = RealTimeDistance_Result_<ContainerAllocator>;

  explicit RealTimeDistance_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle_x = 0.0f;
      this->turtle_y = 0.0f;
      this->turtle_theta = 0.0f;
    }
  }

  explicit RealTimeDistance_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->turtle_x = 0.0f;
      this->turtle_y = 0.0f;
      this->turtle_theta = 0.0f;
    }
  }

  // field types and members
  using _turtle_x_type =
    float;
  _turtle_x_type turtle_x;
  using _turtle_y_type =
    float;
  _turtle_y_type turtle_y;
  using _turtle_theta_type =
    float;
  _turtle_theta_type turtle_theta;

  // setters for named parameter idiom
  Type & set__turtle_x(
    const float & _arg)
  {
    this->turtle_x = _arg;
    return *this;
  }
  Type & set__turtle_y(
    const float & _arg)
  {
    this->turtle_y = _arg;
    return *this;
  }
  Type & set__turtle_theta(
    const float & _arg)
  {
    this->turtle_theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Result
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Result
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealTimeDistance_Result_ & other) const
  {
    if (this->turtle_x != other.turtle_x) {
      return false;
    }
    if (this->turtle_y != other.turtle_y) {
      return false;
    }
    if (this->turtle_theta != other.turtle_theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealTimeDistance_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealTimeDistance_Result_

// alias to use template instance with default allocator
using RealTimeDistance_Result =
  demo_interfaces_base::action::RealTimeDistance_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace demo_interfaces_base


#ifndef _WIN32
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Feedback __declspec(deprecated)
#endif

namespace demo_interfaces_base
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RealTimeDistance_Feedback_
{
  using Type = RealTimeDistance_Feedback_<ContainerAllocator>;

  explicit RealTimeDistance_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_distance = 0.0f;
    }
  }

  explicit RealTimeDistance_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_distance = 0.0f;
    }
  }

  // field types and members
  using _current_distance_type =
    float;
  _current_distance_type current_distance;

  // setters for named parameter idiom
  Type & set__current_distance(
    const float & _arg)
  {
    this->current_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Feedback
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_Feedback
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealTimeDistance_Feedback_ & other) const
  {
    if (this->current_distance != other.current_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealTimeDistance_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealTimeDistance_Feedback_

// alias to use template instance with default allocator
using RealTimeDistance_Feedback =
  demo_interfaces_base::action::RealTimeDistance_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace demo_interfaces_base


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "demo_interfaces_base/action/detail/real_time_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_SendGoal_Request __declspec(deprecated)
#endif

namespace demo_interfaces_base
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RealTimeDistance_SendGoal_Request_
{
  using Type = RealTimeDistance_SendGoal_Request_<ContainerAllocator>;

  explicit RealTimeDistance_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RealTimeDistance_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const demo_interfaces_base::action::RealTimeDistance_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_SendGoal_Request
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_SendGoal_Request
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealTimeDistance_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealTimeDistance_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealTimeDistance_SendGoal_Request_

// alias to use template instance with default allocator
using RealTimeDistance_SendGoal_Request =
  demo_interfaces_base::action::RealTimeDistance_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace demo_interfaces_base


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_SendGoal_Response __declspec(deprecated)
#endif

namespace demo_interfaces_base
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RealTimeDistance_SendGoal_Response_
{
  using Type = RealTimeDistance_SendGoal_Response_<ContainerAllocator>;

  explicit RealTimeDistance_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RealTimeDistance_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_SendGoal_Response
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_SendGoal_Response
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealTimeDistance_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealTimeDistance_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealTimeDistance_SendGoal_Response_

// alias to use template instance with default allocator
using RealTimeDistance_SendGoal_Response =
  demo_interfaces_base::action::RealTimeDistance_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace demo_interfaces_base

namespace demo_interfaces_base
{

namespace action
{

struct RealTimeDistance_SendGoal
{
  using Request = demo_interfaces_base::action::RealTimeDistance_SendGoal_Request;
  using Response = demo_interfaces_base::action::RealTimeDistance_SendGoal_Response;
};

}  // namespace action

}  // namespace demo_interfaces_base


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_GetResult_Request __declspec(deprecated)
#endif

namespace demo_interfaces_base
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RealTimeDistance_GetResult_Request_
{
  using Type = RealTimeDistance_GetResult_Request_<ContainerAllocator>;

  explicit RealTimeDistance_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RealTimeDistance_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_GetResult_Request
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_GetResult_Request
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealTimeDistance_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealTimeDistance_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealTimeDistance_GetResult_Request_

// alias to use template instance with default allocator
using RealTimeDistance_GetResult_Request =
  demo_interfaces_base::action::RealTimeDistance_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace demo_interfaces_base


// Include directives for member types
// Member 'result'
// already included above
// #include "demo_interfaces_base/action/detail/real_time_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_GetResult_Response __declspec(deprecated)
#endif

namespace demo_interfaces_base
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RealTimeDistance_GetResult_Response_
{
  using Type = RealTimeDistance_GetResult_Response_<ContainerAllocator>;

  explicit RealTimeDistance_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RealTimeDistance_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const demo_interfaces_base::action::RealTimeDistance_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_GetResult_Response
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_GetResult_Response
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealTimeDistance_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealTimeDistance_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealTimeDistance_GetResult_Response_

// alias to use template instance with default allocator
using RealTimeDistance_GetResult_Response =
  demo_interfaces_base::action::RealTimeDistance_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace demo_interfaces_base

namespace demo_interfaces_base
{

namespace action
{

struct RealTimeDistance_GetResult
{
  using Request = demo_interfaces_base::action::RealTimeDistance_GetResult_Request;
  using Response = demo_interfaces_base::action::RealTimeDistance_GetResult_Response;
};

}  // namespace action

}  // namespace demo_interfaces_base


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "demo_interfaces_base/action/detail/real_time_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__demo_interfaces_base__action__RealTimeDistance_FeedbackMessage __declspec(deprecated)
#endif

namespace demo_interfaces_base
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RealTimeDistance_FeedbackMessage_
{
  using Type = RealTimeDistance_FeedbackMessage_<ContainerAllocator>;

  explicit RealTimeDistance_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RealTimeDistance_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const demo_interfaces_base::action::RealTimeDistance_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_FeedbackMessage
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__demo_interfaces_base__action__RealTimeDistance_FeedbackMessage
    std::shared_ptr<demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealTimeDistance_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealTimeDistance_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealTimeDistance_FeedbackMessage_

// alias to use template instance with default allocator
using RealTimeDistance_FeedbackMessage =
  demo_interfaces_base::action::RealTimeDistance_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace demo_interfaces_base

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace demo_interfaces_base
{

namespace action
{

struct RealTimeDistance
{
  /// The goal message defined in the action definition.
  using Goal = demo_interfaces_base::action::RealTimeDistance_Goal;
  /// The result message defined in the action definition.
  using Result = demo_interfaces_base::action::RealTimeDistance_Result;
  /// The feedback message defined in the action definition.
  using Feedback = demo_interfaces_base::action::RealTimeDistance_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = demo_interfaces_base::action::RealTimeDistance_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = demo_interfaces_base::action::RealTimeDistance_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = demo_interfaces_base::action::RealTimeDistance_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RealTimeDistance RealTimeDistance;

}  // namespace action

}  // namespace demo_interfaces_base

#endif  // DEMO_INTERFACES_BASE__ACTION__DETAIL__REAL_TIME_DISTANCE__STRUCT_HPP_
