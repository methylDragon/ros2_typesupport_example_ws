// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ts_example_msgs:msg/NestedExample.idl
// generated code does not contain a copyright notice
#include "ts_example_msgs/msg/detail/nested_example__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nested_example_inner_memberrr`
#include "ts_example_msgs/msg/detail/example__functions.h"

bool
ts_example_msgs__msg__NestedExample__init(ts_example_msgs__msg__NestedExample * msg)
{
  if (!msg) {
    return false;
  }
  // nested_example_member_ccc
  // nested_example_member_ddd
  // nested_example_inner_memberrr
  if (!ts_example_msgs__msg__Example__Sequence__init(&msg->nested_example_inner_memberrr, 0)) {
    ts_example_msgs__msg__NestedExample__fini(msg);
    return false;
  }
  return true;
}

void
ts_example_msgs__msg__NestedExample__fini(ts_example_msgs__msg__NestedExample * msg)
{
  if (!msg) {
    return;
  }
  // nested_example_member_ccc
  // nested_example_member_ddd
  // nested_example_inner_memberrr
  ts_example_msgs__msg__Example__Sequence__fini(&msg->nested_example_inner_memberrr);
}

bool
ts_example_msgs__msg__NestedExample__are_equal(const ts_example_msgs__msg__NestedExample * lhs, const ts_example_msgs__msg__NestedExample * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nested_example_member_ccc
  if (lhs->nested_example_member_ccc != rhs->nested_example_member_ccc) {
    return false;
  }
  // nested_example_member_ddd
  if (lhs->nested_example_member_ddd != rhs->nested_example_member_ddd) {
    return false;
  }
  // nested_example_inner_memberrr
  if (!ts_example_msgs__msg__Example__Sequence__are_equal(
      &(lhs->nested_example_inner_memberrr), &(rhs->nested_example_inner_memberrr)))
  {
    return false;
  }
  return true;
}

bool
ts_example_msgs__msg__NestedExample__copy(
  const ts_example_msgs__msg__NestedExample * input,
  ts_example_msgs__msg__NestedExample * output)
{
  if (!input || !output) {
    return false;
  }
  // nested_example_member_ccc
  output->nested_example_member_ccc = input->nested_example_member_ccc;
  // nested_example_member_ddd
  output->nested_example_member_ddd = input->nested_example_member_ddd;
  // nested_example_inner_memberrr
  if (!ts_example_msgs__msg__Example__Sequence__copy(
      &(input->nested_example_inner_memberrr), &(output->nested_example_inner_memberrr)))
  {
    return false;
  }
  return true;
}

ts_example_msgs__msg__NestedExample *
ts_example_msgs__msg__NestedExample__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ts_example_msgs__msg__NestedExample * msg = (ts_example_msgs__msg__NestedExample *)allocator.allocate(sizeof(ts_example_msgs__msg__NestedExample), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ts_example_msgs__msg__NestedExample));
  bool success = ts_example_msgs__msg__NestedExample__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ts_example_msgs__msg__NestedExample__destroy(ts_example_msgs__msg__NestedExample * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ts_example_msgs__msg__NestedExample__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ts_example_msgs__msg__NestedExample__Sequence__init(ts_example_msgs__msg__NestedExample__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ts_example_msgs__msg__NestedExample * data = NULL;

  if (size) {
    data = (ts_example_msgs__msg__NestedExample *)allocator.zero_allocate(size, sizeof(ts_example_msgs__msg__NestedExample), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ts_example_msgs__msg__NestedExample__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ts_example_msgs__msg__NestedExample__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ts_example_msgs__msg__NestedExample__Sequence__fini(ts_example_msgs__msg__NestedExample__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ts_example_msgs__msg__NestedExample__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ts_example_msgs__msg__NestedExample__Sequence *
ts_example_msgs__msg__NestedExample__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ts_example_msgs__msg__NestedExample__Sequence * array = (ts_example_msgs__msg__NestedExample__Sequence *)allocator.allocate(sizeof(ts_example_msgs__msg__NestedExample__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ts_example_msgs__msg__NestedExample__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ts_example_msgs__msg__NestedExample__Sequence__destroy(ts_example_msgs__msg__NestedExample__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ts_example_msgs__msg__NestedExample__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ts_example_msgs__msg__NestedExample__Sequence__are_equal(const ts_example_msgs__msg__NestedExample__Sequence * lhs, const ts_example_msgs__msg__NestedExample__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ts_example_msgs__msg__NestedExample__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ts_example_msgs__msg__NestedExample__Sequence__copy(
  const ts_example_msgs__msg__NestedExample__Sequence * input,
  ts_example_msgs__msg__NestedExample__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ts_example_msgs__msg__NestedExample);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ts_example_msgs__msg__NestedExample * data =
      (ts_example_msgs__msg__NestedExample *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ts_example_msgs__msg__NestedExample__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ts_example_msgs__msg__NestedExample__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ts_example_msgs__msg__NestedExample__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
