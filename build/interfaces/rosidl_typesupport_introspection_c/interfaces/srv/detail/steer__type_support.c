// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:srv/Steer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/srv/detail/steer__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/srv/detail/steer__functions.h"
#include "interfaces/srv/detail/steer__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__Steer_Request__init(message_memory);
}

void Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_fini_function(void * message_memory)
{
  interfaces__srv__Steer_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_message_member_array[1] = {
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Steer_Request, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_message_members = {
  "interfaces__srv",  // message namespace
  "Steer_Request",  // message name
  1,  // number of fields
  sizeof(interfaces__srv__Steer_Request),
  Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_message_member_array,  // message members
  Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_message_type_support_handle = {
  0,
  &Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Steer_Request)() {
  if (!Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_message_type_support_handle.typesupport_identifier) {
    Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Steer_Request__rosidl_typesupport_introspection_c__Steer_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces/srv/detail/steer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces/srv/detail/steer__functions.h"
// already included above
// #include "interfaces/srv/detail/steer__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__srv__Steer_Response__init(message_memory);
}

void Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_fini_function(void * message_memory)
{
  interfaces__srv__Steer_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__srv__Steer_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_message_members = {
  "interfaces__srv",  // message namespace
  "Steer_Response",  // message name
  1,  // number of fields
  sizeof(interfaces__srv__Steer_Response),
  Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_message_member_array,  // message members
  Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_message_type_support_handle = {
  0,
  &Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Steer_Response)() {
  if (!Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_message_type_support_handle.typesupport_identifier) {
    Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Steer_Response__rosidl_typesupport_introspection_c__Steer_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/steer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces__srv__detail__steer__rosidl_typesupport_introspection_c__Steer_service_members = {
  "interfaces__srv",  // service namespace
  "Steer",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interfaces__srv__detail__steer__rosidl_typesupport_introspection_c__Steer_Request_message_type_support_handle,
  NULL  // response message
  // interfaces__srv__detail__steer__rosidl_typesupport_introspection_c__Steer_Response_message_type_support_handle
};

static rosidl_service_type_support_t interfaces__srv__detail__steer__rosidl_typesupport_introspection_c__Steer_service_type_support_handle = {
  0,
  &interfaces__srv__detail__steer__rosidl_typesupport_introspection_c__Steer_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Steer_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Steer_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Steer)() {
  if (!interfaces__srv__detail__steer__rosidl_typesupport_introspection_c__Steer_service_type_support_handle.typesupport_identifier) {
    interfaces__srv__detail__steer__rosidl_typesupport_introspection_c__Steer_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces__srv__detail__steer__rosidl_typesupport_introspection_c__Steer_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Steer_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, srv, Steer_Response)()->data;
  }

  return &interfaces__srv__detail__steer__rosidl_typesupport_introspection_c__Steer_service_type_support_handle;
}
