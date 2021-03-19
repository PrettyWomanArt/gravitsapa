// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pretty_woman_interfaces:srv/InterfaceSerial.idl
// generated code does not contain a copyright notice

#ifndef PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__BUILDER_HPP_
#define PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__BUILDER_HPP_

#include "pretty_woman_interfaces/srv/detail/interface_serial__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pretty_woman_interfaces
{

namespace srv
{

namespace builder
{

class Init_InterfaceSerial_Request_str
{
public:
  Init_InterfaceSerial_Request_str()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pretty_woman_interfaces::srv::InterfaceSerial_Request str(::pretty_woman_interfaces::srv::InterfaceSerial_Request::_str_type arg)
  {
    msg_.str = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pretty_woman_interfaces::srv::InterfaceSerial_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pretty_woman_interfaces::srv::InterfaceSerial_Request>()
{
  return pretty_woman_interfaces::srv::builder::Init_InterfaceSerial_Request_str();
}

}  // namespace pretty_woman_interfaces


namespace pretty_woman_interfaces
{

namespace srv
{

namespace builder
{

class Init_InterfaceSerial_Response_str
{
public:
  Init_InterfaceSerial_Response_str()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pretty_woman_interfaces::srv::InterfaceSerial_Response str(::pretty_woman_interfaces::srv::InterfaceSerial_Response::_str_type arg)
  {
    msg_.str = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pretty_woman_interfaces::srv::InterfaceSerial_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pretty_woman_interfaces::srv::InterfaceSerial_Response>()
{
  return pretty_woman_interfaces::srv::builder::Init_InterfaceSerial_Response_str();
}

}  // namespace pretty_woman_interfaces

#endif  // PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__BUILDER_HPP_
