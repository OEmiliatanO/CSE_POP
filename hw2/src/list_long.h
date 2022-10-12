#ifndef __LIST_long_H__
#define __LIST_long_H__
#include <stddef.h>
typedef struct node_long
{
	long val;
	struct node_long * prev, *nex;
}node_long;

typedef struct list_long
{
	size_t size;
	node_long * head, *tail;
}list_long;

list_long * new_list_long();
void list_long_insert(list_long *, size_t, long);
void list_long_remove(list_long *, size_t);
void list_long_push_front(list_long *, long);
void list_long_push_back(list_long *, long);
void list_long_pop_front(list_long *);
void list_long_pop_back(list_long *);
#endif
