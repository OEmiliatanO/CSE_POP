#ifndef __LIST_ptr_to_int_H__
#define __LIST_ptr_to_int_H__
typedef int* ptr_to_int;
#include <stddef.h>
typedef struct node_ptr_to_int
{
	ptr_to_int val;
	struct node_ptr_to_int * prev, *nex;
}node_ptr_to_int;

typedef struct list_ptr_to_int
{
	size_t size;
	node_ptr_to_int * head, *tail;
}list_ptr_to_int;

list_ptr_to_int * new_list_ptr_to_int();
void list_ptr_to_int_insert(list_ptr_to_int *, size_t, ptr_to_int);
void list_ptr_to_int_remove(list_ptr_to_int *, size_t);
void list_ptr_to_int_push_front(list_ptr_to_int *, ptr_to_int);
void list_ptr_to_int_push_back(list_ptr_to_int *, ptr_to_int);
void list_ptr_to_int_pop_front(list_ptr_to_int *);
void list_ptr_to_int_pop_back(list_ptr_to_int *);
#endif
