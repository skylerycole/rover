// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Drive.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__DRIVE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__DRIVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Drive_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Drive_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Drive_Request_
{
  using Type = Drive_Request_<ContainerAllocator>;

  explicit Drive_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_speed = 0.0;
      this->right_speed = 0.0;
      this->duration = 0.0;
    }
  }

  explicit Drive_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_speed = 0.0;
      this->right_speed = 0.0;
      this->duration = 0.0;
    }
  }

  // field types and members
  using _left_speed_type =
    double;
  _left_speed_type left_speed;
  using _right_speed_type =
    double;
  _right_speed_type right_speed;
  using _duration_type =
    double;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__left_speed(
    const double & _arg)
  {
    this->left_speed = _arg;
    return *this;
  }
  Type & set__right_speed(
    const double & _arg)
  {
    this->right_speed = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Drive_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Drive_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Drive_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Drive_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Drive_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Drive_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Drive_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Drive_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Drive_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Drive_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Drive_Request
    std::shared_ptr<interfaces::srv::Drive_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Drive_Request
    std::shared_ptr<interfaces::srv::Drive_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Drive_Request_ & other) const
  {
    if (this->left_speed != other.left_speed) {
      return false;
    }
    if (this->right_speed != other.right_speed) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Drive_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Drive_Request_

// alias to use template instance with default allocator
using Drive_Request =
  interfaces::srv::Drive_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Drive_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Drive_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Drive_Response_
{
  using Type = Drive_Response_<ContainerAllocator>;

  explicit Drive_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Drive_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces::srv::Drive_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Drive_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Drive_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Drive_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Drive_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Drive_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Drive_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Drive_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Drive_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Drive_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Drive_Response
    std::shared_ptr<interfaces::srv::Drive_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Drive_Response
    std::shared_ptr<interfaces::srv::Drive_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Drive_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Drive_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Drive_Response_

// alias to use template instance with default allocator
using Drive_Response =
  interfaces::srv::Drive_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Drive
{
  using Request = interfaces::srv::Drive_Request;
  using Response = interfaces::srv::Drive_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__DRIVE__STRUCT_HPP_
