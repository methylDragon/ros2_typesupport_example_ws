// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ts_example_msgs:msg/NestedExample.idl
// generated code does not contain a copyright notice
#include "ts_example_msgs/msg/detail/nested_example__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ts_example_msgs/msg/detail/nested_example__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace ts_example_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ts_example_msgs::msg::Example &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ts_example_msgs::msg::Example &);
size_t get_serialized_size(
  const ts_example_msgs::msg::Example &,
  size_t current_alignment);
size_t
max_serialized_size_Example(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ts_example_msgs


namespace ts_example_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ts_example_msgs
cdr_serialize(
  const ts_example_msgs::msg::NestedExample & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: nested_example_member_ccc
  cdr << ros_message.nested_example_member_ccc;
  // Member: nested_example_member_ddd
  cdr << ros_message.nested_example_member_ddd;
  // Member: nested_example_inner_memberrr
  {
    size_t size = ros_message.nested_example_inner_memberrr.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ts_example_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.nested_example_inner_memberrr[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ts_example_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ts_example_msgs::msg::NestedExample & ros_message)
{
  // Member: nested_example_member_ccc
  cdr >> ros_message.nested_example_member_ccc;

  // Member: nested_example_member_ddd
  cdr >> ros_message.nested_example_member_ddd;

  // Member: nested_example_inner_memberrr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.nested_example_inner_memberrr.resize(size);
    for (size_t i = 0; i < size; i++) {
      ts_example_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.nested_example_inner_memberrr[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ts_example_msgs
get_serialized_size(
  const ts_example_msgs::msg::NestedExample & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: nested_example_member_ccc
  {
    size_t item_size = sizeof(ros_message.nested_example_member_ccc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nested_example_member_ddd
  {
    size_t item_size = sizeof(ros_message.nested_example_member_ddd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nested_example_inner_memberrr
  {
    size_t array_size = ros_message.nested_example_inner_memberrr.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ts_example_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.nested_example_inner_memberrr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ts_example_msgs
max_serialized_size_NestedExample(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: nested_example_member_ccc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: nested_example_member_ddd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: nested_example_inner_memberrr
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        ts_example_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Example(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _NestedExample__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ts_example_msgs::msg::NestedExample *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedExample__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ts_example_msgs::msg::NestedExample *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedExample__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ts_example_msgs::msg::NestedExample *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedExample__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_NestedExample(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _NestedExample__callbacks = {
  "ts_example_msgs::msg",
  "NestedExample",
  _NestedExample__cdr_serialize,
  _NestedExample__cdr_deserialize,
  _NestedExample__get_serialized_size,
  _NestedExample__max_serialized_size
};

static rosidl_message_type_support_t _NestedExample__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NestedExample__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ts_example_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ts_example_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ts_example_msgs::msg::NestedExample>()
{
  return &ts_example_msgs::msg::typesupport_fastrtps_cpp::_NestedExample__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ts_example_msgs, msg, NestedExample)() {
  return &ts_example_msgs::msg::typesupport_fastrtps_cpp::_NestedExample__handle;
}

#ifdef __cplusplus
}
#endif
