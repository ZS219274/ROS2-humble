// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from demo_interfaces_base:srv/Calculation.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "demo_interfaces_base/srv/detail/calculation__struct.h"
#include "demo_interfaces_base/srv/detail/calculation__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace demo_interfaces_base
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Calculation_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Calculation_Request_type_support_ids_t;

static const _Calculation_Request_type_support_ids_t _Calculation_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Calculation_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Calculation_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Calculation_Request_type_support_symbol_names_t _Calculation_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, srv, Calculation_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, srv, Calculation_Request)),
  }
};

typedef struct _Calculation_Request_type_support_data_t
{
  void * data[2];
} _Calculation_Request_type_support_data_t;

static _Calculation_Request_type_support_data_t _Calculation_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Calculation_Request_message_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Calculation_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Calculation_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Calculation_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Calculation_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Calculation_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, srv, Calculation_Request)() {
  return &::demo_interfaces_base::srv::rosidl_typesupport_c::Calculation_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/srv/detail/calculation__struct.h"
// already included above
// #include "demo_interfaces_base/srv/detail/calculation__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace demo_interfaces_base
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Calculation_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Calculation_Response_type_support_ids_t;

static const _Calculation_Response_type_support_ids_t _Calculation_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Calculation_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Calculation_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Calculation_Response_type_support_symbol_names_t _Calculation_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, srv, Calculation_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, srv, Calculation_Response)),
  }
};

typedef struct _Calculation_Response_type_support_data_t
{
  void * data[2];
} _Calculation_Response_type_support_data_t;

static _Calculation_Response_type_support_data_t _Calculation_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Calculation_Response_message_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Calculation_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Calculation_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Calculation_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Calculation_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Calculation_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, srv, Calculation_Response)() {
  return &::demo_interfaces_base::srv::rosidl_typesupport_c::Calculation_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/srv/detail/calculation__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace demo_interfaces_base
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Calculation_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Calculation_type_support_ids_t;

static const _Calculation_type_support_ids_t _Calculation_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Calculation_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Calculation_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Calculation_type_support_symbol_names_t _Calculation_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, srv, Calculation)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, srv, Calculation)),
  }
};

typedef struct _Calculation_type_support_data_t
{
  void * data[2];
} _Calculation_type_support_data_t;

static _Calculation_type_support_data_t _Calculation_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Calculation_service_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Calculation_service_typesupport_ids.typesupport_identifier[0],
  &_Calculation_service_typesupport_symbol_names.symbol_name[0],
  &_Calculation_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Calculation_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Calculation_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, srv, Calculation)() {
  return &::demo_interfaces_base::srv::rosidl_typesupport_c::Calculation_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
