#ifndef __list_short_H__
#define __list_short_H__
#include <stddef.h>
# 0 "list_short_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_short_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_short_gen.h" 2
typedef struct node_short{ short val; struct node_short * prev, *nex;}node_short;typedef struct list_short{ size_t size; node_short * head, *tail;}list_short;list_short * new_list_short();void list_short_insert(list_short *, size_t, short);void list_short_remove(list_short *, size_t);void list_short_push_front(list_short *, short);void list_short_push_back(list_short *, short);void list_short_pop_front(list_short *);void list_short_pop_back(list_short *);
#endif