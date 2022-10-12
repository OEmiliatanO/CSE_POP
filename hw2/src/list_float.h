#ifndef __list_float_H__
#define __list_float_H__
#include <stddef.h>
# 0 "list_float_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_float_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_float_gen.h" 2
typedef struct node_float{ float val; struct node_float * prev, *nex;}node_float;typedef struct list_float{ size_t size; node_float * head, *tail;}list_float;list_float * new_list_float();static void _insert(node_float *, float);static void _remove(node_float *);void list_float_insert(list_float *, size_t, float);void list_float_remove(list_float *, size_t);void list_float_push_front(list_float *, float);void list_float_push_back(list_float *, float);void list_float_pop_front(list_float *);void list_float_pop_back(list_float *);
#endif