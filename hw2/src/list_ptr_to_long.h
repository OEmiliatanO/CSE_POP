#ifndef __LIST_ptr_to_long_H__
#define __LIST_ptr_to_long_H__
typedef long* ptr_to_long;
#include <stddef.h>
typedef struct node_ptr_to_long
{
	ptr_to_long val;
	struct node_ptr_to_long * prev, *nex;
}node_ptr_to_long;

typedef struct list_ptr_to_long
{
	size_t size;
	node_ptr_to_long * head, *tail;
}list_ptr_to_long;

list_ptr_to_long * new_list_ptr_to_long();
void list_ptr_to_long_insert(list_ptr_to_long *, size_t, ptr_to_long);
void list_ptr_to_long_remove(list_ptr_to_long *, size_t);
void list_ptr_to_long_push_front(list_ptr_to_long *, ptr_to_long);
void list_ptr_to_long_push_back(list_ptr_to_long *, ptr_to_long);
void list_ptr_to_long_pop_front(list_ptr_to_long *);
void list_ptr_to_long_pop_back(list_ptr_to_long *);
#endif
