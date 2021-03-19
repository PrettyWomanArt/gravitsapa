// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pretty_woman_interfaces:srv/InterfaceSerial.idl
// generated code does not contain a copyright notice

#ifndef PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__FUNCTIONS_H_
#define PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pretty_woman_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "pretty_woman_interfaces/srv/detail/interface_serial__struct.h"

/// Initialize srv/InterfaceSerial message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pretty_woman_interfaces__srv__InterfaceSerial_Request
 * )) before or use
 * pretty_woman_interfaces__srv__InterfaceSerial_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
bool
pretty_woman_interfaces__srv__InterfaceSerial_Request__init(pretty_woman_interfaces__srv__InterfaceSerial_Request * msg);

/// Finalize srv/InterfaceSerial message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
void
pretty_woman_interfaces__srv__InterfaceSerial_Request__fini(pretty_woman_interfaces__srv__InterfaceSerial_Request * msg);

/// Create srv/InterfaceSerial message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
pretty_woman_interfaces__srv__InterfaceSerial_Request *
pretty_woman_interfaces__srv__InterfaceSerial_Request__create();

/// Destroy srv/InterfaceSerial message.
/**
 * It calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
void
pretty_woman_interfaces__srv__InterfaceSerial_Request__destroy(pretty_woman_interfaces__srv__InterfaceSerial_Request * msg);


/// Initialize array of srv/InterfaceSerial messages.
/**
 * It allocates the memory for the number of elements and calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
bool
pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__init(pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence * array, size_t size);

/// Finalize array of srv/InterfaceSerial messages.
/**
 * It calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
void
pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__fini(pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence * array);

/// Create array of srv/InterfaceSerial messages.
/**
 * It allocates the memory for the array and calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence *
pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__create(size_t size);

/// Destroy array of srv/InterfaceSerial messages.
/**
 * It calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
void
pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__destroy(pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence * array);

/// Initialize srv/InterfaceSerial message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pretty_woman_interfaces__srv__InterfaceSerial_Response
 * )) before or use
 * pretty_woman_interfaces__srv__InterfaceSerial_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
bool
pretty_woman_interfaces__srv__InterfaceSerial_Response__init(pretty_woman_interfaces__srv__InterfaceSerial_Response * msg);

/// Finalize srv/InterfaceSerial message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
void
pretty_woman_interfaces__srv__InterfaceSerial_Response__fini(pretty_woman_interfaces__srv__InterfaceSerial_Response * msg);

/// Create srv/InterfaceSerial message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
pretty_woman_interfaces__srv__InterfaceSerial_Response *
pretty_woman_interfaces__srv__InterfaceSerial_Response__create();

/// Destroy srv/InterfaceSerial message.
/**
 * It calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
void
pretty_woman_interfaces__srv__InterfaceSerial_Response__destroy(pretty_woman_interfaces__srv__InterfaceSerial_Response * msg);


/// Initialize array of srv/InterfaceSerial messages.
/**
 * It allocates the memory for the number of elements and calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
bool
pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__init(pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence * array, size_t size);

/// Finalize array of srv/InterfaceSerial messages.
/**
 * It calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
void
pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__fini(pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence * array);

/// Create array of srv/InterfaceSerial messages.
/**
 * It allocates the memory for the array and calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence *
pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__create(size_t size);

/// Destroy array of srv/InterfaceSerial messages.
/**
 * It calls
 * pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pretty_woman_interfaces
void
pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__destroy(pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PRETTY_WOMAN_INTERFACES__SRV__DETAIL__INTERFACE_SERIAL__FUNCTIONS_H_
