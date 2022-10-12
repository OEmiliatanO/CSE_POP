#ifndef __list_ptr_to_double_H__
#define __list_ptr_to_double_H__
#include <stddef.h>
typedef double* ptr_to_double;
# 0 "list_ptr_to_double_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_ptr_to_double_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_ptr_to_double_gen.h" 2
typedef struct node_ptr_to_double{ ptr_to_double val; struct node_ptr_to_double * prev, *nex;}node_ptr_to_double;typedef struct list_ptr_to_double{ size_t size; node_ptr_to_double * head, *tail;}list_ptr_to_double;list_ptr_to_double * new_list_ptr_to_double();static void _insert(node_ptr_to_double *, ptr_to_double);static void _remove(node_ptr_to_double *);void list_ptr_to_double_insert(list_ptr_to_double *, size_t, ptr_to_double);void list_ptr_to_double_remove(list_ptr_to_double *, size_t);void list_ptr_to_double_push_front(list_ptr_to_double *, ptr_to_double);void list_ptr_to_double_push_back(list_ptr_to_double *, ptr_to_double);void list_ptr_to_double_pop_front(list_ptr_to_double *);void list_ptr_to_double_pop_back(list_ptr_to_double *);
#endif