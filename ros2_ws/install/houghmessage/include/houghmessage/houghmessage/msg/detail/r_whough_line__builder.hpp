// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from houghmessage:msg/RWhoughLine.idl
// generated code does not contain a copyright notice

#ifndef HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__BUILDER_HPP_
#define HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "houghmessage/msg/detail/r_whough_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace houghmessage
{

namespace msg
{

namespace builder
{

class Init_RWhoughLine_raxis
{
public:
  explicit Init_RWhoughLine_raxis(::houghmessage::msg::RWhoughLine & msg)
  : msg_(msg)
  {}
  ::houghmessage::msg::RWhoughLine raxis(::houghmessage::msg::RWhoughLine::_raxis_type arg)
  {
    msg_.raxis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::houghmessage::msg::RWhoughLine msg_;
};

class Init_RWhoughLine_thaxis
{
public:
  explicit Init_RWhoughLine_thaxis(::houghmessage::msg::RWhoughLine & msg)
  : msg_(msg)
  {}
  Init_RWhoughLine_raxis thaxis(::houghmessage::msg::RWhoughLine::_thaxis_type arg)
  {
    msg_.thaxis = std::move(arg);
    return Init_RWhoughLine_raxis(msg_);
  }

private:
  ::houghmessage::msg::RWhoughLine msg_;
};

class Init_RWhoughLine_cmatrix
{
public:
  Init_RWhoughLine_cmatrix()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RWhoughLine_thaxis cmatrix(::houghmessage::msg::RWhoughLine::_cmatrix_type arg)
  {
    msg_.cmatrix = std::move(arg);
    return Init_RWhoughLine_thaxis(msg_);
  }

private:
  ::houghmessage::msg::RWhoughLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::houghmessage::msg::RWhoughLine>()
{
  return houghmessage::msg::builder::Init_RWhoughLine_cmatrix();
}

}  // namespace houghmessage

#endif  // HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__BUILDER_HPP_
