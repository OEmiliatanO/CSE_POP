#ifndef __queue_float_H__
#define __queue_float_H__
#include <stddef.h>
#include "list_float.h"
# 0 "queue_float_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_float_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_float_gen.h" 2
typedef struct queue_float{ size_t size; list_float * List;}queue_float;queue_float * new_queue_float();void queue_float_push(queue_float *, float);float queue_float_top(queue_float *);void queue_float_pop(queue_float *);
#endif