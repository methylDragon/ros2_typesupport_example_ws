// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ts_example_msgs:msg/Example.idl
// generated code does not contain a copyright notice

#ifndef TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__TRAITS_HPP_
#define TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ts_example_msgs/msg/detail/example__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ts_example_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Example & msg,
  std::ostream & out)
{
  out << "{";
  // member: example_member_aaa
  {
    out << "example_member_aaa: ";
    rosidl_generator_traits::value_to_yaml(msg.example_member_aaa, out);
    out << ", ";
  }

  // member: example_member_bbb
  {
    out << "example_member_bbb: ";
    rosidl_generator_traits::value_to_yaml(msg.example_member_bbb, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Example & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: example_member_aaa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "example_member_aaa: ";
    rosidl_generator_traits::value_to_yaml(msg.example_member_aaa, out);
    out << "\n";
  }

  // member: example_member_bbb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "example_member_bbb: ";
    rosidl_generator_traits::value_to_yaml(msg.example_member_bbb, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Example & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ts_example_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ts_example_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ts_example_msgs::msg::Example & msg,
  std::ostream & out, size_t indentation = 0)
{
  ts_example_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ts_example_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ts_example_msgs::msg::Example & msg)
{
  return ts_example_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ts_example_msgs::msg::Example>()
{
  return "ts_example_msgs::msg::Example";
}

template<>
inline const char * name<ts_example_msgs::msg::Example>()
{
  return "ts_example_msgs/msg/Example";
}

template<>
struct has_fixed_size<ts_example_msgs::msg::Example>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ts_example_msgs::msg::Example>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ts_example_msgs::msg::Example>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__TRAITS_HPP_
