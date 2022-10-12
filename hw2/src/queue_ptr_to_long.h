#ifndef __queue_ptr_to_long_H__
#define __queue_ptr_to_long_H__
#include <stddef.h>
typedef long* ptr_to_long;
# 0 "queue_ptr_to_long_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_ptr_to_long_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_ptr_to_long_gen.h" 2
typedef struct queue_ptr_to_long{ size_t size; list_ptr_to_long * List;}queue_ptr_to_long;queue_ptr_to_long * new_queue_ptr_to_long();void queue_ptr_to_long_push(queue_ptr_to_long *, ptr_to_long);int queue_ptr_to_long_top(queue_ptr_to_long *);void queue__TYPE___pop(queue_ptr_to_long *);
#endif