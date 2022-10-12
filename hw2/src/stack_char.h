#ifndef __stack_char_H__
#define __stack_char_H__
#include <stddef.h>
#include "list_char.h"
# 0 "stack_char_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_char_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_char_gen.h" 2
typedef struct stack_char{ size_t size; list_char * List;}stack_char;stack_char * new_stack_char();void stack_char_push(stack_char *, char);void stack_char_pop(stack_char *);int stack_char_top(stack_char *);
#endif