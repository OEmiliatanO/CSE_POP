#ifndef __queue_int_H__
#define __queue_int_H__
#include <stddef.h>
#include "list_int.h"
# 0 "queue_int_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_int_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_int_gen.h" 2
typedef struct queue_int{ size_t size; list_int * List;}queue_int;queue_int * new_queue_int();void queue_int_push(queue_int *, int);int queue_int_top(queue_int *);void queue__TYPE___pop(queue_int *);
#endif