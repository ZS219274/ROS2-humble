// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from demo_interfaces_base:srv/Calculation.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__STRUCT_H_
#define DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Calculation in the package demo_interfaces_base.
typedef struct demo_interfaces_base__srv__Calculation_Request
{
  int32_t num1;
  int32_t num2;
} demo_interfaces_base__srv__Calculation_Request;

// Struct for a sequence of demo_interfaces_base__srv__Calculation_Request.
typedef struct demo_interfaces_base__srv__Calculation_Request__Sequence
{
  demo_interfaces_base__srv__Calculation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__srv__Calculation_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Calculation in the package demo_interfaces_base.
typedef struct demo_interfaces_base__srv__Calculation_Response
{
  int32_t sum;
} demo_interfaces_base__srv__Calculation_Response;

// Struct for a sequence of demo_interfaces_base__srv__Calculation_Response.
typedef struct demo_interfaces_base__srv__Calculation_Response__Sequence
{
  demo_interfaces_base__srv__Calculation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__srv__Calculation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEMO_INTERFACES_BASE__SRV__DETAIL__CALCULATION__STRUCT_H_
