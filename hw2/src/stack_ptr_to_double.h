#ifndef __stack_ptr_to_double_H__
#define __stack_ptr_to_double_H__
#include <stddef.h>
#include "list_ptr_to_double.h"
typedef double* ptr_to_double;
# 0 "stack_ptr_to_double_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_ptr_to_double_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_ptr_to_double_gen.h" 2
typedef struct stack_ptr_to_double{ size_t size; list_ptr_to_double * List;}stack_ptr_to_double;stack_ptr_to_double * new_stack_ptr_to_double();void stack_ptr_to_double_push(stack_ptr_to_double *, ptr_to_double);void stack_ptr_to_double_pop(stack_ptr_to_double *);ptr_to_double stack_ptr_to_double_top(stack_ptr_to_double *);
#endif