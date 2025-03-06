// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Lift.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__LIFT__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__LIFT__TRAITS_HPP_

#include "interfaces/srv/detail/lift__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Lift_Request>()
{
  return "interfaces::srv::Lift_Request";
}

template<>
inline const char * name<interfaces::srv::Lift_Request>()
{
  return "interfaces/srv/Lift_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Lift_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Lift_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Lift_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Lift_Response>()
{
  return "interfaces::srv::Lift_Response";
}

template<>
inline const char * name<interfaces::srv::Lift_Response>()
{
  return "interfaces/srv/Lift_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Lift_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Lift_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Lift_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Lift>()
{
  return "interfaces::srv::Lift";
}

template<>
inline const char * name<interfaces::srv::Lift>()
{
  return "interfaces/srv/Lift";
}

template<>
struct has_fixed_size<interfaces::srv::Lift>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Lift_Request>::value &&
    has_fixed_size<interfaces::srv::Lift_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Lift>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Lift_Request>::value &&
    has_bounded_size<interfaces::srv::Lift_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Lift>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Lift_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Lift_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__LIFT__TRAITS_HPP_
