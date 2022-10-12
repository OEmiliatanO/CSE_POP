#include <stddef.h>
#include "src/queue_float.h"
#include "src/mm.h"
#include "src/list_float.h"
# 0 "queue_float_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_float_gen.c"
# 1 "gen/queue_method_gen.h" 1
# 2 "queue_float_gen.c" 2
queue_float * new_queue_float(){ queue_float* q = (queue_float *)mymalloc(sizeof(queue_float)); q->size = 0; q->List = new_list_float(); return q;}void queue_float_push(queue_float * q, float val){ if (!q) return; list_float_push_front(q->List, val); ++q->size;}void queue_float_pop(queue_float * q){ if (!q) return; if (q->size == 0) return; list_float_pop_back(q->List); --q->size;}float queue_float_top(queue_float * q){ if (!q) return 0; if (q->size == 0) return 0; return (q->List->tail->prev)->val;}
