// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from houghmessage:msg/RWhoughLine.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "houghmessage/msg/detail/r_whough_line__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace houghmessage
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RWhoughLine_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) houghmessage::msg::RWhoughLine(_init);
}

void RWhoughLine_fini_function(void * message_memory)
{
  auto typed_message = static_cast<houghmessage::msg::RWhoughLine *>(message_memory);
  typed_message->~RWhoughLine();
}

size_t size_function__RWhoughLine__cmatrix(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RWhoughLine__cmatrix(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__RWhoughLine__cmatrix(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__RWhoughLine__cmatrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RWhoughLine__cmatrix(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RWhoughLine__cmatrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RWhoughLine__cmatrix(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__RWhoughLine__cmatrix(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RWhoughLine__vranges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RWhoughLine__vranges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__RWhoughLine__vranges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__RWhoughLine__vranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RWhoughLine__vranges(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RWhoughLine__vranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RWhoughLine__vranges(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__RWhoughLine__vranges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RWhoughLine__vangles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RWhoughLine__vangles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__RWhoughLine__vangles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__RWhoughLine__vangles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RWhoughLine__vangles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RWhoughLine__vangles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RWhoughLine__vangles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__RWhoughLine__vangles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RWhoughLine_message_member_array[7] = {
  {
    "cmatrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage::msg::RWhoughLine, cmatrix),  // bytes offset in struct
    nullptr,  // default value
    size_function__RWhoughLine__cmatrix,  // size() function pointer
    get_const_function__RWhoughLine__cmatrix,  // get_const(index) function pointer
    get_function__RWhoughLine__cmatrix,  // get(index) function pointer
    fetch_function__RWhoughLine__cmatrix,  // fetch(index, &value) function pointer
    assign_function__RWhoughLine__cmatrix,  // assign(index, value) function pointer
    resize_function__RWhoughLine__cmatrix  // resize(index) function pointer
  },
  {
    "thaxis",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage::msg::RWhoughLine, thaxis),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "raxis",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage::msg::RWhoughLine, raxis),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vranges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage::msg::RWhoughLine, vranges),  // bytes offset in struct
    nullptr,  // default value
    size_function__RWhoughLine__vranges,  // size() function pointer
    get_const_function__RWhoughLine__vranges,  // get_const(index) function pointer
    get_function__RWhoughLine__vranges,  // get(index) function pointer
    fetch_function__RWhoughLine__vranges,  // fetch(index, &value) function pointer
    assign_function__RWhoughLine__vranges,  // assign(index, value) function pointer
    resize_function__RWhoughLine__vranges  // resize(index) function pointer
  },
  {
    "vangles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage::msg::RWhoughLine, vangles),  // bytes offset in struct
    nullptr,  // default value
    size_function__RWhoughLine__vangles,  // size() function pointer
    get_const_function__RWhoughLine__vangles,  // get_const(index) function pointer
    get_function__RWhoughLine__vangles,  // get(index) function pointer
    fetch_function__RWhoughLine__vangles,  // fetch(index, &value) function pointer
    assign_function__RWhoughLine__vangles,  // assign(index, value) function pointer
    resize_function__RWhoughLine__vangles  // resize(index) function pointer
  },
  {
    "row",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage::msg::RWhoughLine, row),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "col",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(houghmessage::msg::RWhoughLine, col),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RWhoughLine_message_members = {
  "houghmessage::msg",  // message namespace
  "RWhoughLine",  // message name
  7,  // number of fields
  sizeof(houghmessage::msg::RWhoughLine),
  RWhoughLine_message_member_array,  // message members
  RWhoughLine_init_function,  // function to initialize message memory (memory has to be allocated)
  RWhoughLine_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RWhoughLine_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RWhoughLine_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace houghmessage


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<houghmessage::msg::RWhoughLine>()
{
  return &::houghmessage::msg::rosidl_typesupport_introspection_cpp::RWhoughLine_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, houghmessage, msg, RWhoughLine)() {
  return &::houghmessage::msg::rosidl_typesupport_introspection_cpp::RWhoughLine_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
