// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from demo_interfaces_base:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__MSG__DETAIL__STUDENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DEMO_INTERFACES_BASE__MSG__DETAIL__STUDENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "demo_interfaces_base/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "demo_interfaces_base/msg/detail/student__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace demo_interfaces_base
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_demo_interfaces_base
cdr_serialize(
  const demo_interfaces_base::msg::Student & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_demo_interfaces_base
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  demo_interfaces_base::msg::Student & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_demo_interfaces_base
get_serialized_size(
  const demo_interfaces_base::msg::Student & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_demo_interfaces_base
max_serialized_size_Student(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_demo_interfaces_base
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, demo_interfaces_base, msg, Student)();

#ifdef __cplusplus
}
#endif

#endif  // DEMO_INTERFACES_BASE__MSG__DETAIL__STUDENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
