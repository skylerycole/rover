// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:srv/Drive.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/drive__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/detail/drive__struct.h"
#include "interfaces/srv/detail/drive__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Drive_Request__ros_msg_type = interfaces__srv__Drive_Request;

static bool _Drive_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Drive_Request__ros_msg_type * ros_message = static_cast<const _Drive_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: left_speed
  {
    cdr << ros_message->left_speed;
  }

  // Field name: right_speed
  {
    cdr << ros_message->right_speed;
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  return true;
}

static bool _Drive_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Drive_Request__ros_msg_type * ros_message = static_cast<_Drive_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: left_speed
  {
    cdr >> ros_message->left_speed;
  }

  // Field name: right_speed
  {
    cdr >> ros_message->right_speed;
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__Drive_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Drive_Request__ros_msg_type * ros_message = static_cast<const _Drive_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_speed
  {
    size_t item_size = sizeof(ros_message->left_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_speed
  {
    size_t item_size = sizeof(ros_message->right_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Drive_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__Drive_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__Drive_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: left_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Drive_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__Drive_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Drive_Request = {
  "interfaces::srv",
  "Drive_Request",
  _Drive_Request__cdr_serialize,
  _Drive_Request__cdr_deserialize,
  _Drive_Request__get_serialized_size,
  _Drive_Request__max_serialized_size
};

static rosidl_message_type_support_t _Drive_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Drive_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Drive_Request)() {
  return &_Drive_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/drive__struct.h"
// already included above
// #include "interfaces/srv/detail/drive__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Drive_Response__ros_msg_type = interfaces__srv__Drive_Response;

static bool _Drive_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Drive_Response__ros_msg_type * ros_message = static_cast<const _Drive_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _Drive_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Drive_Response__ros_msg_type * ros_message = static_cast<_Drive_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__Drive_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Drive_Response__ros_msg_type * ros_message = static_cast<const _Drive_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Drive_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__Drive_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__Drive_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Drive_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__Drive_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Drive_Response = {
  "interfaces::srv",
  "Drive_Response",
  _Drive_Response__cdr_serialize,
  _Drive_Response__cdr_deserialize,
  _Drive_Response__get_serialized_size,
  _Drive_Response__max_serialized_size
};

static rosidl_message_type_support_t _Drive_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Drive_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Drive_Response)() {
  return &_Drive_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/drive.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Drive__callbacks = {
  "interfaces::srv",
  "Drive",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Drive_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Drive_Response)(),
};

static rosidl_service_type_support_t Drive__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Drive__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, Drive)() {
  return &Drive__handle;
}

#if defined(__cplusplus)
}
#endif
