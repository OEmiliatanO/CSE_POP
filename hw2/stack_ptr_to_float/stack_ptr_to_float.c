#include "../src/stack_ptr_to_float.h"
#include "../src/list_ptr_to_float.h"
typedef float* ptr_to_float;
#include "../src/mm.h"

stack_ptr_to_float * new_stack_ptr_to_float()
{
	stack_ptr_to_float * s = (stack_ptr_to_float *)mymalloc(sizeof(stack_ptr_to_float));
	s->size = 0;
	s->List = new_list_ptr_to_float();
	return s;
}

void stack_ptr_to_float_push(stack_ptr_to_float * s, ptr_to_float val)
{
	if (!s) return;
	++s->size;
	list_ptr_to_float_push_back(s->List, val);
}
void stack_ptr_to_float_pop(stack_ptr_to_float * s)
{
	if (!s) return;
	if (s->size == 0) return;
	--s->size;
	list_ptr_to_float_pop_back(s->List);
}

ptr_to_float stack_ptr_to_float_top(stack_ptr_to_float * s)
{
	if (!s) return 0;
	if (s->size == 0) return 0;
	return (s->List->tail->prev)->val;
}
