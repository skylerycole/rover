// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Steer.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__STEER__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__STEER__TRAITS_HPP_

#include "interfaces/srv/detail/steer__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Steer_Request>()
{
  return "interfaces::srv::Steer_Request";
}

template<>
inline const char * name<interfaces::srv::Steer_Request>()
{
  return "interfaces/srv/Steer_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Steer_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Steer_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Steer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Steer_Response>()
{
  return "interfaces::srv::Steer_Response";
}

template<>
inline const char * name<interfaces::srv::Steer_Response>()
{
  return "interfaces/srv/Steer_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Steer_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Steer_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Steer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Steer>()
{
  return "interfaces::srv::Steer";
}

template<>
inline const char * name<interfaces::srv::Steer>()
{
  return "interfaces/srv/Steer";
}

template<>
struct has_fixed_size<interfaces::srv::Steer>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Steer_Request>::value &&
    has_fixed_size<interfaces::srv::Steer_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Steer>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Steer_Request>::value &&
    has_bounded_size<interfaces::srv::Steer_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Steer>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Steer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Steer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__STEER__TRAITS_HPP_
