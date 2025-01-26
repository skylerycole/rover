// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Drill.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__DRILL__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__DRILL__TRAITS_HPP_

#include "interfaces/srv/detail/drill__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Drill_Request>()
{
  return "interfaces::srv::Drill_Request";
}

template<>
inline const char * name<interfaces::srv::Drill_Request>()
{
  return "interfaces/srv/Drill_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Drill_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Drill_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Drill_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Drill_Response>()
{
  return "interfaces::srv::Drill_Response";
}

template<>
inline const char * name<interfaces::srv::Drill_Response>()
{
  return "interfaces/srv/Drill_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Drill_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::Drill_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::Drill_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Drill>()
{
  return "interfaces::srv::Drill";
}

template<>
inline const char * name<interfaces::srv::Drill>()
{
  return "interfaces/srv/Drill";
}

template<>
struct has_fixed_size<interfaces::srv::Drill>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Drill_Request>::value &&
    has_fixed_size<interfaces::srv::Drill_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Drill>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Drill_Request>::value &&
    has_bounded_size<interfaces::srv::Drill_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Drill>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Drill_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Drill_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__DRILL__TRAITS_HPP_
