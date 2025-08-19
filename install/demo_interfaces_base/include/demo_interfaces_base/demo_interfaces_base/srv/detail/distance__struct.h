// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from demo_interfaces_base:srv/Distance.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__SRV__DETAIL__DISTANCE__STRUCT_H_
#define DEMO_INTERFACES_BASE__SRV__DETAIL__DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Distance in the package demo_interfaces_base.
typedef struct demo_interfaces_base__srv__Distance_Request
{
  float x;
  float y;
  float theta;
} demo_interfaces_base__srv__Distance_Request;

// Struct for a sequence of demo_interfaces_base__srv__Distance_Request.
typedef struct demo_interfaces_base__srv__Distance_Request__Sequence
{
  demo_interfaces_base__srv__Distance_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__srv__Distance_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Distance in the package demo_interfaces_base.
typedef struct demo_interfaces_base__srv__Distance_Response
{
  float distance;
} demo_interfaces_base__srv__Distance_Response;

// Struct for a sequence of demo_interfaces_base__srv__Distance_Response.
typedef struct demo_interfaces_base__srv__Distance_Response__Sequence
{
  demo_interfaces_base__srv__Distance_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__srv__Distance_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEMO_INTERFACES_BASE__SRV__DETAIL__DISTANCE__STRUCT_H_
