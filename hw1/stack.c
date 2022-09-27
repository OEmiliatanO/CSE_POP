#include "src/list.h"
#include "src/mm.h"
#include "src/stack.h"

void sinit(stack** s)
{
	(*s) = (stack*)mymalloc(sizeof(stack));
	(*s)->size = 0;
	(*s)->List = (list*)mymalloc(sizeof(list));
	(*s)->List->size = 0;
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

