#ifndef __list_ptr_to_char_H__
#define __list_ptr_to_char_H__
#include <stddef.h>
typedef char* ptr_to_char;
# 0 "list_ptr_to_char_gen.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "list_ptr_to_char_gen.h"
# 1 "gen/list_gen.h" 1
# 2 "list_ptr_to_char_gen.h" 2
typedef struct node_ptr_to_char{ ptr_to_char val; struct node_ptr_to_char * prev, *nex;}node_ptr_to_char;typedef struct list_ptr_to_char{ size_t size; node_ptr_to_char * head, *tail;}list_ptr_to_char;list_ptr_to_char * new_list_ptr_to_char();void list_ptr_to_char_insert(list_ptr_to_char *, size_t, ptr_to_char);void list_ptr_to_char_remove(list_ptr_to_char *, size_t);void list_ptr_to_char_push_front(list_ptr_to_char *, ptr_to_char);void list_ptr_to_char_push_back(list_ptr_to_char *, ptr_to_char);void list_ptr_to_char_pop_front(list_ptr_to_char *);void list_ptr_to_char_pop_back(list_ptr_to_char *);
#endif