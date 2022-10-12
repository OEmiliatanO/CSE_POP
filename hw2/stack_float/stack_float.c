#include <stddef.h>
#include "../src/stack_float.h"
#include "../src/mm.h"
#include "../src/list_float.h"
# 0 "stack_float_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_float_gen.c"
# 1 "gen/stack_method_gen.h" 1
# 2 "stack_float_gen.c" 2
stack_float * new_stack_float(){ stack_float * s = (stack_float *)mymalloc(sizeof(stack_float)); s->size = 0; s->List = new_list_float(); return s;}void stack_float_push(stack_float * s, float val){ if (!s) return; ++s->size; list_float_push_back(s->List, val);}void stack_float_pop(stack_float * s){ if (!s) return; if (s->size == 0) return; --s->size; list_float_pop_back(s->List);}float stack_float_top(stack_float * s){ if (!s) return 0; if (s->size == 0) return 0; return (s->List->tail->prev)->val;}
