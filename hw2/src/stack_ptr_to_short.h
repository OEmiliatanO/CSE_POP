#ifndef __stack_ptr_to_short_H__
#define __stack_ptr_to_short_H__
#include <stddef.h>
typedef short* ptr_to_short;
# 0 "stack_ptr_to_short_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_ptr_to_short_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_ptr_to_short_gen.h" 2
typedef struct stack_ptr_to_short{ size_t size; list_ptr_to_short * List;}stack_ptr_to_short;stack_ptr_to_short * new_stack_ptr_to_short();void stack_ptr_to_short_push(stack_ptr_to_short *, ptr_to_short);void stack_ptr_to_short_pop(stack_ptr_to_short *);int stack_ptr_to_short_top(stack_ptr_to_short *);
#endif