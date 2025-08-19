// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from demo_interfaces_base:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__MSG__DETAIL__STUDENT__BUILDER_HPP_
#define DEMO_INTERFACES_BASE__MSG__DETAIL__STUDENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "demo_interfaces_base/msg/detail/student__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace demo_interfaces_base
{

namespace msg
{

namespace builder
{

class Init_Student_height
{
public:
  explicit Init_Student_height(::demo_interfaces_base::msg::Student & msg)
  : msg_(msg)
  {}
  ::demo_interfaces_base::msg::Student height(::demo_interfaces_base::msg::Student::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::demo_interfaces_base::msg::Student msg_;
};

class Init_Student_age
{
public:
  explicit Init_Student_age(::demo_interfaces_base::msg::Student & msg)
  : msg_(msg)
  {}
  Init_Student_height age(::demo_interfaces_base::msg::Student::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Student_height(msg_);
  }

private:
  ::demo_interfaces_base::msg::Student msg_;
};

class Init_Student_name
{
public:
  Init_Student_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Student_age name(::demo_interfaces_base::msg::Student::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Student_age(msg_);
  }

private:
  ::demo_interfaces_base::msg::Student msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::demo_interfaces_base::msg::Student>()
{
  return demo_interfaces_base::msg::builder::Init_Student_name();
}

}  // namespace demo_interfaces_base

#endif  // DEMO_INTERFACES_BASE__MSG__DETAIL__STUDENT__BUILDER_HPP_
