#ifndef __queue_short_H__
#define __queue_short_H__
#include <stddef.h>
#include "list_short.h"
# 0 "queue_short_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_short_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_short_gen.h" 2
typedef struct queue_short{ size_t size; list_short * List;}queue_short;queue_short * new_queue_short();void queue_short_push(queue_short *, short);int queue_short_top(queue_short *);void queue__TYPE___pop(queue_short *);
#endif