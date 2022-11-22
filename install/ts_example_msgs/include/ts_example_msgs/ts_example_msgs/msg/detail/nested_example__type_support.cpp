// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ts_example_msgs:msg/NestedExample.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ts_example_msgs/msg/detail/nested_example__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ts_example_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NestedExample_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ts_example_msgs::msg::NestedExample(_init);
}

void NestedExample_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ts_example_msgs::msg::NestedExample *>(message_memory);
  typed_message->~NestedExample();
}

size_t size_function__NestedExample__nested_example_inner_memberrr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ts_example_msgs::msg::Example> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NestedExample__nested_example_inner_memberrr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ts_example_msgs::msg::Example> *>(untyped_member);
  return &member[index];
}

void * get_function__NestedExample__nested_example_inner_memberrr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ts_example_msgs::msg::Example> *>(untyped_member);
  return &member[index];
}

void fetch_function__NestedExample__nested_example_inner_memberrr(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ts_example_msgs::msg::Example *>(
    get_const_function__NestedExample__nested_example_inner_memberrr(untyped_member, index));
  auto & value = *reinterpret_cast<ts_example_msgs::msg::Example *>(untyped_value);
  value = item;
}

void assign_function__NestedExample__nested_example_inner_memberrr(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ts_example_msgs::msg::Example *>(
    get_function__NestedExample__nested_example_inner_memberrr(untyped_member, index));
  const auto & value = *reinterpret_cast<const ts_example_msgs::msg::Example *>(untyped_value);
  item = value;
}

void resize_function__NestedExample__nested_example_inner_memberrr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ts_example_msgs::msg::Example> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NestedExample_message_member_array[3] = {
  {
    "nested_example_member_ccc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ts_example_msgs::msg::NestedExample, nested_example_member_ccc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nested_example_member_ddd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ts_example_msgs::msg::NestedExample, nested_example_member_ddd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nested_example_inner_memberrr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ts_example_msgs::msg::Example>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ts_example_msgs::msg::NestedExample, nested_example_inner_memberrr),  // bytes offset in struct
    nullptr,  // default value
    size_function__NestedExample__nested_example_inner_memberrr,  // size() function pointer
    get_const_function__NestedExample__nested_example_inner_memberrr,  // get_const(index) function pointer
    get_function__NestedExample__nested_example_inner_memberrr,  // get(index) function pointer
    fetch_function__NestedExample__nested_example_inner_memberrr,  // fetch(index, &value) function pointer
    assign_function__NestedExample__nested_example_inner_memberrr,  // assign(index, value) function pointer
    resize_function__NestedExample__nested_example_inner_memberrr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NestedExample_message_members = {
  "ts_example_msgs::msg",  // message namespace
  "NestedExample",  // message name
  3,  // number of fields
  sizeof(ts_example_msgs::msg::NestedExample),
  NestedExample_message_member_array,  // message members
  NestedExample_init_function,  // function to initialize message memory (memory has to be allocated)
  NestedExample_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NestedExample_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NestedExample_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ts_example_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ts_example_msgs::msg::NestedExample>()
{
  return &::ts_example_msgs::msg::rosidl_typesupport_introspection_cpp::NestedExample_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ts_example_msgs, msg, NestedExample)() {
  return &::ts_example_msgs::msg::rosidl_typesupport_introspection_cpp::NestedExample_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
