#include <stddef.h>
#include "../src/queue_double.h"
#include "../src/mm.h"
#include "../src/list_double.h"
# 0 "queue_double_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_double_gen.c"
# 1 "gen/queue_method_gen.h" 1
# 2 "queue_double_gen.c" 2
queue_double * new_queue_double(){ queue_double* q = (queue_double *)mymalloc(sizeof(queue_double)); q->size = 0; q->List = new_list_double(); return q;}void queue_double_push(queue_double * q, double val){ if (!q) return; list_double_push_front(q->List, val); ++q->size;}void queue_double_pop(queue_double * q){ if (!q) return; if (q->size == 0) return; list_double_pop_back(q->List); --q->size;}double queue_double_top(queue_double * q){ if (!q) return 0; if (q->size == 0) return 0; return (q->List->tail->prev)->val;}
