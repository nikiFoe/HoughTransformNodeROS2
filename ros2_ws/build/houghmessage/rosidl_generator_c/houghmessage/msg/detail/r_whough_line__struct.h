// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from houghmessage:msg/RWhoughLine.idl
// generated code does not contain a copyright notice

#ifndef HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__STRUCT_H_
#define HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmatrix'
// Member 'thaxis'
// Member 'raxis'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RWhoughLine in the package houghmessage.
/**
  * RWhoughLine.msg
 */
typedef struct houghmessage__msg__RWhoughLine
{
  rosidl_runtime_c__int32__Sequence cmatrix;
  rosidl_runtime_c__float__Sequence thaxis;
  rosidl_runtime_c__float__Sequence raxis;
} houghmessage__msg__RWhoughLine;

// Struct for a sequence of houghmessage__msg__RWhoughLine.
typedef struct houghmessage__msg__RWhoughLine__Sequence
{
  houghmessage__msg__RWhoughLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} houghmessage__msg__RWhoughLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__STRUCT_H_
