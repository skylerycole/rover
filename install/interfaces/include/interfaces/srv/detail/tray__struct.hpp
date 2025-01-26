// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Tray.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__TRAY__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__TRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Tray_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Tray_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tray_Request_
{
  using Type = Tray_Request_<ContainerAllocator>;

  explicit Tray_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steps = 0l;
      this->delay = 0l;
    }
  }

  explicit Tray_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->steps = 0l;
      this->delay = 0l;
    }
  }

  // field types and members
  using _steps_type =
    int32_t;
  _steps_type steps;
  using _delay_type =
    int32_t;
  _delay_type delay;

  // setters for named parameter idiom
  Type & set__steps(
    const int32_t & _arg)
  {
    this->steps = _arg;
    return *this;
  }
  Type & set__delay(
    const int32_t & _arg)
  {
    this->delay = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Tray_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Tray_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Tray_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Tray_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Tray_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Tray_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Tray_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Tray_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Tray_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Tray_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Tray_Request
    std::shared_ptr<interfaces::srv::Tray_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Tray_Request
    std::shared_ptr<interfaces::srv::Tray_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tray_Request_ & other) const
  {
    if (this->steps != other.steps) {
      return false;
    }
    if (this->delay != other.delay) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tray_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tray_Request_

// alias to use template instance with default allocator
using Tray_Request =
  interfaces::srv::Tray_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Tray_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Tray_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tray_Response_
{
  using Type = Tray_Response_<ContainerAllocator>;

  explicit Tray_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Tray_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Tray_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Tray_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Tray_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Tray_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Tray_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Tray_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Tray_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Tray_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Tray_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Tray_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Tray_Response
    std::shared_ptr<interfaces::srv::Tray_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Tray_Response
    std::shared_ptr<interfaces::srv::Tray_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tray_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tray_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tray_Response_

// alias to use template instance with default allocator
using Tray_Response =
  interfaces::srv::Tray_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Tray
{
  using Request = interfaces::srv::Tray_Request;
  using Response = interfaces::srv::Tray_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__TRAY__STRUCT_HPP_
