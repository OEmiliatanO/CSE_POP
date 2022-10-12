#ifndef __queue_ptr_to_char_H__
#define __queue_ptr_to_char_H__
#include <stddef.h>
#include "list_ptr_to_char.h"
typedef char* ptr_to_char;
# 0 "queue_ptr_to_char_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_ptr_to_char_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_ptr_to_char_gen.h" 2
typedef struct queue_ptr_to_char{ size_t size; list_ptr_to_char * List;}queue_ptr_to_char;queue_ptr_to_char * new_queue_ptr_to_char();void queue_ptr_to_char_push(queue_ptr_to_char *, ptr_to_char);ptr_to_char queue_ptr_to_char_top(queue_ptr_to_char *);void queue_ptr_to_char_pop(queue_ptr_to_char *);
#endif