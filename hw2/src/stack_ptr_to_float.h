#ifndef __stack_ptr_to_float_H__
#define __stack_ptr_to_float_H__
#include <stddef.h>
#include "list_ptr_to_float.h"
typedef float* ptr_to_float;
# 0 "stack_ptr_to_float_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_ptr_to_float_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_ptr_to_float_gen.h" 2
typedef struct stack_ptr_to_float{ size_t size; list_ptr_to_float * List;}stack_ptr_to_float;stack_ptr_to_float * new_stack_ptr_to_float();void stack_ptr_to_float_push(stack_ptr_to_float *, ptr_to_float);void stack_ptr_to_float_pop(stack_ptr_to_float *);ptr_to_float stack_ptr_to_float_top(stack_ptr_to_float *);
#endif