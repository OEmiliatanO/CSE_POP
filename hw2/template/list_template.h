#ifndef __LIST_<type>_H__
#define __LIST_<type>_H__
#include <stddef.h>
typedef struct node_<type>
{
	<type> val;
	struct node_<type> * prev, *nex;
}node_<type>;

typedef struct list_<type>
{
	size_t size;
	node_<type> * head, *tail;
}list_<type>;

list_<type> * new_list_<type>();
void list_<type>_insert(list_<type> *, size_t, <type>);
void list_<type>_remove(list_<type> *, size_t);
void list_<type>_push_front(list_<type> *, <type>);
void list_<type>_push_back(list_<type> *, <type>);
void list_<type>_pop_front(list_<type> *);
void list_<type>_pop_back(list_<type> *);
#endif
