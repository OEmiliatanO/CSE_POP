#ifndef __stack_short_H__
#define __stack_short_H__
#include <stddef.h>
#include "list_short.h"
# 0 "stack_short_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_short_gen.h"
# 1 "gen/stack_gen.h" 1
# 2 "stack_short_gen.h" 2
typedef struct stack_short{ size_t size; list_short * List;}stack_short;stack_short * new_stack_short();void stack_short_push(stack_short *, short);void stack_short_pop(stack_short *);int stack_short_top(stack_short *);
#endif