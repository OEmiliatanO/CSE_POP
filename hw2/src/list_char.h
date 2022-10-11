#ifndef __LIST_H__
#define __LIST_H__
#include <stddef.h>

typedef struct node_char
{
	char val;
	struct node_char* prev, *nex;
}node_char;

typedef struct list_char
{
	size_t size;
	node_char* head, *tail;
}list_char;

list_char* new_list_char();
static void _insert(node_char*, int);
static void _remove(node_char*);
void l_c_insert(list_char*, size_t, int);
void l_c_remove(list_char*, size_t);
void l_c_push_front(list_char*, int);
void l_c_push_back(list_char*, int);
void l_c_pop_front(list_char*);
void l_c_pop_back(list_char*);

#endif
