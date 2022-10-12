#ifndef __list_int_H__
#define __list_int_H__
#include <stddef.h>
# 0 "list_int_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_int_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_int_gen.h" 2
typedef struct node_int{ int val; struct node_int * prev, *nex;}node_int;typedef struct list_int{ size_t size; node_int * head, *tail;}list_int;list_int * new_list_int();void list_int_insert(list_int *, size_t, int);void list_int_remove(list_int *, size_t);void list_int_push_front(list_int *, int);void list_int_push_back(list_int *, int);void list_int_pop_front(list_int *);void list_int_pop_back(list_int *);
#endif