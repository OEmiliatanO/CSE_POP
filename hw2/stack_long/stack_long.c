#include "../src/stack_long.h"
#include "../src/list_long.h"
#include "../src/mm.h"

stack_long * new_stack_long()
{
	stack_long * s = (stack_long *)mymalloc(sizeof(stack_long));
	s->size = 0;
	s->List = new_list_long();
	return s;
}

void stack_long_push(stack_long * s, long val)
{
	if (!s) return;
	++s->size;
	list_long_push_back(s->List, val);
}
void stack_long_pop(stack_long * s)
{
	if (!s) return;
	if (s->size == 0) return;
	--s->size;
	list_long_pop_back(s->List);
}

long stack_long_top(stack_long * s)
{
	if (!s) return 0;
	if (s->size == 0) return 0;
	return (s->List->tail->prev)->val;
}
