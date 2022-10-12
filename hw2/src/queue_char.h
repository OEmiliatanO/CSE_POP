#ifndef __queue_char_H__
#define __queue_char_H__
#include <stddef.h>
#include "list_char.h"
# 0 "queue_char_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "queue_char_gen.h"
# 1 "gen/queue_gen.h" 1
# 2 "queue_char_gen.h" 2
typedef struct queue_char{ size_t size; list_char * List;}queue_char;queue_char * new_queue_char();void queue_char_push(queue_char *, char);int queue_char_top(queue_char *);void queue__TYPE___pop(queue_char *);
#endif