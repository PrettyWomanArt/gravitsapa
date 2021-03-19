// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pretty_woman_interfaces:srv/InterfaceSerial.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pretty_woman_interfaces/srv/detail/interface_serial__rosidl_typesupport_introspection_c.h"
#include "pretty_woman_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pretty_woman_interfaces/srv/detail/interface_serial__functions.h"
#include "pretty_woman_interfaces/srv/detail/interface_serial__struct.h"


// Include directives for member types
// Member `str`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pretty_woman_interfaces__srv__InterfaceSerial_Request__init(message_memory);
}

void InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_fini_function(void * message_memory)
{
  pretty_woman_interfaces__srv__InterfaceSerial_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_message_member_array[1] = {
  {
    "str",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pretty_woman_interfaces__srv__InterfaceSerial_Request, str),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_message_members = {
  "pretty_woman_interfaces__srv",  // message namespace
  "InterfaceSerial_Request",  // message name
  1,  // number of fields
  sizeof(pretty_woman_interfaces__srv__InterfaceSerial_Request),
  InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_message_member_array,  // message members
  InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_message_type_support_handle = {
  0,
  &InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pretty_woman_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pretty_woman_interfaces, srv, InterfaceSerial_Request)() {
  if (!InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_message_type_support_handle.typesupport_identifier) {
    InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InterfaceSerial_Request__rosidl_typesupport_introspection_c__InterfaceSerial_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pretty_woman_interfaces/srv/detail/interface_serial__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pretty_woman_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pretty_woman_interfaces/srv/detail/interface_serial__functions.h"
// already included above
// #include "pretty_woman_interfaces/srv/detail/interface_serial__struct.h"


// Include directives for member types
// Member `str`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pretty_woman_interfaces__srv__InterfaceSerial_Response__init(message_memory);
}

void InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_fini_function(void * message_memory)
{
  pretty_woman_interfaces__srv__InterfaceSerial_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_message_member_array[1] = {
  {
    "str",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pretty_woman_interfaces__srv__InterfaceSerial_Response, str),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_message_members = {
  "pretty_woman_interfaces__srv",  // message namespace
  "InterfaceSerial_Response",  // message name
  1,  // number of fields
  sizeof(pretty_woman_interfaces__srv__InterfaceSerial_Response),
  InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_message_member_array,  // message members
  InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_message_type_support_handle = {
  0,
  &InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pretty_woman_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pretty_woman_interfaces, srv, InterfaceSerial_Response)() {
  if (!InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_message_type_support_handle.typesupport_identifier) {
    InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InterfaceSerial_Response__rosidl_typesupport_introspection_c__InterfaceSerial_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pretty_woman_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pretty_woman_interfaces/srv/detail/interface_serial__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pretty_woman_interfaces__srv__detail__interface_serial__rosidl_typesupport_introspection_c__InterfaceSerial_service_members = {
  "pretty_woman_interfaces__srv",  // service namespace
  "InterfaceSerial",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pretty_woman_interfaces__srv__detail__interface_serial__rosidl_typesupport_introspection_c__InterfaceSerial_Request_message_type_support_handle,
  NULL  // response message
  // pretty_woman_interfaces__srv__detail__interface_serial__rosidl_typesupport_introspection_c__InterfaceSerial_Response_message_type_support_handle
};

static rosidl_service_type_support_t pretty_woman_interfaces__srv__detail__interface_serial__rosidl_typesupport_introspection_c__InterfaceSerial_service_type_support_handle = {
  0,
  &pretty_woman_interfaces__srv__detail__interface_serial__rosidl_typesupport_introspection_c__InterfaceSerial_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pretty_woman_interfaces, srv, InterfaceSerial_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pretty_woman_interfaces, srv, InterfaceSerial_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pretty_woman_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pretty_woman_interfaces, srv, InterfaceSerial)() {
  if (!pretty_woman_interfaces__srv__detail__interface_serial__rosidl_typesupport_introspection_c__InterfaceSerial_service_type_support_handle.typesupport_identifier) {
    pretty_woman_interfaces__srv__detail__interface_serial__rosidl_typesupport_introspection_c__InterfaceSerial_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pretty_woman_interfaces__srv__detail__interface_serial__rosidl_typesupport_introspection_c__InterfaceSerial_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pretty_woman_interfaces, srv, InterfaceSerial_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pretty_woman_interfaces, srv, InterfaceSerial_Response)()->data;
  }

  return &pretty_woman_interfaces__srv__detail__interface_serial__rosidl_typesupport_introspection_c__InterfaceSerial_service_type_support_handle;
}
