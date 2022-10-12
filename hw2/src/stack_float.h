#ifndef __stack_float_H__
#define __stack_float_H__
#include <stddef.h>
#include "list_float.h"
# 0 "stack_float_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_float_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_float_gen.h" 2
typedef struct stack_float{ size_t size; list_float * List;}stack_float;stack_float * new_stack_float();void stack_float_push(stack_float *, float);void stack_float_pop(stack_float *);int stack_float_top(stack_float *);
#endif