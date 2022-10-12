#ifndef __LIST_int_H__
#define __LIST_int_H__
#include <stddef.h>
typedef struct node_int
{
	int val;
	struct node_int * prev, *nex;
}node_int;

typedef struct list_int
{
	size_t size;
	node_int * head, *tail;
}list_int;

list_int * new_list_int();
void list_int_insert(list_int *, size_t, int);
void list_int_remove(list_int *, size_t);
void list_int_push_front(list_int *, int);
void list_int_push_back(list_int *, int);
void list_int_pop_front(list_int *);
void list_int_pop_back(list_int *);
#endif
