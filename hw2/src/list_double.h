#ifndef __list_double_H__
#define __list_double_H__
#include <stddef.h>
# 0 "list_double_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_double_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_double_gen.h" 2
typedef struct node_double{ double val; struct node_double * prev, *nex;}node_double;typedef struct list_double{ size_t size; node_double * head, *tail;}list_double;list_double * new_list_double();void list_double_insert(list_double *, size_t, double);void list_double_remove(list_double *, size_t);void list_double_push_front(list_double *, double);void list_double_push_back(list_double *, double);void list_double_pop_front(list_double *);void list_double_pop_back(list_double *);
#endif