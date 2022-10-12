#ifndef __STACK_<type>_H__
#define __STACK_<type>_H__
#include <stddef.h>
#include "list_<type>.h"
typedef struct stack_<type>
{
	size_t size;
	list_<type> * List;
}stack_<type>;

stack_<type> * new_stack_<type>();
void stack_<type>_push(stack_<type> *, <type>);
void stack_<type>_pop(stack_<type> *);
<type> stack_<type>_top(stack_<type> *);
#endif
