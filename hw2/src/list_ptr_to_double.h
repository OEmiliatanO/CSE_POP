#ifndef __LIST_ptr_to_double_H__
#define __LIST_ptr_to_double_H__
typedef double* ptr_to_double;
#include <stddef.h>
typedef struct node_ptr_to_double
{
	ptr_to_double val;
	struct node_ptr_to_double * prev, *nex;
}node_ptr_to_double;

typedef struct list_ptr_to_double
{
	size_t size;
	node_ptr_to_double * head, *tail;
}list_ptr_to_double;

list_ptr_to_double * new_list_ptr_to_double();
void list_ptr_to_double_insert(list_ptr_to_double *, size_t, ptr_to_double);
void list_ptr_to_double_remove(list_ptr_to_double *, size_t);
void list_ptr_to_double_push_front(list_ptr_to_double *, ptr_to_double);
void list_ptr_to_double_push_back(list_ptr_to_double *, ptr_to_double);
void list_ptr_to_double_pop_front(list_ptr_to_double *);
void list_ptr_to_double_pop_back(list_ptr_to_double *);
#endif
