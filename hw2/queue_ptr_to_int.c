#include <stddef.h>
#include "src/queue_ptr_to_int.h"
#include "src/mm.h"
typedef int* ptr_to_int;
# 0 "queue_ptr_to_int_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_ptr_to_int_gen.c"
# 1 "gen/queue_method_gen.h" 1
# 2 "queue_ptr_to_int_gen.c" 2
queue_ptr_to_int * new_queue_ptr_to_int(){ queue_ptr_to_int* q = (queue_ptr_to_int *)mymalloc(sizeof(queue_ptr_to_int)); q->size = 0; q->List = new_list_ptr_to_int(); return q;}void queue_ptr_to_int_push(queue_ptr_to_int * q, ptr_to_int val){ if (!q) return; list_ptr_to_int_push_front(q->List, val); ++q->size;}void queue_ptr_to_int_pop(queue_ptr_to_int * q){ if (!q) return; if (q->size == 0) return; list_ptr_to_int_pop_back(q->List); --q->size;}ptr_to_int queue_ptr_to_int_top(queue_ptr_to_int * q){ if (!q) return 0; if (q->size == 0) return 0; return (q->List->tail->prev)->val;}
