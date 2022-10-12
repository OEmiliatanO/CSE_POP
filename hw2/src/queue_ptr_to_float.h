#ifndef __queue_ptr_to_float_H__
#define __queue_ptr_to_float_H__
#include <stddef.h>
typedef float* ptr_to_float;
# 0 "queue_ptr_to_float_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_ptr_to_float_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_ptr_to_float_gen.h" 2
typedef struct queue_ptr_to_float{ size_t size; list_ptr_to_float * List;}queue_ptr_to_float;queue_ptr_to_float * new_queue_ptr_to_float();void queue_ptr_to_float_push(queue_ptr_to_float *, ptr_to_float);int queue_ptr_to_float_top(queue_ptr_to_float *);void queue__TYPE___pop(queue_ptr_to_float *);
#endif