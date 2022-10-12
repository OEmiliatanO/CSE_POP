#include <stddef.h>
#include "src/stack_double.h"
#include "src/mm.h"
#include "src/list_double.h"
# 0 "stack_double_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_double_gen.c"
# 1 "gen/stack_method_gen.h" 1
# 2 "stack_double_gen.c" 2
stack_double * new_stack_double(){ stack_double * s = (stack_double *)mymalloc(sizeof(stack_double)); s->size = 0; s->List = new_list_double(); return s;}void stack_double_push(stack_double * s, double val){ if (!s) return; ++s->size; list_double_push_back(s->List, val);}void stack_double_pop(stack_double * s){ if (!s) return; if (s->size == 0) return; --s->size; list_double_pop_back(s->List);}double stack_double_top(stack_double * s){ if (!s) return 0; if (s->size == 0) return 0; return (s->List->tail->prev)->val;}
