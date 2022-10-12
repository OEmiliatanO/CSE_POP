#include <stddef.h>
#include "src/stack_char.h"
#include "src/mm.h"
#include "src/list_char.h"
# 0 "stack_char_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "stack_char_gen.c"
# 1 "gen/stack_method_gen.h" 1
# 2 "stack_char_gen.c" 2
stack_char * new_stack_char(){ stack_char * s = (stack_char *)mymalloc(sizeof(stack_char)); s->size = 0; s->List = new_list_char(); return s;}void stack_char_push(stack_char * s, char val){ if (!s) return; ++s->size; list_char_push_back(s->List, val);}void stack_char_pop(stack_char * s){ if (!s) return; if (s->size == 0) return; --s->size; list_char_pop_back(s->List);}char stack_char_top(stack_char * s){ if (!s) return 0; if (s->size == 0) return 0; return (s->List->tail->prev)->val;}
