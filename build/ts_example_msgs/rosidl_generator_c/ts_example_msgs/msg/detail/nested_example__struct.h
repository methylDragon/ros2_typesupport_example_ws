// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ts_example_msgs:msg/NestedExample.idl
// generated code does not contain a copyright notice

#ifndef TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__STRUCT_H_
#define TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nested_example_inner_memberrr'
#include "ts_example_msgs/msg/detail/example__struct.h"

/// Struct defined in msg/NestedExample in the package ts_example_msgs.
typedef struct ts_example_msgs__msg__NestedExample
{
  uint16_t nested_example_member_ccc;
  uint32_t nested_example_member_ddd;
  ts_example_msgs__msg__Example__Sequence nested_example_inner_memberrr;
} ts_example_msgs__msg__NestedExample;

// Struct for a sequence of ts_example_msgs__msg__NestedExample.
typedef struct ts_example_msgs__msg__NestedExample__Sequence
{
  ts_example_msgs__msg__NestedExample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ts_example_msgs__msg__NestedExample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__STRUCT_H_
