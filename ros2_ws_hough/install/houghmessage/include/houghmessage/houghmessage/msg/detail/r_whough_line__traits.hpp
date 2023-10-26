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
    out << "thaxis: ";
    rosidl_generator_traits::value_to_yaml(msg.thaxis, out);
    out << ", ";
  }

  // member: raxis
  {
    out << "raxis: ";
    rosidl_generator_traits::value_to_yaml(msg.raxis, out);
    out << ", ";
  }

  // member: vranges
  {
    if (msg.vranges.size() == 0) {
      out << "vranges: []";
    } else {
      out << "vranges: [";
      size_t pending_items = msg.vranges.size();
      for (auto item : msg.vranges) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vangles
  {
    if (msg.vangles.size() == 0) {
      out << "vangles: []";
    } else {
      out << "vangles: [";
      size_t pending_items = msg.vangles.size();
      for (auto item : msg.vangles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: row
  {
    out << "row: ";
    rosidl_generator_traits::value_to_yaml(msg.row, out);
    out << ", ";
  }

  // member: col
  {
    out << "col: ";
    rosidl_generator_traits::value_to_yaml(msg.col, out);
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
    out << "thaxis: ";
    rosidl_generator_traits::value_to_yaml(msg.thaxis, out);
    out << "\n";
  }

  // member: raxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raxis: ";
    rosidl_generator_traits::value_to_yaml(msg.raxis, out);
    out << "\n";
  }

  // member: vranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vranges.size() == 0) {
      out << "vranges: []\n";
    } else {
      out << "vranges:\n";
      for (auto item : msg.vranges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vangles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vangles.size() == 0) {
      out << "vangles: []\n";
    } else {
      out << "vangles:\n";
      for (auto item : msg.vangles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: row
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "row: ";
    rosidl_generator_traits::value_to_yaml(msg.row, out);
    out << "\n";
  }

  // member: col
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "col: ";
    rosidl_generator_traits::value_to_yaml(msg.col, out);
    out << "\n";
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
