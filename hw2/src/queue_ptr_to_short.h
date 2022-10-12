#ifndef __queue_ptr_to_short_H__
#define __queue_ptr_to_short_H__
#include <stddef.h>
typedef short* ptr_to_short;
# 0 "queue_ptr_to_short_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_ptr_to_short_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_ptr_to_short_gen.h" 2
typedef struct queue_ptr_to_short{ size_t size; list_ptr_to_short * List;}queue_ptr_to_short;queue_ptr_to_short * new_queue_ptr_to_short();void queue_ptr_to_short_push(queue_ptr_to_short *, ptr_to_short);int queue_ptr_to_short_top(queue_ptr_to_short *);void queue__TYPE___pop(queue_ptr_to_short *);
#endif