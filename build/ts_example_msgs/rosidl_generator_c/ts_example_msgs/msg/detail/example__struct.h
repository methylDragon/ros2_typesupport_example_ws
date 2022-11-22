// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ts_example_msgs:msg/Example.idl
// generated code does not contain a copyright notice

#ifndef TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__STRUCT_H_
#define TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Example in the package ts_example_msgs.
typedef struct ts_example_msgs__msg__Example
{
  bool example_member_aaa;
  int8_t example_member_bbb;
} ts_example_msgs__msg__Example;

// Struct for a sequence of ts_example_msgs__msg__Example.
typedef struct ts_example_msgs__msg__Example__Sequence
{
  ts_example_msgs__msg__Example * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ts_example_msgs__msg__Example__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__STRUCT_H_
