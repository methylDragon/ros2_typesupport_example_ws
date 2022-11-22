// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ts_example_msgs:msg/Example.idl
// generated code does not contain a copyright notice

#ifndef TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__STRUCT_HPP_
#define TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ts_example_msgs__msg__Example __attribute__((deprecated))
#else
# define DEPRECATED__ts_example_msgs__msg__Example __declspec(deprecated)
#endif

namespace ts_example_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Example_
{
  using Type = Example_<ContainerAllocator>;

  explicit Example_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->example_member_aaa = false;
      this->example_member_bbb = 0;
    }
  }

  explicit Example_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->example_member_aaa = false;
      this->example_member_bbb = 0;
    }
  }

  // field types and members
  using _example_member_aaa_type =
    bool;
  _example_member_aaa_type example_member_aaa;
  using _example_member_bbb_type =
    int8_t;
  _example_member_bbb_type example_member_bbb;

  // setters for named parameter idiom
  Type & set__example_member_aaa(
    const bool & _arg)
  {
    this->example_member_aaa = _arg;
    return *this;
  }
  Type & set__example_member_bbb(
    const int8_t & _arg)
  {
    this->example_member_bbb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ts_example_msgs::msg::Example_<ContainerAllocator> *;
  using ConstRawPtr =
    const ts_example_msgs::msg::Example_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ts_example_msgs::msg::Example_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ts_example_msgs::msg::Example_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ts_example_msgs::msg::Example_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ts_example_msgs::msg::Example_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ts_example_msgs::msg::Example_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ts_example_msgs::msg::Example_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ts_example_msgs::msg::Example_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ts_example_msgs::msg::Example_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ts_example_msgs__msg__Example
    std::shared_ptr<ts_example_msgs::msg::Example_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ts_example_msgs__msg__Example
    std::shared_ptr<ts_example_msgs::msg::Example_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Example_ & other) const
  {
    if (this->example_member_aaa != other.example_member_aaa) {
      return false;
    }
    if (this->example_member_bbb != other.example_member_bbb) {
      return false;
    }
    return true;
  }
  bool operator!=(const Example_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Example_

// alias to use template instance with default allocator
using Example =
  ts_example_msgs::msg::Example_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ts_example_msgs

#endif  // TS_EXAMPLE_MSGS__MSG__DETAIL__EXAMPLE__STRUCT_HPP_
