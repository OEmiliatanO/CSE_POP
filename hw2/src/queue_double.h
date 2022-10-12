#ifndef __queue_double_H__
#define __queue_double_H__
#include <stddef.h>
#include "list_double.h"
# 0 "queue_double_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_double_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_double_gen.h" 2
typedef struct queue_double{ size_t size; list_double * List;}queue_double;queue_double * new_queue_double();void queue_double_push(queue_double *, double);double queue_double_top(queue_double *);void queue_double_pop(queue_double *);
#endif