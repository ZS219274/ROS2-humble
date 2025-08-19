// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from demo_interfaces_base:action/Action.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "demo_interfaces_base/action/detail/action__struct.h"
#include "demo_interfaces_base/action/detail/action__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace demo_interfaces_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Action_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Action_Goal_type_support_ids_t;

static const _Action_Goal_type_support_ids_t _Action_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Action_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Action_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Action_Goal_type_support_symbol_names_t _Action_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, action, Action_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, action, Action_Goal)),
  }
};

typedef struct _Action_Goal_type_support_data_t
{
  void * data[2];
} _Action_Goal_type_support_data_t;

static _Action_Goal_type_support_data_t _Action_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Action_Goal_message_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Action_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Action_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Action_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Action_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Action_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, action, Action_Goal)() {
  return &::demo_interfaces_base::action::rosidl_typesupport_c::Action_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Action_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Action_Result_type_support_ids_t;

static const _Action_Result_type_support_ids_t _Action_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Action_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Action_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Action_Result_type_support_symbol_names_t _Action_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, action, Action_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, action, Action_Result)),
  }
};

typedef struct _Action_Result_type_support_data_t
{
  void * data[2];
} _Action_Result_type_support_data_t;

static _Action_Result_type_support_data_t _Action_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Action_Result_message_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Action_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Action_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Action_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Action_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Action_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, action, Action_Result)() {
  return &::demo_interfaces_base::action::rosidl_typesupport_c::Action_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Action_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Action_Feedback_type_support_ids_t;

static const _Action_Feedback_type_support_ids_t _Action_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Action_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Action_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Action_Feedback_type_support_symbol_names_t _Action_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, action, Action_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, action, Action_Feedback)),
  }
};

typedef struct _Action_Feedback_type_support_data_t
{
  void * data[2];
} _Action_Feedback_type_support_data_t;

static _Action_Feedback_type_support_data_t _Action_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Action_Feedback_message_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Action_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Action_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Action_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Action_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Action_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, action, Action_Feedback)() {
  return &::demo_interfaces_base::action::rosidl_typesupport_c::Action_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Action_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Action_SendGoal_Request_type_support_ids_t;

static const _Action_SendGoal_Request_type_support_ids_t _Action_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Action_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Action_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Action_SendGoal_Request_type_support_symbol_names_t _Action_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, action, Action_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, action, Action_SendGoal_Request)),
  }
};

typedef struct _Action_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Action_SendGoal_Request_type_support_data_t;

static _Action_SendGoal_Request_type_support_data_t _Action_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Action_SendGoal_Request_message_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Action_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Action_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Action_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Action_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Action_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, action, Action_SendGoal_Request)() {
  return &::demo_interfaces_base::action::rosidl_typesupport_c::Action_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Action_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Action_SendGoal_Response_type_support_ids_t;

static const _Action_SendGoal_Response_type_support_ids_t _Action_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Action_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Action_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Action_SendGoal_Response_type_support_symbol_names_t _Action_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, action, Action_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, action, Action_SendGoal_Response)),
  }
};

typedef struct _Action_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Action_SendGoal_Response_type_support_data_t;

static _Action_SendGoal_Response_type_support_data_t _Action_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Action_SendGoal_Response_message_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Action_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Action_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Action_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Action_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Action_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, action, Action_SendGoal_Response)() {
  return &::demo_interfaces_base::action::rosidl_typesupport_c::Action_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace demo_interfaces_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Action_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Action_SendGoal_type_support_ids_t;

static const _Action_SendGoal_type_support_ids_t _Action_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Action_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Action_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Action_SendGoal_type_support_symbol_names_t _Action_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, action, Action_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, action, Action_SendGoal)),
  }
};

typedef struct _Action_SendGoal_type_support_data_t
{
  void * data[2];
} _Action_SendGoal_type_support_data_t;

static _Action_SendGoal_type_support_data_t _Action_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Action_SendGoal_service_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Action_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Action_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Action_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Action_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Action_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, action, Action_SendGoal)() {
  return &::demo_interfaces_base::action::rosidl_typesupport_c::Action_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Action_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Action_GetResult_Request_type_support_ids_t;

static const _Action_GetResult_Request_type_support_ids_t _Action_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Action_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Action_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Action_GetResult_Request_type_support_symbol_names_t _Action_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, action, Action_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, action, Action_GetResult_Request)),
  }
};

typedef struct _Action_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Action_GetResult_Request_type_support_data_t;

static _Action_GetResult_Request_type_support_data_t _Action_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Action_GetResult_Request_message_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Action_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Action_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Action_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Action_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Action_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, action, Action_GetResult_Request)() {
  return &::demo_interfaces_base::action::rosidl_typesupport_c::Action_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Action_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Action_GetResult_Response_type_support_ids_t;

static const _Action_GetResult_Response_type_support_ids_t _Action_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Action_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Action_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Action_GetResult_Response_type_support_symbol_names_t _Action_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, action, Action_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, action, Action_GetResult_Response)),
  }
};

typedef struct _Action_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Action_GetResult_Response_type_support_data_t;

static _Action_GetResult_Response_type_support_data_t _Action_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Action_GetResult_Response_message_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Action_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Action_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Action_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Action_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Action_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, action, Action_GetResult_Response)() {
  return &::demo_interfaces_base::action::rosidl_typesupport_c::Action_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace demo_interfaces_base
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Action_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Action_GetResult_type_support_ids_t;

static const _Action_GetResult_type_support_ids_t _Action_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Action_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Action_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Action_GetResult_type_support_symbol_names_t _Action_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, action, Action_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, action, Action_GetResult)),
  }
};

typedef struct _Action_GetResult_type_support_data_t
{
  void * data[2];
} _Action_GetResult_type_support_data_t;

static _Action_GetResult_type_support_data_t _Action_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Action_GetResult_service_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Action_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Action_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Action_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Action_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Action_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, action, Action_GetResult)() {
  return &::demo_interfaces_base::action::rosidl_typesupport_c::Action_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__struct.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Action_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Action_FeedbackMessage_type_support_ids_t;

static const _Action_FeedbackMessage_type_support_ids_t _Action_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Action_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Action_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Action_FeedbackMessage_type_support_symbol_names_t _Action_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, demo_interfaces_base, action, Action_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, demo_interfaces_base, action, Action_FeedbackMessage)),
  }
};

typedef struct _Action_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Action_FeedbackMessage_type_support_data_t;

static _Action_FeedbackMessage_type_support_data_t _Action_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Action_FeedbackMessage_message_typesupport_map = {
  2,
  "demo_interfaces_base",
  &_Action_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Action_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Action_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Action_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Action_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace demo_interfaces_base

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, demo_interfaces_base, action, Action_FeedbackMessage)() {
  return &::demo_interfaces_base::action::rosidl_typesupport_c::Action_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "demo_interfaces_base/action/action.h"
// already included above
// #include "demo_interfaces_base/action/detail/action__type_support.h"

static rosidl_action_type_support_t _demo_interfaces_base__action__Action__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, demo_interfaces_base, action, Action)()
{
  // Thread-safe by always writing the same values to the static struct
  _demo_interfaces_base__action__Action__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, demo_interfaces_base, action, Action_SendGoal)();
  _demo_interfaces_base__action__Action__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, demo_interfaces_base, action, Action_GetResult)();
  _demo_interfaces_base__action__Action__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _demo_interfaces_base__action__Action__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, demo_interfaces_base, action, Action_FeedbackMessage)();
  _demo_interfaces_base__action__Action__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_demo_interfaces_base__action__Action__typesupport_c;
}

#ifdef __cplusplus
}
#endif
