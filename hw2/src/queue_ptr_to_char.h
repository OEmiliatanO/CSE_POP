#ifndef __QUEUE_ptr_to_char_H__
#define __QUEUE_ptr_to_char_H__
typedef char* ptr_to_char;
#include <stddef.h>
#include "list_ptr_to_char.h"
typedef struct queue_ptr_to_char
{
	size_t size;
	list_ptr_to_char * List;
}queue_ptr_to_char;

queue_ptr_to_char * new_queue_ptr_to_char();
void queue_ptr_to_char_push(queue_ptr_to_char *, ptr_to_char);
ptr_to_char queue_ptr_to_char_top(queue_ptr_to_char *);
void queue_ptr_to_char_pop(queue_ptr_to_char *);
#endif
