#ifndef __stack_double_H__
#define __stack_double_H__
#include <stddef.h>
#include "list_double.h"
# 0 "stack_double_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_double_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_double_gen.h" 2
typedef struct stack_double{ size_t size; list_double * List;}stack_double;stack_double * new_stack_double();void stack_double_push(stack_double *, double);void stack_double_pop(stack_double *);int stack_double_top(stack_double *);
#endif