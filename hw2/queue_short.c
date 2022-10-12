#include <stddef.h>
#include "src/queue_short.h"
#include "src/mm.h"
#include "src/list_short.h"
# 0 "queue_short_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_short_gen.c"
# 1 "gen/queue_method_gen.h" 1
# 2 "queue_short_gen.c" 2
queue_short * new_queue_short(){ queue_short* q = (queue_short *)mymalloc(sizeof(queue_short)); q->size = 0; q->List = new_list_short(); return q;}void queue_short_push(queue_short * q, short val){ if (!q) return; list_short_push_front(q->List, val); ++q->size;}void queue_short_pop(queue_short * q){ if (!q) return; if (q->size == 0) return; list_short_pop_back(q->List); --q->size;}short queue_short_top(queue_short * q){ if (!q) return 0; if (q->size == 0) return 0; return (q->List->tail->prev)->val;}
