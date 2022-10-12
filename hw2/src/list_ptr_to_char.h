#ifndef __LIST_ptr_to_char_H__
#define __LIST_ptr_to_char_H__
typedef char* ptr_to_char;
#include <stddef.h>
typedef struct node_ptr_to_char
{
	ptr_to_char val;
	struct node_ptr_to_char * prev, *nex;
}node_ptr_to_char;

typedef struct list_ptr_to_char
{
	size_t size;
	node_ptr_to_char * head, *tail;
}list_ptr_to_char;

list_ptr_to_char * new_list_ptr_to_char();
void list_ptr_to_char_insert(list_ptr_to_char *, size_t, ptr_to_char);
void list_ptr_to_char_remove(list_ptr_to_char *, size_t);
void list_ptr_to_char_push_front(list_ptr_to_char *, ptr_to_char);
void list_ptr_to_char_push_back(list_ptr_to_char *, ptr_to_char);
void list_ptr_to_char_pop_front(list_ptr_to_char *);
void list_ptr_to_char_pop_back(list_ptr_to_char *);
#endif
