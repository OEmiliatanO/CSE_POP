#ifndef __STACK_ptr_to_long_H__
#define __STACK_ptr_to_long_H__
typedef long* ptr_to_long;
#include <stddef.h>
#include "list_ptr_to_long.h"
typedef struct stack_ptr_to_long
{
	size_t size;
	list_ptr_to_long * List;
}stack_ptr_to_long;

stack_ptr_to_long * new_stack_ptr_to_long();
void stack_ptr_to_long_push(stack_ptr_to_long *, ptr_to_long);
void stack_ptr_to_long_pop(stack_ptr_to_long *);
ptr_to_long stack_ptr_to_long_top(stack_ptr_to_long *);
#endif
