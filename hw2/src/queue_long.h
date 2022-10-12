#ifndef __queue_long_H__
#define __queue_long_H__
#include <stddef.h>
#include "list_long.h"
# 0 "queue_long_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_long_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_long_gen.h" 2
typedef struct queue_long{ size_t size; list_long * List;}queue_long;queue_long * new_queue_long();void queue_long_push(queue_long *, long);int queue_long_top(queue_long *);void queue__TYPE___pop(queue_long *);
#endif