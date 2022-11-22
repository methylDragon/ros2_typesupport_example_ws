// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ts_example_msgs:msg/NestedExample.idl
// generated code does not contain a copyright notice

#ifndef TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__STRUCT_HPP_
#define TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nested_example_inner_memberrr'
#include "ts_example_msgs/msg/detail/example__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ts_example_msgs__msg__NestedExample __attribute__((deprecated))
#else
# define DEPRECATED__ts_example_msgs__msg__NestedExample __declspec(deprecated)
#endif

namespace ts_example_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NestedExample_
{
  using Type = NestedExample_<ContainerAllocator>;

  explicit NestedExample_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nested_example_member_ccc = 0;
      this->nested_example_member_ddd = 0ul;
    }
  }

  explicit NestedExample_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nested_example_member_ccc = 0;
      this->nested_example_member_ddd = 0ul;
    }
  }

  // field types and members
  using _nested_example_member_ccc_type =
    uint16_t;
  _nested_example_member_ccc_type nested_example_member_ccc;
  using _nested_example_member_ddd_type =
    uint32_t;
  _nested_example_member_ddd_type nested_example_member_ddd;
  using _nested_example_inner_memberrr_type =
    std::vector<ts_example_msgs::msg::Example_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ts_example_msgs::msg::Example_<ContainerAllocator>>>;
  _nested_example_inner_memberrr_type nested_example_inner_memberrr;

  // setters for named parameter idiom
  Type & set__nested_example_member_ccc(
    const uint16_t & _arg)
  {
    this->nested_example_member_ccc = _arg;
    return *this;
  }
  Type & set__nested_example_member_ddd(
    const uint32_t & _arg)
  {
    this->nested_example_member_ddd = _arg;
    return *this;
  }
  Type & set__nested_example_inner_memberrr(
    const std::vector<ts_example_msgs::msg::Example_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ts_example_msgs::msg::Example_<ContainerAllocator>>> & _arg)
  {
    this->nested_example_inner_memberrr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ts_example_msgs::msg::NestedExample_<ContainerAllocator> *;
  using ConstRawPtr =
    const ts_example_msgs::msg::NestedExample_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ts_example_msgs::msg::NestedExample_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ts_example_msgs::msg::NestedExample_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ts_example_msgs::msg::NestedExample_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ts_example_msgs::msg::NestedExample_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ts_example_msgs::msg::NestedExample_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ts_example_msgs::msg::NestedExample_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ts_example_msgs::msg::NestedExample_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ts_example_msgs::msg::NestedExample_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ts_example_msgs__msg__NestedExample
    std::shared_ptr<ts_example_msgs::msg::NestedExample_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ts_example_msgs__msg__NestedExample
    std::shared_ptr<ts_example_msgs::msg::NestedExample_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NestedExample_ & other) const
  {
    if (this->nested_example_member_ccc != other.nested_example_member_ccc) {
      return false;
    }
    if (this->nested_example_member_ddd != other.nested_example_member_ddd) {
      return false;
    }
    if (this->nested_example_inner_memberrr != other.nested_example_inner_memberrr) {
      return false;
    }
    return true;
  }
  bool operator!=(const NestedExample_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NestedExample_

// alias to use template instance with default allocator
using NestedExample =
  ts_example_msgs::msg::NestedExample_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ts_example_msgs

#endif  // TS_EXAMPLE_MSGS__MSG__DETAIL__NESTED_EXAMPLE__STRUCT_HPP_
