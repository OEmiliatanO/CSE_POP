#ifndef __STACK_ptr_to_int_H__
#define __STACK_ptr_to_int_H__
typedef int* ptr_to_int;
#include <stddef.h>
#include "list_ptr_to_int.h"
typedef struct stack_ptr_to_int
{
	size_t size;
	list_ptr_to_int * List;
}stack_ptr_to_int;

stack_ptr_to_int * new_stack_ptr_to_int();
void stack_ptr_to_int_push(stack_ptr_to_int *, ptr_to_int);
void stack_ptr_to_int_pop(stack_ptr_to_int *);
ptr_to_int stack_ptr_to_int_top(stack_ptr_to_int *);
#endif
