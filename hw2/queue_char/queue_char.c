#include <stddef.h>
#include "../src/queue_char.h"
#include "../src/mm.h"
#include "../src/list_char.h"
# 0 "queue_char_gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_char_gen.c"
# 1 "gen/queue_method_gen.h" 1
# 2 "queue_char_gen.c" 2
queue_char * new_queue_char(){ queue_char* q = (queue_char *)mymalloc(sizeof(queue_char)); q->size = 0; q->List = new_list_char(); return q;}void queue_char_push(queue_char * q, char val){ if (!q) return; list_char_push_front(q->List, val); ++q->size;}void queue_char_pop(queue_char * q){ if (!q) return; if (q->size == 0) return; list_char_pop_back(q->List); --q->size;}char queue_char_top(queue_char * q){ if (!q) return 0; if (q->size == 0) return 0; return (q->List->tail->prev)->val;}
