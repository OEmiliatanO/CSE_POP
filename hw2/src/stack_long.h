#ifndef __stack_long_H__
#define __stack_long_H__
#include <stddef.h>
#include "list_long.h"
# 0 "stack_long_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_long_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_long_gen.h" 2
typedef struct stack_long{ size_t size; list_long * List;}stack_long;stack_long * new_stack_long();void stack_long_push(stack_long *, long);void stack_long_pop(stack_long *);long stack_long_top(stack_long *);
#endif