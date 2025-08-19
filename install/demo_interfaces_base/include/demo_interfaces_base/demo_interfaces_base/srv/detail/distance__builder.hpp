// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from demo_interfaces_base:srv/Distance.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__SRV__DETAIL__DISTANCE__BUILDER_HPP_
#define DEMO_INTERFACES_BASE__SRV__DETAIL__DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "demo_interfaces_base/srv/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace demo_interfaces_base
{

namespace srv
{

namespace builder
{

class Init_Distance_Request_theta
{
public:
  explicit Init_Distance_Request_theta(::demo_interfaces_base::srv::Distance_Request & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::srv::Distance_Request theta(::demo_interfaces_base::srv::Distance_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::srv::Distance_Request msg_;
};

class Init_Distance_Request_y
{
public:
  explicit Init_Distance_Request_y(::demo_interfaces_base::srv::Distance_Request & msg)
  : msg_(msg)
  {}
  Init_Distance_Request_theta y(::demo_interfaces_base::srv::Distance_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Distance_Request_theta(msg_);
  }

private:
  ::demo_interfaces_base::srv::Distance_Request msg_;
};

class Init_Distance_Request_x
{
public:
  Init_Distance_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distance_Request_y x(::demo_interfaces_base::srv::Distance_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Distance_Request_y(msg_);
  }

private:
  ::demo_interfaces_base::srv::Distance_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::srv::Distance_Request>()
{
  return demo_interfaces_base::srv::builder::Init_Distance_Request_x();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace srv
{

namespace builder
{

class Init_Distance_Response_distance
{
public:
  Init_Distance_Response_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::demo_interfaces_base::srv::Distance_Response distance(::demo_interfaces_base::srv::Distance_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::srv::Distance_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::srv::Distance_Response>()
{
  return demo_interfaces_base::srv::builder::Init_Distance_Response_distance();
}

}  // namespace demo_interfaces_base

#endif  // DEMO_INTERFACES_BASE__SRV__DETAIL__DISTANCE__BUILDER_HPP_
