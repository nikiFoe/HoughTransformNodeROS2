// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from houghmessage:msg/RWhoughLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "houghmessage/msg/detail/r_whough_line__rosidl_typesupport_introspection_c.h"
#include "houghmessage/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "houghmessage/msg/detail/r_whough_line__functions.h"
#include "houghmessage/msg/detail/r_whough_line__struct.h"


// Include directives for member types
// Member `cmatrix`
// Member `vranges`
// Member `vangles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  houghmessage__msg__RWhoughLine__init(message_memory);
}

void houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_fini_function(void * message_memory)
{
  houghmessage__msg__RWhoughLine__fini(message_memory);
}

size_t houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__size_function__RWhoughLine__cmatrix(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_const_function__RWhoughLine__cmatrix(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_function__RWhoughLine__cmatrix(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__fetch_function__RWhoughLine__cmatrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_const_function__RWhoughLine__cmatrix(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__assign_function__RWhoughLine__cmatrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_function__RWhoughLine__cmatrix(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__resize_function__RWhoughLine__cmatrix(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__size_function__RWhoughLine__vranges(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_const_function__RWhoughLine__vranges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_function__RWhoughLine__vranges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__fetch_function__RWhoughLine__vranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_const_function__RWhoughLine__vranges(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__assign_function__RWhoughLine__vranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_function__RWhoughLine__vranges(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__resize_function__RWhoughLine__vranges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__size_function__RWhoughLine__vangles(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_const_function__RWhoughLine__vangles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_function__RWhoughLine__vangles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__fetch_function__RWhoughLine__vangles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_const_function__RWhoughLine__vangles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__assign_function__RWhoughLine__vangles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_function__RWhoughLine__vangles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__resize_function__RWhoughLine__vangles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_message_member_array[7] = {
  {
    "cmatrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage__msg__RWhoughLine, cmatrix),  // bytes offset in struct
    NULL,  // default value
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__size_function__RWhoughLine__cmatrix,  // size() function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_const_function__RWhoughLine__cmatrix,  // get_const(index) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_function__RWhoughLine__cmatrix,  // get(index) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__fetch_function__RWhoughLine__cmatrix,  // fetch(index, &value) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__assign_function__RWhoughLine__cmatrix,  // assign(index, value) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__resize_function__RWhoughLine__cmatrix  // resize(index) function pointer
  },
  {
    "thaxis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage__msg__RWhoughLine, thaxis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raxis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage__msg__RWhoughLine, raxis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage__msg__RWhoughLine, vranges),  // bytes offset in struct
    NULL,  // default value
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__size_function__RWhoughLine__vranges,  // size() function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_const_function__RWhoughLine__vranges,  // get_const(index) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_function__RWhoughLine__vranges,  // get(index) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__fetch_function__RWhoughLine__vranges,  // fetch(index, &value) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__assign_function__RWhoughLine__vranges,  // assign(index, value) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__resize_function__RWhoughLine__vranges  // resize(index) function pointer
  },
  {
    "vangles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage__msg__RWhoughLine, vangles),  // bytes offset in struct
    NULL,  // default value
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__size_function__RWhoughLine__vangles,  // size() function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_const_function__RWhoughLine__vangles,  // get_const(index) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__get_function__RWhoughLine__vangles,  // get(index) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__fetch_function__RWhoughLine__vangles,  // fetch(index, &value) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__assign_function__RWhoughLine__vangles,  // assign(index, value) function pointer
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__resize_function__RWhoughLine__vangles  // resize(index) function pointer
  },
  {
    "row",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage__msg__RWhoughLine, row),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "col",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage__msg__RWhoughLine, col),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_message_members = {
  "houghmessage__msg",  // message namespace
  "RWhoughLine",  // message name
  7,  // number of fields
  sizeof(houghmessage__msg__RWhoughLine),
  houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_message_member_array,  // message members
  houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_init_function,  // function to initialize message memory (memory has to be allocated)
  houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_message_type_support_handle = {
  0,
  &houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_houghmessage
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, houghmessage, msg, RWhoughLine)() {
  if (!houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_message_type_support_handle.typesupport_identifier) {
    houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &houghmessage__msg__RWhoughLine__rosidl_typesupport_introspection_c__RWhoughLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
