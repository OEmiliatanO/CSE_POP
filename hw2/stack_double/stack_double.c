#include "../src/stack_double.h"
#include "../src/list_double.h"
#include "../src/mm.h"

stack_double * new_stack_double()
{
	stack_double * s = (stack_double *)mymalloc(sizeof(stack_double));
	s->size = 0;
	s->List = new_list_double();
	return s;
}

void stack_double_push(stack_double * s, double val)
{
	if (!s) return;
	++s->size;
	list_double_push_back(s->List, val);
}
void stack_double_pop(stack_double * s)
{
	if (!s) return;
	if (s->size == 0) return;
	--s->size;
	list_double_pop_back(s->List);
}

double stack_double_top(stack_double * s)
{
	if (!s) return 0;
	if (s->size == 0) return 0;
	return (s->List->tail->prev)->val;
}
