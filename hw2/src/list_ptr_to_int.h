#ifndef __list_ptr_to_int_H__
#define __list_ptr_to_int_H__
#include <stddef.h>
typedef int* ptr_to_int;
# 0 "list_ptr_to_int_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_ptr_to_int_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_ptr_to_int_gen.h" 2
typedef struct node_ptr_to_int{ ptr_to_int val; struct node_ptr_to_int * prev, *nex;}node_ptr_to_int;typedef struct list_ptr_to_int{ size_t size; node_ptr_to_int * head, *tail;}list_ptr_to_int;list_ptr_to_int * new_list_ptr_to_int();static void _insert(node_ptr_to_int *, ptr_to_int);static void _remove(node_ptr_to_int *);void list_ptr_to_int_insert(list_ptr_to_int *, size_t, ptr_to_int);void list_ptr_to_int_remove(list_ptr_to_int *, size_t);void list_ptr_to_int_push_front(list_ptr_to_int *, ptr_to_int);void list_ptr_to_int_push_back(list_ptr_to_int *, ptr_to_int);void list_ptr_to_int_pop_front(list_ptr_to_int *);void list_ptr_to_int_pop_back(list_ptr_to_int *);
#endif