#ifndef __STACK_ptr_to_short_H__
#define __STACK_ptr_to_short_H__
typedef short* ptr_to_short;
#include <stddef.h>
#include "list_ptr_to_short.h"
typedef struct stack_ptr_to_short
{
	size_t size;
	list_ptr_to_short * List;
}stack_ptr_to_short;

stack_ptr_to_short * new_stack_ptr_to_short();
void stack_ptr_to_short_push(stack_ptr_to_short *, ptr_to_short);
void stack_ptr_to_short_pop(stack_ptr_to_short *);
ptr_to_short stack_ptr_to_short_top(stack_ptr_to_short *);
#endif
