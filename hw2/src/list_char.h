#ifndef __list_char_H__
#define __list_char_H__
#include <stddef.h>
# 0 "list_char_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_char_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_char_gen.h" 2
typedef struct node_char{ char val; struct node_char * prev, *nex;}node_char;typedef struct list_char{ size_t size; node_char * head, *tail;}list_char;list_char * new_list_char();void list_char_insert(list_char *, size_t, char);void list_char_remove(list_char *, size_t);void list_char_push_front(list_char *, char);void list_char_push_back(list_char *, char);void list_char_pop_front(list_char *);void list_char_pop_back(list_char *);
#endif