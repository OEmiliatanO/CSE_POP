#ifndef __stack_int_H__
#define __stack_int_H__
#include <stddef.h>
#include "list_int.h"
# 0 "stack_int_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_int_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_int_gen.h" 2
typedef struct stack_int{ size_t size; list_int * List;}stack_int;stack_int * new_stack_int();void stack_int_push(stack_int *, int);void stack_int_pop(stack_int *);int stack_int_top(stack_int *);
#endif