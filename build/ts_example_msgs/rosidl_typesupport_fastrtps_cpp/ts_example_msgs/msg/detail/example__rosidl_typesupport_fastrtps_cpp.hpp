// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ts_example_msgs:msg/Example.idl
// generated code does not contain a copyright notice

#ifndef TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ts_example_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ts_example_msgs/msg/detail/example__struct.hpp"

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

namespace ts_example_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ts_example_msgs
cdr_serialize(
  const ts_example_msgs::msg::Example & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ts_example_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ts_example_msgs::msg::Example & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ts_example_msgs
get_serialized_size(
  const ts_example_msgs::msg::Example & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ts_example_msgs
max_serialized_size_Example(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ts_example_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ts_example_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ts_example_msgs, msg, Example)();

#ifdef __cplusplus
}
#endif

#endif  // TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
