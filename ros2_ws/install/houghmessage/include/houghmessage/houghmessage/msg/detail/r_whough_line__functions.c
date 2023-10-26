// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from houghmessage:msg/RWhoughLine.idl
// generated code does not contain a copyright notice
#include "houghmessage/msg/detail/r_whough_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cmatrix`
// Member `thaxis`
// Member `raxis`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
houghmessage__msg__RWhoughLine__init(houghmessage__msg__RWhoughLine * msg)
{
  if (!msg) {
    return false;
  }
  // cmatrix
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->cmatrix, 0)) {
    houghmessage__msg__RWhoughLine__fini(msg);
    return false;
  }
  // thaxis
  if (!rosidl_runtime_c__float__Sequence__init(&msg->thaxis, 0)) {
    houghmessage__msg__RWhoughLine__fini(msg);
    return false;
  }
  // raxis
  if (!rosidl_runtime_c__float__Sequence__init(&msg->raxis, 0)) {
    houghmessage__msg__RWhoughLine__fini(msg);
    return false;
  }
  return true;
}

void
houghmessage__msg__RWhoughLine__fini(houghmessage__msg__RWhoughLine * msg)
{
  if (!msg) {
    return;
  }
  // cmatrix
  rosidl_runtime_c__int32__Sequence__fini(&msg->cmatrix);
  // thaxis
  rosidl_runtime_c__float__Sequence__fini(&msg->thaxis);
  // raxis
  rosidl_runtime_c__float__Sequence__fini(&msg->raxis);
}

bool
houghmessage__msg__RWhoughLine__are_equal(const houghmessage__msg__RWhoughLine * lhs, const houghmessage__msg__RWhoughLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmatrix
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->cmatrix), &(rhs->cmatrix)))
  {
    return false;
  }
  // thaxis
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->thaxis), &(rhs->thaxis)))
  {
    return false;
  }
  // raxis
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->raxis), &(rhs->raxis)))
  {
    return false;
  }
  return true;
}

bool
houghmessage__msg__RWhoughLine__copy(
  const houghmessage__msg__RWhoughLine * input,
  houghmessage__msg__RWhoughLine * output)
{
  if (!input || !output) {
    return false;
  }
  // cmatrix
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->cmatrix), &(output->cmatrix)))
  {
    return false;
  }
  // thaxis
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->thaxis), &(output->thaxis)))
  {
    return false;
  }
  // raxis
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->raxis), &(output->raxis)))
  {
    return false;
  }
  return true;
}

houghmessage__msg__RWhoughLine *
houghmessage__msg__RWhoughLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  houghmessage__msg__RWhoughLine * msg = (houghmessage__msg__RWhoughLine *)allocator.allocate(sizeof(houghmessage__msg__RWhoughLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(houghmessage__msg__RWhoughLine));
  bool success = houghmessage__msg__RWhoughLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
houghmessage__msg__RWhoughLine__destroy(houghmessage__msg__RWhoughLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    houghmessage__msg__RWhoughLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
houghmessage__msg__RWhoughLine__Sequence__init(houghmessage__msg__RWhoughLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  houghmessage__msg__RWhoughLine * data = NULL;

  if (size) {
    data = (houghmessage__msg__RWhoughLine *)allocator.zero_allocate(size, sizeof(houghmessage__msg__RWhoughLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = houghmessage__msg__RWhoughLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        houghmessage__msg__RWhoughLine__fini(&data[i - 1]);
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
houghmessage__msg__RWhoughLine__Sequence__fini(houghmessage__msg__RWhoughLine__Sequence * array)
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
      houghmessage__msg__RWhoughLine__fini(&array->data[i]);
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

houghmessage__msg__RWhoughLine__Sequence *
houghmessage__msg__RWhoughLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  houghmessage__msg__RWhoughLine__Sequence * array = (houghmessage__msg__RWhoughLine__Sequence *)allocator.allocate(sizeof(houghmessage__msg__RWhoughLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = houghmessage__msg__RWhoughLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
houghmessage__msg__RWhoughLine__Sequence__destroy(houghmessage__msg__RWhoughLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    houghmessage__msg__RWhoughLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
houghmessage__msg__RWhoughLine__Sequence__are_equal(const houghmessage__msg__RWhoughLine__Sequence * lhs, const houghmessage__msg__RWhoughLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!houghmessage__msg__RWhoughLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
houghmessage__msg__RWhoughLine__Sequence__copy(
  const houghmessage__msg__RWhoughLine__Sequence * input,
  houghmessage__msg__RWhoughLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(houghmessage__msg__RWhoughLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    houghmessage__msg__RWhoughLine * data =
      (houghmessage__msg__RWhoughLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!houghmessage__msg__RWhoughLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          houghmessage__msg__RWhoughLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!houghmessage__msg__RWhoughLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
