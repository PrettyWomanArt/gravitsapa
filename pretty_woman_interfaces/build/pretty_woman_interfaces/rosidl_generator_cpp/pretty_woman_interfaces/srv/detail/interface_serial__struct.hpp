// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pretty_woman_interfaces:srv/InterfaceSerial.idl
// generated code does not contain a copyright notice

#ifndef PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__STRUCT_HPP_
#define PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pretty_woman_interfaces__srv__InterfaceSerial_Request __attribute__((deprecated))
#else
# define DEPRECATED__pretty_woman_interfaces__srv__InterfaceSerial_Request __declspec(deprecated)
#endif

namespace pretty_woman_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InterfaceSerial_Request_
{
  using Type = InterfaceSerial_Request_<ContainerAllocator>;

  explicit InterfaceSerial_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str = "";
    }
  }

  explicit InterfaceSerial_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : str(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str = "";
    }
  }

  // field types and members
  using _str_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _str_type str;

  // setters for named parameter idiom
  Type & set__str(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->str = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pretty_woman_interfaces__srv__InterfaceSerial_Request
    std::shared_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pretty_woman_interfaces__srv__InterfaceSerial_Request
    std::shared_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterfaceSerial_Request_ & other) const
  {
    if (this->str != other.str) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterfaceSerial_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterfaceSerial_Request_

// alias to use template instance with default allocator
using InterfaceSerial_Request =
  pretty_woman_interfaces::srv::InterfaceSerial_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pretty_woman_interfaces


#ifndef _WIN32
# define DEPRECATED__pretty_woman_interfaces__srv__InterfaceSerial_Response __attribute__((deprecated))
#else
# define DEPRECATED__pretty_woman_interfaces__srv__InterfaceSerial_Response __declspec(deprecated)
#endif

namespace pretty_woman_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InterfaceSerial_Response_
{
  using Type = InterfaceSerial_Response_<ContainerAllocator>;

  explicit InterfaceSerial_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str = "";
    }
  }

  explicit InterfaceSerial_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : str(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str = "";
    }
  }

  // field types and members
  using _str_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _str_type str;

  // setters for named parameter idiom
  Type & set__str(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->str = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pretty_woman_interfaces__srv__InterfaceSerial_Response
    std::shared_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pretty_woman_interfaces__srv__InterfaceSerial_Response
    std::shared_ptr<pretty_woman_interfaces::srv::InterfaceSerial_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterfaceSerial_Response_ & other) const
  {
    if (this->str != other.str) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterfaceSerial_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterfaceSerial_Response_

// alias to use template instance with default allocator
using InterfaceSerial_Response =
  pretty_woman_interfaces::srv::InterfaceSerial_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pretty_woman_interfaces

namespace pretty_woman_interfaces
{

namespace srv
{

struct InterfaceSerial
{
  using Request = pretty_woman_interfaces::srv::InterfaceSerial_Request;
  using Response = pretty_woman_interfaces::srv::InterfaceSerial_Response;
};

}  // namespace srv

}  // namespace pretty_woman_interfaces

#endif  // PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__STRUCT_HPP_
