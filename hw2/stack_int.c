#include <stddef.h>
#include "src/stack_int.h"
#include "src/mm.h"
#include "src/list_int.h"
# 0 "stack_int_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_int_gen.c"
# 1 "gen/stack_method_gen.h" 1
# 2 "stack_int_gen.c" 2
stack_int * new_stack_int(){ stack_int * s = (stack_int *)mymalloc(sizeof(stack_int)); s->size = 0; s->List = new_list_int(); return s;}void stack_int_push(stack_int * s, int val){ if (!s) return; ++s->size; list_int_push_back(s->List, val);}void stack_int_pop(stack_int * s){ if (!s) return; if (s->size == 0) return; --s->size; list_int_pop_back(s->List);}int stack_int_top(stack_int * s){ if (!s) return 0; if (s->size == 0) return 0; return (s->List->tail->prev)->val;}
