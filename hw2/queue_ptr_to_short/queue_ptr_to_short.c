#include <stddef.h>
#include "../src/queue_ptr_to_short.h"
#include "../src/mm.h"
#include "../src/list_ptr_to_short.h"
typedef short* ptr_to_short;
# 0 "queue_ptr_to_short_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_ptr_to_short_gen.c"
# 1 "gen/queue_method_gen.h" 1
# 2 "queue_ptr_to_short_gen.c" 2
queue_ptr_to_short * new_queue_ptr_to_short(){ queue_ptr_to_short* q = (queue_ptr_to_short *)mymalloc(sizeof(queue_ptr_to_short)); q->size = 0; q->List = new_list_ptr_to_short(); return q;}void queue_ptr_to_short_push(queue_ptr_to_short * q, ptr_to_short val){ if (!q) return; list_ptr_to_short_push_front(q->List, val); ++q->size;}void queue_ptr_to_short_pop(queue_ptr_to_short * q){ if (!q) return; if (q->size == 0) return; list_ptr_to_short_pop_back(q->List); --q->size;}ptr_to_short queue_ptr_to_short_top(queue_ptr_to_short * q){ if (!q) return 0; if (q->size == 0) return 0; return (q->List->tail->prev)->val;}
