#include <stddef.h>
#include "src/stack_ptr_to_double.h"
#include "src/mm.h"
typedef double* ptr_to_double;
# 0 "stack_ptr_to_double_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_ptr_to_double_gen.c"
# 1 "gen/stack_method_gen.h" 1
# 2 "stack_ptr_to_double_gen.c" 2
stack_ptr_to_double * new_stack_ptr_to_double(){ stack_ptr_to_double * s = (stack_ptr_to_double *)mymalloc(sizeof(stack_ptr_to_double)); s->size = 0; s->List = new_list_ptr_to_double(); return s;}void stack_ptr_to_double_push(stack_ptr_to_double * s, ptr_to_double val){ if (!s) return; ++s->size; list_ptr_to_double_push_back(s->List, val);}void stack_ptr_to_double_pop(stack_ptr_to_double * s){ if (!s) return; if (s->size == 0) return; --s->size; list_ptr_to_double_pop_back(s->List);}ptr_to_double stack_ptr_to_double_top(stack_ptr_to_double * s){ if (!s) return 0; if (s->size == 0) return 0; return (s->List->tail->prev)->val;}
