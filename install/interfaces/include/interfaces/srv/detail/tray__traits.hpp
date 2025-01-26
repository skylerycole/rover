// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Tray.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__TRAY__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__TRAY__TRAITS_HPP_

#include "interfaces/srv/detail/tray__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Tray_Request>()
{
  return "interfaces::srv::Tray_Request";
}

template<>
inline const char * name<interfaces::srv::Tray_Request>()
{
  return "interfaces/srv/Tray_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Tray_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Tray_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Tray_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Tray_Response>()
{
  return "interfaces::srv::Tray_Response";
}

template<>
inline const char * name<interfaces::srv::Tray_Response>()
{
  return "interfaces/srv/Tray_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Tray_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Tray_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Tray_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Tray>()
{
  return "interfaces::srv::Tray";
}

template<>
inline const char * name<interfaces::srv::Tray>()
{
  return "interfaces/srv/Tray";
}

template<>
struct has_fixed_size<interfaces::srv::Tray>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Tray_Request>::value &&
    has_fixed_size<interfaces::srv::Tray_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Tray>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Tray_Request>::value &&
    has_bounded_size<interfaces::srv::Tray_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Tray>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Tray_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Tray_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__TRAY__TRAITS_HPP_
