// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ts_example_msgs:msg/Example.idl
// generated code does not contain a copyright notice

#ifndef TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__BUILDER_HPP_
#define TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ts_example_msgs/msg/detail/example__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ts_example_msgs
{

namespace msg
{

namespace builder
{

class Init_Example_example_member_bbb
{
public:
  explicit Init_Example_example_member_bbb(::ts_example_msgs::msg::Example & msg)
  : msg_(msg)
  {}
  ::ts_example_msgs::msg::Example example_member_bbb(::ts_example_msgs::msg::Example::_example_member_bbb_type arg)
  {
    msg_.example_member_bbb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ts_example_msgs::msg::Example msg_;
};

class Init_Example_example_member_aaa
{
public:
  Init_Example_example_member_aaa()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Example_example_member_bbb example_member_aaa(::ts_example_msgs::msg::Example::_example_member_aaa_type arg)
  {
    msg_.example_member_aaa = std::move(arg);
    return Init_Example_example_member_bbb(msg_);
  }

private:
  ::ts_example_msgs::msg::Example msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ts_example_msgs::msg::Example>()
{
  return ts_example_msgs::msg::builder::Init_Example_example_member_aaa();
}

}  // namespace ts_example_msgs

#endif  // TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__BUILDER_HPP_
