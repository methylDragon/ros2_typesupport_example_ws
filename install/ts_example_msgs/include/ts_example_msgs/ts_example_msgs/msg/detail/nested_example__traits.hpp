// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ts_example_msgs:msg/NestedExample.idl
// generated code does not contain a copyright notice

#ifndef TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__TRAITS_HPP_
#define TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ts_example_msgs/msg/detail/nested_example__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nested_example_inner_memberrr'
#include "ts_example_msgs/msg/detail/example__traits.hpp"

namespace ts_example_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NestedExample & msg,
  std::ostream & out)
{
  out << "{";
  // member: nested_example_member_ccc
  {
    out << "nested_example_member_ccc: ";
    rosidl_generator_traits::value_to_yaml(msg.nested_example_member_ccc, out);
    out << ", ";
  }

  // member: nested_example_member_ddd
  {
    out << "nested_example_member_ddd: ";
    rosidl_generator_traits::value_to_yaml(msg.nested_example_member_ddd, out);
    out << ", ";
  }

  // member: nested_example_inner_memberrr
  {
    if (msg.nested_example_inner_memberrr.size() == 0) {
      out << "nested_example_inner_memberrr: []";
    } else {
      out << "nested_example_inner_memberrr: [";
      size_t pending_items = msg.nested_example_inner_memberrr.size();
      for (auto item : msg.nested_example_inner_memberrr) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NestedExample & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nested_example_member_ccc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nested_example_member_ccc: ";
    rosidl_generator_traits::value_to_yaml(msg.nested_example_member_ccc, out);
    out << "\n";
  }

  // member: nested_example_member_ddd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nested_example_member_ddd: ";
    rosidl_generator_traits::value_to_yaml(msg.nested_example_member_ddd, out);
    out << "\n";
  }

  // member: nested_example_inner_memberrr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nested_example_inner_memberrr.size() == 0) {
      out << "nested_example_inner_memberrr: []\n";
    } else {
      out << "nested_example_inner_memberrr:\n";
      for (auto item : msg.nested_example_inner_memberrr) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NestedExample & msg, bool use_flow_style = false)
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
  const ts_example_msgs::msg::NestedExample & msg,
  std::ostream & out, size_t indentation = 0)
{
  ts_example_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ts_example_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ts_example_msgs::msg::NestedExample & msg)
{
  return ts_example_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ts_example_msgs::msg::NestedExample>()
{
  return "ts_example_msgs::msg::NestedExample";
}

template<>
inline const char * name<ts_example_msgs::msg::NestedExample>()
{
  return "ts_example_msgs/msg/NestedExample";
}

template<>
struct has_fixed_size<ts_example_msgs::msg::NestedExample>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ts_example_msgs::msg::NestedExample>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ts_example_msgs::msg::NestedExample>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__TRAITS_HPP_
