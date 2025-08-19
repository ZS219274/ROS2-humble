// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from demo_interfaces_base:srv/Distance.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__SRV__DETAIL__DISTANCE__TRAITS_HPP_
#define DEMO_INTERFACES_BASE__SRV__DETAIL__DISTANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "demo_interfaces_base/srv/detail/distance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace demo_interfaces_base
{

namespace srv
{

inline void to_flow_style_yaml(
  const Distance_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Distance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Distance_Request & msg, bool use_flow_style = false)
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
  const demo_interfaces_base::srv::Distance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::srv::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::srv::Distance_Request & msg)
{
  return demo_interfaces_base::srv::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::srv::Distance_Request>()
{
  return "demo_interfaces_base::srv::Distance_Request";
}

template<>
inline const char * name<demo_interfaces_base::srv::Distance_Request>()
{
  return "demo_interfaces_base/srv/Distance_Request";
}

template<>
struct has_fixed_size<demo_interfaces_base::srv::Distance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<demo_interfaces_base::srv::Distance_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<demo_interfaces_base::srv::Distance_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace demo_interfaces_base
{

namespace srv
{

inline void to_flow_style_yaml(
  const Distance_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Distance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Distance_Response & msg, bool use_flow_style = false)
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
  const demo_interfaces_base::srv::Distance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  demo_interfaces_base::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use demo_interfaces_base::srv::to_yaml() instead")]]
inline std::string to_yaml(const demo_interfaces_base::srv::Distance_Response & msg)
{
  return demo_interfaces_base::srv::to_yaml(msg);
}

template<>
inline const char * data_type<demo_interfaces_base::srv::Distance_Response>()
{
  return "demo_interfaces_base::srv::Distance_Response";
}

template<>
inline const char * name<demo_interfaces_base::srv::Distance_Response>()
{
  return "demo_interfaces_base/srv/Distance_Response";
}

template<>
struct has_fixed_size<demo_interfaces_base::srv::Distance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<demo_interfaces_base::srv::Distance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<demo_interfaces_base::srv::Distance_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<demo_interfaces_base::srv::Distance>()
{
  return "demo_interfaces_base::srv::Distance";
}

template<>
inline const char * name<demo_interfaces_base::srv::Distance>()
{
  return "demo_interfaces_base/srv/Distance";
}

template<>
struct has_fixed_size<demo_interfaces_base::srv::Distance>
  : std::integral_constant<
    bool,
    has_fixed_size<demo_interfaces_base::srv::Distance_Request>::value &&
    has_fixed_size<demo_interfaces_base::srv::Distance_Response>::value
  >
{
};

template<>
struct has_bounded_size<demo_interfaces_base::srv::Distance>
  : std::integral_constant<
    bool,
    has_bounded_size<demo_interfaces_base::srv::Distance_Request>::value &&
    has_bounded_size<demo_interfaces_base::srv::Distance_Response>::value
  >
{
};

template<>
struct is_service<demo_interfaces_base::srv::Distance>
  : std::true_type
{
};

template<>
struct is_service_request<demo_interfaces_base::srv::Distance_Request>
  : std::true_type
{
};

template<>
struct is_service_response<demo_interfaces_base::srv::Distance_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DEMO_INTERFACES_BASE__SRV__DETAIL__DISTANCE__TRAITS_HPP_
