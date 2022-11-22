// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ts_example_msgs:msg/NestedExample.idl
// generated code does not contain a copyright notice

#ifndef TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__FUNCTIONS_H_
#define TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ts_example_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ts_example_msgs/msg/detail/nested_example__struct.h"

/// Initialize msg/NestedExample message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ts_example_msgs__msg__NestedExample
 * )) before or use
 * ts_example_msgs__msg__NestedExample__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
bool
ts_example_msgs__msg__NestedExample__init(ts_example_msgs__msg__NestedExample * msg);

/// Finalize msg/NestedExample message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
void
ts_example_msgs__msg__NestedExample__fini(ts_example_msgs__msg__NestedExample * msg);

/// Create msg/NestedExample message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ts_example_msgs__msg__NestedExample__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
ts_example_msgs__msg__NestedExample *
ts_example_msgs__msg__NestedExample__create();

/// Destroy msg/NestedExample message.
/**
 * It calls
 * ts_example_msgs__msg__NestedExample__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
void
ts_example_msgs__msg__NestedExample__destroy(ts_example_msgs__msg__NestedExample * msg);

/// Check for msg/NestedExample message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
bool
ts_example_msgs__msg__NestedExample__are_equal(const ts_example_msgs__msg__NestedExample * lhs, const ts_example_msgs__msg__NestedExample * rhs);

/// Copy a msg/NestedExample message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
bool
ts_example_msgs__msg__NestedExample__copy(
  const ts_example_msgs__msg__NestedExample * input,
  ts_example_msgs__msg__NestedExample * output);

/// Initialize array of msg/NestedExample messages.
/**
 * It allocates the memory for the number of elements and calls
 * ts_example_msgs__msg__NestedExample__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
bool
ts_example_msgs__msg__NestedExample__Sequence__init(ts_example_msgs__msg__NestedExample__Sequence * array, size_t size);

/// Finalize array of msg/NestedExample messages.
/**
 * It calls
 * ts_example_msgs__msg__NestedExample__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
void
ts_example_msgs__msg__NestedExample__Sequence__fini(ts_example_msgs__msg__NestedExample__Sequence * array);

/// Create array of msg/NestedExample messages.
/**
 * It allocates the memory for the array and calls
 * ts_example_msgs__msg__NestedExample__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
ts_example_msgs__msg__NestedExample__Sequence *
ts_example_msgs__msg__NestedExample__Sequence__create(size_t size);

/// Destroy array of msg/NestedExample messages.
/**
 * It calls
 * ts_example_msgs__msg__NestedExample__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
void
ts_example_msgs__msg__NestedExample__Sequence__destroy(ts_example_msgs__msg__NestedExample__Sequence * array);

/// Check for msg/NestedExample message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
bool
ts_example_msgs__msg__NestedExample__Sequence__are_equal(const ts_example_msgs__msg__NestedExample__Sequence * lhs, const ts_example_msgs__msg__NestedExample__Sequence * rhs);

/// Copy an array of msg/NestedExample messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ts_example_msgs
bool
ts_example_msgs__msg__NestedExample__Sequence__copy(
  const ts_example_msgs__msg__NestedExample__Sequence * input,
  ts_example_msgs__msg__NestedExample__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__FUNCTIONS_H_
