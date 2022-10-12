#include <stddef.h>
#include "src/stack_short.h"
#include "src/mm.h"
#include "src/list_short.h"
# 0 "stack_short_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_short_gen.c"
# 1 "gen/stack_method_gen.h" 1
# 2 "stack_short_gen.c" 2
stack_short * new_stack_short(){ stack_short * s = (stack_short *)mymalloc(sizeof(stack_short)); s->size = 0; s->List = new_list_short(); return s;}void stack_short_push(stack_short * s, short val){ if (!s) return; ++s->size; list_short_push_back(s->List, val);}void stack_short_pop(stack_short * s){ if (!s) return; if (s->size == 0) return; --s->size; list_short_pop_back(s->List);}short stack_short_top(stack_short * s){ if (!s) return 0; if (s->size == 0) return 0; return (s->List->tail->prev)->val;}
