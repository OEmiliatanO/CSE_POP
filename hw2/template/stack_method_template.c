#include "../src/stack_<type>.h"
#include "../src/list_<type>.h"
#include "../src/mm.h"

stack_<type> * new_stack_<type>()
{
	stack_<type> * s = (stack_<type> *)mymalloc(sizeof(stack_<type>));
	s->size = 0;
	s->List = new_list_<type>();
	return s;
}

void stack_<type>_push(stack_<type> * s, <type> val)
{
	if (!s) return;
	++s->size;
	list_<type>_push_back(s->List, val);
}
void stack_<type>_pop(stack_<type> * s)
{
	if (!s) return;
	if (s->size == 0) return;
	--s->size;
	list_<type>_pop_back(s->List);
}

<type> stack_<type>_top(stack_<type> * s)
{
	if (!s) return 0;
	if (s->size == 0) return 0;
	return (s->List->tail->prev)->val;
}
