// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Drill.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__DRILL__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__DRILL__BUILDER_HPP_

#include "interfaces/srv/detail/drill__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Drill_Request_delay
{
public:
  explicit Init_Drill_Request_delay(::interfaces::srv::Drill_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::Drill_Request delay(::interfaces::srv::Drill_Request::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Drill_Request msg_;
};

class Init_Drill_Request_steps
{
public:
  Init_Drill_Request_steps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Drill_Request_delay steps(::interfaces::srv::Drill_Request::_steps_type arg)
  {
    msg_.steps = std::move(arg);
    return Init_Drill_Request_delay(msg_);
  }

private:
  ::interfaces::srv::Drill_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Drill_Request>()
{
  return interfaces::srv::builder::Init_Drill_Request_steps();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Drill_Response_success
{
public:
  Init_Drill_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Drill_Response success(::interfaces::srv::Drill_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Drill_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Drill_Response>()
{
  return interfaces::srv::builder::Init_Drill_Response_success();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__DRILL__BUILDER_HPP_
