// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from houghmessage:msg/RWhoughLine.idl
// generated code does not contain a copyright notice

#ifndef HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__TRAITS_HPP_
#define HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "houghmessage/msg/detail/r_whough_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace houghmessage
{

namespace msg
{

inline void to_flow_style_yaml(
  const RWhoughLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmatrix
  {
    if (msg.cmatrix.size() == 0) {
      out << "cmatrix: []";
    } else {
      out << "cmatrix: [";
      size_t pending_items = msg.cmatrix.size();
      for (auto item : msg.cmatrix) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: thaxis
  {
    if (msg.thaxis.size() == 0) {
      out << "thaxis: []";
    } else {
      out << "thaxis: [";
      size_t pending_items = msg.thaxis.size();
      for (auto item : msg.thaxis) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: raxis
  {
    if (msg.raxis.size() == 0) {
      out << "raxis: []";
    } else {
      out << "raxis: [";
      size_t pending_items = msg.raxis.size();
      for (auto item : msg.raxis) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RWhoughLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmatrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cmatrix.size() == 0) {
      out << "cmatrix: []\n";
    } else {
      out << "cmatrix:\n";
      for (auto item : msg.cmatrix) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: thaxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.thaxis.size() == 0) {
      out << "thaxis: []\n";
    } else {
      out << "thaxis:\n";
      for (auto item : msg.thaxis) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: raxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raxis.size() == 0) {
      out << "raxis: []\n";
    } else {
      out << "raxis:\n";
      for (auto item : msg.raxis) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RWhoughLine & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace houghmessage

namespace rosidl_generator_traits
{

[[deprecated("use houghmessage::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const houghmessage::msg::RWhoughLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  houghmessage::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use houghmessage::msg::to_yaml() instead")]]
inline std::string to_yaml(const houghmessage::msg::RWhoughLine & msg)
{
  return houghmessage::msg::to_yaml(msg);
}

template<>
inline const char * data_type<houghmessage::msg::RWhoughLine>()
{
  return "houghmessage::msg::RWhoughLine";
}

template<>
inline const char * name<houghmessage::msg::RWhoughLine>()
{
  return "houghmessage/msg/RWhoughLine";
}

template<>
struct has_fixed_size<houghmessage::msg::RWhoughLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<houghmessage::msg::RWhoughLine>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<houghmessage::msg::RWhoughLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__TRAITS_HPP_
