#include <stdio.h>
#include "src/mm.h"
#include "src/list.h"
#include "src/queue.h"
#include "src/stack.h"

#define perr(...) fprintf(stderr, __VA_ARGS__)

void printlist(list* l)
{
	node* p = l->head;
	for (size_t i = 0; i < l->size; ++i, p = p->nex)
		perr("%d ", p->val);
	perr("\n");
}

int main()
{
	/*
	list* l = mymalloc(sizeof(list));
	l->size = 0;
	lpush_front(l, 1);
	printlist(l);
	lpop_front(l);
	printlist(l);
	linsert(l, 0, 2);
	printlist(l);
	linsert(l, 0, 3);
	printlist(l);
	lpop_back(l);
	linsert(l, 0, 4);
	printlist(l);
	linsert(l, 0, 5);
	printlist(l);
	lpush_back(l, 6);
	printlist(l);
	lpush_back(l, 7);
	printlist(l);
	lpush_front(l, 8);
	printlist(l);
	lpush_front(l, 9);
	printlist(l);
	*/
	/*
	stack* s;
	sinit(&s);
	spush(s, 1);
	spush(s, 2);
	spush(s, 3);
	spush(s, 4);
	printlist(s->List);
	perr("%d\n", stop(s));
	spop(s);
	printlist(s->List);
	perr("%d\n", stop(s));
	spop(s);
	printlist(s->List);
	perr("%d\n", stop(s));
	spop(s);
	printlist(s->List);
	perr("%d\n", stop(s));
	spop(s);
	printlist(s->List);
	*/
	queue* q;
	qinit(&q);
	qpush(q, 1);
	qpush(q, 2);
	qpush(q, 3);
	qpush(q, 4);
	printlist(q->List);
	perr("%d\n", qtop(q));
	qpop(q);
	printlist(q->List);
	perr("%d\n", qtop(q));
	qpop(q);
	printlist(q->List);
	perr("%d\n", qtop(q));
	qpop(q);
	printlist(q->List);
	perr("%d\n", qtop(q));
	qpop(q);
	printlist(q->List);

	return 0;
}
