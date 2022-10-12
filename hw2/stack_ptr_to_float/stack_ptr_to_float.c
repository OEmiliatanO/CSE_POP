#include <stddef.h>
#include "../src/stack_ptr_to_float.h"
#include "../src/mm.h"
#include "../src/list_ptr_to_float.h"
typedef float* ptr_to_float;
# 0 "stack_ptr_to_float_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_ptr_to_float_gen.c"
# 1 "gen/stack_method_gen.h" 1
# 2 "stack_ptr_to_float_gen.c" 2
stack_ptr_to_float * new_stack_ptr_to_float(){ stack_ptr_to_float * s = (stack_ptr_to_float *)mymalloc(sizeof(stack_ptr_to_float)); s->size = 0; s->List = new_list_ptr_to_float(); return s;}void stack_ptr_to_float_push(stack_ptr_to_float * s, ptr_to_float val){ if (!s) return; ++s->size; list_ptr_to_float_push_back(s->List, val);}void stack_ptr_to_float_pop(stack_ptr_to_float * s){ if (!s) return; if (s->size == 0) return; --s->size; list_ptr_to_float_pop_back(s->List);}ptr_to_float stack_ptr_to_float_top(stack_ptr_to_float * s){ if (!s) return 0; if (s->size == 0) return 0; return (s->List->tail->prev)->val;}
