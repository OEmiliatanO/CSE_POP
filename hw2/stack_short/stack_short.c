#include "../src/stack_short.h"
#include "../src/list_short.h"
#include "../src/mm.h"

stack_short * new_stack_short()
{
	stack_short * s = (stack_short *)mymalloc(sizeof(stack_short));
	s->size = 0;
	s->List = new_list_short();
	return s;
}

void stack_short_push(stack_short * s, short val)
{
	if (!s) return;
	++s->size;
	list_short_push_back(s->List, val);
}
void stack_short_pop(stack_short * s)
{
	if (!s) return;
	if (s->size == 0) return;
	--s->size;
	list_short_pop_back(s->List);
}

short stack_short_top(stack_short * s)
{
	if (!s) return 0;
	if (s->size == 0) return 0;
	return (s->List->tail->prev)->val;
}
