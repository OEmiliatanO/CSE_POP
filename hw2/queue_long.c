#include <stddef.h>
#include "src/queue_long.h"
#include "src/mm.h"
#include "src/list_long.h"
# 0 "queue_long_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_long_gen.c"
# 1 "gen/queue_method_gen.h" 1
# 2 "queue_long_gen.c" 2
queue_long * new_queue_long(){ queue_long* q = (queue_long *)mymalloc(sizeof(queue_long)); q->size = 0; q->List = new_list_long(); return q;}void queue_long_push(queue_long * q, long val){ if (!q) return; list_long_push_front(q->List, val); ++q->size;}void queue_long_pop(queue_long * q){ if (!q) return; if (q->size == 0) return; list_long_pop_back(q->List); --q->size;}long queue_long_top(queue_long * q){ if (!q) return 0; if (q->size == 0) return 0; return (q->List->tail->prev)->val;}
