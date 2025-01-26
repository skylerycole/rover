// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Steer.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__STEER__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__STEER__BUILDER_HPP_

#include "interfaces/srv/detail/steer__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Steer_Request_angle
{
public:
  Init_Steer_Request_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Steer_Request angle(::interfaces::srv::Steer_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Steer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Steer_Request>()
{
  return interfaces::srv::builder::Init_Steer_Request_angle();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Steer_Response_success
{
public:
  Init_Steer_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Steer_Response success(::interfaces::srv::Steer_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Steer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Steer_Response>()
{
  return interfaces::srv::builder::Init_Steer_Response_success();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__STEER__BUILDER_HPP_
