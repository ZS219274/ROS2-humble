// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from demo_interfaces_base:srv/Calculation.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__BUILDER_HPP_
#define DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "demo_interfaces_base/srv/detail/calculation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace demo_interfaces_base
{

namespace srv
{

namespace builder
{

class Init_Calculation_Request_num2
{
public:
  explicit Init_Calculation_Request_num2(::demo_interfaces_base::srv::Calculation_Request & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::srv::Calculation_Request num2(::demo_interfaces_base::srv::Calculation_Request::_num2_type arg)
  {
    msg_.num2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::srv::Calculation_Request msg_;
};

class Init_Calculation_Request_num1
{
public:
  Init_Calculation_Request_num1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calculation_Request_num2 num1(::demo_interfaces_base::srv::Calculation_Request::_num1_type arg)
  {
    msg_.num1 = std::move(arg);
    return Init_Calculation_Request_num2(msg_);
  }

private:
  ::demo_interfaces_base::srv::Calculation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::srv::Calculation_Request>()
{
  return demo_interfaces_base::srv::builder::Init_Calculation_Request_num1();
}

}  // namespace demo_interfaces_base


namespace demo_interfaces_base
{

namespace srv
{

namespace builder
{

class Init_Calculation_Response_sum
{
public:
  Init_Calculation_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::demo_interfaces_base::srv::Calculation_Response sum(::demo_interfaces_base::srv::Calculation_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::srv::Calculation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::srv::Calculation_Response>()
{
  return demo_interfaces_base::srv::builder::Init_Calculation_Response_sum();
}

}  // namespace demo_interfaces_base

#endif  // DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__BUILDER_HPP_
