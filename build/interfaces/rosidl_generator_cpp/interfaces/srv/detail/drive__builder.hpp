// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Drive.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__DRIVE__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__DRIVE__BUILDER_HPP_

#include "interfaces/srv/detail/drive__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Drive_Request_duration
{
public:
  explicit Init_Drive_Request_duration(::interfaces::srv::Drive_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Drive_Request duration(::interfaces::srv::Drive_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Drive_Request msg_;
};

class Init_Drive_Request_right_speed
{
public:
  explicit Init_Drive_Request_right_speed(::interfaces::srv::Drive_Request & msg)
  : msg_(msg)
  {}
  Init_Drive_Request_duration right_speed(::interfaces::srv::Drive_Request::_right_speed_type arg)
  {
    msg_.right_speed = std::move(arg);
    return Init_Drive_Request_duration(msg_);
  }

private:
  ::interfaces::srv::Drive_Request msg_;
};

class Init_Drive_Request_left_speed
{
public:
  Init_Drive_Request_left_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Drive_Request_right_speed left_speed(::interfaces::srv::Drive_Request::_left_speed_type arg)
  {
    msg_.left_speed = std::move(arg);
    return Init_Drive_Request_right_speed(msg_);
  }

private:
  ::interfaces::srv::Drive_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Drive_Request>()
{
  return interfaces::srv::builder::Init_Drive_Request_left_speed();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Drive_Response_success
{
public:
  Init_Drive_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Drive_Response success(::interfaces::srv::Drive_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Drive_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Drive_Response>()
{
  return interfaces::srv::builder::Init_Drive_Response_success();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__DRIVE__BUILDER_HPP_
