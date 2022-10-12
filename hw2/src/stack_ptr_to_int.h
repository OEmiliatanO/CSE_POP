#ifndef __stack_ptr_to_int_H__
#define __stack_ptr_to_int_H__
#include <stddef.h>
#include "list_ptr_to_int.h"
typedef int* ptr_to_int;
# 0 "stack_ptr_to_int_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_ptr_to_int_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_ptr_to_int_gen.h" 2
typedef struct stack_ptr_to_int{ size_t size; list_ptr_to_int * List;}stack_ptr_to_int;stack_ptr_to_int * new_stack_ptr_to_int();void stack_ptr_to_int_push(stack_ptr_to_int *, ptr_to_int);void stack_ptr_to_int_pop(stack_ptr_to_int *);ptr_to_int stack_ptr_to_int_top(stack_ptr_to_int *);
#endif