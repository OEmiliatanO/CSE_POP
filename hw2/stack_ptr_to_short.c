#include <stddef.h>
#include "src/stack_ptr_to_short.h"
#include "src/mm.h"
typedef short* ptr_to_short;
# 0 "stack_ptr_to_short_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_ptr_to_short_gen.c"
# 1 "gen/stack_method_gen.h" 1
# 2 "stack_ptr_to_short_gen.c" 2
stack_ptr_to_short * new_stack_ptr_to_short(){ stack_ptr_to_short * s = (stack_ptr_to_short *)mymalloc(sizeof(stack_ptr_to_short)); s->size = 0; s->List = new_list_ptr_to_short(); return s;}void stack_ptr_to_short_push(stack_ptr_to_short * s, ptr_to_short val){ if (!s) return; ++s->size; list_ptr_to_short_push_back(s->List, val);}void stack_ptr_to_short_pop(stack_ptr_to_short * s){ if (!s) return; if (s->size == 0) return; --s->size; list_ptr_to_short_pop_back(s->List);}ptr_to_short stack_ptr_to_short_top(stack_ptr_to_short * s){ if (!s) return 0; if (s->size == 0) return 0; return (s->List->tail->prev)->val;}
