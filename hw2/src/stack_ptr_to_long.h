#ifndef __stack_ptr_to_long_H__
#define __stack_ptr_to_long_H__
#include <stddef.h>
typedef long* ptr_to_long;
# 0 "stack_ptr_to_long_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_ptr_to_long_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_ptr_to_long_gen.h" 2
typedef struct stack_ptr_to_long{ size_t size; list_ptr_to_long * List;}stack_ptr_to_long;stack_ptr_to_long * new_stack_ptr_to_long();void stack_ptr_to_long_push(stack_ptr_to_long *, ptr_to_long);void stack_ptr_to_long_pop(stack_ptr_to_long *);int stack_ptr_to_long_top(stack_ptr_to_long *);
#endif