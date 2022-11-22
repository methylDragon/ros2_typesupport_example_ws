// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ts_example_msgs:msg/NestedExample.idl
// generated code does not contain a copyright notice

#ifndef TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__BUILDER_HPP_
#define TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ts_example_msgs/msg/detail/nested_example__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ts_example_msgs
{

namespace msg
{

namespace builder
{

class Init_NestedExample_nested_example_inner_memberrr
{
public:
  explicit Init_NestedExample_nested_example_inner_memberrr(::ts_example_msgs::msg::NestedExample & msg)
  : msg_(msg)
  {}
  ::ts_example_msgs::msg::NestedExample nested_example_inner_memberrr(::ts_example_msgs::msg::NestedExample::_nested_example_inner_memberrr_type arg)
  {
    msg_.nested_example_inner_memberrr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ts_example_msgs::msg::NestedExample msg_;
};

class Init_NestedExample_nested_example_member_ddd
{
public:
  explicit Init_NestedExample_nested_example_member_ddd(::ts_example_msgs::msg::NestedExample & msg)
  : msg_(msg)
  {}
  Init_NestedExample_nested_example_inner_memberrr nested_example_member_ddd(::ts_example_msgs::msg::NestedExample::_nested_example_member_ddd_type arg)
  {
    msg_.nested_example_member_ddd = std::move(arg);
    return Init_NestedExample_nested_example_inner_memberrr(msg_);
  }

private:
  ::ts_example_msgs::msg::NestedExample msg_;
};

class Init_NestedExample_nested_example_member_ccc
{
public:
  Init_NestedExample_nested_example_member_ccc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NestedExample_nested_example_member_ddd nested_example_member_ccc(::ts_example_msgs::msg::NestedExample::_nested_example_member_ccc_type arg)
  {
    msg_.nested_example_member_ccc = std::move(arg);
    return Init_NestedExample_nested_example_member_ddd(msg_);
  }

private:
  ::ts_example_msgs::msg::NestedExample msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ts_example_msgs::msg::NestedExample>()
{
  return ts_example_msgs::msg::builder::Init_NestedExample_nested_example_member_ccc();
}

}  // namespace ts_example_msgs

#endif  // TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__BUILDER_HPP_
