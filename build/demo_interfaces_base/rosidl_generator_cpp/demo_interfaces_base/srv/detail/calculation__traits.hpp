// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from demo_interfaces_base:srv/Calculation.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__TRAITS_HPP_
#define DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "demo_interfaces_base/srv/detail/calculation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace demo_interfaces_base
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calculation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: num1
  {
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << ", ";
  }

  // member: num2
  {
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calculation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << "\n";
  }

  // member: num2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calculation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace demo_interfaces_base

namespace rosidl_generator_traits
{

[[deprecated("use demo_interfaces_base::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const demo_interfaces_base::srv::Calculation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::srv::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::srv::Calculation_Request & msg)
{
  return demo_interfaces_base::srv::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::srv::Calculation_Request>()
{
  return "demo_interfaces_base::srv::Calculation_Request";
}

template<>
inline const char * name<demo_interfaces_base::srv::Calculation_Request>()
{
  return "demo_interfaces_base/srv/Calculation_Request";
}

template<>
struct has_fixed_size<demo_interfaces_base::srv::Calculation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<demo_interfaces_base::srv::Calculation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<demo_interfaces_base::srv::Calculation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace demo_interfaces_base
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calculation_Response & msg,
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
  const Calculation_Response & msg,
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

inline std::string to_yaml(const Calculation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace demo_interfaces_base

namespace rosidl_generator_traits
{

[[deprecated("use demo_interfaces_base::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const demo_interfaces_base::srv::Calculation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::srv::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::srv::Calculation_Response & msg)
{
  return demo_interfaces_base::srv::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::srv::Calculation_Response>()
{
  return "demo_interfaces_base::srv::Calculation_Response";
}

template<>
inline const char * name<demo_interfaces_base::srv::Calculation_Response>()
{
  return "demo_interfaces_base/srv/Calculation_Response";
}

template<>
struct has_fixed_size<demo_interfaces_base::srv::Calculation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<demo_interfaces_base::srv::Calculation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<demo_interfaces_base::srv::Calculation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<demo_interfaces_base::srv::Calculation>()
{
  return "demo_interfaces_base::srv::Calculation";
}

template<>
inline const char * name<demo_interfaces_base::srv::Calculation>()
{
  return "demo_interfaces_base/srv/Calculation";
}

template<>
struct has_fixed_size<demo_interfaces_base::srv::Calculation>
  : std::integral_constant<
    bool,
    has_fixed_size<demo_interfaces_base::srv::Calculation_Request>::value &&
    has_fixed_size<demo_interfaces_base::srv::Calculation_Response>::value
  >
{
};

template<>
struct has_bounded_size<demo_interfaces_base::srv::Calculation>
  : std::integral_constant<
    bool,
    has_bounded_size<demo_interfaces_base::srv::Calculation_Request>::value &&
    has_bounded_size<demo_interfaces_base::srv::Calculation_Response>::value
  >
{
};

template<>
struct is_service<demo_interfaces_base::srv::Calculation>
  : std::true_type
{
};

template<>
struct is_service_request<demo_interfaces_base::srv::Calculation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<demo_interfaces_base::srv::Calculation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__TRAITS_HPP_
