// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ts_example_msgs:msg/NestedExample.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ts_example_msgs/msg/detail/nested_example__rosidl_typesupport_introspection_c.h"
#include "ts_example_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ts_example_msgs/msg/detail/nested_example__functions.h"
#include "ts_example_msgs/msg/detail/nested_example__struct.h"


// Include directives for member types
// Member `nested_example_inner_memberrr`
#include "ts_example_msgs/msg/example.h"
// Member `nested_example_inner_memberrr`
#include "ts_example_msgs/msg/detail/example__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ts_example_msgs__msg__NestedExample__init(message_memory);
}

void ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_fini_function(void * message_memory)
{
  ts_example_msgs__msg__NestedExample__fini(message_memory);
}

size_t ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__size_function__NestedExample__nested_example_inner_memberrr(
  const void * untyped_member)
{
  const ts_example_msgs__msg__Example__Sequence * member =
    (const ts_example_msgs__msg__Example__Sequence *)(untyped_member);
  return member->size;
}

const void * ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__get_const_function__NestedExample__nested_example_inner_memberrr(
  const void * untyped_member, size_t index)
{
  const ts_example_msgs__msg__Example__Sequence * member =
    (const ts_example_msgs__msg__Example__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__get_function__NestedExample__nested_example_inner_memberrr(
  void * untyped_member, size_t index)
{
  ts_example_msgs__msg__Example__Sequence * member =
    (ts_example_msgs__msg__Example__Sequence *)(untyped_member);
  return &member->data[index];
}

void ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__fetch_function__NestedExample__nested_example_inner_memberrr(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ts_example_msgs__msg__Example * item =
    ((const ts_example_msgs__msg__Example *)
    ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__get_const_function__NestedExample__nested_example_inner_memberrr(untyped_member, index));
  ts_example_msgs__msg__Example * value =
    (ts_example_msgs__msg__Example *)(untyped_value);
  *value = *item;
}

void ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__assign_function__NestedExample__nested_example_inner_memberrr(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ts_example_msgs__msg__Example * item =
    ((ts_example_msgs__msg__Example *)
    ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__get_function__NestedExample__nested_example_inner_memberrr(untyped_member, index));
  const ts_example_msgs__msg__Example * value =
    (const ts_example_msgs__msg__Example *)(untyped_value);
  *item = *value;
}

bool ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__resize_function__NestedExample__nested_example_inner_memberrr(
  void * untyped_member, size_t size)
{
  ts_example_msgs__msg__Example__Sequence * member =
    (ts_example_msgs__msg__Example__Sequence *)(untyped_member);
  ts_example_msgs__msg__Example__Sequence__fini(member);
  return ts_example_msgs__msg__Example__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_message_member_array[3] = {
  {
    "nested_example_member_ccc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ts_example_msgs__msg__NestedExample, nested_example_member_ccc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nested_example_member_ddd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ts_example_msgs__msg__NestedExample, nested_example_member_ddd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nested_example_inner_memberrr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ts_example_msgs__msg__NestedExample, nested_example_inner_memberrr),  // bytes offset in struct
    NULL,  // default value
    ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__size_function__NestedExample__nested_example_inner_memberrr,  // size() function pointer
    ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__get_const_function__NestedExample__nested_example_inner_memberrr,  // get_const(index) function pointer
    ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__get_function__NestedExample__nested_example_inner_memberrr,  // get(index) function pointer
    ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__fetch_function__NestedExample__nested_example_inner_memberrr,  // fetch(index, &value) function pointer
    ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__assign_function__NestedExample__nested_example_inner_memberrr,  // assign(index, value) function pointer
    ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__resize_function__NestedExample__nested_example_inner_memberrr  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_message_members = {
  "ts_example_msgs__msg",  // message namespace
  "NestedExample",  // message name
  3,  // number of fields
  sizeof(ts_example_msgs__msg__NestedExample),
  ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_message_member_array,  // message members
  ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_init_function,  // function to initialize message memory (memory has to be allocated)
  ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_message_type_support_handle = {
  0,
  &ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ts_example_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ts_example_msgs, msg, NestedExample)() {
  ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ts_example_msgs, msg, Example)();
  if (!ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_message_type_support_handle.typesupport_identifier) {
    ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ts_example_msgs__msg__NestedExample__rosidl_typesupport_introspection_c__NestedExample_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
