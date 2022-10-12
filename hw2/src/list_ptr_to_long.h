#ifndef __list_ptr_to_long_H__
#define __list_ptr_to_long_H__
#include <stddef.h>
typedef long* ptr_to_long;
# 0 "list_ptr_to_long_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_ptr_to_long_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_ptr_to_long_gen.h" 2
typedef struct node_ptr_to_long{ ptr_to_long val; struct node_ptr_to_long * prev, *nex;}node_ptr_to_long;typedef struct list_ptr_to_long{ size_t size; node_ptr_to_long * head, *tail;}list_ptr_to_long;list_ptr_to_long * new_list_ptr_to_long();void list_ptr_to_long_insert(list_ptr_to_long *, size_t, ptr_to_long);void list_ptr_to_long_remove(list_ptr_to_long *, size_t);void list_ptr_to_long_push_front(list_ptr_to_long *, ptr_to_long);void list_ptr_to_long_push_back(list_ptr_to_long *, ptr_to_long);void list_ptr_to_long_pop_front(list_ptr_to_long *);void list_ptr_to_long_pop_back(list_ptr_to_long *);
#endif