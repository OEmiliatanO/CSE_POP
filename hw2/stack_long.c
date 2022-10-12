#include <stddef.h>
#include "src/stack_long.h"
#include "src/mm.h"
#include "src/list_long.h"
# 0 "stack_long_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_long_gen.c"
# 1 "gen/stack_method_gen.h" 1
# 2 "stack_long_gen.c" 2
stack_long * new_stack_long(){ stack_long * s = (stack_long *)mymalloc(sizeof(stack_long)); s->size = 0; s->List = new_list_long(); return s;}void stack_long_push(stack_long * s, long val){ if (!s) return; ++s->size; list_long_push_back(s->List, val);}void stack_long_pop(stack_long * s){ if (!s) return; if (s->size == 0) return; --s->size; list_long_pop_back(s->List);}long stack_long_top(stack_long * s){ if (!s) return 0; if (s->size == 0) return 0; return (s->List->tail->prev)->val;}
