// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ts_example_msgs:msg/Example.idl
// generated code does not contain a copyright notice
#include "ts_example_msgs/msg/detail/example__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ts_example_msgs__msg__Example__init(ts_example_msgs__msg__Example * msg)
{
  if (!msg) {
    return false;
  }
  // example_member_aaa
  // example_member_bbb
  return true;
}

void
ts_example_msgs__msg__Example__fini(ts_example_msgs__msg__Example * msg)
{
  if (!msg) {
    return;
  }
  // example_member_aaa
  // example_member_bbb
}

bool
ts_example_msgs__msg__Example__are_equal(const ts_example_msgs__msg__Example * lhs, const ts_example_msgs__msg__Example * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // example_member_aaa
  if (lhs->example_member_aaa != rhs->example_member_aaa) {
    return false;
  }
  // example_member_bbb
  if (lhs->example_member_bbb != rhs->example_member_bbb) {
    return false;
  }
  return true;
}

bool
ts_example_msgs__msg__Example__copy(
  const ts_example_msgs__msg__Example * input,
  ts_example_msgs__msg__Example * output)
{
  if (!input || !output) {
    return false;
  }
  // example_member_aaa
  output->example_member_aaa = input->example_member_aaa;
  // example_member_bbb
  output->example_member_bbb = input->example_member_bbb;
  return true;
}

ts_example_msgs__msg__Example *
ts_example_msgs__msg__Example__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ts_example_msgs__msg__Example * msg = (ts_example_msgs__msg__Example *)allocator.allocate(sizeof(ts_example_msgs__msg__Example), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ts_example_msgs__msg__Example));
  bool success = ts_example_msgs__msg__Example__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ts_example_msgs__msg__Example__destroy(ts_example_msgs__msg__Example * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ts_example_msgs__msg__Example__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ts_example_msgs__msg__Example__Sequence__init(ts_example_msgs__msg__Example__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ts_example_msgs__msg__Example * data = NULL;

  if (size) {
    data = (ts_example_msgs__msg__Example *)allocator.zero_allocate(size, sizeof(ts_example_msgs__msg__Example), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ts_example_msgs__msg__Example__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ts_example_msgs__msg__Example__fini(&data[i - 1]);
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
ts_example_msgs__msg__Example__Sequence__fini(ts_example_msgs__msg__Example__Sequence * array)
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
      ts_example_msgs__msg__Example__fini(&array->data[i]);
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

ts_example_msgs__msg__Example__Sequence *
ts_example_msgs__msg__Example__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ts_example_msgs__msg__Example__Sequence * array = (ts_example_msgs__msg__Example__Sequence *)allocator.allocate(sizeof(ts_example_msgs__msg__Example__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ts_example_msgs__msg__Example__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ts_example_msgs__msg__Example__Sequence__destroy(ts_example_msgs__msg__Example__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ts_example_msgs__msg__Example__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ts_example_msgs__msg__Example__Sequence__are_equal(const ts_example_msgs__msg__Example__Sequence * lhs, const ts_example_msgs__msg__Example__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ts_example_msgs__msg__Example__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ts_example_msgs__msg__Example__Sequence__copy(
  const ts_example_msgs__msg__Example__Sequence * input,
  ts_example_msgs__msg__Example__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ts_example_msgs__msg__Example);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ts_example_msgs__msg__Example * data =
      (ts_example_msgs__msg__Example *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ts_example_msgs__msg__Example__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ts_example_msgs__msg__Example__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ts_example_msgs__msg__Example__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
