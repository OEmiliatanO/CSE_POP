#ifndef __queue_ptr_to_double_H__
#define __queue_ptr_to_double_H__
#include <stddef.h>
#include "list_ptr_to_double.h"
typedef double* ptr_to_double;
# 0 "queue_ptr_to_double_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_ptr_to_double_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_ptr_to_double_gen.h" 2
typedef struct queue_ptr_to_double{ size_t size; list_ptr_to_double * List;}queue_ptr_to_double;queue_ptr_to_double * new_queue_ptr_to_double();void queue_ptr_to_double_push(queue_ptr_to_double *, ptr_to_double);ptr_to_double queue_ptr_to_double_top(queue_ptr_to_double *);void queue_ptr_to_double_pop(queue_ptr_to_double *);
#endif