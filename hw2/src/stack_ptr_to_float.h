#ifndef __STACK_H__
#define __STACK_H__
#include "list_ptr_to_float.h"
#include <stddef.h>

typedef struct stack
{
	size_t size;
	list_ptr_to_float* List;
}stack;

stack* new_stack();
void spush(stack*, int);
void spop(stack*);
int stop(stack*);

#endif
