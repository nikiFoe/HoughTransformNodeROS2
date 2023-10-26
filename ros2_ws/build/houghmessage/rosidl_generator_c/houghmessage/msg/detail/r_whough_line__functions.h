// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from houghmessage:msg/RWhoughLine.idl
// generated code does not contain a copyright notice

#ifndef HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__FUNCTIONS_H_
#define HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "houghmessage/msg/rosidl_generator_c__visibility_control.h"

#include "houghmessage/msg/detail/r_whough_line__struct.h"

/// Initialize msg/RWhoughLine message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * houghmessage__msg__RWhoughLine
 * )) before or use
 * houghmessage__msg__RWhoughLine__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
bool
houghmessage__msg__RWhoughLine__init(houghmessage__msg__RWhoughLine * msg);

/// Finalize msg/RWhoughLine message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
void
houghmessage__msg__RWhoughLine__fini(houghmessage__msg__RWhoughLine * msg);

/// Create msg/RWhoughLine message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * houghmessage__msg__RWhoughLine__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
houghmessage__msg__RWhoughLine *
houghmessage__msg__RWhoughLine__create();

/// Destroy msg/RWhoughLine message.
/**
 * It calls
 * houghmessage__msg__RWhoughLine__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
void
houghmessage__msg__RWhoughLine__destroy(houghmessage__msg__RWhoughLine * msg);

/// Check for msg/RWhoughLine message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
bool
houghmessage__msg__RWhoughLine__are_equal(const houghmessage__msg__RWhoughLine * lhs, const houghmessage__msg__RWhoughLine * rhs);

/// Copy a msg/RWhoughLine message.
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
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
bool
houghmessage__msg__RWhoughLine__copy(
  const houghmessage__msg__RWhoughLine * input,
  houghmessage__msg__RWhoughLine * output);

/// Initialize array of msg/RWhoughLine messages.
/**
 * It allocates the memory for the number of elements and calls
 * houghmessage__msg__RWhoughLine__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
bool
houghmessage__msg__RWhoughLine__Sequence__init(houghmessage__msg__RWhoughLine__Sequence * array, size_t size);

/// Finalize array of msg/RWhoughLine messages.
/**
 * It calls
 * houghmessage__msg__RWhoughLine__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
void
houghmessage__msg__RWhoughLine__Sequence__fini(houghmessage__msg__RWhoughLine__Sequence * array);

/// Create array of msg/RWhoughLine messages.
/**
 * It allocates the memory for the array and calls
 * houghmessage__msg__RWhoughLine__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
houghmessage__msg__RWhoughLine__Sequence *
houghmessage__msg__RWhoughLine__Sequence__create(size_t size);

/// Destroy array of msg/RWhoughLine messages.
/**
 * It calls
 * houghmessage__msg__RWhoughLine__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
void
houghmessage__msg__RWhoughLine__Sequence__destroy(houghmessage__msg__RWhoughLine__Sequence * array);

/// Check for msg/RWhoughLine message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
bool
houghmessage__msg__RWhoughLine__Sequence__are_equal(const houghmessage__msg__RWhoughLine__Sequence * lhs, const houghmessage__msg__RWhoughLine__Sequence * rhs);

/// Copy an array of msg/RWhoughLine messages.
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
ROSIDL_GENERATOR_C_PUBLIC_houghmessage
bool
houghmessage__msg__RWhoughLine__Sequence__copy(
  const houghmessage__msg__RWhoughLine__Sequence * input,
  houghmessage__msg__RWhoughLine__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__FUNCTIONS_H_
