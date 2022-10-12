#include "../src/stack_ptr_to_double.h"
#include "../src/list_ptr_to_double.h"
typedef double* ptr_to_double;
#include "../src/mm.h"

stack_ptr_to_double * new_stack_ptr_to_double()
{
	stack_ptr_to_double * s = (stack_ptr_to_double *)mymalloc(sizeof(stack_ptr_to_double));
	s->size = 0;
	s->List = new_list_ptr_to_double();
	return s;
}

void stack_ptr_to_double_push(stack_ptr_to_double * s, ptr_to_double val)
{
	if (!s) return;
	++s->size;
	list_ptr_to_double_push_back(s->List, val);
}
void stack_ptr_to_double_pop(stack_ptr_to_double * s)
{
	if (!s) return;
	if (s->size == 0) return;
	--s->size;
	list_ptr_to_double_pop_back(s->List);
}

ptr_to_double stack_ptr_to_double_top(stack_ptr_to_double * s)
{
	if (!s) return 0;
	if (s->size == 0) return 0;
	return (s->List->tail->prev)->val;
}
