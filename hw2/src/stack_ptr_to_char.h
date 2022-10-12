#ifndef __stack_ptr_to_char_H__
#define __stack_ptr_to_char_H__
#include <stddef.h>
typedef char* ptr_to_char;
# 0 "stack_ptr_to_char_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_ptr_to_char_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_ptr_to_char_gen.h" 2
typedef struct stack_ptr_to_char{ size_t size; list_ptr_to_char * List;}stack_ptr_to_char;stack_ptr_to_char * new_stack_ptr_to_char();void stack_ptr_to_char_push(stack_ptr_to_char *, ptr_to_char);void stack_ptr_to_char_pop(stack_ptr_to_char *);int stack_ptr_to_char_top(stack_ptr_to_char *);
#endif