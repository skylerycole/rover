// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Drive.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__DRIVE__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__DRIVE__TRAITS_HPP_

#include "interfaces/srv/detail/drive__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Drive_Request>()
{
  return "interfaces::srv::Drive_Request";
}

template<>
inline const char * name<interfaces::srv::Drive_Request>()
{
  return "interfaces/srv/Drive_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Drive_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Drive_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Drive_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Drive_Response>()
{
  return "interfaces::srv::Drive_Response";
}

template<>
inline const char * name<interfaces::srv::Drive_Response>()
{
  return "interfaces/srv/Drive_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Drive_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Drive_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Drive_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Drive>()
{
  return "interfaces::srv::Drive";
}

template<>
inline const char * name<interfaces::srv::Drive>()
{
  return "interfaces/srv/Drive";
}

template<>
struct has_fixed_size<interfaces::srv::Drive>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Drive_Request>::value &&
    has_fixed_size<interfaces::srv::Drive_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Drive>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Drive_Request>::value &&
    has_bounded_size<interfaces::srv::Drive_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Drive>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Drive_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Drive_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__DRIVE__TRAITS_HPP_
