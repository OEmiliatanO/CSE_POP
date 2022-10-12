#ifndef __list_ptr_to_short_H__
#define __list_ptr_to_short_H__
#include <stddef.h>
typedef short* ptr_to_short;
# 0 "list_ptr_to_short_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_ptr_to_short_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_ptr_to_short_gen.h" 2
typedef struct node_ptr_to_short{ ptr_to_short val; struct node_ptr_to_short * prev, *nex;}node_ptr_to_short;typedef struct list_ptr_to_short{ size_t size; node_ptr_to_short * head, *tail;}list_ptr_to_short;list_ptr_to_short * new_list_ptr_to_short();void list_ptr_to_short_insert(list_ptr_to_short *, size_t, ptr_to_short);void list_ptr_to_short_remove(list_ptr_to_short *, size_t);void list_ptr_to_short_push_front(list_ptr_to_short *, ptr_to_short);void list_ptr_to_short_push_back(list_ptr_to_short *, ptr_to_short);void list_ptr_to_short_pop_front(list_ptr_to_short *);void list_ptr_to_short_pop_back(list_ptr_to_short *);
#endif