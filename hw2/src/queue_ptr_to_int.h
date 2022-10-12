#ifndef __queue_ptr_to_int_H__
#define __queue_ptr_to_int_H__
#include <stddef.h>
#include "list_ptr_to_int.h"
typedef int* ptr_to_int;
# 0 "queue_ptr_to_int_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_ptr_to_int_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_ptr_to_int_gen.h" 2
typedef struct queue_ptr_to_int{ size_t size; list_ptr_to_int * List;}queue_ptr_to_int;queue_ptr_to_int * new_queue_ptr_to_int();void queue_ptr_to_int_push(queue_ptr_to_int *, ptr_to_int);ptr_to_int queue_ptr_to_int_top(queue_ptr_to_int *);void queue_ptr_to_int_pop(queue_ptr_to_int *);
#endif