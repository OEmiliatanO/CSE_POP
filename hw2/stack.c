#include "src/list.h"
#include "src/mm.h"
#include "src/stack.h"

stack* new_stack()
{
	stack* s = (stack*)mymalloc(sizeof(stack));
	s->size = 0;
	s->List = new_list();
	return s;
}

void spush(stack* s, int val)
{
	if (!s) return;
	++s->size;
	lpush_back(s->List, val);
}
void spop(stack* s)
{
	if (!s) return;
	if (s->size == 0) return;
	--s->size;
	lpop_back(s->List);
}

int stop(stack* s)
{
	if (!s) return 0xffffffff;
	if (s->size == 0) return 0xffffffff;
	return (s->List->tail->prev)->val;
}

