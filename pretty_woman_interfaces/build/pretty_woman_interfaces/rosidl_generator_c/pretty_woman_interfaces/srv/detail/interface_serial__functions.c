// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pretty_woman_interfaces:srv/InterfaceSerial.idl
// generated code does not contain a copyright notice
#include "pretty_woman_interfaces/srv/detail/interface_serial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `str`
#include "rosidl_runtime_c/string_functions.h"

bool
pretty_woman_interfaces__srv__InterfaceSerial_Request__init(pretty_woman_interfaces__srv__InterfaceSerial_Request * msg)
{
  if (!msg) {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__init(&msg->str)) {
    pretty_woman_interfaces__srv__InterfaceSerial_Request__fini(msg);
    return false;
  }
  return true;
}

void
pretty_woman_interfaces__srv__InterfaceSerial_Request__fini(pretty_woman_interfaces__srv__InterfaceSerial_Request * msg)
{
  if (!msg) {
    return;
  }
  // str
  rosidl_runtime_c__String__fini(&msg->str);
}

pretty_woman_interfaces__srv__InterfaceSerial_Request *
pretty_woman_interfaces__srv__InterfaceSerial_Request__create()
{
  pretty_woman_interfaces__srv__InterfaceSerial_Request * msg = (pretty_woman_interfaces__srv__InterfaceSerial_Request *)malloc(sizeof(pretty_woman_interfaces__srv__InterfaceSerial_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pretty_woman_interfaces__srv__InterfaceSerial_Request));
  bool success = pretty_woman_interfaces__srv__InterfaceSerial_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pretty_woman_interfaces__srv__InterfaceSerial_Request__destroy(pretty_woman_interfaces__srv__InterfaceSerial_Request * msg)
{
  if (msg) {
    pretty_woman_interfaces__srv__InterfaceSerial_Request__fini(msg);
  }
  free(msg);
}


bool
pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__init(pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pretty_woman_interfaces__srv__InterfaceSerial_Request * data = NULL;
  if (size) {
    data = (pretty_woman_interfaces__srv__InterfaceSerial_Request *)calloc(size, sizeof(pretty_woman_interfaces__srv__InterfaceSerial_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pretty_woman_interfaces__srv__InterfaceSerial_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pretty_woman_interfaces__srv__InterfaceSerial_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__fini(pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pretty_woman_interfaces__srv__InterfaceSerial_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence *
pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__create(size_t size)
{
  pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence * array = (pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence *)malloc(sizeof(pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__destroy(pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence * array)
{
  if (array) {
    pretty_woman_interfaces__srv__InterfaceSerial_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `str`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
pretty_woman_interfaces__srv__InterfaceSerial_Response__init(pretty_woman_interfaces__srv__InterfaceSerial_Response * msg)
{
  if (!msg) {
    return false;
  }
  // str
  if (!rosidl_runtime_c__String__init(&msg->str)) {
    pretty_woman_interfaces__srv__InterfaceSerial_Response__fini(msg);
    return false;
  }
  return true;
}

void
pretty_woman_interfaces__srv__InterfaceSerial_Response__fini(pretty_woman_interfaces__srv__InterfaceSerial_Response * msg)
{
  if (!msg) {
    return;
  }
  // str
  rosidl_runtime_c__String__fini(&msg->str);
}

pretty_woman_interfaces__srv__InterfaceSerial_Response *
pretty_woman_interfaces__srv__InterfaceSerial_Response__create()
{
  pretty_woman_interfaces__srv__InterfaceSerial_Response * msg = (pretty_woman_interfaces__srv__InterfaceSerial_Response *)malloc(sizeof(pretty_woman_interfaces__srv__InterfaceSerial_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pretty_woman_interfaces__srv__InterfaceSerial_Response));
  bool success = pretty_woman_interfaces__srv__InterfaceSerial_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pretty_woman_interfaces__srv__InterfaceSerial_Response__destroy(pretty_woman_interfaces__srv__InterfaceSerial_Response * msg)
{
  if (msg) {
    pretty_woman_interfaces__srv__InterfaceSerial_Response__fini(msg);
  }
  free(msg);
}


bool
pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__init(pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  pretty_woman_interfaces__srv__InterfaceSerial_Response * data = NULL;
  if (size) {
    data = (pretty_woman_interfaces__srv__InterfaceSerial_Response *)calloc(size, sizeof(pretty_woman_interfaces__srv__InterfaceSerial_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pretty_woman_interfaces__srv__InterfaceSerial_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pretty_woman_interfaces__srv__InterfaceSerial_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__fini(pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pretty_woman_interfaces__srv__InterfaceSerial_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence *
pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__create(size_t size)
{
  pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence * array = (pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence *)malloc(sizeof(pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__destroy(pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence * array)
{
  if (array) {
    pretty_woman_interfaces__srv__InterfaceSerial_Response__Sequence__fini(array);
  }
  free(array);
}
