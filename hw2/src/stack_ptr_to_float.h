#ifndef __STACK_ptr_to_float_H__
#define __STACK_ptr_to_float_H__
typedef float* ptr_to_float;
#include <stddef.h>
#include "list_ptr_to_float.h"
typedef struct stack_ptr_to_float
{
	size_t size;
	list_ptr_to_float * List;
}stack_ptr_to_float;

stack_ptr_to_float * new_stack_ptr_to_float();
void stack_ptr_to_float_push(stack_ptr_to_float *, ptr_to_float);
void stack_ptr_to_float_pop(stack_ptr_to_float *);
ptr_to_float stack_ptr_to_float_top(stack_ptr_to_float *);
#endif
