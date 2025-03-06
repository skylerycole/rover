// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Lift.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__LIFT__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__LIFT__BUILDER_HPP_

#include "interfaces/srv/detail/lift__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Lift_Request_delay
{
public:
  explicit Init_Lift_Request_delay(::interfaces::srv::Lift_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Lift_Request delay(::interfaces::srv::Lift_Request::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Lift_Request msg_;
};

class Init_Lift_Request_steps
{
public:
  Init_Lift_Request_steps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lift_Request_delay steps(::interfaces::srv::Lift_Request::_steps_type arg)
  {
    msg_.steps = std::move(arg);
    return Init_Lift_Request_delay(msg_);
  }

private:
  ::interfaces::srv::Lift_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Lift_Request>()
{
  return interfaces::srv::builder::Init_Lift_Request_steps();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Lift_Response_success
{
public:
  Init_Lift_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Lift_Response success(::interfaces::srv::Lift_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Lift_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Lift_Response>()
{
  return interfaces::srv::builder::Init_Lift_Response_success();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__LIFT__BUILDER_HPP_
