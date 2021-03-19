// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pretty_woman_interfaces:srv/InterfaceSerial.idl
// generated code does not contain a copyright notice

#ifndef PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__STRUCT_H_
#define PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'str'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/InterfaceSerial in the package pretty_woman_interfaces.
typedef struct pretty_woman_interfaces__srv__InterfaceSerial_Request
{
  rosidl_runtime_c__String str;
} pretty_woman_interfaces__srv__InterfaceSerial_Request;

// Struct for a sequence of pretty_woman_interfaces__srv__InterfaceSerial_Request.
typedef struct pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence
{
  pretty_woman_interfaces__srv__InterfaceSerial_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'str'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/InterfaceSerial in the package pretty_woman_interfaces.
typedef struct pretty_woman_interfaces__srv__InterfaceSerial_Response
{
  rosidl_runtime_c__String str;
} pretty_woman_interfaces__srv__InterfaceSerial_Response;

// Struct for a sequence of pretty_woman_interfaces__srv__InterfaceSerial_Response.
typedef struct pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence
{
  pretty_woman_interfaces__srv__InterfaceSerial_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__STRUCT_H_
