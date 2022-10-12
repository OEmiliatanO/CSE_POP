#ifndef __list_long_H__
#define __list_long_H__
#include <stddef.h>
# 0 "list_long_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_long_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_long_gen.h" 2
typedef struct node_long{ long val; struct node_long * prev, *nex;}node_long;typedef struct list_long{ size_t size; node_long * head, *tail;}list_long;list_long * new_list_long();static void _insert(node_long *, long);static void _remove(node_long *);void list_long_insert(list_long *, size_t, long);void list_long_remove(list_long *, size_t);void list_long_push_front(list_long *, long);void list_long_push_back(list_long *, long);void list_long_pop_front(list_long *);void list_long_pop_back(list_long *);
#endif