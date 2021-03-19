// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pretty_woman_interfaces:srv/InterfaceSerial.idl
// generated code does not contain a copyright notice

#ifndef PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__TRAITS_HPP_
#define PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__TRAITS_HPP_

#include "pretty_woman_interfaces/srv/detail/interface_serial__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pretty_woman_interfaces::srv::InterfaceSerial_Request>()
{
  return "pretty_woman_interfaces::srv::InterfaceSerial_Request";
}

template<>
inline const char * name<pretty_woman_interfaces::srv::InterfaceSerial_Request>()
{
  return "pretty_woman_interfaces/srv/InterfaceSerial_Request";
}

template<>
struct has_fixed_size<pretty_woman_interfaces::srv::InterfaceSerial_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pretty_woman_interfaces::srv::InterfaceSerial_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pretty_woman_interfaces::srv::InterfaceSerial_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pretty_woman_interfaces::srv::InterfaceSerial_Response>()
{
  return "pretty_woman_interfaces::srv::InterfaceSerial_Response";
}

template<>
inline const char * name<pretty_woman_interfaces::srv::InterfaceSerial_Response>()
{
  return "pretty_woman_interfaces/srv/InterfaceSerial_Response";
}

template<>
struct has_fixed_size<pretty_woman_interfaces::srv::InterfaceSerial_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pretty_woman_interfaces::srv::InterfaceSerial_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pretty_woman_interfaces::srv::InterfaceSerial_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pretty_woman_interfaces::srv::InterfaceSerial>()
{
  return "pretty_woman_interfaces::srv::InterfaceSerial";
}

template<>
inline const char * name<pretty_woman_interfaces::srv::InterfaceSerial>()
{
  return "pretty_woman_interfaces/srv/InterfaceSerial";
}

template<>
struct has_fixed_size<pretty_woman_interfaces::srv::InterfaceSerial>
  : std::integral_constant<
    bool,
    has_fixed_size<pretty_woman_interfaces::srv::InterfaceSerial_Request>::value &&
    has_fixed_size<pretty_woman_interfaces::srv::InterfaceSerial_Response>::value
  >
{
};

template<>
struct has_bounded_size<pretty_woman_interfaces::srv::InterfaceSerial>
  : std::integral_constant<
    bool,
    has_bounded_size<pretty_woman_interfaces::srv::InterfaceSerial_Request>::value &&
    has_bounded_size<pretty_woman_interfaces::srv::InterfaceSerial_Response>::value
  >
{
};

template<>
struct is_service<pretty_woman_interfaces::srv::InterfaceSerial>
  : std::true_type
{
};

template<>
struct is_service_request<pretty_woman_interfaces::srv::InterfaceSerial_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pretty_woman_interfaces::srv::InterfaceSerial_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__TRAITS_HPP_
