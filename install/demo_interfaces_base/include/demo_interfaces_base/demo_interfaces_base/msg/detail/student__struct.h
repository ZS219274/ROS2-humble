// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from demo_interfaces_base:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef DEMO_INTERFACES_BASE__MSG__DETAIL__STUDENT__STRUCT_H_
#define DEMO_INTERFACES_BASE__MSG__DETAIL__STUDENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Student in the package demo_interfaces_base.
typedef struct demo_interfaces_base__msg__Student
{
  rosidl_runtime_c__String name;
  int32_t age;
  double height;
} demo_interfaces_base__msg__Student;

// Struct for a sequence of demo_interfaces_base__msg__Student.
typedef struct demo_interfaces_base__msg__Student__Sequence
{
  demo_interfaces_base__msg__Student * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} demo_interfaces_base__msg__Student__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEMO_INTERFACES_BASE__MSG__DETAIL__STUDENT__STRUCT_H_
