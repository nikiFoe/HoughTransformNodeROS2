// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from houghmessage:msg/RWhoughLine.idl
// generated code does not contain a copyright notice

#ifndef HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__STRUCT_HPP_
#define HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__houghmessage__msg__RWhoughLine __attribute__((deprecated))
#else
# define DEPRECATED__houghmessage__msg__RWhoughLine __declspec(deprecated)
#endif

namespace houghmessage
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RWhoughLine_
{
  using Type = RWhoughLine_<ContainerAllocator>;

  explicit RWhoughLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RWhoughLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _cmatrix_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _cmatrix_type cmatrix;
  using _thaxis_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _thaxis_type thaxis;
  using _raxis_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _raxis_type raxis;

  // setters for named parameter idiom
  Type & set__cmatrix(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->cmatrix = _arg;
    return *this;
  }
  Type & set__thaxis(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->thaxis = _arg;
    return *this;
  }
  Type & set__raxis(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->raxis = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    houghmessage::msg::RWhoughLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const houghmessage::msg::RWhoughLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<houghmessage::msg::RWhoughLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<houghmessage::msg::RWhoughLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      houghmessage::msg::RWhoughLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<houghmessage::msg::RWhoughLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      houghmessage::msg::RWhoughLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<houghmessage::msg::RWhoughLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<houghmessage::msg::RWhoughLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<houghmessage::msg::RWhoughLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__houghmessage__msg__RWhoughLine
    std::shared_ptr<houghmessage::msg::RWhoughLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__houghmessage__msg__RWhoughLine
    std::shared_ptr<houghmessage::msg::RWhoughLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RWhoughLine_ & other) const
  {
    if (this->cmatrix != other.cmatrix) {
      return false;
    }
    if (this->thaxis != other.thaxis) {
      return false;
    }
    if (this->raxis != other.raxis) {
      return false;
    }
    return true;
  }
  bool operator!=(const RWhoughLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RWhoughLine_

// alias to use template instance with default allocator
using RWhoughLine =
  houghmessage::msg::RWhoughLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace houghmessage

#endif  // HOUGHMESSAGE__MSG__DETAIL__R_WHOUGH_LINE__STRUCT_HPP_
