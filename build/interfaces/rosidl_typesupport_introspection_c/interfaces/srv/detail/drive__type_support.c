// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:srv/Drive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/srv/detail/drive__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/srv/detail/drive__functions.h"
#include "interfaces/srv/detail/drive__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__Drive_Request__init(message_memory);
}

void Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_fini_function(void * message_memory)
{
  interfaces__srv__Drive_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_message_member_array[3] = {
  {
    "left_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Drive_Request, left_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Drive_Request, right_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Drive_Request, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_message_members = {
  "interfaces__srv",  // message namespace
  "Drive_Request",  // message name
  3,  // number of fields
  sizeof(interfaces__srv__Drive_Request),
  Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_message_member_array,  // message members
  Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_message_type_support_handle = {
  0,
  &Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Drive_Request)() {
  if (!Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_message_type_support_handle.typesupport_identifier) {
    Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Drive_Request__rosidl_typesupport_introspection_c__Drive_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/srv/detail/drive__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/srv/detail/drive__functions.h"
// already included above
// #include "interfaces/srv/detail/drive__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__Drive_Response__init(message_memory);
}

void Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_fini_function(void * message_memory)
{
  interfaces__srv__Drive_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Drive_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_message_members = {
  "interfaces__srv",  // message namespace
  "Drive_Response",  // message name
  1,  // number of fields
  sizeof(interfaces__srv__Drive_Response),
  Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_message_member_array,  // message members
  Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_message_type_support_handle = {
  0,
  &Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Drive_Response)() {
  if (!Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_message_type_support_handle.typesupport_identifier) {
    Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Drive_Response__rosidl_typesupport_introspection_c__Drive_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/drive__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces__srv__detail__drive__rosidl_typesupport_introspection_c__Drive_service_members = {
  "interfaces__srv",  // service namespace
  "Drive",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interfaces__srv__detail__drive__rosidl_typesupport_introspection_c__Drive_Request_message_type_support_handle,
  NULL  // response message
  // interfaces__srv__detail__drive__rosidl_typesupport_introspection_c__Drive_Response_message_type_support_handle
};

static rosidl_service_type_support_t interfaces__srv__detail__drive__rosidl_typesupport_introspection_c__Drive_service_type_support_handle = {
  0,
  &interfaces__srv__detail__drive__rosidl_typesupport_introspection_c__Drive_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Drive_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Drive_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Drive)() {
  if (!interfaces__srv__detail__drive__rosidl_typesupport_introspection_c__Drive_service_type_support_handle.typesupport_identifier) {
    interfaces__srv__detail__drive__rosidl_typesupport_introspection_c__Drive_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces__srv__detail__drive__rosidl_typesupport_introspection_c__Drive_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Drive_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Drive_Response)()->data;
  }

  return &interfaces__srv__detail__drive__rosidl_typesupport_introspection_c__Drive_service_type_support_handle;
}
