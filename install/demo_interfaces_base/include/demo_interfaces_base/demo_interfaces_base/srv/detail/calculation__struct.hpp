// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from demo_interfaces_base:srv/Calculation.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__STRUCT_HPP_
#define DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__demo_interfaces_base__srv__Calculation_Request __attribute__((deprecated))
#else
# define DEPRECATED__demo_interfaces_base__srv__Calculation_Request __declspec(deprecated)
#endif

namespace demo_interfaces_base
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calculation_Request_
{
  using Type = Calculation_Request_<ContainerAllocator>;

  explicit Calculation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num1 = 0l;
      this->num2 = 0l;
    }
  }

  explicit Calculation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num1 = 0l;
      this->num2 = 0l;
    }
  }

  // field types and members
  using _num1_type =
    int32_t;
  _num1_type num1;
  using _num2_type =
    int32_t;
  _num2_type num2;

  // setters for named parameter idiom
  Type & set__num1(
    const int32_t & _arg)
  {
    this->num1 = _arg;
    return *this;
  }
  Type & set__num2(
    const int32_t & _arg)
  {
    this->num2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__demo_interfaces_base__srv__Calculation_Request
    std::shared_ptr<demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__demo_interfaces_base__srv__Calculation_Request
    std::shared_ptr<demo_interfaces_base::srv::Calculation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculation_Request_ & other) const
  {
    if (this->num1 != other.num1) {
      return false;
    }
    if (this->num2 != other.num2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculation_Request_

// alias to use template instance with default allocator
using Calculation_Request =
  demo_interfaces_base::srv::Calculation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace demo_interfaces_base


#ifndef _WIN32
# define DEPRECATED__demo_interfaces_base__srv__Calculation_Response __attribute__((deprecated))
#else
# define DEPRECATED__demo_interfaces_base__srv__Calculation_Response __declspec(deprecated)
#endif

namespace demo_interfaces_base
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calculation_Response_
{
  using Type = Calculation_Response_<ContainerAllocator>;

  explicit Calculation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0l;
    }
  }

  explicit Calculation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0l;
    }
  }

  // field types and members
  using _sum_type =
    int32_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int32_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__demo_interfaces_base__srv__Calculation_Response
    std::shared_ptr<demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__demo_interfaces_base__srv__Calculation_Response
    std::shared_ptr<demo_interfaces_base::srv::Calculation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculation_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculation_Response_

// alias to use template instance with default allocator
using Calculation_Response =
  demo_interfaces_base::srv::Calculation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace demo_interfaces_base

namespace demo_interfaces_base
{

namespace srv
{

struct Calculation
{
  using Request = demo_interfaces_base::srv::Calculation_Request;
  using Response = demo_interfaces_base::srv::Calculation_Response;
};

}  // namespace srv

}  // namespace demo_interfaces_base

#endif  // DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__STRUCT_HPP_
